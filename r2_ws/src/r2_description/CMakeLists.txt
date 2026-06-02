cmake_minimum_required(VERSION 3.8)
project(r2_description)

find_package(ament_cmake REQUIRED)

# Install all directories so their contents are found by package:// URIs
install(DIRECTORY urdf launch meshes config
  DESTINATION share/${PROJECT_NAME}
)

ament_package()
