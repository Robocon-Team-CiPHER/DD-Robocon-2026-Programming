"""
r2_initialization/launch/initialization.launch.py
Launch all initialization nodes.
"""

from launch import LaunchDescription
from launch_ros.actions import Node


def generate_launch_description():
    return LaunchDescription([
        Node(
            package="r2_initialization",
            executable="system_check_node.py",
            name="system_check_node",
            namespace="r2",
            output="screen",
        ),
        Node(
            package="r2_initialization",
            executable="esp32_handshake_node.py",
            name="esp32_handshake_node",
            namespace="r2",
            output="screen",
        ),
        Node(
            package="r2_initialization",
            executable="startup_monitor_node.py",
            name="startup_monitor_node",
            namespace="r2",
            output="screen",
        ),
    ])
