cmake_minimum_required(VERSION 3.8)
project(r2_comm_bridge)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(r2_interfaces REQUIRED)

set(DEPS rclcpp std_msgs r2_interfaces)

# ── ESP32 serial bridge ─────────────────────────────────────────────────────
add_executable(serial_bridge_node src/serial_bridge_node.cpp)
ament_target_dependencies(serial_bridge_node ${DEPS})
target_include_directories(serial_bridge_node PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
)

# ── Arduino Mega bridge (relay via ESP32 or direct USB) ──────────────────────
add_executable(arduino_bridge_node src/arduino_bridge_node.cpp)
ament_target_dependencies(arduino_bridge_node ${DEPS})
target_include_directories(arduino_bridge_node PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
)

install(TARGETS serial_bridge_node arduino_bridge_node
  DESTINATION lib/${PROJECT_NAME}
)

install(DIRECTORY include/ DESTINATION include)
install(DIRECTORY launch config DESTINATION share/${PROJECT_NAME})

ament_package()
