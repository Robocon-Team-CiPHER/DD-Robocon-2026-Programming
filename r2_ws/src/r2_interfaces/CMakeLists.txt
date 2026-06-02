cmake_minimum_required(VERSION 3.8)
project(r2_interfaces)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

find_package(ament_cmake REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(std_msgs REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(action_msgs REQUIRED)

rosidl_generate_interfaces(${PROJECT_NAME}
  # Messages
  "msg/ChassisCmd.msg"
  "msg/MechanismStatus.msg"
  "msg/DetectionResult.msg"
  "msg/SystemStatus.msg"
  "msg/SerialFrame.msg"
  # Services
  "srv/SetMechanismState.srv"
  "srv/SystemHandshake.srv"
  "srv/TriggerDetection.srv"
  # Actions
  "action/MoveToPosition.action"
  "action/ClimbStep.action"
  "action/GripObject.action"
  "action/ExpandMechanism.action"
  "action/ExecuteRegion.action"
  DEPENDENCIES std_msgs sensor_msgs action_msgs
)

ament_export_dependencies(rosidl_default_runtime)
ament_package()
