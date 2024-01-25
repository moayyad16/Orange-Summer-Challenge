# Orange Summer Challenge 
## Overview
During the summer of 2023, I began training at Orange Digital Village, where we decided to embark on a project involving an agricultural robot. The primary function of this robot is to eradicate weeds by accurately spraying them with a weed-specific pesticide.

![Picture1](https://github.com/moayyad16/Orange-Summer-Challenge-/assets/93573570/e190852d-fe2f-4d86-81a4-5f2acdfb36c2)

Here, I'm going to provide you with a summary of the work conducted by the AI team.

## Object Detectiom Model 
We began our work by searching for a dataset to train the detection model. The dataset required for such a robot should be collected from fields to match the distribution of the robot's camera view. Due to the scarcity of neighboring farms in Amman, we were unable to gather data ourselves. Consequently, we utilized a <a href="https://www.kaggle.com/datasets/ali7432/potato-plants-dataset">potato plants dataset</a> from Kaggle that matched our desired distribution. The dataset had been preprocessed by the owner for a classification problem. Therefore, we relabeled the images using <a href="https://pypi.org/project/labelImg/1.4.0/">LabelImg</a> to repurpose them for training a detection model.

To train the model, we decided to use <a href="https://github.com/ultralytics/ultralytics">YOLOv8</a>, fine-tuning it for 100 epochs on our images. Although the dataset was relatively small, with the help of YOLO, the model achieved very good precision and accuracy.

![train_batch0](https://github.com/moayyad16/Orange-Summer-Challenge-/assets/93573570/6d52068b-e8c6-498a-bdd5-584f399b939c)

## Leaf Disease
The leaf disease model is used to assess the health of plants based on the color of their leaves. We plan to use this model to estimate the yield size. We utilized a dataset from Kaggle consisting of 1200 images, which are divided into training, validation, and test sets. Each image is labeled as one of three classes: healthy, Early_blight, or Late_blight. You can view it <a href="https://www.kaggle.com/datasets/muhammadardiputra/potato-leaf-disease-dataset">here</a>.

The model was trained using TensorFlow and employs a Convolutional Neural Network (CNN) architecture.

## Robot softwear
We utilized ROS2 (Robot Operating System) to deploy the software. The robot is capable of processing live images from two cameras mounted on its wings. The video received by the camera node is then sent to the detection model to identify and classify the weeds. After detection, the model sends the coordinates of the weed location to the system. This information is used to guide the sprayer and wheels to stop at and precisely target the desired location for spraying.


![WhatsApp Image 2023-10-2hhh4 at 8 39 20 PM](https://github.com/moayyad16/Orange-Summer-Challenge/assets/93573570/da924e11-1ac4-42a8-b872-0a74187ccddf)

And this is the brototype of our farmer  









