"""
r2_bringup/launch/full_robot.launch.py
==========================================
Full competition launch — starts ALL R2 subsystems:
  1. Initialization (system check + handshake)
  2. Communication bridge (ESP32 + Arduino serial)
  3. Detection (cameras + OpenCV detectors)
  4. Actuation (chassis + grippers + expansion)
  5. Mission control (state machine)
  6. Robot description (URDF + robot_state_publisher)

Usage:
  ros2 launch r2_bringup full_robot.launch.py
  ros2 launch r2_bringup full_robot.launch.py use_sim_time:=true
"""

import os
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration
from ament_index_python.packages import get_package_share_directory


def generate_launch_description():
    use_sim_time = LaunchConfiguration("use_sim_time", default="false")

    # Package share directories
    init_pkg    = get_package_share_directory("r2_initialization")
    comm_pkg    = get_package_share_directory("r2_comm_bridge")
    det_pkg     = get_package_share_directory("r2_detection")
    act_pkg     = get_package_share_directory("r2_actuation")
    mission_pkg = get_package_share_directory("r2_mission_control")
    desc_pkg    = get_package_share_directory("r2_description")

    return LaunchDescription([
        DeclareLaunchArgument("use_sim_time", default_value="false",
            description="Use simulation clock if true"),

        # ── 1. Initialization ────────────────────────────────────────────
        IncludeLaunchDescription(
            PythonLaunchDescriptionSource(
                os.path.join(init_pkg, "launch", "initialization.launch.py")
            ),
        ),

        # ── 2. Communication bridges ─────────────────────────────────────
        IncludeLaunchDescription(
            PythonLaunchDescriptionSource(
                os.path.join(comm_pkg, "launch", "comm_bridge.launch.py")
            ),
        ),

        # ── 3. Detection ─────────────────────────────────────────────────
        IncludeLaunchDescription(
            PythonLaunchDescriptionSource(
                os.path.join(det_pkg, "launch", "detection.launch.py")
            ),
        ),

        # ── 4. Actuation ─────────────────────────────────────────────────
        IncludeLaunchDescription(
            PythonLaunchDescriptionSource(
                os.path.join(act_pkg, "launch", "actuation.launch.py")
            ),
        ),

        # ── 5. Mission control ───────────────────────────────────────────
        IncludeLaunchDescription(
            PythonLaunchDescriptionSource(
                os.path.join(mission_pkg, "launch", "mission_control.launch.py")
            ),
        ),

        # ── 6. Robot description (URDF + robot_state_publisher) ──────────
        IncludeLaunchDescription(
            PythonLaunchDescriptionSource(
                os.path.join(desc_pkg, "launch", "display.launch.py")
            ),
        ),
    ])
