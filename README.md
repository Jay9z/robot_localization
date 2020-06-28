## Introduction
a robot with camera and lidar, which localize robot with AMCL and robot_base algorithms

## Pre-requisites
1. ROS
2. $ sudo apt-get install ros-kinetic-navigation
3. $ sudo apt-get install ros-kinetic-map-server
4. $ sudo apt-get install ros-kinetic-move-base
5. $ sudo apt-get install ros-kinetic-amcl


## Install
    mkdir -p <workspace_name>/src
    cd <workspace_name>/src
    catkin_init_workspace
    git clone -b localization https://github.com/Jay9z/building_a_robot.git code
    mv code/* ./
    cd ..
    catkin_make

## Run
open a terminal

    cd <workspace_name>
    source devel/setup.bash
    roslaunch my_robot world.launch

open a new terminal

    cd <workspace_name>
    source devel/setup.bash
    roslaunch my_robot amcl.launch
	
## How to leverage it
0. analyze application
1. update world and generate map with pgm_map_ceator
2. revise map with image editor
3. tune filter/laser/odometry model
