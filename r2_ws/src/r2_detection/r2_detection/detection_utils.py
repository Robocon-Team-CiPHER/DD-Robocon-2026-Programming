#!/usr/bin/env python3
"""
r2_detection/detection_utils.py
================================
Shared utility functions for all detection nodes.
- Image decoding (ROS Image → OpenCV)
- Colour-based masking helpers
- Distance estimation from known object size
"""

import cv2
import numpy as np
from sensor_msgs.msg import Image


# ── ROS Image → OpenCV ─────────────────────────────────────────────────────

def imgmsg_to_cv2(msg: Image) -> np.ndarray:
    """Decode a sensor_msgs/Image (bgr8 or rgb8) into a numpy array."""
    dtype = np.uint8
    channels = 3 if msg.encoding in ("bgr8", "rgb8") else 1
    arr = np.frombuffer(msg.data, dtype=dtype).reshape(
        (msg.height, msg.width, channels) if channels > 1 else (msg.height, msg.width)
    )
    if msg.encoding == "rgb8":
        arr = cv2.cvtColor(arr, cv2.COLOR_RGB2BGR)
    return arr.copy()


# ── Colour-range masking ───────────────────────────────────────────────────

def colour_mask(
    bgr: np.ndarray,
    lower_hsv: tuple,
    upper_hsv: tuple,
    blur_ksize: int = 5,
) -> np.ndarray:
    """Return a binary mask for pixels in [lower_hsv, upper_hsv] range."""
    blurred = cv2.GaussianBlur(bgr, (blur_ksize, blur_ksize), 0)
    hsv = cv2.cvtColor(blurred, cv2.COLOR_BGR2HSV)
    return cv2.inRange(hsv, np.array(lower_hsv), np.array(upper_hsv))


# ── Contour helpers ────────────────────────────────────────────────────────

def largest_contour(mask: np.ndarray):
    """Return the largest contour in a binary mask, or None."""
    contours, _ = cv2.findContours(mask, cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_SIMPLE)
    if not contours:
        return None
    return max(contours, key=cv2.contourArea)


def bounding_box(contour) -> tuple:
    """Return (x, y, w, h) bounding box of a contour."""
    return cv2.boundingRect(contour)


# ── Distance estimation ────────────────────────────────────────────────────

def estimate_distance_mm(
    known_width_mm: float,
    focal_length_px: float,
    perceived_width_px: float,
) -> float:
    """
    Simple pin-hole distance estimate.
    distance = (known_width * focal_length) / perceived_width
    """
    if perceived_width_px <= 0:
        return 0.0
    return (known_width_mm * focal_length_px) / perceived_width_px


# ── Focal length calibration helper ───────────────────────────────────────

def calibrate_focal_length(
    known_distance_mm: float,
    known_width_mm: float,
    perceived_width_px: float,
) -> float:
    """Calculate focal length from a single calibration measurement."""
    return (perceived_width_px * known_distance_mm) / known_width_mm
