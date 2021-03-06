cmake_minimum_required(VERSION 2.8.3)
project(fs100_motoman)

add_compile_options(-std=c++11)

## Find catkin macros and libraries
find_package(catkin REQUIRED
	roscpp
	std_msgs
	sensor_msgs
	trajectory_msgs

	message_generation
	message_runtime

	)
add_service_files(
    FILES
    setReset.srv
)

generate_messages(
    DEPENDENCIES
    std_msgs
)

catkin_package(
  INCLUDE_DIRS
  CATKIN_DEPENDS roscpp
)

include_directories(
#  include
  ${catkin_INCLUDE_DIRS}
)

###########
## Build ##
###########

add_library(robotState src/fs100_state.cpp)
add_library(robotCmd src/fs100_cmd.cpp)
## Declare a cpp executable
add_executable(mh5l_traj src/mh5l_traj.cpp)

add_dependencies(mh5l_traj ${catkin_EXPORTED_TARGETS})

## Specify libraries to link a library or executable target against
target_link_libraries(mh5l_traj robotState robotCmd ${catkin_LIBRARIES} )

#############
## Install ##
#############

#Binaries
install(TARGETS
  mh5l_traj
  DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION}
)

# Libraries
install (TARGETS
  robotState
  robotCmd
  DESTINATION ${CATKIN_PACKAGE_LIB_DESTINATION}
)
