from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import ExecuteProcess
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
    # WORLD FILE
    # =========================

    world_file = os.path.join(
        pkg_path,
        'world',
        'arena.sdf'
    )

    # =========================
    # RVIZ CONFIG
    # =========================

    rviz_config = os.path.join(
        pkg_path,
        'rviz',
        'r2.rviz'
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
        # IGNITION GAZEBO
        # =========================

        ExecuteProcess(
            cmd=[
                'ign',
                'gazebo',
                '-r',
                world_file
            ],
            output='screen'
        ),

        # =========================
        # JOINT STATE PUBLISHER
        # =========================

        Node(
            package='joint_state_publisher',
            executable='joint_state_publisher',
            output='screen'
        ),

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
        # CAMERA BRIDGE
        # =========================

        Node(
            package='ros_gz_bridge',
            executable='parameter_bridge',
            arguments=[
                '/camera/image_raw@sensor_msgs/msg/Image@ignition.msgs.Image',
                '/camera/camera_info@sensor_msgs/msg/CameraInfo@ignition.msgs.CameraInfo'
            ],
            output='screen'
        ),

        # =========================
        # LIDAR BRIDGE
        # =========================

        Node(
            package='ros_gz_bridge',
            executable='parameter_bridge',
            arguments=[
                '/scan@sensor_msgs/msg/LaserScan@ignition.msgs.LaserScan'
            ],
            output='screen'
        ),

        # =========================
        # RVIZ2
        # =========================

        Node(
            package='rviz2',
            executable='rviz2',
            arguments=[
                '-d',
                rviz_config
            ],
            output='screen'
        )

    ])