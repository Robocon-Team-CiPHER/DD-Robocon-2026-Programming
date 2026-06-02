// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from r2_interfaces:msg/SerialFrame.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "r2_interfaces/msg/detail/serial_frame__rosidl_typesupport_introspection_c.h"
#include "r2_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "r2_interfaces/msg/detail/serial_frame__functions.h"
#include "r2_interfaces/msg/detail/serial_frame__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `payload`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void r2_interfaces__msg__SerialFrame__rosidl_typesupport_introspection_c__SerialFrame_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  r2_interfaces__msg__SerialFrame__init(message_memory);
}

void r2_interfaces__msg__SerialFrame__rosidl_typesupport_introspection_c__SerialFrame_fini_function(void * message_memory)
{
  r2_interfaces__msg__SerialFrame__fini(message_memory);
}

size_t r2_interfaces__msg__SerialFrame__rosidl_typesupport_introspection_c__size_function__SerialFrame__payload(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * r2_interfaces__msg__SerialFrame__rosidl_typesupport_introspection_c__get_const_function__SerialFrame__payload(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * r2_interfaces__msg__SerialFrame__rosidl_typesupport_introspection_c__get_function__SerialFrame__payload(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void r2_interfaces__msg__SerialFrame__rosidl_typesupport_introspection_c__fetch_function__SerialFrame__payload(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    r2_interfaces__msg__SerialFrame__rosidl_typesupport_introspection_c__get_const_function__SerialFrame__payload(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void r2_interfaces__msg__SerialFrame__rosidl_typesupport_introspection_c__assign_function__SerialFrame__payload(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    r2_interfaces__msg__SerialFrame__rosidl_typesupport_introspection_c__get_function__SerialFrame__payload(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool r2_interfaces__msg__SerialFrame__rosidl_typesupport_introspection_c__resize_function__SerialFrame__payload(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember r2_interfaces__msg__SerialFrame__rosidl_typesupport_introspection_c__SerialFrame_message_member_array[5] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(r2_interfaces__msg__SerialFrame, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "device_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(r2_interfaces__msg__SerialFrame, device_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cmd_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(r2_interfaces__msg__SerialFrame, cmd_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "payload",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(r2_interfaces__msg__SerialFrame, payload),  // bytes offset in struct
    NULL,  // default value
    r2_interfaces__msg__SerialFrame__rosidl_typesupport_introspection_c__size_function__SerialFrame__payload,  // size() function pointer
    r2_interfaces__msg__SerialFrame__rosidl_typesupport_introspection_c__get_const_function__SerialFrame__payload,  // get_const(index) function pointer
    r2_interfaces__msg__SerialFrame__rosidl_typesupport_introspection_c__get_function__SerialFrame__payload,  // get(index) function pointer
    r2_interfaces__msg__SerialFrame__rosidl_typesupport_introspection_c__fetch_function__SerialFrame__payload,  // fetch(index, &value) function pointer
    r2_interfaces__msg__SerialFrame__rosidl_typesupport_introspection_c__assign_function__SerialFrame__payload,  // assign(index, value) function pointer
    r2_interfaces__msg__SerialFrame__rosidl_typesupport_introspection_c__resize_function__SerialFrame__payload  // resize(index) function pointer
  },
  {
    "crc8",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(r2_interfaces__msg__SerialFrame, crc8),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers r2_interfaces__msg__SerialFrame__rosidl_typesupport_introspection_c__SerialFrame_message_members = {
  "r2_interfaces__msg",  // message namespace
  "SerialFrame",  // message name
  5,  // number of fields
  sizeof(r2_interfaces__msg__SerialFrame),
  false,  // has_any_key_member_
  r2_interfaces__msg__SerialFrame__rosidl_typesupport_introspection_c__SerialFrame_message_member_array,  // message members
  r2_interfaces__msg__SerialFrame__rosidl_typesupport_introspection_c__SerialFrame_init_function,  // function to initialize message memory (memory has to be allocated)
  r2_interfaces__msg__SerialFrame__rosidl_typesupport_introspection_c__SerialFrame_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t r2_interfaces__msg__SerialFrame__rosidl_typesupport_introspection_c__SerialFrame_message_type_support_handle = {
  0,
  &r2_interfaces__msg__SerialFrame__rosidl_typesupport_introspection_c__SerialFrame_message_members,
  get_message_typesupport_handle_function,
  &r2_interfaces__msg__SerialFrame__get_type_hash,
  &r2_interfaces__msg__SerialFrame__get_type_description,
  &r2_interfaces__msg__SerialFrame__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_r2_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, r2_interfaces, msg, SerialFrame)() {
  r2_interfaces__msg__SerialFrame__rosidl_typesupport_introspection_c__SerialFrame_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!r2_interfaces__msg__SerialFrame__rosidl_typesupport_introspection_c__SerialFrame_message_type_support_handle.typesupport_identifier) {
    r2_interfaces__msg__SerialFrame__rosidl_typesupport_introspection_c__SerialFrame_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &r2_interfaces__msg__SerialFrame__rosidl_typesupport_introspection_c__SerialFrame_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
