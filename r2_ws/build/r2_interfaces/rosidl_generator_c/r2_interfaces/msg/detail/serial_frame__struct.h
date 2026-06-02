// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from r2_interfaces:msg/SerialFrame.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "r2_interfaces/msg/serial_frame.h"


#ifndef R2_INTERFACES__MSG__DETAIL__SERIAL_FRAME__STRUCT_H_
#define R2_INTERFACES__MSG__DETAIL__SERIAL_FRAME__STRUCT_H_

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
// Member 'payload'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/SerialFrame in the package r2_interfaces.
/**
  * SerialFrame.msg
  * Low-level serial frame relayed by the communication bridge nodes.
  * The frame follows a simple protocol: [START][CMD][LEN][DATA...][CRC]
 */
typedef struct r2_interfaces__msg__SerialFrame
{
  std_msgs__msg__Header header;
  /// 0x01 = ESP32, 0x02 = Arduino Mega
  uint8_t device_id;
  /// Command identifier (see comm_bridge/config/protocol.yaml)
  uint8_t cmd_id;
  /// Raw data bytes
  rosidl_runtime_c__uint8__Sequence payload;
  /// CRC-8 checksum of (cmd_id + payload)
  uint8_t crc8;
} r2_interfaces__msg__SerialFrame;

// Struct for a sequence of r2_interfaces__msg__SerialFrame.
typedef struct r2_interfaces__msg__SerialFrame__Sequence
{
  r2_interfaces__msg__SerialFrame * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} r2_interfaces__msg__SerialFrame__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // R2_INTERFACES__MSG__DETAIL__SERIAL_FRAME__STRUCT_H_
