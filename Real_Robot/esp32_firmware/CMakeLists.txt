cmake_minimum_required(VERSION 3.16)

include($ENV{IDF_PATH}/tools/cmake/project.cmake)

# Tell ESP-IDF build system where to find the micro-ROS component
# Note: You need to clone micro_ros_espidf_component into the project root
set(EXTRA_COMPONENT_DIRS "micro_ros_espidf_component")

project(mecanum_robot_firmware)
