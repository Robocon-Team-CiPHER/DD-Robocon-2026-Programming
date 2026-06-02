// kfs_gripper_node.cpp
// ============================================================
// Action server for GripObject.action (gripper_id = "kfs")
//
// Mechanism: Pneumatic cylinder gripper for 350×350×350 mm KFS boxes.
// Controlled by Arduino Mega via solenoid valve.
//
// Protocol to Arduino (device 0x02):
//   CMD 0x40 = KFS_GRIP    payload = []
//   CMD 0x41 = KFS_RELEASE payload = []
//
// Subscribes to:
//   /r2/mechanism/kfs_gripper/status  (MechanismStatus)
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

class KFSGripperNode : public rclcpp::Node
{
public:
  KFSGripperNode()
  : Node("kfs_gripper_node"), current_state_(0)
  {
    this->declare_parameter("grip_timeout_s", 5.0);
    grip_timeout_ = this->get_parameter("grip_timeout_s").as_double();

    serial_pub_ = this->create_publisher<SerialFrame>("/r2/serial/arduino_tx", 10);

    status_sub_ = this->create_subscription<MechanismStatus>(
      "/r2/mechanism/kfs_gripper/status", 10,
      [this](const MechanismStatus::SharedPtr m){ current_state_ = m->state; });

    action_server_ = rclcpp_action::create_server<GripObject>(
      this, "/r2/grip/kfs",
      std::bind(&KFSGripperNode::handle_goal,     this, std::placeholders::_1, std::placeholders::_2),
      std::bind(&KFSGripperNode::handle_cancel,   this, std::placeholders::_1),
      std::bind(&KFSGripperNode::handle_accepted, this, std::placeholders::_1));

    RCLCPP_INFO(this->get_logger(), "KFSGripperNode ready. KFS box size: 350x350x350 mm.");
  }

private:
  rclcpp_action::GoalResponse handle_goal(
    const rclcpp_action::GoalUUID &,
    std::shared_ptr<const GripObject::Goal> goal)
  {
    if (goal->gripper_id != "kfs") return rclcpp_action::GoalResponse::REJECT;
    return rclcpp_action::GoalResponse::ACCEPT_AND_EXECUTE;
  }

  rclcpp_action::CancelResponse handle_cancel(const std::shared_ptr<GoalHandle>)
  { return rclcpp_action::CancelResponse::ACCEPT; }

  void handle_accepted(const std::shared_ptr<GoalHandle> gh)
  { std::thread{[this, gh](){ execute(gh); }}.detach(); }

  void execute(const std::shared_ptr<GoalHandle> gh)
  {
    const auto goal = gh->get_goal();
    auto fb     = std::make_shared<GripObject::Feedback>();
    auto result = std::make_shared<GripObject::Result>();

    bool is_grip = (goal->command == 1);
    fb->phase = is_grip ? "ACTIVATING_PNEUMATIC" : "RELEASING_PNEUMATIC";
    fb->progress_percent = 20.0f;
    gh->publish_feedback(fb);

    // Send solenoid command to Arduino
    send_cmd(is_grip ? 0x40 : 0x41, {});

    // Wait for pneumatic confirmation (or timeout)
    auto start = this->now();
    rclcpp::Rate rate(20);
    while (rclcpp::ok()) {
      if (gh->is_canceling()) break;
      if (current_state_ == 2) break;   // DONE
      if ((this->now() - start).seconds() > grip_timeout_) {
        RCLCPP_WARN(this->get_logger(), "KFS gripper timeout – assuming done.");
        break;
      }
      rate.sleep();
    }

    fb->phase = "DONE"; fb->progress_percent = 100.0f;
    gh->publish_feedback(fb);
    result->success = true;
    result->message = is_grip ? "KFS gripped" : "KFS released";
    gh->succeed(result);
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
  rclcpp::spin(std::make_shared<KFSGripperNode>());
  rclcpp::shutdown();
  return 0;
}
