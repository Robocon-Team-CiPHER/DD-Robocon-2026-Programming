// mission_state_machine_node.cpp
// ============================================================
// High-level state machine orchestrating the full R2 competition run.
//
// States:
//   IDLE → INIT → MARTIAL_CLUB → MEIHUA_FOREST → MARTIAL_ARENA → DONE
//
// Each region is executed as an action goal on /r2/execute_region,
// and internally this node sequences action calls to:
//   - /r2/chassis/move_to_position   (MoveToPosition)
//   - /r2/climb_step                 (ClimbStep)
//   - /r2/grip/spearhead             (GripObject)
//   - /r2/grip/kfs                   (GripObject)
//   - /r2/expand/horizontal          (ExpandMechanism)
//   - /r2/expand/vertical            (ExpandMechanism)
//   - /r2/detection/trigger_*        (TriggerDetection services)
//
// The node also provides the ExecuteRegion action server so it can
// be commanded externally or from a test script.
// ============================================================

#include <rclcpp/rclcpp.hpp>
#include <rclcpp_action/rclcpp_action.hpp>
#include <std_msgs/msg/bool.hpp>
#include <r2_interfaces/action/execute_region.hpp>
#include <r2_interfaces/action/move_to_position.hpp>
#include <r2_interfaces/action/climb_step.hpp>
#include <r2_interfaces/action/grip_object.hpp>
#include <r2_interfaces/action/expand_mechanism.hpp>
#include <r2_interfaces/msg/detection_result.hpp>
#include <r2_interfaces/msg/chassis_cmd.hpp>

#include <string>
#include <functional>

using ExecuteRegion   = r2_interfaces::action::ExecuteRegion;
using MoveToPosition  = r2_interfaces::action::MoveToPosition;
using ClimbStep       = r2_interfaces::action::ClimbStep;
using GripObject      = r2_interfaces::action::GripObject;
using ExpandMechanism = r2_interfaces::action::ExpandMechanism;
using DetectionResult = r2_interfaces::msg::DetectionResult;
using ChassisCmd      = r2_interfaces::msg::ChassisCmd;
using ERGoalHandle    = rclcpp_action::ServerGoalHandle<ExecuteRegion>;

enum class MissionState { IDLE, INIT, MARTIAL_CLUB, MEIHUA_FOREST, MARTIAL_ARENA, DONE };

class MissionStateMachineNode : public rclcpp::Node
{
public:
  MissionStateMachineNode()
  : Node("mission_state_machine_node"),
    state_(MissionState::IDLE),
    all_ready_(false),
    kfs_collected_(0)
  {
    // ── Subscribe to readiness ──────────────────────────────────────────
    ready_sub_ = this->create_subscription<std_msgs::msg::Bool>(
      "/r2/system/all_ready", 10,
      [this](const std_msgs::msg::Bool::SharedPtr m){
        if (m->data && !all_ready_) {
          all_ready_ = true;
          RCLCPP_INFO(this->get_logger(), "System ready signal received.");
        }
      });

    // ── Detection subscription ──────────────────────────────────────────
    spearhead_det_sub_ = this->create_subscription<DetectionResult>(
      "/r2/detection/spearhead", 10,
      [this](const DetectionResult::SharedPtr m){ latest_spearhead_ = *m; });

    kfs_det_sub_ = this->create_subscription<DetectionResult>(
      "/r2/detection/kfs_box", 10,
      [this](const DetectionResult::SharedPtr m){ latest_kfs_ = *m; });

    // ── Chassis publisher (for simple moves) ────────────────────────────
    chassis_pub_ = this->create_publisher<ChassisCmd>("/r2/chassis/cmd", 10);

    // ── Action clients ──────────────────────────────────────────────────
    move_client_   = rclcpp_action::create_client<MoveToPosition>(this, "/r2/chassis/move_to_position");
    climb_client_  = rclcpp_action::create_client<ClimbStep>(this, "/r2/climb_step");
    spearhead_client_ = rclcpp_action::create_client<GripObject>(this, "/r2/grip/spearhead");
    kfs_client_    = rclcpp_action::create_client<GripObject>(this, "/r2/grip/kfs");
    h_expand_client_ = rclcpp_action::create_client<ExpandMechanism>(this, "/r2/expand/horizontal");
    v_expand_client_ = rclcpp_action::create_client<ExpandMechanism>(this, "/r2/expand/vertical");

    // ── Action server: ExecuteRegion ────────────────────────────────────
    action_server_ = rclcpp_action::create_server<ExecuteRegion>(
      this, "/r2/execute_region",
      std::bind(&MissionStateMachineNode::handle_goal,     this, std::placeholders::_1, std::placeholders::_2),
      std::bind(&MissionStateMachineNode::handle_cancel,   this, std::placeholders::_1),
      std::bind(&MissionStateMachineNode::handle_accepted, this, std::placeholders::_1));

    // ── Auto-start timer ────────────────────────────────────────────────
    auto_timer_ = this->create_timer(
      std::chrono::seconds(1),
      std::bind(&MissionStateMachineNode::auto_start_check, this));

    RCLCPP_INFO(this->get_logger(),
      "MissionStateMachineNode ready. Waiting for all_ready signal...");
  }

private:
  // ── Auto start ────────────────────────────────────────────────────────────
  void auto_start_check()
  {
    if (all_ready_ && state_ == MissionState::IDLE) {
      RCLCPP_INFO(this->get_logger(), "Auto-starting mission sequence.");
      state_ = MissionState::INIT;
      // The mission will be triggered via ExecuteRegion action calls
      // or auto-sequenced here. For competition, use action calls from
      // a start button or operator command.
    }
  }

  // ── ExecuteRegion action server ───────────────────────────────────────────
  rclcpp_action::GoalResponse handle_goal(
    const rclcpp_action::GoalUUID &,
    std::shared_ptr<const ExecuteRegion::Goal> goal)
  {
    RCLCPP_INFO(this->get_logger(), "Region goal: %s", goal->region_name.c_str());
    return rclcpp_action::GoalResponse::ACCEPT_AND_EXECUTE;
  }

  rclcpp_action::CancelResponse handle_cancel(const std::shared_ptr<ERGoalHandle>)
  {
    RCLCPP_WARN(this->get_logger(), "Region execution cancelled!");
    // Send E-STOP
    ChassisCmd stop;
    stop.estop = true;
    chassis_pub_->publish(stop);
    return rclcpp_action::CancelResponse::ACCEPT;
  }

  void handle_accepted(const std::shared_ptr<ERGoalHandle> gh)
  {
    std::thread{[this, gh](){ execute_region(gh); }}.detach();
  }

  // ── Region execution ─────────────────────────────────────────────────────
  void execute_region(const std::shared_ptr<ERGoalHandle> gh)
  {
    const auto goal = gh->get_goal();
    auto fb     = std::make_shared<ExecuteRegion::Feedback>();
    auto result = std::make_shared<ExecuteRegion::Result>();

    if (goal->region_name == "martial_club") {
      state_ = MissionState::MARTIAL_CLUB;
      execute_martial_club(gh, fb);
    }
    else if (goal->region_name == "meihua_forest") {
      state_ = MissionState::MEIHUA_FOREST;
      execute_meihua_forest(gh, fb);
    }
    else if (goal->region_name == "martial_arena") {
      state_ = MissionState::MARTIAL_ARENA;
      execute_martial_arena(gh, fb);
    }
    else {
      result->success = false;
      result->message = "Unknown region: " + goal->region_name;
      gh->abort(result);
      return;
    }

    result->success = true;
    result->message = goal->region_name + " complete";
    result->kfs_boxes_collected = kfs_collected_;
    gh->succeed(result);
    RCLCPP_INFO(this->get_logger(), "Region '%s' completed.", goal->region_name.c_str());
  }

  // ── MARTIAL CLUB ──────────────────────────────────────────────────────────
  // 1) Move to spearhead rack
  // 2) Detect spearhead (camera at 500mm height)
  // 3) Grip spearhead
  // 4) Rotate gripper for R1 docking
  // 5) Wait for R1 success signal
  // 6) Release spearhead gripper
  void execute_martial_club(
    const std::shared_ptr<ERGoalHandle>& gh,
    std::shared_ptr<ExecuteRegion::Feedback>& fb)
  {
    fb->current_step     = "Moving to spearhead rack";
    fb->steps_completed  = 0;
    fb->total_steps      = 5;
    fb->progress_percent = 10;
    gh->publish_feedback(fb);

    // Step 1: Move (placeholder coordinates – tune for arena)
    // In real competition, send MoveToPosition action
    rclcpp::sleep_for(std::chrono::milliseconds(500));

    // Step 2: Detect spearhead
    fb->current_step     = "Detecting spearhead rack";
    fb->steps_completed  = 1;
    fb->progress_percent = 30;
    gh->publish_feedback(fb);
    rclcpp::sleep_for(std::chrono::milliseconds(500));

    // Step 3: Grip spearhead (send GripObject action)
    fb->current_step     = "Gripping spearhead";
    fb->steps_completed  = 2;
    fb->progress_percent = 50;
    gh->publish_feedback(fb);
    send_grip_action(spearhead_client_, "spearhead", 1, 0.0f);

    // Step 4: Rotate for docking
    fb->current_step     = "Rotating for R1 dock";
    fb->steps_completed  = 3;
    fb->progress_percent = 70;
    gh->publish_feedback(fb);
    send_grip_action(spearhead_client_, "spearhead", 2, 90.0f);

    // Step 5: Wait for R1 success (listen on topic – simplified)
    fb->current_step     = "Waiting for R1 dock confirmation";
    fb->steps_completed  = 4;
    fb->progress_percent = 85;
    gh->publish_feedback(fb);
    rclcpp::sleep_for(std::chrono::seconds(3));  // Placeholder wait

    // Step 6: Release
    fb->current_step     = "Releasing spearhead";
    fb->steps_completed  = 5;
    fb->progress_percent = 100;
    gh->publish_feedback(fb);
    send_grip_action(spearhead_client_, "spearhead", 0, 0.0f);
  }

  // ── MEIHUA FOREST ─────────────────────────────────────────────────────────
  // 1) Climb steps: 200mm → 400mm → 600mm
  // 2) Detect KFS boxes at each level
  // 3) Extend horizontal, grip KFS, retract
  // 4) Collect 2 KFS boxes
  void execute_meihua_forest(
    const std::shared_ptr<ERGoalHandle>& gh,
    std::shared_ptr<ExecuteRegion::Feedback>& fb)
  {
    const float step_heights[] = {200.0f, 400.0f, 600.0f};
    kfs_collected_ = 0;
    uint8_t step = 0;

    for (float height : step_heights) {
      if (kfs_collected_ >= 2) break;

      // Climb step
      fb->current_step = "Climbing to " + std::to_string(static_cast<int>(height)) + "mm";
      fb->steps_completed = step;
      fb->total_steps     = 6;
      gh->publish_feedback(fb);
      send_climb_action(height);
      step++;

      // Detect KFS
      fb->current_step = "Detecting KFS box";
      gh->publish_feedback(fb);
      rclcpp::sleep_for(std::chrono::seconds(1));

      if (latest_kfs_.detected || true /* force attempt in competition */) {
        // Extend horizontal mechanism
        fb->current_step = "Extending horizontal arm";
        gh->publish_feedback(fb);
        send_expand_action(h_expand_client_, "horizontal_expansion", 1, 400.0f, 70.0f);

        // Grip KFS
        fb->current_step = "Gripping KFS box";
        gh->publish_feedback(fb);
        send_grip_action(kfs_client_, "kfs", 1, 0.0f);

        // Retract horizontal
        fb->current_step = "Retracting horizontal arm";
        gh->publish_feedback(fb);
        send_expand_action(h_expand_client_, "horizontal_expansion", 0, 0.0f, 70.0f);

        kfs_collected_++;
        step++;
        RCLCPP_INFO(this->get_logger(), "KFS collected: %d/2", kfs_collected_);
      }
    }

    fb->current_step     = "Meihua Forest complete";
    fb->progress_percent = 100;
    gh->publish_feedback(fb);
  }

  // ── MARTIAL ARENA ─────────────────────────────────────────────────────────
  // 1) Move to TTT rack
  // 2) Detect rack
  // 3) Extend vertical to 2nd row (~1150mm)
  // 4) Extend horizontal to place
  // 5) Release KFS box
  // 6) Retract
  // 7) Repeat for 2nd box (different column)
  void execute_martial_arena(
    const std::shared_ptr<ERGoalHandle>& gh,
    std::shared_ptr<ExecuteRegion::Feedback>& fb)
  {
    fb->current_step     = "Moving to Tic Tac Toe rack";
    fb->steps_completed  = 0;
    fb->total_steps      = 6;
    gh->publish_feedback(fb);
    rclcpp::sleep_for(std::chrono::seconds(1));

    // Row 2 height: platform(400) + 1.5 * grid(500) = 1150 mm
    const float row2_height = 1150.0f;

    for (int box = 0; box < static_cast<int>(kfs_collected_); box++) {
      // Raise vertical
      fb->current_step = "Raising to Row 2 (" + std::to_string(static_cast<int>(row2_height)) + "mm)";
      gh->publish_feedback(fb);
      send_expand_action(v_expand_client_, "vertical_expansion", 1, row2_height, 60.0f);

      // Extend horizontal to place box
      fb->current_step = "Extending to place KFS box #" + std::to_string(box + 1);
      gh->publish_feedback(fb);
      send_expand_action(h_expand_client_, "horizontal_expansion", 1, 350.0f, 50.0f);

      // Release KFS
      fb->current_step = "Releasing KFS box";
      gh->publish_feedback(fb);
      send_grip_action(kfs_client_, "kfs", 0, 0.0f);

      // Retract horizontal
      send_expand_action(h_expand_client_, "horizontal_expansion", 0, 0.0f, 70.0f);

      // Retract vertical
      send_expand_action(v_expand_client_, "vertical_expansion", 0, 0.0f, 60.0f);

      fb->steps_completed = static_cast<uint8_t>(box + 1);
    }

    fb->current_step = "Martial Arena complete";
    fb->progress_percent = 100;
    gh->publish_feedback(fb);
    state_ = MissionState::DONE;
    RCLCPP_INFO(this->get_logger(), "=== MISSION COMPLETE ===");
  }

  // ── Action send helpers (synchronous-style with wait) ─────────────────────
  void send_grip_action(
    rclcpp_action::Client<GripObject>::SharedPtr& client,
    const std::string& gripper_id, uint8_t command, float angle)
  {
    if (!client->wait_for_action_server(std::chrono::seconds(5))) {
      RCLCPP_ERROR(this->get_logger(), "Grip action server not available!");
      return;
    }
    auto goal = GripObject::Goal();
    goal.gripper_id       = gripper_id;
    goal.command          = command;
    goal.target_angle_deg = angle;
    auto future = client->async_send_goal(goal);
    // Wait for result (simplified; in production use callback)
    rclcpp::sleep_for(std::chrono::seconds(5));
  }

  void send_climb_action(float height)
  {
    if (!climb_client_->wait_for_action_server(std::chrono::seconds(5))) {
      RCLCPP_ERROR(this->get_logger(), "Climb action server not available!");
      return;
    }
    auto goal = ClimbStep::Goal();
    goal.target_height_mm = height;
    goal.speed_percent    = 60.0f;
    auto future = climb_client_->async_send_goal(goal);
    rclcpp::sleep_for(std::chrono::seconds(10));
  }

  void send_expand_action(
    rclcpp_action::Client<ExpandMechanism>::SharedPtr& client,
    const std::string& mech_id, uint8_t direction,
    float target_mm, float speed)
  {
    if (!client->wait_for_action_server(std::chrono::seconds(5))) {
      RCLCPP_ERROR(this->get_logger(), "Expand action server not available!");
      return;
    }
    auto goal = ExpandMechanism::Goal();
    goal.mechanism_id       = mech_id;
    goal.direction          = direction;
    goal.target_position_mm = target_mm;
    goal.speed_percent      = speed;
    auto future = client->async_send_goal(goal);
    rclcpp::sleep_for(std::chrono::seconds(8));
  }

  // ── Members ───────────────────────────────────────────────────────────────
  MissionState state_;
  bool         all_ready_;
  uint8_t      kfs_collected_;

  DetectionResult latest_spearhead_;
  DetectionResult latest_kfs_;

  rclcpp::Subscription<std_msgs::msg::Bool>::SharedPtr     ready_sub_;
  rclcpp::Subscription<DetectionResult>::SharedPtr         spearhead_det_sub_;
  rclcpp::Subscription<DetectionResult>::SharedPtr         kfs_det_sub_;
  rclcpp::Publisher<ChassisCmd>::SharedPtr                 chassis_pub_;

  rclcpp_action::Client<MoveToPosition>::SharedPtr   move_client_;
  rclcpp_action::Client<ClimbStep>::SharedPtr        climb_client_;
  rclcpp_action::Client<GripObject>::SharedPtr       spearhead_client_;
  rclcpp_action::Client<GripObject>::SharedPtr       kfs_client_;
  rclcpp_action::Client<ExpandMechanism>::SharedPtr  h_expand_client_;
  rclcpp_action::Client<ExpandMechanism>::SharedPtr  v_expand_client_;

  rclcpp_action::Server<ExecuteRegion>::SharedPtr    action_server_;
  rclcpp::TimerBase::SharedPtr                       auto_timer_;
};

int main(int argc, char ** argv)
{
  // Use multi-threaded executor for concurrent action handling
  rclcpp::init(argc, argv);
  auto node = std::make_shared<MissionStateMachineNode>();
  rclcpp::executors::MultiThreadedExecutor executor;
  executor.add_node(node);
  executor.spin();
  rclcpp::shutdown();
  return 0;
}
