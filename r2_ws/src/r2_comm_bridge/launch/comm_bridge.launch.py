"""
r2_comm_bridge/launch/comm_bridge.launch.py
Launch both serial bridge nodes (ESP32 + Arduino Mega).
"""

from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory
import os


def generate_launch_description():
    pkg = get_package_share_directory("r2_comm_bridge")
    params = os.path.join(pkg, "config", "comm_params.yaml")

    return LaunchDescription([
        DeclareLaunchArgument("use_sim_time", default_value="false"),

        # ESP32 bridge (RPi ↔ ESP32)
        Node(
            package="r2_comm_bridge",
            executable="serial_bridge_node",
            name="serial_bridge_node",
            namespace="r2",
            parameters=[params],
            output="screen",
        ),

        # Arduino bridge (RPi ↔ Arduino Mega, or ESP32 relay)
        Node(
            package="r2_comm_bridge",
            executable="arduino_bridge_node",
            name="arduino_bridge_node",
            namespace="r2",
            parameters=[params],
            output="screen",
        ),
    ])
