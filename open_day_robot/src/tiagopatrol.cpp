#include <ros/ros.h>
#include <move_base_msgs/MoveBaseAction.h>
#include <actionlib/client/simple_action_client.h>

typedef actionlib::SimpleActionClient<move_base_msgs::MoveBaseAction> MoveBaseClient;

void move(double x, double y, double z, double w){
    ROS_INFO("move called");

    //telling the action client that we want to spin a thread by default
    MoveBaseClient ac("move_base", true);

    //waiting for the action server to come up
    while(!ac.waitForServer(ros::Duration(5.0))){
        ROS_INFO("Waiting for the move_base action server to come up");
    }

    //creating a goal message
    move_base_msgs::MoveBaseGoal goal;

    //changing goal message
    //map: coords are locations on the map
    goal.target_pose.header.frame_id = "map";
    goal.target_pose.header.stamp = ros::Time::now();

    //setting x,y and orientation
    goal.target_pose.pose.position.x = x;
    goal.target_pose.pose.position.y = y;
    goal.target_pose.pose.orientation.z = z;
    goal.target_pose.pose.orientation.w = w;

    ROS_INFO("Sending goal");
    ac.sendGoal(goal);
    //waiting for the goal to return
    ac.waitForResult();

    //if it succeeds
    if(ac.getState() == actionlib::SimpleClientGoalState::SUCCEEDED)
        ROS_INFO("Moved");
    else
        ROS_INFO("Failed to move");

    //sleep for 3 seconds - can be changed to stop the robot between movements
    ros::Duration(3).sleep();
}

int main(int argc, char** argv){
    //initialising ros
    ros::init(argc, argv, "simple_navigation_goals");

    //while ros is running okay
    while (ros::ok()) {
        //keep looping through the function calls
        while(true) {
            move(13.0, -5.0, 0.999, 0.001);
            move(0, -6.0, 0.7, 0.7);
            move(-20.0, -2.0, 0.001, 0.999);
            move(-20.0, 4.0, -0.7, 0.7);
        }
    }
    return 0;
}
