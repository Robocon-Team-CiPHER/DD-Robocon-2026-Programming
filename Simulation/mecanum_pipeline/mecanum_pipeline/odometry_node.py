#!/usr/bin/env python3
"""
odometry_node.py

This node subscribes to /wheel_velocity and calculates odometry (x, y, theta).
It publishes to /odom.

This is the SAME node you will use with the real robot.
Right now it gets data from TurtleSim (via turtle_data_publisher).
Later it gets data from the real ESP32. No code changes needed.

/wheel_velocity (from TurtleSim or ESP32)
        ↓
  This Node (forward kinematics + integration)
        ↓
  /odom (nav_msgs/Odometry)
"""

import rclpy
from rclpy.node import Node
from std_msgs.msg import Float32MultiArray
from nav_msgs.msg import Odometry
from geometry_msgs.msg import TransformStamped
import tf2_ros
import math
import time


class OdometryNode(Node):
    def __init__(self):
        super().__init__('odometry_node')

        # Subscribe to wheel velocities (from TurtleSim now, ESP32 later)
        self.wheel_sub = self.create_subscription(
            Float32MultiArray,
            '/wheel_velocity',
            self.wheel_callback,
            10
        )

        # Publish odometry
        self.odom_pub = self.create_publisher(
            Odometry,
            '/odom',
            10
        )

        # TF broadcaster (so RViz can show the robot position)
        self.tf_broadcaster = tf2_ros.TransformBroadcaster(self)

        # Robot state
        self.x = 0.0
        self.y = 0.0
        self.theta = 0.0
        self.prev_time = None

        # Robot parameters (must match turtle_data_publisher.py and real robot)
        self.wheel_radius = 0.05
        self.wheel_separation_x = 0.1
        self.wheel_separation_y = 0.1

        self.get_logger().info('📍 Odometry Node started!')
        self.get_logger().info('Subscribing to /wheel_velocity')
        self.get_logger().info('Publishing to /odom')

    def wheel_callback(self, msg: Float32MultiArray):
        """
        Receive 4 wheel velocities and calculate robot movement.

        MECANUM FORWARD KINEMATICS:
        Given wheel speeds -> calculate robot velocity (vx, vy, omega)
        Then integrate to get position (x, y, theta)
        """
        if len(msg.data) != 4:
            self.get_logger().warn(f'Expected 4 wheel values, got {len(msg.data)}')
            return

        fl, fr, rl, rr = msg.data
        r = self.wheel_radius
        Lx = self.wheel_separation_x
        Ly = self.wheel_separation_y

        # Mecanum forward kinematics:
        # vx    = (r/4) * (fl + fr + rl + rr)
        # vy    = (r/4) * (-fl + fr + rl - rr)
        # omega = (r/4) * (1/(Lx+Ly)) * (-fl + fr - rl + rr)
        vx = (r / 4.0) * (fl + fr + rl + rr)
        vy = (r / 4.0) * (-fl + fr + rl - rr)
        omega = (r / (4.0 * (Lx + Ly))) * (-fl + fr - rl + rr)

        # Time delta
        current_time = time.time()
        if self.prev_time is None:
            self.prev_time = current_time
            return

        dt = current_time - self.prev_time
        self.prev_time = current_time

        if dt <= 0 or dt > 1.0:
            return

        # Integrate position (simple Euler integration)
        # Transform velocities from robot frame to world frame
        self.x += (vx * math.cos(self.theta) - vy * math.sin(self.theta)) * dt
        self.y += (vx * math.sin(self.theta) + vy * math.cos(self.theta)) * dt
        self.theta += omega * dt

        # Keep theta between -pi and pi
        self.theta = math.atan2(math.sin(self.theta), math.cos(self.theta))

        # Create and publish odometry message
        odom_msg = Odometry()
        odom_msg.header.stamp = self.get_clock().now().to_msg()
        odom_msg.header.frame_id = 'odom'
        odom_msg.child_frame_id = 'base_link'

        # Position
        odom_msg.pose.pose.position.x = self.x
        odom_msg.pose.pose.position.y = self.y
        odom_msg.pose.pose.position.z = 0.0

        # Orientation (quaternion from theta)
        odom_msg.pose.pose.orientation.z = math.sin(self.theta / 2.0)
        odom_msg.pose.pose.orientation.w = math.cos(self.theta / 2.0)

        # Velocity
        odom_msg.twist.twist.linear.x = vx
        odom_msg.twist.twist.linear.y = vy
        odom_msg.twist.twist.angular.z = omega

        self.odom_pub.publish(odom_msg)

        # Broadcast TF transform (odom -> base_link)
        t = TransformStamped()
        t.header.stamp = odom_msg.header.stamp
        t.header.frame_id = 'odom'
        t.child_frame_id = 'base_link'
        t.transform.translation.x = self.x
        t.transform.translation.y = self.y
        t.transform.translation.z = 0.0
        t.transform.rotation.z = math.sin(self.theta / 2.0)
        t.transform.rotation.w = math.cos(self.theta / 2.0)
        self.tf_broadcaster.sendTransform(t)

        self.get_logger().info(
            f'Odom: x={self.x:.3f} y={self.y:.3f} θ={math.degrees(self.theta):.1f}°'
        )


def main(args=None):
    rclpy.init(args=args)
    node = OdometryNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
