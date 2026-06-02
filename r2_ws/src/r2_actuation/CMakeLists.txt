cmake_minimum_required(VERSION 3.8)
project(r2_actuation)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rclcpp_action REQUIRED)
find_package(std_msgs REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(r2_interfaces REQUIRED)

set(DEPS rclcpp rclcpp_action std_msgs geometry_msgs r2_interfaces)

# ── Chassis controller ──────────────────────────────────────────────────────
add_executable(chassis_controller_node src/chassis_controller_node.cpp)
ament_target_dependencies(chassis_controller_node ${DEPS})
target_include_directories(chassis_controller_node PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
)

# ── Step climber ────────────────────────────────────────────────────────────
add_executable(step_climber_node src/step_climber_node.cpp)
ament_target_dependencies(step_climber_node ${DEPS})
target_include_directories(step_climber_node PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
)

# ── Spearhead gripper ───────────────────────────────────────────────────────
add_executable(spearhead_gripper_node src/spearhead_gripper_node.cpp)
ament_target_dependencies(spearhead_gripper_node ${DEPS})
target_include_directories(spearhead_gripper_node PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
)

# ── KFS gripper ─────────────────────────────────────────────────────────────
add_executable(kfs_gripper_node src/kfs_gripper_node.cpp)
ament_target_dependencies(kfs_gripper_node ${DEPS})
target_include_directories(kfs_gripper_node PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
)

# ── Horizontal expansion ────────────────────────────────────────────────────
add_executable(horizontal_expansion_node src/horizontal_expansion_node.cpp)
ament_target_dependencies(horizontal_expansion_node ${DEPS})
target_include_directories(horizontal_expansion_node PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
)

# ── Vertical expansion ──────────────────────────────────────────────────────
add_executable(vertical_expansion_node src/vertical_expansion_node.cpp)
ament_target_dependencies(vertical_expansion_node ${DEPS})
target_include_directories(vertical_expansion_node PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
)

install(TARGETS
  chassis_controller_node
  step_climber_node
  spearhead_gripper_node
  kfs_gripper_node
  horizontal_expansion_node
  vertical_expansion_node
  DESTINATION lib/${PROJECT_NAME}
)

install(DIRECTORY include/ DESTINATION include)
install(DIRECTORY launch config DESTINATION share/${PROJECT_NAME})

ament_package()
