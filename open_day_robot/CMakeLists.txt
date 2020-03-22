cmake_minimum_required(VERSION 2.8.3)
project(open_day_robot)

find_package(catkin REQUIRED COMPONENTS
  roscpp
  rospy
  pal_detection_msgs
  people_msgs
  geometry_msgs
  move_base_msgs
  actionlib
)

catkin_package()
include_directories(${catkin_INCLUDE_DIRS})

add_executable(patrol src/tiagopatrol.cpp)
target_link_libraries(patrol ${catkin_LIBRARIES})

add_executable(persondetection src/persondetection.cpp)
target_link_libraries(persondetection ${catkin_LIBRARIES})
