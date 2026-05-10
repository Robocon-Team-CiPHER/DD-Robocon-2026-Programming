from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource

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
    # GAZEBO HARMONIC
    # =========================

    gazebo = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(
                get_package_share_directory('ros_gz_sim'),
                'launch',
                'gz_sim.launch.py'
            )
        ),
        launch_arguments={
            'gz_args': f'-r {world_file}'
        }.items()
    )

    # =========================
    # SPAWN ROBOT
    # =========================

    spawn_robot = Node(
        package='ros_gz_sim',
        executable='create',
        arguments=[
            '-topic',
            'robot_description',
            '-name',
            'r2'
        ],
        output='screen'
    )

    # =========================
    # ROBOT STATE PUBLISHER
    # =========================

    robot_state_publisher = Node(
        package='robot_state_publisher',
        executable='robot_state_publisher',
        parameters=[{
            'robot_description': robot_description
        }],
        output='screen'
    )

    # =========================
    # JOINT STATE PUBLISHER
    # =========================

    joint_state_publisher = Node(
        package='joint_state_publisher',
        executable='joint_state_publisher',
        output='screen'
    )

    # =========================
    # CAMERA BRIDGE
    # =========================

    camera_bridge = Node(
        package='ros_gz_bridge',
        executable='parameter_bridge',
        arguments=[
            '/camera/image_raw@sensor_msgs/msg/Image@gz.msgs.Image',
            '/camera/camera_info@sensor_msgs/msg/CameraInfo@gz.msgs.CameraInfo'
        ],
        output='screen'
    )

    # =========================
    # LIDAR BRIDGE
    # =========================

    lidar_bridge = Node(
        package='ros_gz_bridge',
        executable='parameter_bridge',
        arguments=[
            '/scan@sensor_msgs/msg/LaserScan@gz.msgs.LaserScan'
        ],
        output='screen'
    )

    # =========================
    # RVIZ2
    # =========================

    rviz2 = Node(
        package='rviz2',
        executable='rviz2',
        arguments=[
            '-d',
            rviz_config
        ],
        output='screen'
    )

    # =========================
    # LAUNCH DESCRIPTION
    # =========================

    return LaunchDescription([

        gazebo,

        robot_state_publisher,

        joint_state_publisher,

        spawn_robot,

        camera_bridge,

        lidar_bridge,

        rviz2

    ])