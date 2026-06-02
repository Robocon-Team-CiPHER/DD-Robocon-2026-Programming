// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from r2_interfaces:srv/TriggerDetection.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "r2_interfaces/srv/trigger_detection.h"


#ifndef R2_INTERFACES__SRV__DETAIL__TRIGGER_DETECTION__STRUCT_H_
#define R2_INTERFACES__SRV__DETAIL__TRIGGER_DETECTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'target_type'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/TriggerDetection in the package r2_interfaces.
typedef struct r2_interfaces__srv__TriggerDetection_Request
{
  /// "spearhead" | "kfs_box" | "ttt_rack"
  rosidl_runtime_c__String target_type;
  /// Maximum time to wait for a confident detection
  uint32_t timeout_ms;
} r2_interfaces__srv__TriggerDetection_Request;

// Struct for a sequence of r2_interfaces__srv__TriggerDetection_Request.
typedef struct r2_interfaces__srv__TriggerDetection_Request__Sequence
{
  r2_interfaces__srv__TriggerDetection_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} r2_interfaces__srv__TriggerDetection_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'result'
#include "r2_interfaces/msg/detail/detection_result__struct.h"

/// Struct defined in srv/TriggerDetection in the package r2_interfaces.
typedef struct r2_interfaces__srv__TriggerDetection_Response
{
  bool success;
  r2_interfaces__msg__DetectionResult result;
} r2_interfaces__srv__TriggerDetection_Response;

// Struct for a sequence of r2_interfaces__srv__TriggerDetection_Response.
typedef struct r2_interfaces__srv__TriggerDetection_Response__Sequence
{
  r2_interfaces__srv__TriggerDetection_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} r2_interfaces__srv__TriggerDetection_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  r2_interfaces__srv__TriggerDetection_Event__request__MAX_SIZE = 1
};
// response
enum
{
  r2_interfaces__srv__TriggerDetection_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/TriggerDetection in the package r2_interfaces.
typedef struct r2_interfaces__srv__TriggerDetection_Event
{
  service_msgs__msg__ServiceEventInfo info;
  r2_interfaces__srv__TriggerDetection_Request__Sequence request;
  r2_interfaces__srv__TriggerDetection_Response__Sequence response;
} r2_interfaces__srv__TriggerDetection_Event;

// Struct for a sequence of r2_interfaces__srv__TriggerDetection_Event.
typedef struct r2_interfaces__srv__TriggerDetection_Event__Sequence
{
  r2_interfaces__srv__TriggerDetection_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} r2_interfaces__srv__TriggerDetection_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // R2_INTERFACES__SRV__DETAIL__TRIGGER_DETECTION__STRUCT_H_
