// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from r2_interfaces:msg/SystemStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "r2_interfaces/msg/system_status.h"


#ifndef R2_INTERFACES__MSG__DETAIL__SYSTEM_STATUS__STRUCT_H_
#define R2_INTERFACES__MSG__DETAIL__SYSTEM_STATUS__STRUCT_H_

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
// Member 'mission_state'
// Member 'warnings'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/SystemStatus in the package r2_interfaces.
/**
  * SystemStatus.msg
  * Published by initialization nodes; aggregates hardware readiness
 */
typedef struct r2_interfaces__msg__SystemStatus
{
  std_msgs__msg__Header header;
  /// Raspberry Pi self-check passed
  bool rpi_ok;
  /// ESP32 handshake ACK received
  bool esp32_ok;
  /// Arduino Mega handshake ACK received
  bool arduino_ok;
  /// All cameras streaming
  bool cameras_ok;
  /// Encoder feedback nominal
  bool encoders_ok;
  /// Current high-level mission state name
  rosidl_runtime_c__String mission_state;
  /// Non-fatal warning strings
  rosidl_runtime_c__String__Sequence warnings;
} r2_interfaces__msg__SystemStatus;

// Struct for a sequence of r2_interfaces__msg__SystemStatus.
typedef struct r2_interfaces__msg__SystemStatus__Sequence
{
  r2_interfaces__msg__SystemStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} r2_interfaces__msg__SystemStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // R2_INTERFACES__MSG__DETAIL__SYSTEM_STATUS__STRUCT_H_
