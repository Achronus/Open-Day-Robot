#include "ros/ros.h"
#include "std_msgs/String.h"
#include "geometry_msgs/Twist.h"

#include <sstream>

int main(int argc, char **argv)
{
    //Initializing ROS
    ros::init(argc, argv, "mover");
    //Creating a nodehandle to handle the publisher
    ros::NodeHandle n;
    //Creating a publisher to publish velocity commands to the robot and looping
    ros::Publisher movement_pub = n.advertise<geometry_msgs::Twist>("/mobile_base_controller/cmd_vel", 1000);
    ros::Rate loop_rate(10);

    while (ros::ok())
    {
        //Creating a message to be sent
        geometry_msgs::Twist msg;

        //Setting the linear x and angular z of the message to 500, this will make the robot go in circles
        msg.linear.x = double(500);
        msg.angular.z = double(500);
        //Publishing the message to the robot
        movement_pub.publish(msg);

        //Outputting the data that is being sent to the robot
        ROS_INFO_STREAM("Sending linear data: " << msg.linear.x << "\nSending angular data: " << msg.angular.z);

        ros::spinOnce();
        loop_rate.sleep();
    }

    return 0;
}
