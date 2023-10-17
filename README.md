# Orange Summer Challenge 
## Overview
During the summer of 2023, I started training in Orange Digital Village and we decided to start working on an agricultural robot, the main role of the robot is killing weeds by spraying them precisely with pesticide(weed pesticide). 

![Picture1](https://github.com/moayyad16/Orange-Summer-Challenge-/assets/93573570/e190852d-fe2f-4d86-81a4-5f2acdfb36c2)

Here I'm going to provide you with an AI team part of work

## Object Detectiom Model 

We started the work by looking for a dataset to train the detection model on, the dataset needed for such a robot should be collcoted of field to match the distribution of the robot camera view. Due to the scarcity of neighboring farms in Amman, we were unable to collect data ourselves, so we used a <a href="https://www.kaggle.com/datasets/ali7432/potato-plants-dataset">dataset from kaggel</a> that match the desired distribution, the data set been preprocesed by the owner to classification problem, so we label the images of the data using <a href="https://pypi.org/project/labelImg/1.4.0/">labelImg</a> to be used to train detection model.

To train the model we resorted to use <a href="https://github.com/ultralytics/ultralytics">yolov8m</a>, fine tune it for 100 epoch on our images. Unfortunately the dataset was too small but with help of yolo the model gives very good precision and accuracy.

![train_batch0](https://github.com/moayyad16/Orange-Summer-Challenge-/assets/93573570/6d52068b-e8c6-498a-bdd5-584f399b939c)

## Leaf Disease
Leaf disease model used to ensure the health of the plants from the color of the plant leaves, we will use it to return an astimate of the yield size. We used dataset from kaggel that consest of 1200 image split to train, validate and test data each image labeled to one of the three classes [healthy, Early_blight, Late_blight], see it <a href="https://www.kaggle.com/datasets/muhammadardiputra/potato-leaf-disease-dataset">here</a>.

The model been trained in Tensorflow using CNN.
## Robot softwear
We used ROS2(Robot operating system) to deploy the softwear ...













