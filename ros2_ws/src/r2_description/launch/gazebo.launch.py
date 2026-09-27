from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription
from launch.actions import SetEnvironmentVariable
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
        'arena',
        'arena.sdf'
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

    gz_resource_path = SetEnvironmentVariable(
        name='GZ_SIM_RESOURCE_PATH',
        value=os.path.join(
            get_package_share_directory('r2_description')
        )
    )
    
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
    # ROBOT STATE PUBLISHER
    # =========================

    robot_state_publisher = Node(
        package='robot_state_publisher',
        executable='robot_state_publisher',

        parameters=[{
            'robot_description': robot_description,
            'use_sim_time': True
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
    # SPAWN ROBOT
    # =========================

    spawn_robot = Node(
        package='ros_gz_sim',
        executable='create',

        arguments=[
            '-topic',
            'robot_description',

            '-name',
            'r2',

            '-x', '5.3',
            '-y', '1.6',
            '-z', '0.2',

            '-Y', '3.14'
        ],

        output='screen'
    )

    ros_gz_bridge_config = os.path.join(
        pkg_path,
        'config',
        'bridge.yaml'
    )
    
    ros_gz_bridge = Node(
        package='ros_gz_bridge',
        executable='parameter_bridge',
        parameters=[{'config_file': ros_gz_bridge_config}],
        output='screen'
    )

    # =========================
    # LAUNCH DESCRIPTION
    # =========================

    return LaunchDescription([
        gz_resource_path,
        
        gazebo,

        robot_state_publisher,

        joint_state_publisher,

        ros_gz_bridge,
        
        spawn_robot
    ])