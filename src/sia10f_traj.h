#ifndef SIA10F_TRAJ_H
#define SIA10F_TRAJ_H

#include <ros/ros.h>
#include <std_msgs/String.h>
#include <fs100_motoman/setReset.h> // service file
#include <sensor_msgs/JointState.h>
#include <trajectory_msgs/JointTrajectoryPoint.h>


#include <fstream>
#include <iostream>
#include <sstream>

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netinet/ip.h>
#include <netinet/tcp.h>
#include <netdb.h>
#include <pthread.h>


#include "fs100_state.cpp"
#include "fs100_cmd.cpp"

#endif // SIA10F_TRAJ_H
