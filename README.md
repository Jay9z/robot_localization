## Introduction
a robot with camera and lidar, which is chasing a white ball in a room

## Pre-requisites
1. ROS

## Install
    mkdir -p <workspace_name>/src
    cd <workspace_name>
    catkin_init_workspace
    cd src
    git clone -b chase_ball https://github.com/Jay9z/building_a_robot.git ./
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
    roslaunch ball_chaser ball_chaser.launch

open another terminal

    cd <workspace_name>
    source devel/setup.bash
    rosrun ball_chaser process_image  