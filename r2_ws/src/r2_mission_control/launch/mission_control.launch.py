"""
r2_mission_control/launch/mission_control.launch.py
Launch the mission state machine node.
"""

from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory
import os


def generate_launch_description():
    pkg = get_package_share_directory("r2_mission_control")
    params = os.path.join(pkg, "config", "mission_params.yaml")

    return LaunchDescription([
        DeclareLaunchArgument("use_sim_time", default_value="false"),

        Node(
            package="r2_mission_control",
            executable="mission_state_machine_node",
            name="mission_state_machine_node",
            namespace="r2",
            parameters=[params, {"use_sim_time": LaunchConfiguration("use_sim_time")}],
            output="screen",
        ),
    ])
