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

catkin_package(
#  INCLUDE_DIRS include
#  LIBRARIES open_day_robot
#  CATKIN_DEPENDS actionLib geometry_msgs move_base_msgs pal_detection_msgs roscpp rospy
#  DEPENDS system_lib
)
include_directories(
  ${catkin_INCLUDE_DIRS}
)

add_executable(mover src/mover.cpp)
target_link_libraries(mover ${catkin_LIBRARIES})

add_executable(tiagoMover src/tiagoMover.cpp)
target_link_libraries(tiagoMover ${catkin_LIBRARIES})

add_executable(movetest src/movetest.cpp)
target_link_libraries(movetest ${catkin_LIBRARIES})
