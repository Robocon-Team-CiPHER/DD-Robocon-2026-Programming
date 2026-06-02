"""
r2_bringup/launch/actuation_only.launch.py
Launch only the actuation subsystem + comm bridges.
Useful for testing mechanisms without cameras.
"""

import os
from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from ament_index_python.packages import get_package_share_directory


def generate_launch_description():
    comm_pkg = get_package_share_directory("r2_comm_bridge")
    act_pkg  = get_package_share_directory("r2_actuation")

    return LaunchDescription([
        IncludeLaunchDescription(
            PythonLaunchDescriptionSource(
                os.path.join(comm_pkg, "launch", "comm_bridge.launch.py")
            ),
        ),
        IncludeLaunchDescription(
            PythonLaunchDescriptionSource(
                os.path.join(act_pkg, "launch", "actuation.launch.py")
            ),
        ),
    ])
