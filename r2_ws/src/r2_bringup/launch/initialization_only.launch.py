"""
r2_bringup/launch/initialization_only.launch.py
Launch only the initialization subsystem.
Useful for hardware diagnostics on the workbench.
"""

import os
from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from ament_index_python.packages import get_package_share_directory


def generate_launch_description():
    init_pkg = get_package_share_directory("r2_initialization")

    return LaunchDescription([
        IncludeLaunchDescription(
            PythonLaunchDescriptionSource(
                os.path.join(init_pkg, "launch", "initialization.launch.py")
            ),
        ),
    ])
