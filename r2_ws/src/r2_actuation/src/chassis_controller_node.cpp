// chassis_controller_node.cpp
// ============================================================
// Receives ChassisCmd messages (vx, vy, omega) and translates
// them into mecanum wheel speed commands, then publishes a
// SerialFrame for the comm_bridge to forward to the ESP32.
//
// Mecanum kinematics (standard):
//   FL =  vx - vy - (L+W)*omega
//   FR =  vx + vy + (L+W)*omega
//   RL =  vx + vy - (L+W)*omega
//   RR =  vx - vy + (L+W)*omega
//
// ROS topics:
//   Subscribe  : /r2/chassis/cmd        (ChassisCmd)
//   Publish    : /r2/serial/esp32_tx    (SerialFrame)
//   Publish    : /r2/chassis/status     (MechanismStatus)
// ============================================================

#include <rclcpp/rclcpp.hpp>
#include <r2_interfaces/msg/chassis_cmd.hpp>
#include <r2_interfaces/msg/serial_frame.hpp>
#include <r2_interfaces/msg/mechanism_status.hpp>
#include <cmath>
#include <algorithm>

using ChassisCmd      = r2_interfaces::msg::ChassisCmd;
using SerialFrame     = r2_interfaces::msg::SerialFrame;
using MechanismStatus = r2_interfaces::msg::MechanismStatus;

class ChassisControllerNode : public rclcpp::Node
{
public:
  ChassisControllerNode()
  : Node("chassis_controller_node")
  {
    // Parameters
    this->declare_parameter("wheel_base_m",  0.30);   // half L+W in metres
    this->declare_parameter("max_rpm",       200.0);
    this->declare_parameter("rpm_to_byte",   1.27);    // scale RPM → 0-255

    wheel_base_ = this->get_parameter("wheel_base_m").as_double();
    max_rpm_    = this->get_parameter("max_rpm").as_double();
    rpm_scale_  = this->get_parameter("rpm_to_byte").as_double();

    // Subscribers
    cmd_sub_ = this->create_subscription<ChassisCmd>(
      "/r2/chassis/cmd", 10,
      std::bind(&ChassisControllerNode::cmd_callback, this, std::placeholders::_1));

    // Publishers
    serial_pub_  = this->create_publisher<SerialFrame>("/r2/serial/esp32_tx", 10);
    status_pub_  = this->create_publisher<MechanismStatus>("/r2/chassis/status", 10);

    RCLCPP_INFO(this->get_logger(), "ChassisControllerNode started.");
  }

private:
  // ── Mecanum kinematics ────────────────────────────────────────────────────
  void cmd_callback(const ChassisCmd::SharedPtr msg)
  {
    if (msg->estop) {
      send_motor_speeds(0, 0, 0, 0);
      RCLCPP_WARN_THROTTLE(this->get_logger(), *this->get_clock(), 2000, "E-STOP active!");
      return;
    }

    double vx = msg->vx;
    double vy = msg->vy;
    double w  = msg->omega;
    double k  = wheel_base_;

    // Raw wheel velocities (m/s equivalent)
    double fl =  vx - vy - k * w;
    double fr =  vx + vy + k * w;
    double rl =  vx + vy - k * w;
    double rr =  vx - vy + k * w;

    // Normalise so no wheel exceeds max
    double peak = std::max({std::abs(fl), std::abs(fr), std::abs(rl), std::abs(rr), 1.0});
    fl /= peak; fr /= peak; rl /= peak; rr /= peak;

    // Convert to signed byte (-127..127 → mapped per protocol)
    int8_t ifl = clamp_to_int8(fl * 127);
    int8_t ifr = clamp_to_int8(fr * 127);
    int8_t irl = clamp_to_int8(rl * 127);
    int8_t irr = clamp_to_int8(rr * 127);

    send_motor_speeds(ifl, ifr, irl, irr);
  }

  void send_motor_speeds(int8_t fl, int8_t fr, int8_t rl, int8_t rr)
  {
    // Build SerialFrame: CMD=0x10 (CHASSIS_MOVE), payload=[FL,FR,RL,RR]
    SerialFrame frame;
    frame.header.stamp = this->now();
    frame.device_id = 0x01;   // ESP32
    frame.cmd_id    = 0x10;   // CHASSIS_MOVE command
    frame.payload   = {
      static_cast<uint8_t>(fl),
      static_cast<uint8_t>(fr),
      static_cast<uint8_t>(rl),
      static_cast<uint8_t>(rr)
    };
    frame.crc8 = compute_crc8(frame.cmd_id, frame.payload);
    serial_pub_->publish(frame);

    // Publish status
    MechanismStatus status;
    status.header       = frame.header;
    status.mechanism_id = "chassis";
    status.state        = (fl == 0 && fr == 0 && rl == 0 && rr == 0) ? 0 : 1;
    status_pub_->publish(status);
  }

  // Simple CRC-8 (polynomial 0x07)
  static uint8_t compute_crc8(uint8_t cmd, const std::vector<uint8_t>& data)
  {
    uint8_t crc = cmd;
    for (uint8_t b : data) {
      crc ^= b;
      for (int i = 0; i < 8; i++) {
        crc = (crc & 0x80) ? (crc << 1) ^ 0x07 : (crc << 1);
      }
    }
    return crc;
  }

  static int8_t clamp_to_int8(double v)
  {
    return static_cast<int8_t>(std::max(-127.0, std::min(127.0, v)));
  }

  rclcpp::Subscription<ChassisCmd>::SharedPtr cmd_sub_;
  rclcpp::Publisher<SerialFrame>::SharedPtr    serial_pub_;
  rclcpp::Publisher<MechanismStatus>::SharedPtr status_pub_;

  double wheel_base_;
  double max_rpm_;
  double rpm_scale_;
};

int main(int argc, char ** argv)
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<ChassisControllerNode>());
  rclcpp::shutdown();
  return 0;
}
