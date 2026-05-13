from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource

from launch_ros.actions import Node

from launch.substitutions import Command
from launch_ros.parameter_descriptions import ParameterValue

from launch.actions import TimerAction

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

            '-x', '0',
            '-y', '0',
            '-z', '0.2'
        ],

        output='screen'
    )

    # =========================
    # JOINT STATE BROADCASTER
    # =========================

    joint_state_broadcaster_spawner = Node(
        package='controller_manager',
        executable='spawner',

        arguments=[
            'joint_state_broadcaster'
        ],

        output='screen'
    )

    # =========================
    # MECANUM CONTROLLER
    # =========================

    mecanum_controller_spawner = Node(
        package='controller_manager',
        executable='spawner',

        arguments=[
            'mecanum_controller'
        ],

        output='screen'
    )

    # =========================
    # STEP CONTROLLER
    # =========================

    step_controller_spawner = Node(
        package='controller_manager',
        executable='spawner',

        arguments=[
            'step_controller'
        ],

        output='screen'
    )

    # =========================
    # VERTICAL EXPANDABLE
    # =========================

    vertical_expandable_controller_spawner = Node(
        package='controller_manager',
        executable='spawner',

        arguments=[
            'vertical_expandable_controller'
        ],

        output='screen'
    )

    # =========================
    # VERTICAL GANTRY
    # =========================

    vertical_gantry_controller_spawner = Node(
        package='controller_manager',
        executable='spawner',

        arguments=[
            'vertical_gantry_controller'
        ],

        output='screen'
    )

    # =========================
    # HORIZONTAL GANTRY
    # =========================

    horizontal_gantry_controller_spawner = Node(
        package='controller_manager',
        executable='spawner',

        arguments=[
            'horizontal_gantry_controller'
        ],

        output='screen'
    )

    # =========================
    # KFS GRIPPER CONTROLLER
    # =========================

    kfs_gripper_spawner = Node(
        package='controller_manager',
        executable='spawner',

        arguments=[
            'kfs_gripper_controller'
        ],

        output='screen'
    )

    # =========================
    # SPEARHEAD CONTROLLER
    # =========================

    spearhead_gripper_spawner = Node(
        package='controller_manager',
        executable='spawner',

        arguments=[
            'spearhead_gripper_controller'
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

        TimerAction(
            period=5.0,

            actions=[

                joint_state_broadcaster_spawner,

                mecanum_controller_spawner,

                step_controller_spawner,

                vertical_expandable_controller_spawner,

                vertical_gantry_controller_spawner,

                horizontal_gantry_controller_spawner,
                
                kfs_gripper_spawner,
                
                spearhead_gripper_spawner

            ]
        )
    ])
