// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from r2_interfaces:msg/ChassisCmd.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "r2_interfaces/msg/chassis_cmd.h"


#ifndef R2_INTERFACES__MSG__DETAIL__CHASSIS_CMD__STRUCT_H_
#define R2_INTERFACES__MSG__DETAIL__CHASSIS_CMD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/ChassisCmd in the package r2_interfaces.
/**
  * ChassisCmd.msg
  * Mecanum wheel chassis velocity command sent to ESP32
 */
typedef struct r2_interfaces__msg__ChassisCmd
{
  std_msgs__msg__Header header;
  /// Forward/backward velocity (m/s)
  float vx;
  /// Lateral (strafe) velocity (m/s)
  float vy;
  /// Rotational velocity (rad/s)
  float omega;
  /// Emergency stop flag
  bool estop;
} r2_interfaces__msg__ChassisCmd;

// Struct for a sequence of r2_interfaces__msg__ChassisCmd.
typedef struct r2_interfaces__msg__ChassisCmd__Sequence
{
  r2_interfaces__msg__ChassisCmd * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} r2_interfaces__msg__ChassisCmd__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // R2_INTERFACES__MSG__DETAIL__CHASSIS_CMD__STRUCT_H_
