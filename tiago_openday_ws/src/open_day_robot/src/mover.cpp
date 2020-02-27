#include <ros/ros.h>
#include <people_msgs/PositionMeasurementArray.h>
#include <people_msgs/PositionMeasurement.h>
#include <move_base_msgs/MoveBaseAction.h>
#include <actionlib/client/simple_action_client.h>
#include <std_msgs/Float64.h>

typedef actionlib::SimpleActionClient<move_base_msgs::MoveBaseAction> MoveBaseClient;

void moveToGoal(double xGoal, double yGoal){
    //Creating the client for moving
    MoveBaseClient ac("move_base", true);

    //waiting for the action client server to come up
    while(!ac.waitForServer(ros::Duration(5.0))){
        ROS_INFO("Waiting for the move_base action server to come up");
    }

    //creating a goal message
    move_base_msgs::MoveBaseGoal goal;

    //setting goal variables
    goal.target_pose.header.frame_id = "base_link";
    goal.target_pose.header.stamp = ros::Time::now();

    //!! Change to leg detection !!
    goal.target_pose.pose.position.x = xGoal - 1.0;
    goal.target_pose.pose.position.y = yGoal - 1.0;

    ROS_INFO_STREAM(goal.target_pose.pose.position.x);
    ROS_INFO_STREAM(goal.target_pose.pose.position.y);

    //sending the goal and waiting for the result
    ROS_INFO("Sending goal");
    ac.sendGoal(goal);
    ac.waitForResult();

    //checking the result of the goal
    if(ac.getState() == actionlib::SimpleClientGoalState::SUCCEEDED) {
        ROS_INFO("Destination reached");
    }
    else{
        ROS_INFO("Failed to reach the destination");
    }
}

class Robot{
public:
    Robot(){
        ros::NodeHandle n;
        sub = n.subscribe("/people_tracker_measurements", 1000, &Robot::callBack, this);
    }
private:
    ros::Subscriber sub;
    double xPosGoal;
    double yPosGoal;
    void callBack(const people_msgs::PositionMeasurementArray::ConstPtr& msg){
        ROS_INFO("Person detected at: ");

        std::vector<people_msgs::PositionMeasurement> people = msg->people;
        //getting x and y position of the person
        xPosGoal = people[0].pos.x;
        xPosGoal = people[0].pos.x;

        moveToGoal(xPosGoal, yPosGoal);
    }
};

int main(int argc, char** argv){
    ros::init(argc, argv, "tiago");
    Robot tiago;
    ros::spin();

    return 0;
}

