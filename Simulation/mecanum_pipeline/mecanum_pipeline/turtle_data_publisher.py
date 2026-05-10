#!/usr/bin/env python3
"""
turtle_data_publisher.py

This node subscribes to TurtleSim's /turtle1/pose and converts it into
the SAME topic format that the real ESP32 will publish later.

This lets you test the full pipeline without real hardware.

TurtleSim pose --> This Node --> /wheel_velocity (Float32MultiArray)
                             --> /robot_pose     (for debugging)

Later, you replace this node with the real ESP32 + micro-ROS.
"""

import rclpy
from rclpy.node import Node
from turtlesim.msg import Pose
from std_msgs.msg import Float32MultiArray
from geometry_msgs.msg import Twist
import math


class TurtleDataPublisher(Node):
    def __init__(self):
        super().__init__('turtle_data_publisher')

        # Subscribe to turtlesim pose
        self.pose_sub = self.create_subscription(
            Pose,
            '/turtle1/pose',
            self.pose_callback,
            10
        )

        # Publish wheel velocities (same format ESP32 will use later)
        # For a mecanum robot: [front_left, front_right, rear_left, rear_right]
        # For now we simulate from turtle's linear + angular velocity
        self.wheel_vel_pub = self.create_publisher(
            Float32MultiArray,
            '/wheel_velocity',
            10
        )

        # Store previous pose for velocity calculation
        self.prev_pose = None
        self.prev_time = None

        # Robot parameters (same as your real mecanum robot)
        self.wheel_radius = 0.05       # meters
        self.wheel_separation_x = 0.1  # front-to-back half distance
        self.wheel_separation_y = 0.1  # left-to-right half distance

        self.get_logger().info('🐢 Turtle Data Publisher started!')
        self.get_logger().info('Subscribing to /turtle1/pose')
        self.get_logger().info('Publishing to /wheel_velocity (simulated)')

    def pose_callback(self, msg: Pose):
        """
        Convert turtle's linear_velocity and angular_velocity
        into 4 mecanum wheel velocities.

        This is the INVERSE KINEMATICS of a mecanum robot:
        Given robot velocity (vx, vy, omega) -> calculate each wheel speed
        """
        # Turtle gives us linear velocity and angular velocity
        vx = msg.linear_velocity        # forward speed
        vy = 0.0                        # turtle can't move sideways
        omega = msg.angular_velocity    # rotation speed

        # Mecanum inverse kinematics:
        # Each wheel speed = (1/r) * (vx ± vy ± (Lx+Ly)*omega)
        Lx = self.wheel_separation_x
        Ly = self.wheel_separation_y
        r = self.wheel_radius

        fl = (1.0 / r) * (vx - vy - (Lx + Ly) * omega)  # front left
        fr = (1.0 / r) * (vx + vy + (Lx + Ly) * omega)  # front right
        rl = (1.0 / r) * (vx + vy - (Lx + Ly) * omega)  # rear left
        rr = (1.0 / r) * (vx - vy + (Lx + Ly) * omega)  # rear right

        # Publish as Float32MultiArray (same format ESP32 will use)
        wheel_msg = Float32MultiArray()
        wheel_msg.data = [float(fl), float(fr), float(rl), float(rr)]
        self.wheel_vel_pub.publish(wheel_msg)

        self.get_logger().debug(
            f'Wheel velocities: FL={fl:.2f} FR={fr:.2f} RL={rl:.2f} RR={rr:.2f}'
        )


def main(args=None):
    rclpy.init(args=args)
    node = TurtleDataPublisher()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
