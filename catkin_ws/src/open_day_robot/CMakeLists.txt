cmake_minimum_required(VERSION 2.8.3)
project(open_day_robot)

## Find catkin and any catkin packages
find_package(catkin REQUIRED COMPONENTS
  roscpp
  rospy
  geometry_msgs
)

## Declare a catkin package
catkin_package()

## Build talker and listener
include_directories(include ${catkin_INCLUDE_DIRS})

add_executable(tiagoMover src/tiagoMover.cpp)
target_link_libraries(tiagoMover ${catkin_LIBRARIES})
add_dependencies(tiagoMover beginner_tutorials_generate_messages_cpp)
