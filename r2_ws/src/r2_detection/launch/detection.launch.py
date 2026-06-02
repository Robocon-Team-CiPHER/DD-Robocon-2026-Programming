"""
r2_detection/launch/detection.launch.py
Launch all detection nodes (camera + spearhead + KFS + TTT).
"""

from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory
import os


def generate_launch_description():
    pkg = get_package_share_directory("r2_detection")
    params = os.path.join(pkg, "config", "detection_params.yaml")

    use_sim_time = LaunchConfiguration("use_sim_time", default="false")

    return LaunchDescription([
        DeclareLaunchArgument("use_sim_time", default_value="false"),

        # Main camera (spearhead + TTT)
        Node(
            package="r2_detection",
            executable="camera_node.py",
            name="main_camera_node",
            namespace="r2",
            parameters=[params, {"camera_id": 0, "topic_prefix": "/r2/camera", "use_sim_time": use_sim_time}],
            output="screen",
        ),

        # Phone / KFS camera
        Node(
            package="r2_detection",
            executable="camera_node.py",
            name="kfs_camera_node",
            namespace="r2",
            parameters=[params, {"camera_id": 1, "topic_prefix": "/r2/kfs_camera", "use_sim_time": use_sim_time}],
            output="screen",
        ),

        # Spearhead detector
        Node(
            package="r2_detection",
            executable="spearhead_detection_node.py",
            name="spearhead_detection_node",
            namespace="r2",
            parameters=[params, {"use_sim_time": use_sim_time}],
            output="screen",
        ),

        # KFS box detector
        Node(
            package="r2_detection",
            executable="kfs_detection_node.py",
            name="kfs_detection_node",
            namespace="r2",
            parameters=[params, {"use_sim_time": use_sim_time}],
            output="screen",
        ),

        # Tic Tac Toe rack detector
        Node(
            package="r2_detection",
            executable="ttt_detection_node.py",
            name="ttt_detection_node",
            namespace="r2",
            parameters=[params, {"use_sim_time": use_sim_time}],
            output="screen",
        ),
    ])
