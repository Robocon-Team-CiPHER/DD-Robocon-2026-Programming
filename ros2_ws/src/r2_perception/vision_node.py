#!/usr/bin/env python3

import rclpy
from rclpy.node import Node

from sensor_msgs.msg import Image
from std_msgs.msg import String

from cv_bridge import CvBridge

from ultralytics import YOLO

import cv2


class VisionNode(Node):

    def __init__(self):

        super().__init__('vision_node')

        self.bridge = CvBridge()

        # Subscriber
        self.subscription = self.create_subscription(
            Image,
            '/camera/image_raw',
            self.image_callback,
            10
        )

        # Detection publisher
        self.publisher = self.create_publisher(
            String,
            '/detections',
            10
        )

        # Load model
        self.model = YOLO('yolov8n.pt')

        self.get_logger().info("Vision node started")


    def image_callback(self, msg):

        # Convert ROS image to OpenCV image
        frame = self.bridge.imgmsg_to_cv2(
            msg,
            desired_encoding='bgr8'
        )

        # Run YOLO
        results = self.model(frame)

        names = results[0].names

        detected_objects = []

        for box in results[0].boxes:

            cls_id = int(box.cls[0])

            class_name = names[cls_id]

            detected_objects.append(class_name)

        # Publish detections
        detection_msg = String()

        detection_msg.data = ",".join(detected_objects)

        self.publisher.publish(detection_msg)

        # Draw boxes
        annotated_frame = results[0].plot()

        cv2.imshow("YOLO Detection", annotated_frame)

        cv2.waitKey(1)


def main(args=None):

    rclpy.init(args=args)

    node = VisionNode()

    rclpy.spin(node)

    node.destroy_node()

    rclpy.shutdown()


if __name__ == '__main__':
    main()