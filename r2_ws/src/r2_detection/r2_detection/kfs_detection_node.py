#!/usr/bin/env python3
"""
r2_detection/kfs_detection_node.py
=====================================
Detects KFS boxes (350 × 350 × 350 mm cubes) using the phone camera.

Algorithm:
  1. Subscribe to /r2/kfs_camera/image_raw
  2. Apply colour mask for KFS box colour
  3. Morphological cleanup → find contour
  4. Check aspect ratio (near-square = KFS box)
  5. Estimate distance from known 350 mm side
  6. Publish DetectionResult on /r2/detection/kfs_box
  7. Offer TriggerDetection service on /r2/detection/trigger_kfs

Parameters: see detection_params.yaml
"""

import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image, RegionOfInterest
from r2_interfaces.msg import DetectionResult
from r2_interfaces.srv import TriggerDetection

import cv2
import numpy as np
from .detection_utils import imgmsg_to_cv2, colour_mask, largest_contour, bounding_box, estimate_distance_mm


class KFSDetectionNode(Node):
    """Detects KFS boxes (350×350×350 mm cubes) for gripping."""

    KFS_SIDE_MM = 350.0  # Physical box dimension

    def __init__(self):
        super().__init__("kfs_detection_node")

        self.declare_parameter("focal_length_px",     580.0)
        self.declare_parameter("confidence_area_min", 400)
        self.declare_parameter("hsv_lower", [20, 80, 80])   # Adjust to actual KFS colour
        self.declare_parameter("hsv_upper", [40, 255, 255])
        self.declare_parameter("aspect_ratio_tol", 0.4)     # Tolerance for square check

        self._focal    = self.get_parameter("focal_length_px").value
        self._min_area = self.get_parameter("confidence_area_min").value
        self._hsv_lo   = tuple(self.get_parameter("hsv_lower").value)
        self._hsv_hi   = tuple(self.get_parameter("hsv_upper").value)
        self._ar_tol   = self.get_parameter("aspect_ratio_tol").value

        self._latest_result: DetectionResult | None = None

        self._img_sub = self.create_subscription(
            Image, "/r2/kfs_camera/image_raw", self._image_callback, 10
        )
        self._det_pub = self.create_publisher(
            DetectionResult, "/r2/detection/kfs_box", 10
        )
        self._srv = self.create_service(
            TriggerDetection,
            "/r2/detection/trigger_kfs",
            self._trigger_callback,
        )
        self.get_logger().info("KFSDetectionNode ready.")

    def _image_callback(self, msg: Image):
        frame = imgmsg_to_cv2(msg)
        h, w  = frame.shape[:2]

        mask = colour_mask(frame, self._hsv_lo, self._hsv_hi)
        # Morphological cleanup
        kernel = cv2.getStructuringElement(cv2.MORPH_RECT, (7, 7))
        mask = cv2.morphologyEx(mask, cv2.MORPH_CLOSE, kernel)
        mask = cv2.morphologyEx(mask, cv2.MORPH_OPEN,  kernel)

        cnt = largest_contour(mask)

        result = DetectionResult()
        result.header      = msg.header
        result.target_type = "kfs_box"

        if cnt is not None and cv2.contourArea(cnt) >= self._min_area:
            x, y, bw, bh = bounding_box(cnt)
            # Square-ness check
            ar = bw / bh if bh > 0 else 0
            is_square = abs(ar - 1.0) < self._ar_tol

            if is_square:
                dist = estimate_distance_mm(self.KFS_SIDE_MM, self._focal, bw)
                cx = x + bw / 2
                cy = y + bh / 2
                result.detected    = True
                result.distance_mm = dist
                result.offset_x_mm = (cx - w / 2) * dist / self._focal
                result.offset_y_mm = (cy - h / 2) * dist / self._focal
                result.confidence  = min(1.0, cv2.contourArea(cnt) / 30000.0)
                roi = RegionOfInterest()
                roi.x_offset, roi.y_offset = int(x), int(y)
                roi.width, roi.height = int(bw), int(bh)
                result.bounding_box = roi
            else:
                result.detected   = False
                result.confidence = 0.1
        else:
            result.detected   = False
            result.confidence = 0.0

        self._latest_result = result
        self._det_pub.publish(result)

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
    node = KFSDetectionNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == "__main__":
    main()
