#!/usr/bin/env python3
"""
esp32_simulator_node.py

This node exactly simulates your SMART ESP32 design.
In your design, the ESP32 reads encoders, runs PID, AND calculates Odometry.
Then it publishes the final Odometry directly over micro-ROS.

So this simulator node will:
1. Read the turtle's movement
2. Calculate the Odometry (x, y, theta)
3. Publish it directly to /odom (just like your real ESP32 will do)
"""

import rclpy
from rclpy.node import Node
from turtlesim.msg import Pose
from nav_msgs.msg import Odometry
import math

class ESP32SimulatorNode(Node):
    def __init__(self):
        super().__init__('esp32_simulator_node')

        # Listen to the "fake" hardware (TurtleSim)
        self.pose_sub = self.create_subscription(
            Pose,
            '/turtle1/pose',
            self.pose_callback,
            10
        )

        # The ESP32 publishes the final Odometry directly
        self.odom_pub = self.create_publisher(
            Odometry,
            '/odom',
            10
        )

        self.get_logger().info('🤖 Smart ESP32 Simulator started!')
        self.get_logger().info('ESP32 is calculating Odometry internally...')
        self.get_logger().info('Publishing final Odometry to /odom')

    def pose_callback(self, msg: Pose):
        # In the real ESP32, you would read encoders and calculate x, y, theta here.
        # Since this is the simulator, we just take the turtle's x, y, theta.
        x = msg.x - 5.544445 # Offset so turtle starts at 0,0
        y = msg.y - 5.544445
        theta = msg.theta

        # Create the Odometry message (This is exactly what the ESP32 will send)
        odom_msg = Odometry()
        odom_msg.header.stamp = self.get_clock().now().to_msg()
        odom_msg.header.frame_id = 'odom'
        odom_msg.child_frame_id = 'base_link'

        # Set Position
        odom_msg.pose.pose.position.x = x
        odom_msg.pose.pose.position.y = y
        
        # Convert theta to Quaternion
        odom_msg.pose.pose.orientation.z = math.sin(theta / 2.0)
        odom_msg.pose.pose.orientation.w = math.cos(theta / 2.0)

        # Publish the final data to the Raspberry Pi
        self.odom_pub.publish(odom_msg)
        
        self.get_logger().info(f'ESP32 Publishing Odom -> X:{x:.2f} Y:{y:.2f} Theta:{math.degrees(theta):.0f}°')

def main(args=None):
    rclpy.init(args=args)
    node = ESP32SimulatorNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
