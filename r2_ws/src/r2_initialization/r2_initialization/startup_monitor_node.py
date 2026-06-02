#!/usr/bin/env python3
"""
r2_initialization/startup_monitor_node.py
============================================
Monitors all initialization checks and waits for full readiness.
When all subsystems report OK, publishes a go signal.

Subscribes to:
  /r2/system/status       (SystemStatus)
  /r2/system/esp32_ready  (std_msgs/Bool)

Publishes:
  /r2/system/all_ready    (std_msgs/Bool) — True once when all checks pass
"""

import rclpy
from rclpy.node import Node
from r2_interfaces.msg import SystemStatus
from std_msgs.msg import Bool


class StartupMonitorNode(Node):
    """Aggregates all initialization checks and signals readiness."""

    def __init__(self):
        super().__init__("startup_monitor_node")

        self._system_status: SystemStatus | None = None
        self._esp32_ready = False
        self._all_ready_published = False

        self._status_sub = self.create_subscription(
            SystemStatus, "/r2/system/status", self._status_callback, 10
        )
        self._esp32_sub = self.create_subscription(
            Bool, "/r2/system/esp32_ready", self._esp32_callback, 10
        )
        self._ready_pub = self.create_publisher(Bool, "/r2/system/all_ready", 10)

        # Check at 2 Hz
        self._timer = self.create_timer(0.5, self._check_readiness)

        self.get_logger().info("StartupMonitorNode started — waiting for all systems go.")

    def _status_callback(self, msg: SystemStatus):
        self._system_status = msg

    def _esp32_callback(self, msg: Bool):
        if msg.data:
            self._esp32_ready = True
            self.get_logger().info("ESP32 handshake confirmed.")

    def _check_readiness(self):
        if self._all_ready_published:
            return

        if self._system_status is None:
            return

        s = self._system_status

        all_ok = (
            s.rpi_ok
            and s.esp32_ok
            and s.arduino_ok
            and s.cameras_ok
            and self._esp32_ready
        )

        if all_ok:
            self.get_logger().info("=" * 50)
            self.get_logger().info("  ALL SYSTEMS GO — R2 READY FOR COMPETITION")
            self.get_logger().info("=" * 50)

            ready = Bool()
            ready.data = True
            self._ready_pub.publish(ready)
            self._all_ready_published = True
        else:
            # Log what's still pending
            pending = []
            if not s.rpi_ok:       pending.append("RPi")
            if not s.esp32_ok:     pending.append("ESP32_port")
            if not s.arduino_ok:   pending.append("Arduino_port")
            if not s.cameras_ok:   pending.append("Cameras")
            if not self._esp32_ready: pending.append("ESP32_handshake")
            self.get_logger().info(
                f"Waiting for: {', '.join(pending)}",
                throttle_duration_sec=5,
            )


def main(args=None):
    rclpy.init(args=args)
    node = StartupMonitorNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == "__main__":
    main()
