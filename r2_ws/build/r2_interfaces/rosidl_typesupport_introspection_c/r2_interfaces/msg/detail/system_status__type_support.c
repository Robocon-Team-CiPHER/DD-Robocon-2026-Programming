// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from r2_interfaces:msg/SystemStatus.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "r2_interfaces/msg/detail/system_status__rosidl_typesupport_introspection_c.h"
#include "r2_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "r2_interfaces/msg/detail/system_status__functions.h"
#include "r2_interfaces/msg/detail/system_status__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `mission_state`
// Member `warnings`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void r2_interfaces__msg__SystemStatus__rosidl_typesupport_introspection_c__SystemStatus_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  r2_interfaces__msg__SystemStatus__init(message_memory);
}

void r2_interfaces__msg__SystemStatus__rosidl_typesupport_introspection_c__SystemStatus_fini_function(void * message_memory)
{
  r2_interfaces__msg__SystemStatus__fini(message_memory);
}

size_t r2_interfaces__msg__SystemStatus__rosidl_typesupport_introspection_c__size_function__SystemStatus__warnings(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * r2_interfaces__msg__SystemStatus__rosidl_typesupport_introspection_c__get_const_function__SystemStatus__warnings(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * r2_interfaces__msg__SystemStatus__rosidl_typesupport_introspection_c__get_function__SystemStatus__warnings(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void r2_interfaces__msg__SystemStatus__rosidl_typesupport_introspection_c__fetch_function__SystemStatus__warnings(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    r2_interfaces__msg__SystemStatus__rosidl_typesupport_introspection_c__get_const_function__SystemStatus__warnings(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void r2_interfaces__msg__SystemStatus__rosidl_typesupport_introspection_c__assign_function__SystemStatus__warnings(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    r2_interfaces__msg__SystemStatus__rosidl_typesupport_introspection_c__get_function__SystemStatus__warnings(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool r2_interfaces__msg__SystemStatus__rosidl_typesupport_introspection_c__resize_function__SystemStatus__warnings(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember r2_interfaces__msg__SystemStatus__rosidl_typesupport_introspection_c__SystemStatus_message_member_array[8] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(r2_interfaces__msg__SystemStatus, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rpi_ok",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(r2_interfaces__msg__SystemStatus, rpi_ok),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "esp32_ok",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(r2_interfaces__msg__SystemStatus, esp32_ok),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "arduino_ok",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(r2_interfaces__msg__SystemStatus, arduino_ok),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cameras_ok",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(r2_interfaces__msg__SystemStatus, cameras_ok),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "encoders_ok",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(r2_interfaces__msg__SystemStatus, encoders_ok),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "mission_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(r2_interfaces__msg__SystemStatus, mission_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "warnings",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(r2_interfaces__msg__SystemStatus, warnings),  // bytes offset in struct
    NULL,  // default value
    r2_interfaces__msg__SystemStatus__rosidl_typesupport_introspection_c__size_function__SystemStatus__warnings,  // size() function pointer
    r2_interfaces__msg__SystemStatus__rosidl_typesupport_introspection_c__get_const_function__SystemStatus__warnings,  // get_const(index) function pointer
    r2_interfaces__msg__SystemStatus__rosidl_typesupport_introspection_c__get_function__SystemStatus__warnings,  // get(index) function pointer
    r2_interfaces__msg__SystemStatus__rosidl_typesupport_introspection_c__fetch_function__SystemStatus__warnings,  // fetch(index, &value) function pointer
    r2_interfaces__msg__SystemStatus__rosidl_typesupport_introspection_c__assign_function__SystemStatus__warnings,  // assign(index, value) function pointer
    r2_interfaces__msg__SystemStatus__rosidl_typesupport_introspection_c__resize_function__SystemStatus__warnings  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers r2_interfaces__msg__SystemStatus__rosidl_typesupport_introspection_c__SystemStatus_message_members = {
  "r2_interfaces__msg",  // message namespace
  "SystemStatus",  // message name
  8,  // number of fields
  sizeof(r2_interfaces__msg__SystemStatus),
  false,  // has_any_key_member_
  r2_interfaces__msg__SystemStatus__rosidl_typesupport_introspection_c__SystemStatus_message_member_array,  // message members
  r2_interfaces__msg__SystemStatus__rosidl_typesupport_introspection_c__SystemStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  r2_interfaces__msg__SystemStatus__rosidl_typesupport_introspection_c__SystemStatus_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t r2_interfaces__msg__SystemStatus__rosidl_typesupport_introspection_c__SystemStatus_message_type_support_handle = {
  0,
  &r2_interfaces__msg__SystemStatus__rosidl_typesupport_introspection_c__SystemStatus_message_members,
  get_message_typesupport_handle_function,
  &r2_interfaces__msg__SystemStatus__get_type_hash,
  &r2_interfaces__msg__SystemStatus__get_type_description,
  &r2_interfaces__msg__SystemStatus__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_r2_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, r2_interfaces, msg, SystemStatus)() {
  r2_interfaces__msg__SystemStatus__rosidl_typesupport_introspection_c__SystemStatus_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!r2_interfaces__msg__SystemStatus__rosidl_typesupport_introspection_c__SystemStatus_message_type_support_handle.typesupport_identifier) {
    r2_interfaces__msg__SystemStatus__rosidl_typesupport_introspection_c__SystemStatus_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &r2_interfaces__msg__SystemStatus__rosidl_typesupport_introspection_c__SystemStatus_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
