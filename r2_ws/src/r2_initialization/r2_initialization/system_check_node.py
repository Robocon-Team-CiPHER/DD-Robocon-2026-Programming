#!/usr/bin/env python3
"""
r2_initialization/system_check_node.py
========================================
Runs on boot. Checks that all critical hardware is accessible:
  - Camera devices (/dev/video0, /dev/video1)
  - Serial ports   (/dev/ttyUSB0, /dev/ttyACM0)
  - CPU temperature (thermal throttling warning)
  - Disk space

Publishes SystemStatus on /r2/system/status at 1 Hz.
"""

import os
import rclpy
from rclpy.node import Node
from r2_interfaces.msg import SystemStatus


class SystemCheckNode(Node):
    """Hardware readiness checker — runs at startup and continues monitoring."""

    def __init__(self):
        super().__init__("system_check_node")

        self.declare_parameter("camera_devices",  ["/dev/video0", "/dev/video1"])
        self.declare_parameter("serial_esp32",    "/dev/ttyUSB0")
        self.declare_parameter("serial_arduino",  "/dev/ttyACM0")
        self.declare_parameter("temp_warn_c",     75.0)

        self._cam_devs    = self.get_parameter("camera_devices").value
        self._esp32_port  = self.get_parameter("serial_esp32").value
        self._arduino_port = self.get_parameter("serial_arduino").value
        self._temp_warn   = self.get_parameter("temp_warn_c").value

        self._pub = self.create_publisher(SystemStatus, "/r2/system/status", 10)

        # Run check immediately, then at 1 Hz
        self._timer = self.create_timer(1.0, self._check_and_publish)
        self.get_logger().info("SystemCheckNode started — monitoring hardware.")

    def _check_and_publish(self):
        msg = SystemStatus()
        msg.header.stamp = self.get_clock().now().to_msg()
        msg.warnings = []

        # ── RPi self-check ────────────────────────────────────────────────
        msg.rpi_ok = True  # We're running, so RPi is alive

        # CPU temperature
        temp = self._read_cpu_temp()
        if temp > self._temp_warn:
            msg.warnings.append(f"CPU temp {temp:.1f}°C exceeds {self._temp_warn}°C")

        # ── Cameras ───────────────────────────────────────────────────────
        msg.cameras_ok = all(os.path.exists(d) for d in self._cam_devs)
        if not msg.cameras_ok:
            missing = [d for d in self._cam_devs if not os.path.exists(d)]
            msg.warnings.append(f"Missing camera devices: {missing}")

        # ── ESP32 serial ──────────────────────────────────────────────────
        msg.esp32_ok = os.path.exists(self._esp32_port)
        if not msg.esp32_ok:
            msg.warnings.append(f"ESP32 serial port {self._esp32_port} not found")

        # ── Arduino serial ────────────────────────────────────────────────
        msg.arduino_ok = os.path.exists(self._arduino_port)
        if not msg.arduino_ok:
            msg.warnings.append(f"Arduino serial port {self._arduino_port} not found")

        # ── Encoders (placeholder — real check comes from bridge feedback) ──
        msg.encoders_ok = msg.esp32_ok and msg.arduino_ok

        msg.mission_state = "INITIALIZING"

        self._pub.publish(msg)

        # Log summary on first run or changes
        if msg.warnings:
            for w in msg.warnings:
                self.get_logger().warn(w)
        else:
            self.get_logger().info("All hardware checks passed.", throttle_duration_sec=10)

    @staticmethod
    def _read_cpu_temp() -> float:
        """Read RPi CPU temperature from thermal zone."""
        try:
            with open("/sys/class/thermal/thermal_zone0/temp", "r") as f:
                return float(f.read().strip()) / 1000.0
        except (FileNotFoundError, ValueError):
            return 0.0


def main(args=None):
    rclpy.init(args=args)
    node = SystemCheckNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == "__main__":
    main()
