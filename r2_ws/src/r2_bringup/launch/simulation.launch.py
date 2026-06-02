"""
r2_bringup/launch/simulation.launch.py
Simulation / test mode launch.
Starts only the nodes that don't need hardware:
  - Robot description (URDF + TF)
  - Mission control (state machine)
  - Detection nodes (with use_sim_time=true)

No serial bridges or actuator nodes — they'd fail without
real ESP32/Arduino. Use this for:
  - Software-only testing
  - RViz visualisation
  - State machine validation
"""

import os
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration
from ament_index_python.packages import get_package_share_directory


def generate_launch_description():
    desc_pkg    = get_package_share_directory("r2_description")
    det_pkg     = get_package_share_directory("r2_detection")
    mission_pkg = get_package_share_directory("r2_mission_control")

    return LaunchDescription([
        DeclareLaunchArgument("use_sim_time", default_value="true"),

        # Robot description
        IncludeLaunchDescription(
            PythonLaunchDescriptionSource(
                os.path.join(desc_pkg, "launch", "display.launch.py")
            ),
            launch_arguments={"use_sim_time": "true"}.items(),
        ),

        # Detection (will use simulated/recorded camera data)
        IncludeLaunchDescription(
            PythonLaunchDescriptionSource(
                os.path.join(det_pkg, "launch", "detection.launch.py")
            ),
            launch_arguments={"use_sim_time": "true"}.items(),
        ),

        # Mission control
        IncludeLaunchDescription(
            PythonLaunchDescriptionSource(
                os.path.join(mission_pkg, "launch", "mission_control.launch.py")
            ),
            launch_arguments={"use_sim_time": "true"}.items(),
        ),
    ])
