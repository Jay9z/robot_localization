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
open a terminal

    cd <workspace_name>
    source devel/setup.bash
    roslaunch my_robot world.launch

open a new terminal

    cd <workspace_name>
    source devel/setup.bash
    roslaunch my_robot amcl.launch