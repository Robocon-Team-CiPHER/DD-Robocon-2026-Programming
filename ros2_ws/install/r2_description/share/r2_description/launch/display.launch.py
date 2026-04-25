from launch import LaunchDescription
from launch_ros.actions import Node
from launch.substitutions import Command
from launch_ros.parameter_descriptions import ParameterValue

def generate_launch_description():

    robot_description = ParameterValue(
        Command(['xacro ', 'src/r2_description/urdf/r2.xacro']),
        value_type=str
    )

    return LaunchDescription([

        # Joint State Publisher
        Node(
            package='joint_state_publisher',
            executable='joint_state_publisher'
        ),

        # Robot State Publisher
        Node(
            package='robot_state_publisher',
            executable='robot_state_publisher',
            parameters=[{'robot_description': robot_description}]
        ),

        # RViz
        Node(
            package='rviz2',
            executable='rviz2'
        )
    ])