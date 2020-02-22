#include <ros/ros.h>
#include <move_base_msgs/MoveBaseAction.h>
#include <actionlib/client/simple_action_client.h>

bool moveToGoal(double xGoal, double yGoal);

int main(int argc, char** argv){
    ros::init(argc, argv, "simple_navigation_goals");
    ros::NodeHandle n;

    bool goalReached = moveToGoal(5,5);

    return 0;
}


bool moveToGoal(double xGoal, double yGoal){
    actionlib::SimpleActionClient<move_base_msgs::MoveBaseAction> ac("move_base", true);

    while(!ac.waitForServer(ros::Duration(5.0))){
        ROS_INFO("Waiting for the move_base action server to come up");
    }

    move_base_msgs::MoveBaseGoal goal;

    goal.target_pose.header.frame_id = "map";
    goal.target_pose.header.stamp = ros::Time::now();

    goal.target_pose.pose.position.x =  xGoal;
    goal.target_pose.pose.position.y =  yGoal;
    goal.target_pose.pose.position.z =  0.0;
    goal.target_pose.pose.orientation.x = 0.0;
    goal.target_pose.pose.orientation.y = 0.0;
    goal.target_pose.pose.orientation.z = 0.0;
    goal.target_pose.pose.orientation.w = 1.0;

    ROS_INFO("Sending goal");
    ac.sendGoal(goal);

    ac.waitForResult();

    if(ac.getState() == actionlib::SimpleClientGoalState::SUCCEEDED) {
        ROS_INFO("Destination reached");
        return true;
    }
    else{
        ROS_INFO("Failed to reach the destination");
        return false;
    }
}