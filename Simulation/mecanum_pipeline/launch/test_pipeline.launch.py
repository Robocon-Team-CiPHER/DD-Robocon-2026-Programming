from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import LogInfo, TimerAction

def generate_launch_description():
    return LaunchDescription([

        LogInfo(msg="=== MECANUM ROBOT - TURTLESIM SIMULATION ==="),
        LogInfo(msg="Step 1: Starting TurtleSim (simulates physical hardware)..."),

        # 1. TurtleSim — acts as the physical robot hardware
        Node(
            package='turtlesim',
            executable='turtlesim_node',
            name='turtlesim',
            output='screen'
        ),

        # Wait 2 seconds for TurtleSim to start before launching other nodes
        TimerAction(
            period=2.0,
            actions=[
                LogInfo(msg="Step 2: Starting ESP32 Simulator (reads hardware, calculates odometry, publishes /odom)..."),

                # 2. ESP32 Simulator — acts as your real ESP32
                # Subscribes to: /turtle1/pose (hardware input)
                # Publishes to:  /odom (same as real ESP32 will over micro-ROS)
                Node(
                    package='mecanum_pipeline',
                    executable='esp32_simulator_node',
                    name='esp32_simulator_node',
                    output='screen'
                ),
            ]
        ),

        LogInfo(msg=""),
        LogInfo(msg="=== HOW TO DRIVE THE ROBOT ==="),
        LogInfo(msg="Open a NEW terminal and run:"),
        LogInfo(msg="   ros2 run turtlesim turtle_teleop_key"),
        LogInfo(msg="Then use ARROW KEYS to drive!"),
        LogInfo(msg=""),
        LogInfo(msg="=== WATCH THE DATA ==="),
        LogInfo(msg="To see ESP32 publishing position, open a NEW terminal and run:"),
        LogInfo(msg="   ros2 topic echo --field pose.pose.position /odom"),
    ])
