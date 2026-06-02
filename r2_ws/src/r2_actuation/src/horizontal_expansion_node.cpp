// horizontal_expansion_node.cpp
// ============================================================
// Action server for ExpandMechanism.action (mechanism_id = "horizontal_expansion")
//
// Extends the KFS gripper forward to pick KFS boxes from the centre
// of the 1200×1200 mm step area.
// Limit switches at both ends detect full extension / retraction.
//
// Protocol to Arduino (device 0x02):
//   CMD 0x50 = HORIZ_EXTEND    payload = [target_mm_hi, target_mm_lo, speed%]
//   CMD 0x51 = HORIZ_RETRACT   payload = [speed%]
//   CMD 0x52 = HORIZ_STOP      payload = []
//
// Subscribes to:
//   /r2/mechanism/horizontal_expansion/status (MechanismStatus)
// ============================================================

#include <rclcpp/rclcpp.hpp>
#include <rclcpp_action/rclcpp_action.hpp>
#include <r2_interfaces/action/expand_mechanism.hpp>
#include <r2_interfaces/msg/serial_frame.hpp>
#include <r2_interfaces/msg/mechanism_status.hpp>

using ExpandMechanism = r2_interfaces::action::ExpandMechanism;
using GoalHandle      = rclcpp_action::ServerGoalHandle<ExpandMechanism>;
using SerialFrame     = r2_interfaces::msg::SerialFrame;
using MechanismStatus = r2_interfaces::msg::MechanismStatus;

class HorizontalExpansionNode : public rclcpp::Node
{
public:
  HorizontalExpansionNode()
  : Node("horizontal_expansion_node"),
    current_pos_mm_(0.0f), limit_min_(false), limit_max_(false)
  {
    this->declare_parameter("tolerance_mm",  10.0);
    this->declare_parameter("timeout_s",     12.0);
    this->declare_parameter("max_travel_mm", 600.0);   // step area is 1200 mm, reach ~half
    tolerance_ = this->get_parameter("tolerance_mm").as_double();
    timeout_   = this->get_parameter("timeout_s").as_double();

    serial_pub_ = this->create_publisher<SerialFrame>("/r2/serial/arduino_tx", 10);

    status_sub_ = this->create_subscription<MechanismStatus>(
      "/r2/mechanism/horizontal_expansion/status", 10,
      [this](const MechanismStatus::SharedPtr m){
        current_pos_mm_ = m->position_mm;
        limit_min_      = m->limit_switch_min;
        limit_max_      = m->limit_switch_max;
      });

    action_server_ = rclcpp_action::create_server<ExpandMechanism>(
      this, "/r2/expand/horizontal",
      std::bind(&HorizontalExpansionNode::handle_goal,     this, std::placeholders::_1, std::placeholders::_2),
      std::bind(&HorizontalExpansionNode::handle_cancel,   this, std::placeholders::_1),
      std::bind(&HorizontalExpansionNode::handle_accepted, this, std::placeholders::_1));

    RCLCPP_INFO(this->get_logger(), "HorizontalExpansionNode ready.");
  }

private:
  rclcpp_action::GoalResponse handle_goal(
    const rclcpp_action::GoalUUID &,
    std::shared_ptr<const ExpandMechanism::Goal> goal)
  {
    if (goal->mechanism_id != "horizontal_expansion")
      return rclcpp_action::GoalResponse::REJECT;
    return rclcpp_action::GoalResponse::ACCEPT_AND_EXECUTE;
  }

  rclcpp_action::CancelResponse handle_cancel(const std::shared_ptr<GoalHandle>)
  {
    // Emergency stop on cancel
    send_cmd(0x52, {});
    return rclcpp_action::CancelResponse::ACCEPT;
  }

  void handle_accepted(const std::shared_ptr<GoalHandle> gh)
  { std::thread{[this, gh](){ execute(gh); }}.detach(); }

  void execute(const std::shared_ptr<GoalHandle> gh)
  {
    const auto goal = gh->get_goal();
    auto fb     = std::make_shared<ExpandMechanism::Feedback>();
    auto result = std::make_shared<ExpandMechanism::Result>();

    bool extending = (goal->direction == 1);
    uint8_t speed  = static_cast<uint8_t>(goal->speed_percent);
    uint16_t target = static_cast<uint16_t>(goal->target_position_mm);

    if (extending) {
      send_cmd(0x50, {
        static_cast<uint8_t>((target >> 8) & 0xFF),
        static_cast<uint8_t>(target & 0xFF),
        speed
      });
    } else {
      send_cmd(0x51, {speed});
    }

    // Wait for target position or limit switch
    auto start = this->now();
    rclcpp::Rate rate(20);
    while (rclcpp::ok()) {
      if (gh->is_canceling()) {
        send_cmd(0x52, {});
        result->success = false;
        result->message = "Cancelled";
        result->actual_position_mm = current_pos_mm_;
        gh->canceled(result);
        return;
      }

      fb->current_position_mm = current_pos_mm_;
      fb->limit_min_active    = limit_min_;
      fb->limit_max_active    = limit_max_;
      gh->publish_feedback(fb);

      // Check limit switches
      if (extending && limit_max_) {
        RCLCPP_INFO(this->get_logger(), "Max limit reached at %.1f mm", current_pos_mm_);
        break;
      }
      if (!extending && limit_min_) {
        RCLCPP_INFO(this->get_logger(), "Min limit (home) reached.");
        break;
      }

      // Check position tolerance
      if (std::abs(current_pos_mm_ - goal->target_position_mm) < tolerance_) break;

      // Timeout
      if ((this->now() - start).seconds() > timeout_) {
        RCLCPP_WARN(this->get_logger(), "Horizontal expansion timeout.");
        send_cmd(0x52, {});
        result->success            = false;
        result->actual_position_mm = current_pos_mm_;
        result->message            = "Timeout";
        gh->abort(result);
        return;
      }
      rate.sleep();
    }

    result->success            = true;
    result->actual_position_mm = current_pos_mm_;
    result->message            = extending ? "Extended" : "Retracted";
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

  rclcpp_action::Server<ExpandMechanism>::SharedPtr action_server_;
  rclcpp::Publisher<SerialFrame>::SharedPtr          serial_pub_;
  rclcpp::Subscription<MechanismStatus>::SharedPtr   status_sub_;

  float   current_pos_mm_;
  bool    limit_min_, limit_max_;
  double  tolerance_, timeout_;
};

int main(int argc, char ** argv)
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<HorizontalExpansionNode>());
  rclcpp::shutdown();
  return 0;
}
