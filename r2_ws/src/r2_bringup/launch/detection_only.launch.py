"""
r2_bringup/launch/detection_only.launch.py
Launch only the detection subsystem (cameras + detectors).
Useful for tuning OpenCV parameters without running actuators.
"""

import os
from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from ament_index_python.packages import get_package_share_directory


def generate_launch_description():
    det_pkg = get_package_share_directory("r2_detection")

    return LaunchDescription([
        IncludeLaunchDescription(
            PythonLaunchDescriptionSource(
                os.path.join(det_pkg, "launch", "detection.launch.py")
            ),
        ),
    ])
