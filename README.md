ODR Robot Version 1.1.0 20/03/2020
===========================================================================================
ODR is a student-developed project aimed to make open days more interesting for prospective 
students. It has been created for the TIAgo robot with a tablet extension. For those who 
lack access to the hardware, the code can be run on GAZEBO.

GENERAL USAGE NOTES
===========================================================================================
 -	The robot has been developed by University of Lincoln students therefore the 
	database of questions relates to this institution only.
 -	The GUI is family-friendly and will filter out any inapropriate words in your query.
 -	Please report all bugs to the email found in the contacts section. Thank you.
 -  Documentation can be found on the [wiki](https://github.com/Achronus/Open-Day-Robot/wiki). 
 -  The robots marketing video can be found on YouTube [here](https://youtu.be/hUqbG9lpjb8).
	
REQUIREMENTS
===========================================================================================
1) ROS installed with GAZEBO simulation for tiago robot.
2) OpenCV person detection.

LAUNCH INSTRUCTIONS
===========================================================================================
1) Run gazebo with navigation launch file:<br />
```
roslaunch tiago_2dnav_gazebo tiago_navigation.launch public_sim:=true lost:=true
```

2) Run person detection:<br />
```
roslaunch pal_person_detector_opencv detector.launch image:=/xtion/rgb/image_raw
```

3) Open either:<br />

- Patrol mode -
```
rosrun open_day_robot patrol
```

- Approach mode - 
```
rosrun open_day_robot persondetection
```

CONTACT INFORMATION
===========================================================================================
ODR Robot can be reached at:

E-mail: 16648641@students.lincoln.ac.uk

LICENSE
===========================================================================================
ODR Robot is under the GNU General Public License.
