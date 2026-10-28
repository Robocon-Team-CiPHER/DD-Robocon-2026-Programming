import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription, AppendEnvironmentVariable
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import Command
from launch_ros.actions import Node
from launch_ros.parameter_descriptions import ParameterValue

def generate_launch_description():
    description_package = 'r2_description'
    
    # Get the share directory of your package
    pkg_share = get_package_share_directory(description_package)
    
    urdf_file_path = os.path.join(
        pkg_share, 
        'urdf', 
        'r2.urdf'
    )

    # Tell Gazebo Sim where to find your package so it can locate the 'meshes' folder
    set_gazebo_resource_path = AppendEnvironmentVariable(
        'GZ_SIM_RESOURCE_PATH',
        os.path.join(pkg_share, '..')  # Points to the parent share directory containing your package
    )

    # Process URDF file using Command
    robot_description = ParameterValue(
        Command(['xacro ', urdf_file_path]),
        value_type=str
    )

    # Robot State Publisher
    node_robot_state_publisher = Node(
        package='robot_state_publisher',
        executable='robot_state_publisher',
        output='screen',
        parameters=[{
            'robot_description': robot_description,
            'use_sim_time': True
        }]
    )

    joint_state_publisher_gui_node = Node(
        package='joint_state_publisher_gui',
        executable='joint_state_publisher_gui',
        name='joint_state_publisher_gui',
        output='screen'
    )

    # Gazebo Sim Launch
    gazebo = IncludeLaunchDescription(
        PythonLaunchDescriptionSource([os.path.join(
            get_package_share_directory('ros_gz_sim'), 'launch', 'gz_sim.launch.py')]),
        launch_arguments={'gz_args': '-r empty.sdf'}.items()
    )

    # Spawn Robot Node
    spawn_entity = Node(
        package='ros_gz_sim',
        executable='create',
        arguments=['-topic', 'robot_description', '-name', 'mobile_robot_task5', '-z', '0.1'],
        output='screen'
    )

    # ROS 2 <-> Gazebo Bridge Node for cmd_vel, odom, and clock
    bridge = Node(
        package='ros_gz_bridge',
        executable='parameter_bridge',
        arguments=[
            '/cmd_vel@geometry_msgs/msg/Twist@gz.msgs.Twist',
            '/odom@nav_msgs/msg/Odometry@gz.msgs.Odometry',
            '/clock@rosgraph_msgs/msg/Clock[gz.msgs.Clock'
        ],
        output='screen'
    )

    return LaunchDescription([
        set_gazebo_resource_path,  # <--- Added here
        node_robot_state_publisher,
        gazebo,
        spawn_entity,
        bridge,
        joint_state_publisher_gui_node
    ])