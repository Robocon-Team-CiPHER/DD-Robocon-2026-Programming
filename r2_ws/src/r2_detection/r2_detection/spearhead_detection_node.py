#!/usr/bin/env python3
"""
r2_detection/spearhead_detection_node.py
==========================================
Detects the spearhead rack at ~500 mm height using OpenCV.

Algorithm:
  1. Subscribe to /r2/camera/image_raw
  2. Apply HSV colour mask tuned to the spearhead rack colour
  3. Find largest contour → bounding box
  4. Estimate distance from known rack width (150 mm)
  5. Publish DetectionResult on /r2/detection/spearhead
  6. Offer TriggerDetection service on /r2/detection/trigger_spearhead

Parameters (detection_params.yaml):
  focal_length_px     : float  - Camera focal length in pixels (calibrate!)
  spearhead_width_mm  : float  - Known spearhead width (default 150)
  confidence_area_min : int    - Min contour area to count as detection
  hsv_lower           : [H,S,V]
  hsv_upper           : [H,S,V]
"""

import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from sensor_msgs.msg import RegionOfInterest
from r2_interfaces.msg import DetectionResult
from r2_interfaces.srv import TriggerDetection

import cv2
import numpy as np
from .detection_utils import imgmsg_to_cv2, colour_mask, largest_contour, bounding_box, estimate_distance_mm


class SpearheadDetectionNode(Node):
    """Detects the spearhead rack using colour segmentation."""

    def __init__(self):
        super().__init__("spearhead_detection_node")

        # ── Parameters ──────────────────────────────────────────────────────
        self.declare_parameter("focal_length_px",     600.0)
        self.declare_parameter("spearhead_width_mm",  150.0)
        self.declare_parameter("confidence_area_min", 500)
        self.declare_parameter("hsv_lower", [0, 100, 100])
        self.declare_parameter("hsv_upper", [15, 255, 255])
        self.declare_parameter("target_height_mm",    500.0)  # detection height reference

        self._focal    = self.get_parameter("focal_length_px").value
        self._width_mm = self.get_parameter("spearhead_width_mm").value
        self._min_area = self.get_parameter("confidence_area_min").value
        self._hsv_lo   = tuple(self.get_parameter("hsv_lower").value)
        self._hsv_hi   = tuple(self.get_parameter("hsv_upper").value)

        self._latest_result: DetectionResult | None = None

        # ── Sub / Pub ────────────────────────────────────────────────────────
        self._img_sub = self.create_subscription(
            Image, "/r2/camera/image_raw", self._image_callback, 10
        )
        self._det_pub = self.create_publisher(
            DetectionResult, "/r2/detection/spearhead", 10
        )

        # ── Service ──────────────────────────────────────────────────────────
        self._srv = self.create_service(
            TriggerDetection,
            "/r2/detection/trigger_spearhead",
            self._trigger_callback,
        )

        self.get_logger().info("SpearheadDetectionNode ready.")

    # ── Image callback ──────────────────────────────────────────────────────

    def _image_callback(self, msg: Image):
        frame = imgmsg_to_cv2(msg)
        h, w  = frame.shape[:2]

        mask    = colour_mask(frame, self._hsv_lo, self._hsv_hi)
        cnt     = largest_contour(mask)

        result = DetectionResult()
        result.header       = msg.header
        result.target_type  = "spearhead"

        if cnt is not None and cv2.contourArea(cnt) >= self._min_area:
            x, y, bw, bh = bounding_box(cnt)
            dist = estimate_distance_mm(self._width_mm, self._focal, bw)

            cx = x + bw / 2
            cy = y + bh / 2

            result.detected       = True
            result.distance_mm    = dist
            result.offset_x_mm    = (cx - w / 2) * dist / self._focal
            result.offset_y_mm    = (cy - h / 2) * dist / self._focal
            result.confidence     = min(1.0, cv2.contourArea(cnt) / 20000.0)
            roi = RegionOfInterest()
            roi.x_offset, roi.y_offset = int(x), int(y)
            roi.width, roi.height = int(bw), int(bh)
            result.bounding_box   = roi
        else:
            result.detected    = False
            result.confidence  = 0.0

        self._latest_result = result
        self._det_pub.publish(result)

    # ── Service callback ─────────────────────────────────────────────────────

    def _trigger_callback(
        self,
        request: TriggerDetection.Request,
        response: TriggerDetection.Response,
    ) -> TriggerDetection.Response:
        if self._latest_result is not None:
            response.success = self._latest_result.detected
            response.result  = self._latest_result
        else:
            response.success = False
        return response


def main(args=None):
    rclpy.init(args=args)
    node = SpearheadDetectionNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == "__main__":
    main()
