#include "ros/ros.h"
#include "geometry_msgs/Twist.h"

#include <sstream>

int main(int argc, char **argv)
{
    ros::init(argc, argv, "mover");

    ros::NodeHandle n;

    ros::Publisher movement_pub = n.advertise<std_msgs::String>("/mobile_base_controller/cmd_vel", 1000);

    ros::Rate loop_rate(10);

    while(ros::ok())
    {
        geometry_msgs::Twist msg;

        std::stringstream ss;
        ss << "geometry_msgs/Twist -r 3 -- '[0.5,0.0,0.0]' '[0.0, 0.0, 0.0]'";
        msg.data = ss.str();

        ROS_INFO("%s", msg.data.c_str());

        movement_pub.publish(msg);

        ros::spinOnce();
        loop_rate.sleep();
    }

    return 0;
}