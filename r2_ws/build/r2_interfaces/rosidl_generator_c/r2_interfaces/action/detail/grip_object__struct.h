// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from r2_interfaces:action/GripObject.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "r2_interfaces/action/grip_object.h"


#ifndef R2_INTERFACES__ACTION__DETAIL__GRIP_OBJECT__STRUCT_H_
#define R2_INTERFACES__ACTION__DETAIL__GRIP_OBJECT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'gripper_id'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/GripObject in the package r2_interfaces.
typedef struct r2_interfaces__action__GripObject_Goal
{
  /// GOAL
  /// "spearhead" | "kfs"
  rosidl_runtime_c__String gripper_id;
  /// 0=RELEASE, 1=GRIP, 2=ROTATE_AND_DOCK
  uint8_t command;
  /// For spearhead servo rotation (0 if unused)
  float target_angle_deg;
} r2_interfaces__action__GripObject_Goal;

// Struct for a sequence of r2_interfaces__action__GripObject_Goal.
typedef struct r2_interfaces__action__GripObject_Goal__Sequence
{
  r2_interfaces__action__GripObject_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} r2_interfaces__action__GripObject_Goal__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/GripObject in the package r2_interfaces.
typedef struct r2_interfaces__action__GripObject_Result
{
  bool success;
  rosidl_runtime_c__String message;
  /// Estimated (0–100), 0 if unavailable
  float grip_force_estimate;
} r2_interfaces__action__GripObject_Result;

// Struct for a sequence of r2_interfaces__action__GripObject_Result.
typedef struct r2_interfaces__action__GripObject_Result__Sequence
{
  r2_interfaces__action__GripObject_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} r2_interfaces__action__GripObject_Result__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'phase'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/GripObject in the package r2_interfaces.
typedef struct r2_interfaces__action__GripObject_Feedback
{
  /// Current gripper phase description
  rosidl_runtime_c__String phase;
  /// 0–100
  float progress_percent;
} r2_interfaces__action__GripObject_Feedback;

// Struct for a sequence of r2_interfaces__action__GripObject_Feedback.
typedef struct r2_interfaces__action__GripObject_Feedback__Sequence
{
  r2_interfaces__action__GripObject_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} r2_interfaces__action__GripObject_Feedback__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "r2_interfaces/action/detail/grip_object__struct.h"

/// Struct defined in action/GripObject in the package r2_interfaces.
typedef struct r2_interfaces__action__GripObject_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  r2_interfaces__action__GripObject_Goal goal;
} r2_interfaces__action__GripObject_SendGoal_Request;

// Struct for a sequence of r2_interfaces__action__GripObject_SendGoal_Request.
typedef struct r2_interfaces__action__GripObject_SendGoal_Request__Sequence
{
  r2_interfaces__action__GripObject_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} r2_interfaces__action__GripObject_SendGoal_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/GripObject in the package r2_interfaces.
typedef struct r2_interfaces__action__GripObject_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} r2_interfaces__action__GripObject_SendGoal_Response;

// Struct for a sequence of r2_interfaces__action__GripObject_SendGoal_Response.
typedef struct r2_interfaces__action__GripObject_SendGoal_Response__Sequence
{
  r2_interfaces__action__GripObject_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} r2_interfaces__action__GripObject_SendGoal_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  r2_interfaces__action__GripObject_SendGoal_Event__request__MAX_SIZE = 1
};
// response
enum
{
  r2_interfaces__action__GripObject_SendGoal_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/GripObject in the package r2_interfaces.
typedef struct r2_interfaces__action__GripObject_SendGoal_Event
{
  service_msgs__msg__ServiceEventInfo info;
  r2_interfaces__action__GripObject_SendGoal_Request__Sequence request;
  r2_interfaces__action__GripObject_SendGoal_Response__Sequence response;
} r2_interfaces__action__GripObject_SendGoal_Event;

// Struct for a sequence of r2_interfaces__action__GripObject_SendGoal_Event.
typedef struct r2_interfaces__action__GripObject_SendGoal_Event__Sequence
{
  r2_interfaces__action__GripObject_SendGoal_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} r2_interfaces__action__GripObject_SendGoal_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/GripObject in the package r2_interfaces.
typedef struct r2_interfaces__action__GripObject_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} r2_interfaces__action__GripObject_GetResult_Request;

// Struct for a sequence of r2_interfaces__action__GripObject_GetResult_Request.
typedef struct r2_interfaces__action__GripObject_GetResult_Request__Sequence
{
  r2_interfaces__action__GripObject_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} r2_interfaces__action__GripObject_GetResult_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "r2_interfaces/action/detail/grip_object__struct.h"

/// Struct defined in action/GripObject in the package r2_interfaces.
typedef struct r2_interfaces__action__GripObject_GetResult_Response
{
  int8_t status;
  r2_interfaces__action__GripObject_Result result;
} r2_interfaces__action__GripObject_GetResult_Response;

// Struct for a sequence of r2_interfaces__action__GripObject_GetResult_Response.
typedef struct r2_interfaces__action__GripObject_GetResult_Response__Sequence
{
  r2_interfaces__action__GripObject_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} r2_interfaces__action__GripObject_GetResult_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  r2_interfaces__action__GripObject_GetResult_Event__request__MAX_SIZE = 1
};
// response
enum
{
  r2_interfaces__action__GripObject_GetResult_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/GripObject in the package r2_interfaces.
typedef struct r2_interfaces__action__GripObject_GetResult_Event
{
  service_msgs__msg__ServiceEventInfo info;
  r2_interfaces__action__GripObject_GetResult_Request__Sequence request;
  r2_interfaces__action__GripObject_GetResult_Response__Sequence response;
} r2_interfaces__action__GripObject_GetResult_Event;

// Struct for a sequence of r2_interfaces__action__GripObject_GetResult_Event.
typedef struct r2_interfaces__action__GripObject_GetResult_Event__Sequence
{
  r2_interfaces__action__GripObject_GetResult_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} r2_interfaces__action__GripObject_GetResult_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "r2_interfaces/action/detail/grip_object__struct.h"

/// Struct defined in action/GripObject in the package r2_interfaces.
typedef struct r2_interfaces__action__GripObject_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  r2_interfaces__action__GripObject_Feedback feedback;
} r2_interfaces__action__GripObject_FeedbackMessage;

// Struct for a sequence of r2_interfaces__action__GripObject_FeedbackMessage.
typedef struct r2_interfaces__action__GripObject_FeedbackMessage__Sequence
{
  r2_interfaces__action__GripObject_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} r2_interfaces__action__GripObject_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // R2_INTERFACES__ACTION__DETAIL__GRIP_OBJECT__STRUCT_H_
