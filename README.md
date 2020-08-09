# Build A Robot
A Platform software for industrial application, such as smart welding, auto grinding

## Introduction
a robot with camera and lidar, which is chasing a white ball in a room

## Pre-requisites
1. ROS

## Install
    mkdir -p <workspace_name>/src
    cd <workspace_name>/src
    catkin_init_workspace
    git clone https://github.com/Jay9z/building_a_robot.git code
    mv code/* ./
    cd ..
    catkin_make

## How to use it
Open a terminal

    cd <workspace_name>
    source devel/setup.bash
    roslaunch my_robot world.launch

Open a new terminal

    cd <workspace_name>
    source devel/setup.bash
    roslaunch my_robot amcl.launch


## Test it

Navigate your robot, observe its performance and tune your parameters for AMCL!

Option 1: Send 2D Navigation Goal
Your first option would be sending a 2D Nav Goal from RViz. The move_base will try to navigate your robot based on the localization. Based on the new observation and the odometry, the robot to further perform the localization.

Click the 2D Nav Goal button in the toolbar, then click and drag on the map to send the goal to the robot. It will start moving and localize itself in the process. If you would like to give amcl node a nudge, you could give the robot an initial position estimate on the map using 2D Pose Estimate.


Option 2: Use teleop Node
You could also use teleop node to control your robot and observe it localize itself in the environment, if you have set it up in the Optional: Teleop Package part.

Open another terminal and launch the teleop script:

rosrun teleop_twist_keyboard teleop_twist_keyboard.py
You could control your robot by keyboard commands now.