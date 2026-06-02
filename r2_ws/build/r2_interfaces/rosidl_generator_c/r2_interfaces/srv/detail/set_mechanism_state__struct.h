// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from r2_interfaces:srv/SetMechanismState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "r2_interfaces/srv/set_mechanism_state.h"


#ifndef R2_INTERFACES__SRV__DETAIL__SET_MECHANISM_STATE__STRUCT_H_
#define R2_INTERFACES__SRV__DETAIL__SET_MECHANISM_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'mechanism_id'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetMechanismState in the package r2_interfaces.
typedef struct r2_interfaces__srv__SetMechanismState_Request
{
  /// Target mechanism ID (see MechanismStatus)
  rosidl_runtime_c__String mechanism_id;
  /// 0=IDLE, 1=EXTEND, 2=RETRACT, 3=GRIP, 4=RELEASE, 5=HOME
  uint8_t command;
  /// Optional target position (0 if unused)
  float target_position_mm;
  /// Motor speed 0–100 %
  float speed_percent;
} r2_interfaces__srv__SetMechanismState_Request;

// Struct for a sequence of r2_interfaces__srv__SetMechanismState_Request.
typedef struct r2_interfaces__srv__SetMechanismState_Request__Sequence
{
  r2_interfaces__srv__SetMechanismState_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} r2_interfaces__srv__SetMechanismState_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetMechanismState in the package r2_interfaces.
typedef struct r2_interfaces__srv__SetMechanismState_Response
{
  bool success;
  /// Human-readable result / error
  rosidl_runtime_c__String message;
  /// Position after command
  float actual_position_mm;
} r2_interfaces__srv__SetMechanismState_Response;

// Struct for a sequence of r2_interfaces__srv__SetMechanismState_Response.
typedef struct r2_interfaces__srv__SetMechanismState_Response__Sequence
{
  r2_interfaces__srv__SetMechanismState_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} r2_interfaces__srv__SetMechanismState_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  r2_interfaces__srv__SetMechanismState_Event__request__MAX_SIZE = 1
};
// response
enum
{
  r2_interfaces__srv__SetMechanismState_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/SetMechanismState in the package r2_interfaces.
typedef struct r2_interfaces__srv__SetMechanismState_Event
{
  service_msgs__msg__ServiceEventInfo info;
  r2_interfaces__srv__SetMechanismState_Request__Sequence request;
  r2_interfaces__srv__SetMechanismState_Response__Sequence response;
} r2_interfaces__srv__SetMechanismState_Event;

// Struct for a sequence of r2_interfaces__srv__SetMechanismState_Event.
typedef struct r2_interfaces__srv__SetMechanismState_Event__Sequence
{
  r2_interfaces__srv__SetMechanismState_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} r2_interfaces__srv__SetMechanismState_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // R2_INTERFACES__SRV__DETAIL__SET_MECHANISM_STATE__STRUCT_H_
