#!/usr/bin/env python3
"""
r2_detection/ttt_detection_node.py
=====================================
Detects the Tic Tac Toe rack in the Martial Arena region.

Rack specs:
  - 400 mm table height
  - 1600 mm wide, 2000 mm tall including platform
  - Internal grid spacing 500 mm

Algorithm:
  1. Detect vertical/horizontal lines using Canny + HoughLinesP
  2. Find grid intersections (rack corners)
  3. Estimate rack distance from known 1600 mm width
  4. Identify grid cells for KFS box placement (2nd row)
  5. Publish DetectionResult + cell positions
"""

import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image, RegionOfInterest
from r2_interfaces.msg import DetectionResult
from r2_interfaces.srv import TriggerDetection

import cv2
import numpy as np
from .detection_utils import imgmsg_to_cv2, estimate_distance_mm


class TTTDetectionNode(Node):
    """Detects the Tic Tac Toe rack for Martial Arena placement."""

    RACK_WIDTH_MM = 1600.0

    def __init__(self):
        super().__init__("ttt_detection_node")

        self.declare_parameter("focal_length_px",  600.0)
        self.declare_parameter("canny_threshold1", 50)
        self.declare_parameter("canny_threshold2", 150)
        self.declare_parameter("hough_threshold",  80)
        self.declare_parameter("min_line_length",  80)
        self.declare_parameter("max_line_gap",     20)

        self._focal     = self.get_parameter("focal_length_px").value
        self._canny_t1  = self.get_parameter("canny_threshold1").value
        self._canny_t2  = self.get_parameter("canny_threshold2").value
        self._hough_t   = self.get_parameter("hough_threshold").value
        self._min_ll    = self.get_parameter("min_line_length").value
        self._max_lg    = self.get_parameter("max_line_gap").value

        self._latest_result: DetectionResult | None = None

        self._img_sub = self.create_subscription(
            Image, "/r2/camera/image_raw", self._image_callback, 10
        )
        self._det_pub = self.create_publisher(
            DetectionResult, "/r2/detection/ttt_rack", 10
        )
        self._srv = self.create_service(
            TriggerDetection,
            "/r2/detection/trigger_ttt",
            self._trigger_callback,
        )
        self.get_logger().info("TTTDetectionNode ready.")

    def _image_callback(self, msg: Image):
        frame = imgmsg_to_cv2(msg)
        h, w  = frame.shape[:2]
        gray  = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)
        edges = cv2.Canny(gray, self._canny_t1, self._canny_t2)

        lines = cv2.HoughLinesP(
            edges,
            rho=1,
            theta=np.pi / 180,
            threshold=self._hough_t,
            minLineLength=self._min_ll,
            maxLineGap=self._max_lg,
        )

        result = DetectionResult()
        result.header      = msg.header
        result.target_type = "ttt_rack"

        h_lines, v_lines = [], []
        if lines is not None:
            for line in lines:
                x1, y1, x2, y2 = line[0]
                angle = abs(np.degrees(np.arctan2(y2 - y1, x2 - x1)))
                if angle < 20:          # Horizontal
                    h_lines.append(line[0])
                elif angle > 70:        # Vertical
                    v_lines.append(line[0])

        if len(h_lines) >= 3 and len(v_lines) >= 3:
            # Estimate rack bounding box from extreme line coords
            all_x = [l[0] for l in h_lines] + [l[2] for l in h_lines]
            all_y = [l[1] for l in v_lines] + [l[3] for l in v_lines]
            x_min, x_max = min(all_x), max(all_x)
            y_min, y_max = min(all_y), max(all_y)
            bw = x_max - x_min

            dist = estimate_distance_mm(self.RACK_WIDTH_MM, self._focal, bw)
            cx = (x_min + x_max) / 2
            cy = (y_min + y_max) / 2

            result.detected    = True
            result.distance_mm = dist
            result.offset_x_mm = (cx - w / 2) * dist / self._focal
            result.offset_y_mm = (cy - h / 2) * dist / self._focal
            result.confidence  = min(1.0, len(h_lines) / 10.0)

            roi = RegionOfInterest()
            roi.x_offset, roi.y_offset = int(x_min), int(y_min)
            roi.width,    roi.height   = int(bw),    int(y_max - y_min)
            result.bounding_box = roi
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
    node = TTTDetectionNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == "__main__":
    main()
