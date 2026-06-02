"""
r2_description/launch/display.launch.py
Launch robot_state_publisher + RViz2 for visualising R2.
"""

import os
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory


def generate_launch_description():
    pkg = get_package_share_directory("r2_description")
    urdf_path = os.path.join(pkg, "urdf", "r2.urdf")

    with open(urdf_path, "r") as f:
        robot_description = f.read()

    use_sim_time = LaunchConfiguration("use_sim_time", default="false")

    return LaunchDescription([
        DeclareLaunchArgument(
            "use_sim_time",
            default_value="false",
            description="Use simulation (Gazebo) clock",
        ),

        # Publish /robot_description and TF transforms
        Node(
            package="robot_state_publisher",
            executable="robot_state_publisher",
            name="robot_state_publisher",
            output="screen",
            parameters=[{
                "robot_description": robot_description,
                "use_sim_time": use_sim_time,
            }],
        ),

        # Publish zero joint states so TF tree is complete
        Node(
            package="joint_state_publisher",
            executable="joint_state_publisher",
            name="joint_state_publisher",
            output="screen",
        ),

        # RViz2 – loads saved config if present
        Node(
            package="rviz2",
            executable="rviz2",
            name="rviz2",
            output="screen",
            arguments=["-d", os.path.join(pkg, "config", "r2_display.rviz")],
        ),
    ])
