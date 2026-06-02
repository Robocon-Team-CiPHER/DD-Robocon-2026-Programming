// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from r2_interfaces:action/ExpandMechanism.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "r2_interfaces/action/expand_mechanism.h"


#ifndef R2_INTERFACES__ACTION__DETAIL__EXPAND_MECHANISM__STRUCT_H_
#define R2_INTERFACES__ACTION__DETAIL__EXPAND_MECHANISM__STRUCT_H_

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

/// Struct defined in action/ExpandMechanism in the package r2_interfaces.
typedef struct r2_interfaces__action__ExpandMechanism_Goal
{
  /// GOAL
  /// "horizontal_expansion" | "vertical_expansion"
  rosidl_runtime_c__String mechanism_id;
  /// 0=RETRACT, 1=EXTEND
  uint8_t direction;
  /// Desired final position
  float target_position_mm;
  /// Motor duty cycle 0–100
  float speed_percent;
} r2_interfaces__action__ExpandMechanism_Goal;

// Struct for a sequence of r2_interfaces__action__ExpandMechanism_Goal.
typedef struct r2_interfaces__action__ExpandMechanism_Goal__Sequence
{
  r2_interfaces__action__ExpandMechanism_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} r2_interfaces__action__ExpandMechanism_Goal__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/ExpandMechanism in the package r2_interfaces.
typedef struct r2_interfaces__action__ExpandMechanism_Result
{
  bool success;
  float actual_position_mm;
  rosidl_runtime_c__String message;
} r2_interfaces__action__ExpandMechanism_Result;

// Struct for a sequence of r2_interfaces__action__ExpandMechanism_Result.
typedef struct r2_interfaces__action__ExpandMechanism_Result__Sequence
{
  r2_interfaces__action__ExpandMechanism_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} r2_interfaces__action__ExpandMechanism_Result__Sequence;

// Constants defined in the message

/// Struct defined in action/ExpandMechanism in the package r2_interfaces.
typedef struct r2_interfaces__action__ExpandMechanism_Feedback
{
  float current_position_mm;
  bool limit_min_active;
  bool limit_max_active;
} r2_interfaces__action__ExpandMechanism_Feedback;

// Struct for a sequence of r2_interfaces__action__ExpandMechanism_Feedback.
typedef struct r2_interfaces__action__ExpandMechanism_Feedback__Sequence
{
  r2_interfaces__action__ExpandMechanism_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} r2_interfaces__action__ExpandMechanism_Feedback__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "r2_interfaces/action/detail/expand_mechanism__struct.h"

/// Struct defined in action/ExpandMechanism in the package r2_interfaces.
typedef struct r2_interfaces__action__ExpandMechanism_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  r2_interfaces__action__ExpandMechanism_Goal goal;
} r2_interfaces__action__ExpandMechanism_SendGoal_Request;

// Struct for a sequence of r2_interfaces__action__ExpandMechanism_SendGoal_Request.
typedef struct r2_interfaces__action__ExpandMechanism_SendGoal_Request__Sequence
{
  r2_interfaces__action__ExpandMechanism_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} r2_interfaces__action__ExpandMechanism_SendGoal_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/ExpandMechanism in the package r2_interfaces.
typedef struct r2_interfaces__action__ExpandMechanism_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} r2_interfaces__action__ExpandMechanism_SendGoal_Response;

// Struct for a sequence of r2_interfaces__action__ExpandMechanism_SendGoal_Response.
typedef struct r2_interfaces__action__ExpandMechanism_SendGoal_Response__Sequence
{
  r2_interfaces__action__ExpandMechanism_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} r2_interfaces__action__ExpandMechanism_SendGoal_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  r2_interfaces__action__ExpandMechanism_SendGoal_Event__request__MAX_SIZE = 1
};
// response
enum
{
  r2_interfaces__action__ExpandMechanism_SendGoal_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/ExpandMechanism in the package r2_interfaces.
typedef struct r2_interfaces__action__ExpandMechanism_SendGoal_Event
{
  service_msgs__msg__ServiceEventInfo info;
  r2_interfaces__action__ExpandMechanism_SendGoal_Request__Sequence request;
  r2_interfaces__action__ExpandMechanism_SendGoal_Response__Sequence response;
} r2_interfaces__action__ExpandMechanism_SendGoal_Event;

// Struct for a sequence of r2_interfaces__action__ExpandMechanism_SendGoal_Event.
typedef struct r2_interfaces__action__ExpandMechanism_SendGoal_Event__Sequence
{
  r2_interfaces__action__ExpandMechanism_SendGoal_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} r2_interfaces__action__ExpandMechanism_SendGoal_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/ExpandMechanism in the package r2_interfaces.
typedef struct r2_interfaces__action__ExpandMechanism_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} r2_interfaces__action__ExpandMechanism_GetResult_Request;

// Struct for a sequence of r2_interfaces__action__ExpandMechanism_GetResult_Request.
typedef struct r2_interfaces__action__ExpandMechanism_GetResult_Request__Sequence
{
  r2_interfaces__action__ExpandMechanism_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} r2_interfaces__action__ExpandMechanism_GetResult_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "r2_interfaces/action/detail/expand_mechanism__struct.h"

/// Struct defined in action/ExpandMechanism in the package r2_interfaces.
typedef struct r2_interfaces__action__ExpandMechanism_GetResult_Response
{
  int8_t status;
  r2_interfaces__action__ExpandMechanism_Result result;
} r2_interfaces__action__ExpandMechanism_GetResult_Response;

// Struct for a sequence of r2_interfaces__action__ExpandMechanism_GetResult_Response.
typedef struct r2_interfaces__action__ExpandMechanism_GetResult_Response__Sequence
{
  r2_interfaces__action__ExpandMechanism_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} r2_interfaces__action__ExpandMechanism_GetResult_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  r2_interfaces__action__ExpandMechanism_GetResult_Event__request__MAX_SIZE = 1
};
// response
enum
{
  r2_interfaces__action__ExpandMechanism_GetResult_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/ExpandMechanism in the package r2_interfaces.
typedef struct r2_interfaces__action__ExpandMechanism_GetResult_Event
{
  service_msgs__msg__ServiceEventInfo info;
  r2_interfaces__action__ExpandMechanism_GetResult_Request__Sequence request;
  r2_interfaces__action__ExpandMechanism_GetResult_Response__Sequence response;
} r2_interfaces__action__ExpandMechanism_GetResult_Event;

// Struct for a sequence of r2_interfaces__action__ExpandMechanism_GetResult_Event.
typedef struct r2_interfaces__action__ExpandMechanism_GetResult_Event__Sequence
{
  r2_interfaces__action__ExpandMechanism_GetResult_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} r2_interfaces__action__ExpandMechanism_GetResult_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "r2_interfaces/action/detail/expand_mechanism__struct.h"

/// Struct defined in action/ExpandMechanism in the package r2_interfaces.
typedef struct r2_interfaces__action__ExpandMechanism_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  r2_interfaces__action__ExpandMechanism_Feedback feedback;
} r2_interfaces__action__ExpandMechanism_FeedbackMessage;

// Struct for a sequence of r2_interfaces__action__ExpandMechanism_FeedbackMessage.
typedef struct r2_interfaces__action__ExpandMechanism_FeedbackMessage__Sequence
{
  r2_interfaces__action__ExpandMechanism_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} r2_interfaces__action__ExpandMechanism_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // R2_INTERFACES__ACTION__DETAIL__EXPAND_MECHANISM__STRUCT_H_
