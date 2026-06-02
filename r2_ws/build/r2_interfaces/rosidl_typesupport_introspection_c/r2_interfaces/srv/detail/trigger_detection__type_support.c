// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from r2_interfaces:srv/TriggerDetection.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "r2_interfaces/srv/detail/trigger_detection__rosidl_typesupport_introspection_c.h"
#include "r2_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "r2_interfaces/srv/detail/trigger_detection__functions.h"
#include "r2_interfaces/srv/detail/trigger_detection__struct.h"


// Include directives for member types
// Member `target_type`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void r2_interfaces__srv__TriggerDetection_Request__rosidl_typesupport_introspection_c__TriggerDetection_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  r2_interfaces__srv__TriggerDetection_Request__init(message_memory);
}

void r2_interfaces__srv__TriggerDetection_Request__rosidl_typesupport_introspection_c__TriggerDetection_Request_fini_function(void * message_memory)
{
  r2_interfaces__srv__TriggerDetection_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember r2_interfaces__srv__TriggerDetection_Request__rosidl_typesupport_introspection_c__TriggerDetection_Request_message_member_array[2] = {
  {
    "target_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(r2_interfaces__srv__TriggerDetection_Request, target_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "timeout_ms",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(r2_interfaces__srv__TriggerDetection_Request, timeout_ms),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers r2_interfaces__srv__TriggerDetection_Request__rosidl_typesupport_introspection_c__TriggerDetection_Request_message_members = {
  "r2_interfaces__srv",  // message namespace
  "TriggerDetection_Request",  // message name
  2,  // number of fields
  sizeof(r2_interfaces__srv__TriggerDetection_Request),
  false,  // has_any_key_member_
  r2_interfaces__srv__TriggerDetection_Request__rosidl_typesupport_introspection_c__TriggerDetection_Request_message_member_array,  // message members
  r2_interfaces__srv__TriggerDetection_Request__rosidl_typesupport_introspection_c__TriggerDetection_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  r2_interfaces__srv__TriggerDetection_Request__rosidl_typesupport_introspection_c__TriggerDetection_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t r2_interfaces__srv__TriggerDetection_Request__rosidl_typesupport_introspection_c__TriggerDetection_Request_message_type_support_handle = {
  0,
  &r2_interfaces__srv__TriggerDetection_Request__rosidl_typesupport_introspection_c__TriggerDetection_Request_message_members,
  get_message_typesupport_handle_function,
  &r2_interfaces__srv__TriggerDetection_Request__get_type_hash,
  &r2_interfaces__srv__TriggerDetection_Request__get_type_description,
  &r2_interfaces__srv__TriggerDetection_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_r2_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, r2_interfaces, srv, TriggerDetection_Request)() {
  if (!r2_interfaces__srv__TriggerDetection_Request__rosidl_typesupport_introspection_c__TriggerDetection_Request_message_type_support_handle.typesupport_identifier) {
    r2_interfaces__srv__TriggerDetection_Request__rosidl_typesupport_introspection_c__TriggerDetection_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &r2_interfaces__srv__TriggerDetection_Request__rosidl_typesupport_introspection_c__TriggerDetection_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "r2_interfaces/srv/detail/trigger_detection__rosidl_typesupport_introspection_c.h"
// already included above
// #include "r2_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "r2_interfaces/srv/detail/trigger_detection__functions.h"
// already included above
// #include "r2_interfaces/srv/detail/trigger_detection__struct.h"


// Include directives for member types
// Member `result`
#include "r2_interfaces/msg/detection_result.h"
// Member `result`
#include "r2_interfaces/msg/detail/detection_result__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void r2_interfaces__srv__TriggerDetection_Response__rosidl_typesupport_introspection_c__TriggerDetection_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  r2_interfaces__srv__TriggerDetection_Response__init(message_memory);
}

void r2_interfaces__srv__TriggerDetection_Response__rosidl_typesupport_introspection_c__TriggerDetection_Response_fini_function(void * message_memory)
{
  r2_interfaces__srv__TriggerDetection_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember r2_interfaces__srv__TriggerDetection_Response__rosidl_typesupport_introspection_c__TriggerDetection_Response_message_member_array[2] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(r2_interfaces__srv__TriggerDetection_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(r2_interfaces__srv__TriggerDetection_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers r2_interfaces__srv__TriggerDetection_Response__rosidl_typesupport_introspection_c__TriggerDetection_Response_message_members = {
  "r2_interfaces__srv",  // message namespace
  "TriggerDetection_Response",  // message name
  2,  // number of fields
  sizeof(r2_interfaces__srv__TriggerDetection_Response),
  false,  // has_any_key_member_
  r2_interfaces__srv__TriggerDetection_Response__rosidl_typesupport_introspection_c__TriggerDetection_Response_message_member_array,  // message members
  r2_interfaces__srv__TriggerDetection_Response__rosidl_typesupport_introspection_c__TriggerDetection_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  r2_interfaces__srv__TriggerDetection_Response__rosidl_typesupport_introspection_c__TriggerDetection_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t r2_interfaces__srv__TriggerDetection_Response__rosidl_typesupport_introspection_c__TriggerDetection_Response_message_type_support_handle = {
  0,
  &r2_interfaces__srv__TriggerDetection_Response__rosidl_typesupport_introspection_c__TriggerDetection_Response_message_members,
  get_message_typesupport_handle_function,
  &r2_interfaces__srv__TriggerDetection_Response__get_type_hash,
  &r2_interfaces__srv__TriggerDetection_Response__get_type_description,
  &r2_interfaces__srv__TriggerDetection_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_r2_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, r2_interfaces, srv, TriggerDetection_Response)() {
  r2_interfaces__srv__TriggerDetection_Response__rosidl_typesupport_introspection_c__TriggerDetection_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, r2_interfaces, msg, DetectionResult)();
  if (!r2_interfaces__srv__TriggerDetection_Response__rosidl_typesupport_introspection_c__TriggerDetection_Response_message_type_support_handle.typesupport_identifier) {
    r2_interfaces__srv__TriggerDetection_Response__rosidl_typesupport_introspection_c__TriggerDetection_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &r2_interfaces__srv__TriggerDetection_Response__rosidl_typesupport_introspection_c__TriggerDetection_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "r2_interfaces/srv/detail/trigger_detection__rosidl_typesupport_introspection_c.h"
// already included above
// #include "r2_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "r2_interfaces/srv/detail/trigger_detection__functions.h"
// already included above
// #include "r2_interfaces/srv/detail/trigger_detection__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "r2_interfaces/srv/trigger_detection.h"
// Member `request`
// Member `response`
// already included above
// #include "r2_interfaces/srv/detail/trigger_detection__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void r2_interfaces__srv__TriggerDetection_Event__rosidl_typesupport_introspection_c__TriggerDetection_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  r2_interfaces__srv__TriggerDetection_Event__init(message_memory);
}

void r2_interfaces__srv__TriggerDetection_Event__rosidl_typesupport_introspection_c__TriggerDetection_Event_fini_function(void * message_memory)
{
  r2_interfaces__srv__TriggerDetection_Event__fini(message_memory);
}

size_t r2_interfaces__srv__TriggerDetection_Event__rosidl_typesupport_introspection_c__size_function__TriggerDetection_Event__request(
  const void * untyped_member)
{
  const r2_interfaces__srv__TriggerDetection_Request__Sequence * member =
    (const r2_interfaces__srv__TriggerDetection_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * r2_interfaces__srv__TriggerDetection_Event__rosidl_typesupport_introspection_c__get_const_function__TriggerDetection_Event__request(
  const void * untyped_member, size_t index)
{
  const r2_interfaces__srv__TriggerDetection_Request__Sequence * member =
    (const r2_interfaces__srv__TriggerDetection_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * r2_interfaces__srv__TriggerDetection_Event__rosidl_typesupport_introspection_c__get_function__TriggerDetection_Event__request(
  void * untyped_member, size_t index)
{
  r2_interfaces__srv__TriggerDetection_Request__Sequence * member =
    (r2_interfaces__srv__TriggerDetection_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void r2_interfaces__srv__TriggerDetection_Event__rosidl_typesupport_introspection_c__fetch_function__TriggerDetection_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const r2_interfaces__srv__TriggerDetection_Request * item =
    ((const r2_interfaces__srv__TriggerDetection_Request *)
    r2_interfaces__srv__TriggerDetection_Event__rosidl_typesupport_introspection_c__get_const_function__TriggerDetection_Event__request(untyped_member, index));
  r2_interfaces__srv__TriggerDetection_Request * value =
    (r2_interfaces__srv__TriggerDetection_Request *)(untyped_value);
  *value = *item;
}

void r2_interfaces__srv__TriggerDetection_Event__rosidl_typesupport_introspection_c__assign_function__TriggerDetection_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  r2_interfaces__srv__TriggerDetection_Request * item =
    ((r2_interfaces__srv__TriggerDetection_Request *)
    r2_interfaces__srv__TriggerDetection_Event__rosidl_typesupport_introspection_c__get_function__TriggerDetection_Event__request(untyped_member, index));
  const r2_interfaces__srv__TriggerDetection_Request * value =
    (const r2_interfaces__srv__TriggerDetection_Request *)(untyped_value);
  *item = *value;
}

bool r2_interfaces__srv__TriggerDetection_Event__rosidl_typesupport_introspection_c__resize_function__TriggerDetection_Event__request(
  void * untyped_member, size_t size)
{
  r2_interfaces__srv__TriggerDetection_Request__Sequence * member =
    (r2_interfaces__srv__TriggerDetection_Request__Sequence *)(untyped_member);
  r2_interfaces__srv__TriggerDetection_Request__Sequence__fini(member);
  return r2_interfaces__srv__TriggerDetection_Request__Sequence__init(member, size);
}

size_t r2_interfaces__srv__TriggerDetection_Event__rosidl_typesupport_introspection_c__size_function__TriggerDetection_Event__response(
  const void * untyped_member)
{
  const r2_interfaces__srv__TriggerDetection_Response__Sequence * member =
    (const r2_interfaces__srv__TriggerDetection_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * r2_interfaces__srv__TriggerDetection_Event__rosidl_typesupport_introspection_c__get_const_function__TriggerDetection_Event__response(
  const void * untyped_member, size_t index)
{
  const r2_interfaces__srv__TriggerDetection_Response__Sequence * member =
    (const r2_interfaces__srv__TriggerDetection_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * r2_interfaces__srv__TriggerDetection_Event__rosidl_typesupport_introspection_c__get_function__TriggerDetection_Event__response(
  void * untyped_member, size_t index)
{
  r2_interfaces__srv__TriggerDetection_Response__Sequence * member =
    (r2_interfaces__srv__TriggerDetection_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void r2_interfaces__srv__TriggerDetection_Event__rosidl_typesupport_introspection_c__fetch_function__TriggerDetection_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const r2_interfaces__srv__TriggerDetection_Response * item =
    ((const r2_interfaces__srv__TriggerDetection_Response *)
    r2_interfaces__srv__TriggerDetection_Event__rosidl_typesupport_introspection_c__get_const_function__TriggerDetection_Event__response(untyped_member, index));
  r2_interfaces__srv__TriggerDetection_Response * value =
    (r2_interfaces__srv__TriggerDetection_Response *)(untyped_value);
  *value = *item;
}

void r2_interfaces__srv__TriggerDetection_Event__rosidl_typesupport_introspection_c__assign_function__TriggerDetection_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  r2_interfaces__srv__TriggerDetection_Response * item =
    ((r2_interfaces__srv__TriggerDetection_Response *)
    r2_interfaces__srv__TriggerDetection_Event__rosidl_typesupport_introspection_c__get_function__TriggerDetection_Event__response(untyped_member, index));
  const r2_interfaces__srv__TriggerDetection_Response * value =
    (const r2_interfaces__srv__TriggerDetection_Response *)(untyped_value);
  *item = *value;
}

bool r2_interfaces__srv__TriggerDetection_Event__rosidl_typesupport_introspection_c__resize_function__TriggerDetection_Event__response(
  void * untyped_member, size_t size)
{
  r2_interfaces__srv__TriggerDetection_Response__Sequence * member =
    (r2_interfaces__srv__TriggerDetection_Response__Sequence *)(untyped_member);
  r2_interfaces__srv__TriggerDetection_Response__Sequence__fini(member);
  return r2_interfaces__srv__TriggerDetection_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember r2_interfaces__srv__TriggerDetection_Event__rosidl_typesupport_introspection_c__TriggerDetection_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(r2_interfaces__srv__TriggerDetection_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(r2_interfaces__srv__TriggerDetection_Event, request),  // bytes offset in struct
    NULL,  // default value
    r2_interfaces__srv__TriggerDetection_Event__rosidl_typesupport_introspection_c__size_function__TriggerDetection_Event__request,  // size() function pointer
    r2_interfaces__srv__TriggerDetection_Event__rosidl_typesupport_introspection_c__get_const_function__TriggerDetection_Event__request,  // get_const(index) function pointer
    r2_interfaces__srv__TriggerDetection_Event__rosidl_typesupport_introspection_c__get_function__TriggerDetection_Event__request,  // get(index) function pointer
    r2_interfaces__srv__TriggerDetection_Event__rosidl_typesupport_introspection_c__fetch_function__TriggerDetection_Event__request,  // fetch(index, &value) function pointer
    r2_interfaces__srv__TriggerDetection_Event__rosidl_typesupport_introspection_c__assign_function__TriggerDetection_Event__request,  // assign(index, value) function pointer
    r2_interfaces__srv__TriggerDetection_Event__rosidl_typesupport_introspection_c__resize_function__TriggerDetection_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(r2_interfaces__srv__TriggerDetection_Event, response),  // bytes offset in struct
    NULL,  // default value
    r2_interfaces__srv__TriggerDetection_Event__rosidl_typesupport_introspection_c__size_function__TriggerDetection_Event__response,  // size() function pointer
    r2_interfaces__srv__TriggerDetection_Event__rosidl_typesupport_introspection_c__get_const_function__TriggerDetection_Event__response,  // get_const(index) function pointer
    r2_interfaces__srv__TriggerDetection_Event__rosidl_typesupport_introspection_c__get_function__TriggerDetection_Event__response,  // get(index) function pointer
    r2_interfaces__srv__TriggerDetection_Event__rosidl_typesupport_introspection_c__fetch_function__TriggerDetection_Event__response,  // fetch(index, &value) function pointer
    r2_interfaces__srv__TriggerDetection_Event__rosidl_typesupport_introspection_c__assign_function__TriggerDetection_Event__response,  // assign(index, value) function pointer
    r2_interfaces__srv__TriggerDetection_Event__rosidl_typesupport_introspection_c__resize_function__TriggerDetection_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers r2_interfaces__srv__TriggerDetection_Event__rosidl_typesupport_introspection_c__TriggerDetection_Event_message_members = {
  "r2_interfaces__srv",  // message namespace
  "TriggerDetection_Event",  // message name
  3,  // number of fields
  sizeof(r2_interfaces__srv__TriggerDetection_Event),
  false,  // has_any_key_member_
  r2_interfaces__srv__TriggerDetection_Event__rosidl_typesupport_introspection_c__TriggerDetection_Event_message_member_array,  // message members
  r2_interfaces__srv__TriggerDetection_Event__rosidl_typesupport_introspection_c__TriggerDetection_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  r2_interfaces__srv__TriggerDetection_Event__rosidl_typesupport_introspection_c__TriggerDetection_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t r2_interfaces__srv__TriggerDetection_Event__rosidl_typesupport_introspection_c__TriggerDetection_Event_message_type_support_handle = {
  0,
  &r2_interfaces__srv__TriggerDetection_Event__rosidl_typesupport_introspection_c__TriggerDetection_Event_message_members,
  get_message_typesupport_handle_function,
  &r2_interfaces__srv__TriggerDetection_Event__get_type_hash,
  &r2_interfaces__srv__TriggerDetection_Event__get_type_description,
  &r2_interfaces__srv__TriggerDetection_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_r2_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, r2_interfaces, srv, TriggerDetection_Event)() {
  r2_interfaces__srv__TriggerDetection_Event__rosidl_typesupport_introspection_c__TriggerDetection_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  r2_interfaces__srv__TriggerDetection_Event__rosidl_typesupport_introspection_c__TriggerDetection_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, r2_interfaces, srv, TriggerDetection_Request)();
  r2_interfaces__srv__TriggerDetection_Event__rosidl_typesupport_introspection_c__TriggerDetection_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, r2_interfaces, srv, TriggerDetection_Response)();
  if (!r2_interfaces__srv__TriggerDetection_Event__rosidl_typesupport_introspection_c__TriggerDetection_Event_message_type_support_handle.typesupport_identifier) {
    r2_interfaces__srv__TriggerDetection_Event__rosidl_typesupport_introspection_c__TriggerDetection_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &r2_interfaces__srv__TriggerDetection_Event__rosidl_typesupport_introspection_c__TriggerDetection_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "r2_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "r2_interfaces/srv/detail/trigger_detection__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers r2_interfaces__srv__detail__trigger_detection__rosidl_typesupport_introspection_c__TriggerDetection_service_members = {
  "r2_interfaces__srv",  // service namespace
  "TriggerDetection",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // r2_interfaces__srv__detail__trigger_detection__rosidl_typesupport_introspection_c__TriggerDetection_Request_message_type_support_handle,
  NULL,  // response message
  // r2_interfaces__srv__detail__trigger_detection__rosidl_typesupport_introspection_c__TriggerDetection_Response_message_type_support_handle
  NULL  // event_message
  // r2_interfaces__srv__detail__trigger_detection__rosidl_typesupport_introspection_c__TriggerDetection_Response_message_type_support_handle
};


static rosidl_service_type_support_t r2_interfaces__srv__detail__trigger_detection__rosidl_typesupport_introspection_c__TriggerDetection_service_type_support_handle = {
  0,
  &r2_interfaces__srv__detail__trigger_detection__rosidl_typesupport_introspection_c__TriggerDetection_service_members,
  get_service_typesupport_handle_function,
  &r2_interfaces__srv__TriggerDetection_Request__rosidl_typesupport_introspection_c__TriggerDetection_Request_message_type_support_handle,
  &r2_interfaces__srv__TriggerDetection_Response__rosidl_typesupport_introspection_c__TriggerDetection_Response_message_type_support_handle,
  &r2_interfaces__srv__TriggerDetection_Event__rosidl_typesupport_introspection_c__TriggerDetection_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    r2_interfaces,
    srv,
    TriggerDetection
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    r2_interfaces,
    srv,
    TriggerDetection
  ),
  &r2_interfaces__srv__TriggerDetection__get_type_hash,
  &r2_interfaces__srv__TriggerDetection__get_type_description,
  &r2_interfaces__srv__TriggerDetection__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, r2_interfaces, srv, TriggerDetection_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, r2_interfaces, srv, TriggerDetection_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, r2_interfaces, srv, TriggerDetection_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_r2_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, r2_interfaces, srv, TriggerDetection)(void) {
  if (!r2_interfaces__srv__detail__trigger_detection__rosidl_typesupport_introspection_c__TriggerDetection_service_type_support_handle.typesupport_identifier) {
    r2_interfaces__srv__detail__trigger_detection__rosidl_typesupport_introspection_c__TriggerDetection_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)r2_interfaces__srv__detail__trigger_detection__rosidl_typesupport_introspection_c__TriggerDetection_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, r2_interfaces, srv, TriggerDetection_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, r2_interfaces, srv, TriggerDetection_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, r2_interfaces, srv, TriggerDetection_Event)()->data;
  }

  return &r2_interfaces__srv__detail__trigger_detection__rosidl_typesupport_introspection_c__TriggerDetection_service_type_support_handle;
}
