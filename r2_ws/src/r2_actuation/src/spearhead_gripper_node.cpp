// spearhead_gripper_node.cpp
// ============================================================
// Action server for GripObject.action (gripper_id = "spearhead")
//
// Mechanism:
//   - Johnson motor + lead screw (linear gripper)
//   - Servo for rotation / docking angle
//
// Protocol to Arduino (device 0x02):
//   CMD 0x30 = SPEARHEAD_GRIP     payload = [speed%]
//   CMD 0x31 = SPEARHEAD_RELEASE  payload = []
//   CMD 0x32 = SPEARHEAD_ROTATE   payload = [angle_deg]
//
// Topic inputs:
//   /r2/mechanism/spearhead_gripper/status  (MechanismStatus)
// ============================================================

#include <rclcpp/rclcpp.hpp>
#include <rclcpp_action/rclcpp_action.hpp>
#include <r2_interfaces/action/grip_object.hpp>
#include <r2_interfaces/msg/serial_frame.hpp>
#include <r2_interfaces/msg/mechanism_status.hpp>

using GripObject      = r2_interfaces::action::GripObject;
using GoalHandle      = rclcpp_action::ServerGoalHandle<GripObject>;
using SerialFrame     = r2_interfaces::msg::SerialFrame;
using MechanismStatus = r2_interfaces::msg::MechanismStatus;

class SpearheadGripperNode : public rclcpp::Node
{
public:
  SpearheadGripperNode()
  : Node("spearhead_gripper_node"), current_state_(0)
  {
    this->declare_parameter("grip_timeout_s", 10.0);
    grip_timeout_ = this->get_parameter("grip_timeout_s").as_double();

    serial_pub_ = this->create_publisher<SerialFrame>("/r2/serial/arduino_tx", 10);

    status_sub_ = this->create_subscription<MechanismStatus>(
      "/r2/mechanism/spearhead_gripper/status", 10,
      [this](const MechanismStatus::SharedPtr m){ current_state_ = m->state; });

    action_server_ = rclcpp_action::create_server<GripObject>(
      this, "/r2/grip/spearhead",
      std::bind(&SpearheadGripperNode::handle_goal,     this, std::placeholders::_1, std::placeholders::_2),
      std::bind(&SpearheadGripperNode::handle_cancel,   this, std::placeholders::_1),
      std::bind(&SpearheadGripperNode::handle_accepted, this, std::placeholders::_1));

    RCLCPP_INFO(this->get_logger(), "SpearheadGripperNode ready.");
  }

private:
  rclcpp_action::GoalResponse handle_goal(
    const rclcpp_action::GoalUUID &,
    std::shared_ptr<const GripObject::Goal> goal)
  {
    if (goal->gripper_id != "spearhead") return rclcpp_action::GoalResponse::REJECT;
    return rclcpp_action::GoalResponse::ACCEPT_AND_EXECUTE;
  }

  rclcpp_action::CancelResponse handle_cancel(const std::shared_ptr<GoalHandle>)
  {
    return rclcpp_action::CancelResponse::ACCEPT;
  }

  void handle_accepted(const std::shared_ptr<GoalHandle> gh)
  {
    std::thread{[this, gh](){ execute(gh); }}.detach();
  }

  void execute(const std::shared_ptr<GoalHandle> gh)
  {
    const auto goal = gh->get_goal();
    auto fb     = std::make_shared<GripObject::Feedback>();
    auto result = std::make_shared<GripObject::Result>();

    if (goal->command == 2) {
      // ROTATE_AND_DOCK: rotate servo then grip
      fb->phase = "ROTATING";  fb->progress_percent = 10.0f;
      gh->publish_feedback(fb);
      send_cmd(0x32, {static_cast<uint8_t>(goal->target_angle_deg)});
      rclcpp::sleep_for(std::chrono::milliseconds(1500));

      fb->phase = "DOCKING";   fb->progress_percent = 60.0f;
      gh->publish_feedback(fb);
      send_cmd(0x30, {80});   // Grip at 80% speed
      wait_for_state(2, gh);  // Wait for DONE state from Arduino
    } else if (goal->command == 1) {
      // GRIP
      fb->phase = "GRIPPING"; fb->progress_percent = 20.0f;
      gh->publish_feedback(fb);
      send_cmd(0x30, {static_cast<uint8_t>(goal->target_angle_deg > 0 ?
        static_cast<int>(goal->target_angle_deg) : 80)});
      wait_for_state(2, gh);
    } else {
      // RELEASE
      fb->phase = "RELEASING"; fb->progress_percent = 20.0f;
      gh->publish_feedback(fb);
      send_cmd(0x31, {});
      wait_for_state(2, gh);
    }

    fb->phase = "DONE"; fb->progress_percent = 100.0f;
    gh->publish_feedback(fb);
    result->success = true;
    result->message = "Spearhead gripper command complete";
    gh->succeed(result);
  }

  void wait_for_state(uint8_t target_state, const std::shared_ptr<GoalHandle>& gh)
  {
    auto start = this->now();
    rclcpp::Rate rate(20);
    while (rclcpp::ok()) {
      if (gh->is_canceling()) return;
      if (current_state_ == target_state) return;
      if ((this->now() - start).seconds() > grip_timeout_) {
        RCLCPP_WARN(this->get_logger(), "Gripper state timeout.");
        return;
      }
      rate.sleep();
    }
  }

  void send_cmd(uint8_t cmd_id, const std::vector<uint8_t>& payload)
  {
    SerialFrame frame;
    frame.header.stamp = this->now();
    frame.device_id    = 0x02;
    frame.cmd_id       = cmd_id;
    frame.payload      = payload;
    frame.crc8         = compute_crc8(cmd_id, payload);
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

  rclcpp_action::Server<GripObject>::SharedPtr action_server_;
  rclcpp::Publisher<SerialFrame>::SharedPtr    serial_pub_;
  rclcpp::Subscription<MechanismStatus>::SharedPtr status_sub_;

  uint8_t current_state_;
  double  grip_timeout_;
};

int main(int argc, char ** argv)
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<SpearheadGripperNode>());
  rclcpp::shutdown();
  return 0;
}
