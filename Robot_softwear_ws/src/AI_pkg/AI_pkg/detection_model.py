#!/usr/bin/env python3
import rclpy
import cv2
import torch
import torchvision.transforms as transforms
from rclpy.node import Node
from sensor_msgs.msg import Image
from interface_pkg.msg import Detection
from cv_bridge import CvBridge

# Load the model
model = torch.load('/home/moayyed/agri_bot1/best.pt', map_location=torch.device('cpu'))

class DetectionNode(Node):
    def __init__(self):
        super().__init__('detection_node')
        self.subscription = self.create_subscription(Image,'camera', self.image_callback,10)
        self.publisher = self.create_publisher(Detection, 'detected_objects_topic', 10)
        self.cv_bridge = CvBridge()
        self.get_logger().info("node is going up ...")

    def image_callback(self, msg):
        try:
            # Convert ROS Image message to OpenCV format
            cv_image = self.cv_bridge.imgmsg_to_cv2(msg, desired_encoding='bgr8')

            def perform_object_detection(cv_image, model):
                # Convert the image to a PyTorch tensor
                image_tensor = transforms.ToTensor()(cv_image).unsqueeze(0)

                 # Perform inference
                with torch.no_grad():
                 prediction = model(image_tensor)
                
                return prediction
            
            detected_objects = perform_object_detection(cv_image, model)


            # For this example, we'll simulate detected objects
            # detected_objects = [
            #     {"name": "potato", "position": (100, 100), "confidence": 0.9},
            #     {"name": "weed", "position": (200, 200), "confidence": 0.8},
            # ]

            # Publish Detection messages for each detected object
            for obj in detected_objects:
                detection_msg = Detection()
                # detection_msg.header.stamp = self.get_clock().now().to_msg()
                detection_msg.object_name = obj["name"]
                detection_msg.position.x = obj["position"][0]
                detection_msg.position.y = obj["position"][1]
                detection_msg.confidence_score = obj["confidence"]
                self.publisher.publish(detection_msg)

        except Exception as e:
            self.get_logger().error(f"Error in image_callback: {str(e)}")

def main(args=None):
    rclpy.init(args=args)
    node = DetectionNode()
    rclpy.spin(node)
    # node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
