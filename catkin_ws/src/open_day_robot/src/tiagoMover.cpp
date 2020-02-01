#include "ros/ros.h"
#include "std_msgs/String.h"
#include "nav_msgs/Odometry.h"
#include "geometry_msgs/Twist.h"
#include <sstream>



/*
 * This file is just to make the robot walk a set distance and then stop.
 * This needs to be implemented with the mover.cpp and coordinatelistener.cpp using a robot class
 * that connects to both cpp files
 */
const float startX = 0;
const float startY = 0;
bool move = true;

void callBack(const nav_msgs::Odometry::ConstPtr& msg){
    float xPos = msg->pose.pose.position.x;
    if(xPos-startX>10){
        move = false;
    }
}

int main(int argc, char**argv){
    ros::init(argc,argv, "tiagoMover");
    ros::NodeHandle n;
    ros::Subscriber coords = n.subscribe("mobile_base_controller/odom", 1000, callBack);

    ros::Publisher movement_pub = n.advertise<geometry_msgs::Twist>("/mobile_base_controller/cmd_vel", 1000);
    ros::Rate loop_rate(10);
    while(ros::ok()){
        if(move==true) {
            geometry_msgs::Twist msg;
            msg.linear.x = double(500);

            movement_pub.publish(msg);

            ROS_INFO_STREAM("Sending linear data x:" << msg.linear.x);

            ros::spinOnce();
            loop_rate.sleep();
        }
    }
    return 0;
}