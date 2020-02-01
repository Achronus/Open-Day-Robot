#include "ros/ros.h"
#include "std_msgs/String.h"
#include "nav_msgs/Odometry.h"

#include <sstream>

void callBack(const nav_msgs::Odometry::ConstPtr& msg)
{
    //Getting the x and y coordinates of the robot and printing them
    //This needs to be altered to talk to the mover cpp so that the robot only moves a set distance
    float xPos = msg->pose.pose.position.x;
    float yPos = msg->pose.pose.position.y;

    //Outputting the X and Y coordinates of the robot
    ROS_INFO_STREAM("X position: " << xPos << "\nY position: " << yPos);
}

int main(int argc, char **argv)
{
    //initializing ROS
    ros::init(argc, argv, "coordinateListener");
    //Creating a nodehandle to process the listener
    ros::NodeHandle n;
    //Subscribing to the odometer of the robot, and calling callBack with the information
    ros::Subscriber sub = n.subscribe("mobile_base_controller/odom", 1000, callBack);
    //Looping by using spin
    ros::spin();

    return 0;
}
