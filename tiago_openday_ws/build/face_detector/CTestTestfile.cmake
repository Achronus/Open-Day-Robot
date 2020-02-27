# CMake generated Testfile for 
# Source directory: /home/lewis/tiago_openday_ws/src/people/face_detector
# Build directory: /home/lewis/tiago_openday_ws/build/face_detector
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_face_detector_rostest_test_rgbd_true_rtest.xml "/home/lewis/tiago_openday_ws/build/face_detector/catkin_generated/env_cached.sh" "/usr/bin/python2" "/opt/ros/melodic/share/catkin/cmake/test/run_tests.py" "/home/lewis/tiago_openday_ws/build/face_detector/test_results/face_detector/rostest-test_rgbd_true_rtest.xml" "--return-code" "/opt/ros/melodic/share/rostest/cmake/../../../bin/rostest --pkgdir=/home/lewis/tiago_openday_ws/src/people/face_detector --package=face_detector --results-filename test_rgbd_true_rtest.xml --results-base-dir \"/home/lewis/tiago_openday_ws/build/face_detector/test_results\" /home/lewis/tiago_openday_ws/src/people/face_detector/test/rgbd_true_rtest.xml ")
add_test(_ctest_face_detector_rostest_test_rgbd_false_rtest.xml "/home/lewis/tiago_openday_ws/build/face_detector/catkin_generated/env_cached.sh" "/usr/bin/python2" "/opt/ros/melodic/share/catkin/cmake/test/run_tests.py" "/home/lewis/tiago_openday_ws/build/face_detector/test_results/face_detector/rostest-test_rgbd_false_rtest.xml" "--return-code" "/opt/ros/melodic/share/rostest/cmake/../../../bin/rostest --pkgdir=/home/lewis/tiago_openday_ws/src/people/face_detector --package=face_detector --results-filename test_rgbd_false_rtest.xml --results-base-dir \"/home/lewis/tiago_openday_ws/build/face_detector/test_results\" /home/lewis/tiago_openday_ws/src/people/face_detector/test/rgbd_false_rtest.xml ")
subdirs("gtest")
