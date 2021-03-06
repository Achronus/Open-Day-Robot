#include "ros/ros.h"
#include "std_msgs/String.h"
#include "nav_msgs/Odometry.h"
#include "pal_detection_msgs/Detections2d.h"
#include "geometry_msgs/Twist.h"
#include <sstream>
#include <vector>

//Creating robot class
class Robot{
public:
    //Default robot constructor creating nodehandle, setting publisher and subscriber to velocity commands and person detection
    Robot(){
        ros::NodeHandle n;
        pub = n.advertise<geometry_msgs::Twist>("/mobile_base_controller/cmd_vel", 1000);
        sub = n.subscribe("/person_detector/detections", 1000, &Robot::callBack, this);
    }
private:
    //Creating ros publisher and subscriber as private variables
    ros::Publisher pub;
    ros::Subscriber sub;
    int imageHeight = 480; // height of person_detector/debug image in rows
    int imageWidth = 640; // width of person_detector/debug image in columns
    int centreX = 0;

    //Callback from person detection subscriber
    void callBack(const pal_detection_msgs::Detections2d::ConstPtr &msg){
        geometry_msgs::Twist pubMsg;

        if(msg->detections.data()!=NULL) {
            const pal_detection_msgs::Detection2d *detection = msg->detections.data();

            ROS_INFO_STREAM("Person found.");

            //finding the centre coords of the person
            centreX = detection->x + (detection->width / 2);


            if (centreX > (imageWidth * 0.45) && centreX < (imageWidth * 0.55)) {
                //move forward
                pubMsg.linear.x = 2.0;
                pubMsg.angular.z = 0.0;
            } else if (centreX < (imageWidth * 0.45)) {
                //turn left
                pubMsg.linear.x = 0.0;
                pubMsg.angular.z = 0.1;

            } else if (centreX > (imageWidth * 0.55)) {
                //turn right
                pubMsg.linear.x = 0.0;
                pubMsg.angular.z = -0.10;
            }
            //publishing the message
            pub.publish(pubMsg);
        }
        else{
            ROS_INFO_STREAM("No person found.");
        }
    }
};


int main(int argc, char**argv){
    //Initializing ros, creating a robot object and calling spin to loop 
    ros::init(argc,argv,"tiago");
    Robot tiago;
    ros::spin();

    return 0;
}