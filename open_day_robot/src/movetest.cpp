#include <ros/ros.h>
#include <move_base_msgs/MoveBaseAction.h>
#include <actionlib/client/simple_action_client.h>

typedef actionlib::SimpleActionClient<move_base_msgs::MoveBaseAction> MoveBaseClient;

void move(double x, double y, double w){
    //tell the action client that we want to spin a thread by default
    MoveBaseClient ac("move_base", true);

    //wait for the action server to come up
    while(!ac.waitForServer(ros::Duration(5.0))){
        ROS_INFO("Waiting for the move_base action server to come up");
    }

    move_base_msgs::MoveBaseGoal goal;

    //we'll send a goal to the robot to move 1 meter forward
    goal.target_pose.header.frame_id = "map";
    goal.target_pose.header.stamp = ros::Time::now();

    goal.target_pose.pose.position.x = x;
    goal.target_pose.pose.position.y = y;
    goal.target_pose.pose.orientation.w = w;

    ROS_INFO("Sending goal");
    ac.sendGoal(goal);

    ac.waitForResult();

    if(ac.getState() == actionlib::SimpleClientGoalState::SUCCEEDED)
        ROS_INFO("Moved");
    else
        ROS_INFO("Failed to move");

    ros::Duration(10).sleep();  // Sleep for 10 seconds

}

int main(int argc, char** argv){
    ros::init(argc, argv, "simple_navigation_goals");

    while (ros::ok()) {
        float locations[4][3]{
                {4, 0, 1},
                {-4, 0, 0.5},
                {4, -6.5, 1},
                -4, -9, 0.5
        };

        for (int i = 0; i < 4; i++) {
            move(locations[i][0], locations[i][1], locations[i][2]);

        }
    }

    //move(4,0,1);
    //move(-4,0,0.5);
    //move(4,-6.5,1);
    //move(-4,-9,0.5);

    return 0;
}