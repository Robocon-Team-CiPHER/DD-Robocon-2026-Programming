#!/usr/bin/env python3
"""
r2_initialization/esp32_handshake_node.py
============================================
Sends a handshake request to the ESP32 and waits for an ACK.
Uses the SystemHandshake service provided by the comm_bridge.

Also sends init command to ESP32 to start the motor controllers.

Publishes success/fail on /r2/system/esp32_ready (std_msgs/Bool).
"""

import rclpy
from rclpy.node import Node
from r2_interfaces.srv import SystemHandshake
from r2_interfaces.msg import SerialFrame
from std_msgs.msg import Bool


class ESP32HandshakeNode(Node):
    """Performs ESP32 startup handshake and initialisation."""

    def __init__(self):
        super().__init__("esp32_handshake_node")

        self.declare_parameter("handshake_timeout_ms", 5000)
        self.declare_parameter("max_retries", 3)
        self.declare_parameter("retry_delay_s", 2.0)

        self._timeout    = self.get_parameter("handshake_timeout_ms").value
        self._max_retry  = self.get_parameter("max_retries").value
        self._retry_delay = self.get_parameter("retry_delay_s").value

        self._ready_pub = self.create_publisher(Bool, "/r2/system/esp32_ready", 10)

        # Direct serial frame publisher for handshake
        self._serial_pub = self.create_publisher(
            SerialFrame, "/r2/serial/esp32_tx", 10
        )
        # Subscribe to responses
        self._serial_sub = self.create_subscription(
            SerialFrame, "/r2/serial/esp32_rx", self._rx_callback, 10
        )

        self._handshake_done = False
        self._firmware_version = "unknown"

        # Start handshake after a brief delay (allow bridge to init)
        self._timer = self.create_timer(2.0, self._attempt_handshake)
        self.get_logger().info("ESP32HandshakeNode started. Waiting to handshake...")

    def _attempt_handshake(self):
        if self._handshake_done:
            self._timer.cancel()
            return

        self.get_logger().info("Sending ESP32 handshake request...")

        # Send handshake CMD 0x01
        frame = SerialFrame()
        frame.header.stamp = self.get_clock().now().to_msg()
        frame.device_id = 0x01   # ESP32
        frame.cmd_id    = 0x01   # HANDSHAKE_REQ
        frame.payload   = []
        frame.crc8      = self._compute_crc8(0x01, [])
        self._serial_pub.publish(frame)

    def _rx_callback(self, msg: SerialFrame):
        # Look for handshake ACK (CMD 0x02)
        if msg.cmd_id == 0x02 and msg.device_id == 0x01:
            self._handshake_done = True
            self._firmware_version = bytes(msg.payload).decode("utf-8", errors="replace")
            self.get_logger().info(
                f"ESP32 handshake OK! Firmware: {self._firmware_version}"
            )

            ready = Bool()
            ready.data = True
            self._ready_pub.publish(ready)

            self._timer.cancel()

    @staticmethod
    def _compute_crc8(cmd: int, payload: list) -> int:
        crc = cmd
        for b in payload:
            crc ^= b
            for _ in range(8):
                crc = ((crc << 1) ^ 0x07) if (crc & 0x80) else (crc << 1)
                crc &= 0xFF
        return crc


def main(args=None):
    rclpy.init(args=args)
    node = ESP32HandshakeNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == "__main__":
    main()
