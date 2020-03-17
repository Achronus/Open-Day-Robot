#include <ros/ros.h>
#include <move_base_msgs/MoveBaseAction.h>
#include <actionlib/client/simple_action_client.h>

typedef actionlib::SimpleActionClient<move_base_msgs::MoveBaseAction> MoveBaseClient;

void move(double x, double y, double w){
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

    //sleep for 10 seconds - can be changed to stop the robot between movements
    ros::Duration(10).sleep();

}

int main(int argc, char** argv){
    //initialising ros
    ros::init(argc, argv, "simple_navigation_goals");

    //while ros is running okay
    while (ros::ok()) {
        //array of locations to be sent to the robot
        float locations[4][3]{
                {4, 0, 1},
                {-4, 0, 0.5},
                {4, -6.5, 1},
                -4, -9, 0.5
        };

        //iterating through the array, calling move with each location
        for (int i = 0; i < 4; i++) {
            move(locations[i][0], locations[i][1], locations[i][2]);

        }
    }
    return 0;
}
