"""
r2_actuation/launch/actuation.launch.py
Launch all actuation nodes (chassis + step climber + grippers + expansion).
"""

from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory
import os


def generate_launch_description():
    pkg = get_package_share_directory("r2_actuation")
    params = os.path.join(pkg, "config", "actuation_params.yaml")

    use_sim_time = LaunchConfiguration("use_sim_time", default="false")

    nodes = []
    for node_name in [
        "chassis_controller_node",
        "step_climber_node",
        "spearhead_gripper_node",
        "kfs_gripper_node",
        "horizontal_expansion_node",
        "vertical_expansion_node",
    ]:
        nodes.append(
            Node(
                package="r2_actuation",
                executable=node_name,
                name=node_name,
                namespace="r2",
                parameters=[params, {"use_sim_time": use_sim_time}],
                output="screen",
            )
        )

    return LaunchDescription([
        DeclareLaunchArgument("use_sim_time", default_value="false"),
        *nodes,
    ])
