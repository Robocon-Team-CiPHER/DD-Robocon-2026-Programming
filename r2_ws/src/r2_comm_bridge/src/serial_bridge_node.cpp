// serial_bridge_node.cpp
// ============================================================
// Bidirectional serial bridge: ROS 2 ↔ ESP32
//
// Communication flow:
//   RPi USB (/dev/ttyUSB0) ← UART → ESP32
//
// Wire protocol (binary framing):
//   TX: [0xAA] [CMD] [LEN] [DATA...] [CRC8]
//   RX: [0xAA] [CMD] [LEN] [DATA...] [CRC8]
//
// ROS side:
//   Subscribe  /r2/serial/esp32_tx   (SerialFrame) → encode → UART TX
//   Publish    /r2/serial/esp32_rx   (SerialFrame) ← decode ← UART RX
//   Publish    /r2/chassis/status    (MechanismStatus) — decoded from RX
//
// Parameters:
//   serial_port : string  (/dev/ttyUSB0)
//   baud_rate   : int     (115200)
// ============================================================

#include <rclcpp/rclcpp.hpp>
#include <r2_interfaces/msg/serial_frame.hpp>
#include <r2_interfaces/msg/mechanism_status.hpp>

#include <fcntl.h>
#include <termios.h>
#include <unistd.h>
#include <cstring>
#include <vector>

using SerialFrame     = r2_interfaces::msg::SerialFrame;
using MechanismStatus = r2_interfaces::msg::MechanismStatus;

class SerialBridgeNode : public rclcpp::Node
{
public:
  SerialBridgeNode()
  : Node("serial_bridge_node"), fd_(-1)
  {
    this->declare_parameter("serial_port", "/dev/ttyUSB0");
    this->declare_parameter("baud_rate",   115200);

    port_ = this->get_parameter("serial_port").as_string();
    baud_ = this->get_parameter("baud_rate").as_int();

    // Publishers
    rx_pub_     = this->create_publisher<SerialFrame>("/r2/serial/esp32_rx", 10);
    status_pub_ = this->create_publisher<MechanismStatus>("/r2/chassis/encoder_status", 10);

    // Subscriber – outgoing frames
    tx_sub_ = this->create_subscription<SerialFrame>(
      "/r2/serial/esp32_tx", 10,
      std::bind(&SerialBridgeNode::tx_callback, this, std::placeholders::_1));

    // Open serial
    open_serial();

    // Read timer (non-blocking poll at 200 Hz)
    read_timer_ = this->create_timer(
      std::chrono::milliseconds(5),
      std::bind(&SerialBridgeNode::read_serial, this));

    RCLCPP_INFO(this->get_logger(),
      "SerialBridgeNode started on %s @ %d baud.", port_.c_str(), baud_);
  }

  ~SerialBridgeNode() override
  {
    if (fd_ >= 0) ::close(fd_);
  }

private:
  // ── Serial port setup (POSIX) ─────────────────────────────────────────────
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

    // Speed
    speed_t spd = B115200;
    if (baud_ == 9600)   spd = B9600;
    if (baud_ == 57600)  spd = B57600;
    if (baud_ == 230400) spd = B230400;
    if (baud_ == 460800) spd = B460800;
    cfsetispeed(&tty, spd);
    cfsetospeed(&tty, spd);

    // 8N1, no flow control
    tty.c_cflag &= ~PARENB;
    tty.c_cflag &= ~CSTOPB;
    tty.c_cflag &= ~CSIZE;
    tty.c_cflag |=  CS8;
    tty.c_cflag &= ~CRTSCTS;
    tty.c_cflag |=  CREAD | CLOCAL;

    // Raw mode
    tty.c_lflag &= ~(ICANON | ECHO | ECHOE | ISIG);
    tty.c_iflag &= ~(IXON | IXOFF | IXANY | IGNBRK);
    tty.c_oflag &= ~OPOST;

    tty.c_cc[VMIN]  = 0;
    tty.c_cc[VTIME] = 1;   // 100 ms timeout

    tcsetattr(fd_, TCSANOW, &tty);
    tcflush(fd_, TCIOFLUSH);
    RCLCPP_INFO(this->get_logger(), "Serial port %s opened.", port_.c_str());
  }

  // ── TX: ROS → Serial ─────────────────────────────────────────────────────
  void tx_callback(const SerialFrame::SharedPtr msg)
  {
    if (fd_ < 0) return;

    // Frame:  [0xAA] [device_id] [cmd_id] [len] [payload...] [crc8]
    std::vector<uint8_t> frame;
    frame.push_back(0xAA);                         // START
    frame.push_back(msg->device_id);
    frame.push_back(msg->cmd_id);
    frame.push_back(static_cast<uint8_t>(msg->payload.size()));
    for (uint8_t b : msg->payload) frame.push_back(b);
    frame.push_back(msg->crc8);

    ssize_t n = ::write(fd_, frame.data(), frame.size());
    if (n < 0) {
      RCLCPP_WARN_THROTTLE(this->get_logger(), *this->get_clock(), 3000,
        "Serial write error: %s", strerror(errno));
    }
  }

  // ── RX: Serial → ROS ─────────────────────────────────────────────────────
  void read_serial()
  {
    if (fd_ < 0) return;

    uint8_t buf[256];
    ssize_t n = ::read(fd_, buf, sizeof(buf));
    if (n <= 0) return;

    // Accumulate into rx_buffer and parse frames
    for (ssize_t i = 0; i < n; i++) rx_buf_.push_back(buf[i]);

    parse_frames();
  }

  void parse_frames()
  {
    // Look for 0xAA start byte, then [dev][cmd][len][data...][crc]
    while (rx_buf_.size() >= 5) {
      // Find start
      if (rx_buf_[0] != 0xAA) { rx_buf_.erase(rx_buf_.begin()); continue; }

      uint8_t dev  = rx_buf_[1];
      uint8_t cmd  = rx_buf_[2];
      uint8_t len  = rx_buf_[3];

      size_t frame_len = 4 + len + 1;  // header(4) + payload(len) + crc(1)
      if (rx_buf_.size() < frame_len) return;  // Need more bytes

      std::vector<uint8_t> payload(rx_buf_.begin() + 4, rx_buf_.begin() + 4 + len);
      uint8_t crc = rx_buf_[4 + len];

      // Verify CRC
      uint8_t calc_crc = compute_crc8(cmd, payload);
      if (crc != calc_crc) {
        RCLCPP_WARN_THROTTLE(this->get_logger(), *this->get_clock(), 5000,
          "CRC mismatch on RX frame cmd=0x%02X", cmd);
        rx_buf_.erase(rx_buf_.begin());
        continue;
      }

      // Publish decoded frame
      SerialFrame msg;
      msg.header.stamp = this->now();
      msg.device_id    = dev;
      msg.cmd_id       = cmd;
      msg.payload      = payload;
      msg.crc8         = crc;
      rx_pub_->publish(msg);

      // Dispatch: decode specific status messages
      dispatch_rx(dev, cmd, payload);

      // Consume frame
      rx_buf_.erase(rx_buf_.begin(), rx_buf_.begin() + frame_len);
    }
  }

  void dispatch_rx(uint8_t dev, uint8_t cmd, const std::vector<uint8_t>& payload)
  {
    (void)dev;  // ESP32 = 0x01

    // Example: CMD 0x11 = CHASSIS_ENCODER_STATUS
    if (cmd == 0x11 && payload.size() >= 4) {
      MechanismStatus status;
      status.header.stamp  = this->now();
      status.mechanism_id  = "chassis";
      status.state         = 1;  // MOVING
      // Decode encoder ticks (example: 2 bytes per axis)
      status.position_mm   = 0.0f;  // Application-specific decode
      status_pub_->publish(status);
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
  rclcpp::Publisher<MechanismStatus>::SharedPtr   status_pub_;
  rclcpp::Subscription<SerialFrame>::SharedPtr    tx_sub_;
  rclcpp::TimerBase::SharedPtr                    read_timer_;

  int         fd_;
  std::string port_;
  int         baud_;
  std::vector<uint8_t> rx_buf_;
};

int main(int argc, char ** argv)
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<SerialBridgeNode>());
  rclcpp::shutdown();
  return 0;
}
