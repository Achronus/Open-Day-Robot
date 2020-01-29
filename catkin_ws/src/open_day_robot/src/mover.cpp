#include "ros/ros.h"
#include "geometry_msgs/Twist.h"

#include <sstream>

int main(int argc, char **argv)
{
    ros::init(argc, argv, "mover");


    ros::NodeHandle n;

    ros::Publisher movement_pub = n.advertise<geometry_msgs::Twist>("/mobile_base_controller/cmd_vel", 1000);

    ros::Rate loop_rate(10);

    while (ros::ok())
    {
        geometry_msgs::Twist msg;

        //msg.linear.x = double(500);
        msg.angular.z = double(3.14159);
        movement_pub.publish(msg);

        ROS_INFO_STREAM("Sending linear data: " << msg.linear.x << "\nSending angular data: " << msg.angular.z);

        ros::spinOnce();
        loop_rate.sleep();
    }

    return 0;
}