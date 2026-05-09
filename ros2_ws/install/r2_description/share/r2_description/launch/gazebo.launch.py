from launch import LaunchDescription
from launch_ros.actions import Node
from launch.substitutions import Command
from launch_ros.parameter_descriptions import ParameterValue

from ament_index_python.packages import get_package_share_directory

import os


def generate_launch_description():

    # =========================
    # PACKAGE PATH
    # =========================

    pkg_path = get_package_share_directory('r2_description')

    # =========================
    # XACRO FILE
    # =========================

    xacro_file = os.path.join(
        pkg_path,
        'urdf',
        'r2.xacro'
    )

    # =========================
    # ROBOT DESCRIPTION
    # =========================

    robot_description = ParameterValue(
        Command([
            'xacro ',
            xacro_file
        ]),
        value_type=str
    )

    # =========================
    # LAUNCH DESCRIPTION
    # =========================

    return LaunchDescription([

        # =========================
        # ROBOT STATE PUBLISHER
        # =========================

        Node(
            package='robot_state_publisher',
            executable='robot_state_publisher',

            parameters=[{
                'robot_description': robot_description
            }],

            output='screen'
        ),

        # =========================
        # SPAWN ROBOT IN IGNITION
        # =========================

        Node(
            package='ros_gz_sim',
            executable='create',

            arguments=[
                '-topic',
                'robot_description',

                '-name',
                'r2',

                '-x', '0',
                '-y', '0',
                '-z', '0.5'
            ],

            output='screen'
        )

    ])