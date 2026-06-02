// arduino_bridge_node.cpp
// ============================================================
// Serial bridge for Arduino Mega.
//
// Communication options:
//   1) Direct USB from RPi to Arduino (/dev/ttyACM0)
//   2) Relay through ESP32 (ESP32 UART2 ↔ Arduino)
//
// This node handles:
//   - TX: /r2/serial/arduino_tx (SerialFrame) → encode → UART TX
//   - RX: UART RX → decode → /r2/serial/arduino_rx (SerialFrame)
//   - Decode mechanism status for all Arduino-controlled subsystems:
//       - /r2/mechanism/front_lift/status
//       - /r2/mechanism/back_lift/status
//       - /r2/mechanism/spearhead_gripper/status
//       - /r2/mechanism/kfs_gripper/status
//       - /r2/mechanism/horizontal_expansion/status
//       - /r2/mechanism/vertical_expansion/status
//
// Protocol: Same [0xAA][DEV][CMD][LEN][DATA][CRC8] as ESP32 bridge.
// ============================================================

#include <rclcpp/rclcpp.hpp>
#include <r2_interfaces/msg/serial_frame.hpp>
#include <r2_interfaces/msg/mechanism_status.hpp>

#include <fcntl.h>
#include <termios.h>
#include <unistd.h>
#include <cstring>
#include <map>

using SerialFrame     = r2_interfaces::msg::SerialFrame;
using MechanismStatus = r2_interfaces::msg::MechanismStatus;

class ArduinoBridgeNode : public rclcpp::Node
{
public:
  ArduinoBridgeNode()
  : Node("arduino_bridge_node"), fd_(-1)
  {
    this->declare_parameter("serial_port", "/dev/ttyACM0");
    this->declare_parameter("baud_rate",   115200);

    port_ = this->get_parameter("serial_port").as_string();
    baud_ = this->get_parameter("baud_rate").as_int();

    // Generic RX publisher
    rx_pub_ = this->create_publisher<SerialFrame>("/r2/serial/arduino_rx", 10);

    // Mechanism status publishers — one per subsystem
    mech_pubs_["front_lift"]            = create_publisher<MechanismStatus>("/r2/mechanism/front_lift/status", 10);
    mech_pubs_["back_lift"]             = create_publisher<MechanismStatus>("/r2/mechanism/back_lift/status", 10);
    mech_pubs_["spearhead_gripper"]     = create_publisher<MechanismStatus>("/r2/mechanism/spearhead_gripper/status", 10);
    mech_pubs_["kfs_gripper"]           = create_publisher<MechanismStatus>("/r2/mechanism/kfs_gripper/status", 10);
    mech_pubs_["horizontal_expansion"]  = create_publisher<MechanismStatus>("/r2/mechanism/horizontal_expansion/status", 10);
    mech_pubs_["vertical_expansion"]    = create_publisher<MechanismStatus>("/r2/mechanism/vertical_expansion/status", 10);

    // TX subscriber
    tx_sub_ = this->create_subscription<SerialFrame>(
      "/r2/serial/arduino_tx", 10,
      std::bind(&ArduinoBridgeNode::tx_callback, this, std::placeholders::_1));

    open_serial();

    read_timer_ = this->create_timer(
      std::chrono::milliseconds(5),
      std::bind(&ArduinoBridgeNode::read_serial, this));

    RCLCPP_INFO(this->get_logger(),
      "ArduinoBridgeNode started on %s @ %d baud.", port_.c_str(), baud_);
  }

  ~ArduinoBridgeNode() override { if (fd_ >= 0) ::close(fd_); }

private:
  void open_serial()
  {
    fd_ = ::open(port_.c_str(), O_RDWR | O_NOCTTY | O_NONBLOCK);
    if (fd_ < 0) {
      RCLCPP_ERROR(this->get_logger(), "Cannot open %s: %s", port_.c_str(), strerror(errno));
      return;
    }

    struct termios tty;
    memset(&tty, 0, sizeof(tty));
    tcgetattr(fd_, &tty);

    speed_t spd = B115200;
    if (baud_ == 9600)   spd = B9600;
    if (baud_ == 57600)  spd = B57600;
    cfsetispeed(&tty, spd);
    cfsetospeed(&tty, spd);

    tty.c_cflag = CS8 | CREAD | CLOCAL;
    tty.c_lflag = 0;
    tty.c_iflag = 0;
    tty.c_oflag = 0;
    tty.c_cc[VMIN]  = 0;
    tty.c_cc[VTIME] = 1;

    tcsetattr(fd_, TCSANOW, &tty);
    tcflush(fd_, TCIOFLUSH);
  }

  void tx_callback(const SerialFrame::SharedPtr msg)
  {
    if (fd_ < 0) return;
    std::vector<uint8_t> frame;
    frame.push_back(0xAA);
    frame.push_back(msg->device_id);
    frame.push_back(msg->cmd_id);
    frame.push_back(static_cast<uint8_t>(msg->payload.size()));
    for (uint8_t b : msg->payload) frame.push_back(b);
    frame.push_back(msg->crc8);
    ::write(fd_, frame.data(), frame.size());
  }

  void read_serial()
  {
    if (fd_ < 0) return;
    uint8_t buf[256];
    ssize_t n = ::read(fd_, buf, sizeof(buf));
    if (n <= 0) return;
    for (ssize_t i = 0; i < n; i++) rx_buf_.push_back(buf[i]);
    parse_frames();
  }

  void parse_frames()
  {
    while (rx_buf_.size() >= 5) {
      if (rx_buf_[0] != 0xAA) { rx_buf_.erase(rx_buf_.begin()); continue; }
      uint8_t dev = rx_buf_[1], cmd = rx_buf_[2], len = rx_buf_[3];
      size_t frame_len = 4 + len + 1;
      if (rx_buf_.size() < frame_len) return;

      std::vector<uint8_t> payload(rx_buf_.begin() + 4, rx_buf_.begin() + 4 + len);
      uint8_t crc = rx_buf_[4 + len];

      if (crc != compute_crc8(cmd, payload)) {
        rx_buf_.erase(rx_buf_.begin());
        continue;
      }

      // Publish raw frame
      SerialFrame msg;
      msg.header.stamp = this->now();
      msg.device_id = dev; msg.cmd_id = cmd;
      msg.payload = payload; msg.crc8 = crc;
      rx_pub_->publish(msg);

      // Dispatch to mechanism status topics
      dispatch_mechanism_status(cmd, payload);

      rx_buf_.erase(rx_buf_.begin(), rx_buf_.begin() + frame_len);
    }
  }

  // ── Decode mechanism feedback ─────────────────────────────────────────────
  // Arduino sends status with:
  //   CMD 0xA0-0xA5 = status for each subsystem
  //   Payload: [state] [pos_mm_hi] [pos_mm_lo] [limit_min] [limit_max]
  void dispatch_mechanism_status(uint8_t cmd, const std::vector<uint8_t>& payload)
  {
    // Map CMD → mechanism_id
    static const std::map<uint8_t, std::string> cmd_map = {
      {0xA0, "front_lift"},
      {0xA1, "back_lift"},
      {0xA2, "spearhead_gripper"},
      {0xA3, "kfs_gripper"},
      {0xA4, "horizontal_expansion"},
      {0xA5, "vertical_expansion"},
    };

    auto it = cmd_map.find(cmd);
    if (it == cmd_map.end()) return;
    if (payload.size() < 5)  return;

    MechanismStatus status;
    status.header.stamp     = this->now();
    status.mechanism_id     = it->second;
    status.state            = payload[0];
    status.position_mm      = static_cast<float>((payload[1] << 8) | payload[2]);
    status.limit_switch_min = (payload[3] != 0);
    status.limit_switch_max = (payload[4] != 0);

    auto pub_it = mech_pubs_.find(it->second);
    if (pub_it != mech_pubs_.end()) {
      pub_it->second->publish(status);
    }
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

  rclcpp::Publisher<SerialFrame>::SharedPtr      rx_pub_;
  rclcpp::Subscription<SerialFrame>::SharedPtr   tx_sub_;
  rclcpp::TimerBase::SharedPtr                   read_timer_;
  std::map<std::string, rclcpp::Publisher<MechanismStatus>::SharedPtr> mech_pubs_;

  int fd_;
  std::string port_;
  int baud_;
  std::vector<uint8_t> rx_buf_;
};

int main(int argc, char ** argv)
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<ArduinoBridgeNode>());
  rclcpp::shutdown();
  return 0;
}
