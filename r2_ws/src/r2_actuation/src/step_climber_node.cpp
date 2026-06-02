// step_climber_node.cpp
// ============================================================
// Action server for ClimbStep.action
// Controls the front_link and back_link lifting mechanisms
// via encoder feedback from Rhino motors.
//
// Step heights: 200 mm, 400 mm, 600 mm
// Encoder: ticks → mm conversion via encoder_ticks_per_mm param
//
// Communication: publishes SerialFrame to Arduino Mega (device 0x02)
//   CMD 0x20 = SET_FRONT_LIFT  payload = [target_mm_hi, target_mm_lo]
//   CMD 0x21 = SET_BACK_LIFT   payload = [target_mm_hi, target_mm_lo]
//
// Subscribes to MechanismStatus from Arduino encoder feedback:
//   /r2/mechanism/front_lift/status
//   /r2/mechanism/back_lift/status
// ============================================================

#include <rclcpp/rclcpp.hpp>
#include <rclcpp_action/rclcpp_action.hpp>
#include <r2_interfaces/action/climb_step.hpp>
#include <r2_interfaces/msg/serial_frame.hpp>
#include <r2_interfaces/msg/mechanism_status.hpp>

using ClimbStep       = r2_interfaces::action::ClimbStep;
using GoalHandle      = rclcpp_action::ServerGoalHandle<ClimbStep>;
using SerialFrame     = r2_interfaces::msg::SerialFrame;
using MechanismStatus = r2_interfaces::msg::MechanismStatus;

class StepClimberNode : public rclcpp::Node
{
public:
  explicit StepClimberNode()
  : Node("step_climber_node"),
    front_height_mm_(0.0),
    back_height_mm_(0.0)
  {
    this->declare_parameter("tolerance_mm", 5.0);
    this->declare_parameter("step_timeout_s", 15.0);
    tolerance_mm_  = this->get_parameter("tolerance_mm").as_double();
    step_timeout_s_= this->get_parameter("step_timeout_s").as_double();

    // Publishers
    serial_pub_ = this->create_publisher<SerialFrame>("/r2/serial/arduino_tx", 10);

    // Subscriptions – encoder feedback from bridge
    front_status_sub_ = this->create_subscription<MechanismStatus>(
      "/r2/mechanism/front_lift/status", 10,
      [this](const MechanismStatus::SharedPtr m){ front_height_mm_ = m->position_mm; });

    back_status_sub_ = this->create_subscription<MechanismStatus>(
      "/r2/mechanism/back_lift/status", 10,
      [this](const MechanismStatus::SharedPtr m){ back_height_mm_ = m->position_mm; });

    // Action server
    action_server_ = rclcpp_action::create_server<ClimbStep>(
      this, "/r2/climb_step",
      std::bind(&StepClimberNode::handle_goal,   this, std::placeholders::_1, std::placeholders::_2),
      std::bind(&StepClimberNode::handle_cancel, this, std::placeholders::_1),
      std::bind(&StepClimberNode::handle_accepted, this, std::placeholders::_1));

    RCLCPP_INFO(this->get_logger(), "StepClimberNode ready. Action: /r2/climb_step");
  }

private:
  // ── Goal handling ─────────────────────────────────────────────────────────
  rclcpp_action::GoalResponse handle_goal(
    const rclcpp_action::GoalUUID &,
    std::shared_ptr<const ClimbStep::Goal> goal)
  {
    float h = goal->target_height_mm;
    if (h != 200.0f && h != 400.0f && h != 600.0f) {
      RCLCPP_WARN(this->get_logger(), "Invalid step height %.0f mm (use 200/400/600)", h);
      return rclcpp_action::GoalResponse::REJECT;
    }
    RCLCPP_INFO(this->get_logger(), "ClimbStep goal accepted: %.0f mm", h);
    return rclcpp_action::GoalResponse::ACCEPT_AND_EXECUTE;
  }

  rclcpp_action::CancelResponse handle_cancel(const std::shared_ptr<GoalHandle>)
  {
    RCLCPP_INFO(this->get_logger(), "ClimbStep cancelled.");
    return rclcpp_action::CancelResponse::ACCEPT;
  }

  void handle_accepted(const std::shared_ptr<GoalHandle> goal_handle)
  {
    std::thread{[this, goal_handle](){ execute(goal_handle); }}.detach();
  }

  // ── Execution ─────────────────────────────────────────────────────────────
  void execute(const std::shared_ptr<GoalHandle> goal_handle)
  {
    const float target_mm = goal_handle->get_goal()->target_height_mm;
    auto feedback = std::make_shared<ClimbStep::Feedback>();
    auto result   = std::make_shared<ClimbStep::Result>();

    rclcpp::Rate rate(10);  // 10 Hz control loop

    // Phase 1: Lift front link
    feedback->phase = "LIFTING_FRONT";
    send_lift_cmd(0x20, static_cast<uint16_t>(target_mm));   // CMD_FRONT_LIFT
    goal_handle->publish_feedback(feedback);
    if (!wait_for_height(front_height_mm_, target_mm, goal_handle, feedback, "LIFTING_FRONT")) {
      result->success = false; result->message = "Front lift timeout";
      goal_handle->abort(result); return;
    }

    // Phase 2: Drive forward slightly (handled by chassis – signal mission control)
    feedback->phase = "DRIVING";
    goal_handle->publish_feedback(feedback);
    rclcpp::sleep_for(std::chrono::milliseconds(500));  // brief pause

    // Phase 3: Lift back link
    feedback->phase = "LIFTING_BACK";
    send_lift_cmd(0x21, static_cast<uint16_t>(target_mm));   // CMD_BACK_LIFT
    goal_handle->publish_feedback(feedback);
    if (!wait_for_height(back_height_mm_, target_mm, goal_handle, feedback, "LIFTING_BACK")) {
      result->success = false; result->message = "Back lift timeout";
      goal_handle->abort(result); return;
    }

    feedback->phase = "DONE";
    feedback->current_height_mm = target_mm;
    goal_handle->publish_feedback(feedback);

    result->success           = true;
    result->achieved_height_mm = target_mm;
    result->message           = "Step climb complete";
    goal_handle->succeed(result);
    RCLCPP_INFO(this->get_logger(), "Climbed to %.0f mm successfully.", target_mm);
  }

  bool wait_for_height(
    float & height_ref, float target,
    const std::shared_ptr<GoalHandle>& gh,
    std::shared_ptr<ClimbStep::Feedback>& fb,
    const std::string& phase)
  {
    auto start = this->now();
    rclcpp::Rate rate(20);
    while (rclcpp::ok()) {
      if (gh->is_canceling()) return false;
      fb->current_height_mm = height_ref;
      fb->phase = phase;
      gh->publish_feedback(fb);
      if (std::abs(height_ref - target) < tolerance_mm_) return true;
      if ((this->now() - start).seconds() > step_timeout_s_) return false;
      rate.sleep();
    }
    return false;
  }

  void send_lift_cmd(uint8_t cmd_id, uint16_t height_mm)
  {
    SerialFrame frame;
    frame.header.stamp = this->now();
    frame.device_id = 0x02;   // Arduino Mega
    frame.cmd_id    = cmd_id;
    frame.payload   = {
      static_cast<uint8_t>((height_mm >> 8) & 0xFF),
      static_cast<uint8_t>(height_mm & 0xFF)
    };
    frame.crc8 = compute_crc8(cmd_id, frame.payload);
    serial_pub_->publish(frame);
  }

  static uint8_t compute_crc8(uint8_t cmd, const std::vector<uint8_t>& data)
  {
    uint8_t crc = cmd;
    for (uint8_t b : data) {
      crc ^= b;
      for (int i = 0; i < 8; i++)
        crc = (crc & 0x80) ? (crc << 1) ^ 0x07 : (crc << 1);
    }
    return crc;
  }

  rclcpp_action::Server<ClimbStep>::SharedPtr action_server_;
  rclcpp::Publisher<SerialFrame>::SharedPtr   serial_pub_;
  rclcpp::Subscription<MechanismStatus>::SharedPtr front_status_sub_;
  rclcpp::Subscription<MechanismStatus>::SharedPtr back_status_sub_;

  float front_height_mm_;
  float back_height_mm_;
  double tolerance_mm_;
  double step_timeout_s_;
};

int main(int argc, char ** argv)
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<StepClimberNode>());
  rclcpp::shutdown();
  return 0;
}
