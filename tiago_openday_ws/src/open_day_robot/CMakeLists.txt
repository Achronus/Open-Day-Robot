cmake_minimum_required(VERSION 2.8.3)
project(open_day_robot)

find_package(catkin REQUIRED COMPONENTS
  roscpp
  rospy
  pal_detection_msgs
  geometry_msgs
  actionlib
  move_base_msgs
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



add_executable(personDetection src/personDetection.cpp)
target_link_libraries(personDetection ${catkin_LIBRARIES})

add_executable(tiagoMover src/tiagoMover.cpp)
target_link_libraries(tiagoMover ${catkin_LIBRARIES})
add_dependencies(tiagoMover beginner_tutorials_generate_messages_cpp)

add_executable(navGoal src/navGoal.cpp)
target_link_libraries(navGoal ${catkin_LIBRARIES})
