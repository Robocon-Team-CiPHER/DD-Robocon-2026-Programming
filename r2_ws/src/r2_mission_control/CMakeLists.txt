cmake_minimum_required(VERSION 3.8)
project(r2_mission_control)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rclcpp_action REQUIRED)
find_package(std_msgs REQUIRED)
find_package(r2_interfaces REQUIRED)

set(DEPS rclcpp rclcpp_action std_msgs r2_interfaces)

add_executable(mission_state_machine_node src/mission_state_machine_node.cpp)
ament_target_dependencies(mission_state_machine_node ${DEPS})
target_include_directories(mission_state_machine_node PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
)

install(TARGETS mission_state_machine_node
  DESTINATION lib/${PROJECT_NAME}
)

install(DIRECTORY include/ DESTINATION include)
install(DIRECTORY launch config DESTINATION share/${PROJECT_NAME})

ament_package()
