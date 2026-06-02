// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from r2_interfaces:msg/DetectionResult.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "r2_interfaces/msg/detail/detection_result__rosidl_typesupport_introspection_c.h"
#include "r2_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "r2_interfaces/msg/detail/detection_result__functions.h"
#include "r2_interfaces/msg/detail/detection_result__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `target_type`
#include "rosidl_runtime_c/string_functions.h"
// Member `bounding_box`
#include "sensor_msgs/msg/region_of_interest.h"
// Member `bounding_box`
#include "sensor_msgs/msg/detail/region_of_interest__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void r2_interfaces__msg__DetectionResult__rosidl_typesupport_introspection_c__DetectionResult_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  r2_interfaces__msg__DetectionResult__init(message_memory);
}

void r2_interfaces__msg__DetectionResult__rosidl_typesupport_introspection_c__DetectionResult_fini_function(void * message_memory)
{
  r2_interfaces__msg__DetectionResult__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember r2_interfaces__msg__DetectionResult__rosidl_typesupport_introspection_c__DetectionResult_message_member_array[8] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(r2_interfaces__msg__DetectionResult, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "target_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(r2_interfaces__msg__DetectionResult, target_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "detected",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(r2_interfaces__msg__DetectionResult, detected),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "distance_mm",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(r2_interfaces__msg__DetectionResult, distance_mm),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "offset_x_mm",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(r2_interfaces__msg__DetectionResult, offset_x_mm),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "offset_y_mm",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(r2_interfaces__msg__DetectionResult, offset_y_mm),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "confidence",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(r2_interfaces__msg__DetectionResult, confidence),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bounding_box",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(r2_interfaces__msg__DetectionResult, bounding_box),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers r2_interfaces__msg__DetectionResult__rosidl_typesupport_introspection_c__DetectionResult_message_members = {
  "r2_interfaces__msg",  // message namespace
  "DetectionResult",  // message name
  8,  // number of fields
  sizeof(r2_interfaces__msg__DetectionResult),
  false,  // has_any_key_member_
  r2_interfaces__msg__DetectionResult__rosidl_typesupport_introspection_c__DetectionResult_message_member_array,  // message members
  r2_interfaces__msg__DetectionResult__rosidl_typesupport_introspection_c__DetectionResult_init_function,  // function to initialize message memory (memory has to be allocated)
  r2_interfaces__msg__DetectionResult__rosidl_typesupport_introspection_c__DetectionResult_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t r2_interfaces__msg__DetectionResult__rosidl_typesupport_introspection_c__DetectionResult_message_type_support_handle = {
  0,
  &r2_interfaces__msg__DetectionResult__rosidl_typesupport_introspection_c__DetectionResult_message_members,
  get_message_typesupport_handle_function,
  &r2_interfaces__msg__DetectionResult__get_type_hash,
  &r2_interfaces__msg__DetectionResult__get_type_description,
  &r2_interfaces__msg__DetectionResult__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_r2_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, r2_interfaces, msg, DetectionResult)() {
  r2_interfaces__msg__DetectionResult__rosidl_typesupport_introspection_c__DetectionResult_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  r2_interfaces__msg__DetectionResult__rosidl_typesupport_introspection_c__DetectionResult_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, RegionOfInterest)();
  if (!r2_interfaces__msg__DetectionResult__rosidl_typesupport_introspection_c__DetectionResult_message_type_support_handle.typesupport_identifier) {
    r2_interfaces__msg__DetectionResult__rosidl_typesupport_introspection_c__DetectionResult_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &r2_interfaces__msg__DetectionResult__rosidl_typesupport_introspection_c__DetectionResult_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
