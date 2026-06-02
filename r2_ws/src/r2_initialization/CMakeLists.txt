cmake_minimum_required(VERSION 3.8)
project(r2_initialization)

find_package(ament_cmake REQUIRED)
find_package(ament_cmake_python REQUIRED)
find_package(rclpy REQUIRED)
find_package(r2_interfaces REQUIRED)
find_package(std_msgs REQUIRED)

ament_python_install_package(${PROJECT_NAME})

install(PROGRAMS
  r2_initialization/system_check_node.py
  r2_initialization/esp32_handshake_node.py
  r2_initialization/startup_monitor_node.py
  DESTINATION lib/${PROJECT_NAME}
)

install(DIRECTORY launch DESTINATION share/${PROJECT_NAME})

ament_package()
