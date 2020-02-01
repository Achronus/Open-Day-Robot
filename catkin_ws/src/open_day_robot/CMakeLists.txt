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

add_executable(mover src/mover.cpp)
target_link_libraries(mover ${catkin_LIBRARIES})
add_dependencies(mover beginner_tutorials_generate_messages_cpp)

add_executable(coordinateListener src/coordinateListener.cpp)
target_link_libraries(coordinateListener ${catkin_LIBRARIES})
add_dependencies(coordinateListener beginner_tutorials_generate_messages_cpp)