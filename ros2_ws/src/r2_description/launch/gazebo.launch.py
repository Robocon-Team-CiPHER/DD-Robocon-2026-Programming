from launch import LaunchDescription
from launch_ros.actions import Node
from launch.substitutions import Command

def generate_launch_description():

    return LaunchDescription([

        Node(
            package='ros_gz_sim',
            executable='create',
            arguments=[
                '-string',
                Command(['xacro ', 'src/r2_description/urdf/r2.xacro']),
                '-name', 'r2'
            ]
        )

    ])
