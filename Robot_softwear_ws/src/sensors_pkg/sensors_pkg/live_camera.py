#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
import cv2

class LiveCameraNode(Node):
    def __init__(self):
        super().__init__('live_camera_node')
        self.publisher = self.create_publisher(Image, 'camera', 10)
        self.bridge = CvBridge()
        self.camera = cv2.VideoCapture(0)  
        self.timer = self.create_timer(1.0 / 30, self.publish_image)  
        self.get_logger().info("Camera is on ...")

    def publish_image(self):
        ret, frame = self.camera.read()
        if ret:
            image_message = self.bridge.cv2_to_imgmsg(frame, encoding='bgr8')
            self.publisher.publish(image_message)

def main(args=None):
    rclpy.init(args=args)
    node = LiveCameraNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()