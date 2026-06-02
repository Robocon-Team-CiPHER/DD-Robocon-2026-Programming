// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from r2_interfaces:srv/SystemHandshake.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "r2_interfaces/srv/system_handshake.h"


#ifndef R2_INTERFACES__SRV__DETAIL__SYSTEM_HANDSHAKE__STRUCT_H_
#define R2_INTERFACES__SRV__DETAIL__SYSTEM_HANDSHAKE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SystemHandshake in the package r2_interfaces.
typedef struct r2_interfaces__srv__SystemHandshake_Request
{
  /// 0x01 = ESP32, 0x02 = Arduino Mega
  uint8_t device_id;
  /// Max wait for ACK
  uint32_t timeout_ms;
} r2_interfaces__srv__SystemHandshake_Request;

// Struct for a sequence of r2_interfaces__srv__SystemHandshake_Request.
typedef struct r2_interfaces__srv__SystemHandshake_Request__Sequence
{
  r2_interfaces__srv__SystemHandshake_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} r2_interfaces__srv__SystemHandshake_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'firmware_version'
// Member 'device_status'
// Member 'error_msg'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SystemHandshake in the package r2_interfaces.
typedef struct r2_interfaces__srv__SystemHandshake_Response
{
  bool success;
  rosidl_runtime_c__String firmware_version;
  rosidl_runtime_c__String device_status;
  rosidl_runtime_c__String error_msg;
} r2_interfaces__srv__SystemHandshake_Response;

// Struct for a sequence of r2_interfaces__srv__SystemHandshake_Response.
typedef struct r2_interfaces__srv__SystemHandshake_Response__Sequence
{
  r2_interfaces__srv__SystemHandshake_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} r2_interfaces__srv__SystemHandshake_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  r2_interfaces__srv__SystemHandshake_Event__request__MAX_SIZE = 1
};
// response
enum
{
  r2_interfaces__srv__SystemHandshake_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/SystemHandshake in the package r2_interfaces.
typedef struct r2_interfaces__srv__SystemHandshake_Event
{
  service_msgs__msg__ServiceEventInfo info;
  r2_interfaces__srv__SystemHandshake_Request__Sequence request;
  r2_interfaces__srv__SystemHandshake_Response__Sequence response;
} r2_interfaces__srv__SystemHandshake_Event;

// Struct for a sequence of r2_interfaces__srv__SystemHandshake_Event.
typedef struct r2_interfaces__srv__SystemHandshake_Event__Sequence
{
  r2_interfaces__srv__SystemHandshake_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} r2_interfaces__srv__SystemHandshake_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // R2_INTERFACES__SRV__DETAIL__SYSTEM_HANDSHAKE__STRUCT_H_
