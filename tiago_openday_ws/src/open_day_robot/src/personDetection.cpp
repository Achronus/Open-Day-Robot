#include "ros/ros.h"
#include <pal_detection_msgs/Detections2d.h>
#include <sstream>

void chatterCallBack(const pal_detection_msgs::Detections2d::ConstPtr& msg){
    ROS_INFO("Person detected");

    //Find the right variables to use
    //ROS_INFO(msg->detections.x);
    //ROS_INFO(msg->detections.x);
}

int main(int argc, char** argv){
    //Initialising ros with argc and argv
    ros::init(argc, argv, "personDetection");

    //creating a nodehandle to communciate with the ROS system
    ros::NodeHandle n;

    //Creating a subscriber to subscribe to person detection messages and call chatterCallback
    ros::Subscriber sub = n.subscribe("/person_detector/detections", 1000, chatterCallBack);

    //Spinning to loop and keep running the subscriber
    ros::spin();

    return 0;
}


