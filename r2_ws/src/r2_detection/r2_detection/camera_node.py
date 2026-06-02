#!/usr/bin/env python3
"""
r2_detection/camera_node.py
============================
Publishes raw camera images from a V4L2 camera (Raspberry Pi camera or USB
webcam) as sensor_msgs/Image on /r2/camera/image_raw.

Supports two camera IDs:
  - camera_id 0 : Main Raspberry Pi camera (spearhead detection)
  - camera_id 1 : Phone / USB camera (KFS box detection)

Parameters (set in config/detection_params.yaml):
  camera_id    : int   - V4L2 device index (default 0)
  width        : int   - Capture width  (default 640)
  height       : int   - Capture height (default 480)
  fps          : int   - Target frame rate (default 30)
  topic_prefix : str   - Namespace prefix (default /r2/camera)
"""

import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image, CameraInfo
from std_msgs.msg import Header
import cv2
import numpy as np


class CameraNode(Node):
    """Reads frames from a V4L2/USB/Pi camera and publishes as ROS Image."""

    def __init__(self):
        super().__init__("camera_node")

        # ── Parameters ──────────────────────────────────────────────────────
        self.declare_parameter("camera_id", 0)
        self.declare_parameter("width", 640)
        self.declare_parameter("height", 480)
        self.declare_parameter("fps", 30)
        self.declare_parameter("topic_prefix", "/r2/camera")

        cam_id       = self.get_parameter("camera_id").value
        width        = self.get_parameter("width").value
        height       = self.get_parameter("height").value
        fps          = self.get_parameter("fps").value
        topic_prefix = self.get_parameter("topic_prefix").value

        # ── Publisher ────────────────────────────────────────────────────────
        self._image_pub = self.create_publisher(
            Image, f"{topic_prefix}/image_raw", 10
        )

        # ── OpenCV capture ──────────────────────────────────────────────────
        self._cap = cv2.VideoCapture(cam_id, cv2.CAP_V4L2)
        self._cap.set(cv2.CAP_PROP_FRAME_WIDTH,  width)
        self._cap.set(cv2.CAP_PROP_FRAME_HEIGHT, height)
        self._cap.set(cv2.CAP_PROP_FPS,          fps)

        if not self._cap.isOpened():
            self.get_logger().error(f"Cannot open camera {cam_id}")
        else:
            self.get_logger().info(
                f"Camera {cam_id} opened @ {width}x{height} {fps}fps → {topic_prefix}/image_raw"
            )

        # ── Timer at requested FPS ───────────────────────────────────────────
        self._timer = self.create_timer(1.0 / fps, self._capture_callback)

    def _capture_callback(self):
        """Read a frame and publish it."""
        if not self._cap.isOpened():
            return

        ret, frame = self._cap.read()
        if not ret:
            self.get_logger().warn("Camera frame grab failed", throttle_duration_sec=5)
            return

        msg = self._cv2_to_imgmsg(frame)
        self._image_pub.publish(msg)

    @staticmethod
    def _cv2_to_imgmsg(frame: np.ndarray) -> Image:
        """Convert OpenCV BGR frame to sensor_msgs/Image (avoids cv_bridge dep)."""
        msg = Image()
        msg.header = Header()
        msg.header.stamp = rclpy.clock.Clock().now().to_msg()
        msg.height = frame.shape[0]
        msg.width  = frame.shape[1]
        msg.encoding = "bgr8"
        msg.is_bigendian = False
        msg.step = frame.shape[1] * 3
        msg.data = frame.tobytes()
        return msg

    def destroy_node(self):
        if self._cap.isOpened():
            self._cap.release()
        super().destroy_node()


def main(args=None):
    rclpy.init(args=args)
    node = CameraNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == "__main__":
    main()
