// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from r2_interfaces:msg/MechanismStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "r2_interfaces/msg/mechanism_status.h"


#ifndef R2_INTERFACES__MSG__DETAIL__MECHANISM_STATUS__STRUCT_H_
#define R2_INTERFACES__MSG__DETAIL__MECHANISM_STATUS__STRUCT_H_

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
// Member 'mechanism_id'
// Member 'error_msg'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/MechanismStatus in the package r2_interfaces.
/**
  * MechanismStatus.msg
  * Generic status feedback from any actuated mechanism on Arduino Mega
 */
typedef struct r2_interfaces__msg__MechanismStatus
{
  std_msgs__msg__Header header;
  /// e.g. "spearhead_gripper", "kfs_gripper", "step_climber"
  rosidl_runtime_c__String mechanism_id;
  /// 0=IDLE, 1=MOVING, 2=DONE, 3=ERROR
  uint8_t state;
  /// Current position in mm (encoder-derived)
  float position_mm;
  /// Lower / retracted limit triggered
  bool limit_switch_min;
  /// Upper / extended limit triggered
  bool limit_switch_max;
  /// Non-empty when state == ERROR
  rosidl_runtime_c__String error_msg;
} r2_interfaces__msg__MechanismStatus;

// Struct for a sequence of r2_interfaces__msg__MechanismStatus.
typedef struct r2_interfaces__msg__MechanismStatus__Sequence
{
  r2_interfaces__msg__MechanismStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} r2_interfaces__msg__MechanismStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // R2_INTERFACES__MSG__DETAIL__MECHANISM_STATUS__STRUCT_H_
