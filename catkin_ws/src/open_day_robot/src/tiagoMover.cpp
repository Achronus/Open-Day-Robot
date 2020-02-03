#include "ros/ros.h"
#include "std_msgs/String.h"
#include "nav_msgs/Odometry.h"
#include "geometry_msgs/Twist.h"
#include <sstream>
#include <vector>

//Creating rovot class
class Robot{
public:
    //Default robot constructor creating nodehandle to handle the nodes, setting publisher and subscriber to velocity commands and odom
    Robot(){
        ros::NodeHandle n;
        pub = n.advertise<geometry_msgs::Twist>("/mobile_base_controller/cmd_vel", 1000);
        sub = n.subscribe("mobile_base_controller/odom", 1000, &Robot::callBack, this);
    }
private:
    //Creating ros publisher and subscriber as private variables
    ros::Publisher pub;
    ros::Subscriber sub;
    bool setup = true;
    float startX;
    float startY;
    float startZ;
    float currentX;
    float currentY;
    float currentZ;

    //Callback from odom subscriber
    void callBack(const nav_msgs::Odometry::ConstPtr &msg){
        //setting the starting positions of x,y and z. This is only run once
        if(setup==true){
            startX = msg->pose.pose.position.x;
            startY = msg->pose.pose.position.y;
            startZ = msg->twist.twist.angular.z;
            setup=false;
        }

        //setting the current positions of x,y and z. This is run every time
        currentX = msg->pose.pose.position.x;
        currentY = msg->pose.pose.position.y;
        currentZ = msg->twist.twist.angular.z;

        ROS_INFO_STREAM("Start X: " << startX << "  ,Current X:" << currentX);

        //Creating the message to be sent over the velocity topic
        geometry_msgs::Twist pubMsg;
        //If the robot has not moved 10m
        if((currentX-startX)<10){
            pubMsg.linear.x = double(100);
        }
        else if((currentZ-startZ)<0.1){
            pubMsg.angular.z = double(100);
        }
        pub.publish(pubMsg);
    }
};


int main(int argc, char**argv){
    //Initializing ros, creating a robot object and calling spin to loop 
    ros::init(argc,argv,"tiago");
    Robot tiago;
    ros::spin();

    return 0;
}

















/*void Robot::posCallBack(const nav_msgs::Odometry::ConstPtr &msg) {
    xyz[2] = msg->twist.twist.angular.z;
    xyz[1] = msg->pose.pose.position.y;
    xyz[0] = msg->pose.pose.position.x;
    ROS_INFO_STREAM("callback called, " << "X: " << xyz[0]);
}

void listener(int argc, char** argv, Robot tiago){
    ROS_INFO_STREAM("listener started");
    ros::init(argc,argv,"listener");
    ros::NodeHandle n;
    ros::Subscriber coords = n.subscribe("mobile_base_controller/odom", 1000, &Robot::posCallBack, &tiago);
    ros::spinOnce();
}


void moveRobot(int argc,char** argv, Robot tiago){
    ROS_INFO_STREAM("publisher started");
    ros::init(argc,argv,"publisher");
    ros::NodeHandle n;
    ros::Publisher movement_pub = n.advertise<geometry_msgs::Twist>("/mobile_base_controller/cmd_vel", 1000);
    ros::Rate loop_rate(10);

    while(ros::ok()){
        ROS_INFO_STREAM("X= " << tiago.xyz[0]);

        geometry_msgs::Twist msg;
        msg.linear.x = double(10);

        movement_pub.publish(msg);

        ROS_INFO_STREAM("Sending linear data x:" << msg.linear.x);

        ros::spinOnce();
        loop_rate.sleep();
    }
}

int main(int argc, char**argv){
    Robot tiago;
    listener(argc,argv, tiago);
    moveRobot(argc, argv, tiago);
    return 0;
}*/
















//REDUNDANT CODE


/*void rotationCallBack(const nav_msgs::Odometry::ConstPtr& msg){
    float zPos = msg->twist.twist.angular.z;
    if(zPos-startZ>0.95){
        turn=false;
    }
}

int turnAround(int argc,char** argv){
    ros::init(argc,argv,"tiagoRotation");
    ros::NodeHandle n;
    ros::Subscriber rotation = n.subscribe("mobile_base_controller", 1000, rotationCallBack);

    ros::Publisher rotation_pub = n.advertise<geometry_msgs::Twist>("/mobile_base_controller/cmd_vel", 1000);
    ros::Rate loop_rate(10);
    while(ros::ok()){
        if(turn==true){
            geometry_msgs::Twist msg;
            msg.angular.z = double(10);

            rotation_pub.publish(msg);

            ROS_INFO_STREAM("Sending angular data z:" << msg.angular.z);

            ros::spinOnce;
            loop_rate.sleep();
        }
    }
    return 0;
}

void forwardCallBack(const nav_msgs::Odometry::ConstPtr& msg){
    float xPos = msg->pose.pose.position.x;

    ROS_INFO_STREAM("Starting x: " << startX << "  Current X: " << xPos);

    if(xPos - startX>10){
        move = false;
    }
}

int moveForward(int argc,char** argv){
    ros::init(argc,argv, "tiagoMover");
    ros::NodeHandle n;
    ros::Subscriber coords = n.subscribe("mobile_base_controller/odom", 1000, forwardCallBack);

    ros::Publisher movement_pub = n.advertise<geometry_msgs::Twist>("/mobile_base_controller/cmd_vel", 1000);
    ros::Rate loop_rate(10);
    while(ros::ok()){
        if(move==true) {
            geometry_msgs::Twist msg;
            msg.linear.x = double(10);

            movement_pub.publish(msg);

            ROS_INFO_STREAM("Sending linear data x:" << msg.linear.x);

            ros::spinOnce();
            loop_rate.sleep();
        }
    }
    return 0;
}

void setStartPosCallback(const nav_msgs::Odometry::ConstPtr& msg){
    startX = msg->pose.pose.position.x;
    startY = msg->pose.pose.position.y;
    startZ = msg->twist.twist.angular.z;
    return;
}

int setStartPos(int argc, char**argv){
    ros::init(argc,argv, "tiagoMover");
    ros::NodeHandle n;
    ros::Subscriber coords = n.subscribe("mobile_base_controller/odom", 1000, setStartPosCallback);
    return 0;
}

int main(int argc, char**argv){
    setStartPos(argc,argv);
    moveForward(argc, argv);
    return 0;
}*/