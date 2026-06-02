cmake_minimum_required(VERSION 3.8)
project(r2_detection)

find_package(ament_cmake REQUIRED)
find_package(ament_cmake_python REQUIRED)
find_package(rclpy REQUIRED)
find_package(r2_interfaces REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(std_msgs REQUIRED)

# Install Python package
ament_python_install_package(${PROJECT_NAME})

# Install Python scripts as executables
install(PROGRAMS
  r2_detection/camera_node.py
  r2_detection/spearhead_detection_node.py
  r2_detection/kfs_detection_node.py
  r2_detection/ttt_detection_node.py
  r2_detection/detection_utils.py
  DESTINATION lib/${PROJECT_NAME}
)

install(DIRECTORY launch config models
  DESTINATION share/${PROJECT_NAME}
)

ament_package()
