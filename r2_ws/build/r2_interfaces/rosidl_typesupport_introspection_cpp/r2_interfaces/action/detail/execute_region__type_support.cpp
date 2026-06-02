// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from r2_interfaces:action/ExecuteRegion.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "r2_interfaces/action/detail/execute_region__functions.h"
#include "r2_interfaces/action/detail/execute_region__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace r2_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void ExecuteRegion_Goal_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) r2_interfaces::action::ExecuteRegion_Goal(_init);
}

void ExecuteRegion_Goal_fini_function(void * message_memory)
{
  auto typed_message = static_cast<r2_interfaces::action::ExecuteRegion_Goal *>(message_memory);
  typed_message->~ExecuteRegion_Goal();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ExecuteRegion_Goal_message_member_array[1] = {
  {
    "region_name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(r2_interfaces::action::ExecuteRegion_Goal, region_name),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ExecuteRegion_Goal_message_members = {
  "r2_interfaces::action",  // message namespace
  "ExecuteRegion_Goal",  // message name
  1,  // number of fields
  sizeof(r2_interfaces::action::ExecuteRegion_Goal),
  false,  // has_any_key_member_
  ExecuteRegion_Goal_message_member_array,  // message members
  ExecuteRegion_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  ExecuteRegion_Goal_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ExecuteRegion_Goal_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ExecuteRegion_Goal_message_members,
  get_message_typesupport_handle_function,
  &r2_interfaces__action__ExecuteRegion_Goal__get_type_hash,
  &r2_interfaces__action__ExecuteRegion_Goal__get_type_description,
  &r2_interfaces__action__ExecuteRegion_Goal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace r2_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<r2_interfaces::action::ExecuteRegion_Goal>()
{
  return &::r2_interfaces::action::rosidl_typesupport_introspection_cpp::ExecuteRegion_Goal_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, r2_interfaces, action, ExecuteRegion_Goal)() {
  return &::r2_interfaces::action::rosidl_typesupport_introspection_cpp::ExecuteRegion_Goal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "r2_interfaces/action/detail/execute_region__functions.h"
// already included above
// #include "r2_interfaces/action/detail/execute_region__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace r2_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void ExecuteRegion_Result_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) r2_interfaces::action::ExecuteRegion_Result(_init);
}

void ExecuteRegion_Result_fini_function(void * message_memory)
{
  auto typed_message = static_cast<r2_interfaces::action::ExecuteRegion_Result *>(message_memory);
  typed_message->~ExecuteRegion_Result();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ExecuteRegion_Result_message_member_array[3] = {
  {
    "success",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(r2_interfaces::action::ExecuteRegion_Result, success),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "message",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(r2_interfaces::action::ExecuteRegion_Result, message),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "kfs_boxes_collected",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(r2_interfaces::action::ExecuteRegion_Result, kfs_boxes_collected),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ExecuteRegion_Result_message_members = {
  "r2_interfaces::action",  // message namespace
  "ExecuteRegion_Result",  // message name
  3,  // number of fields
  sizeof(r2_interfaces::action::ExecuteRegion_Result),
  false,  // has_any_key_member_
  ExecuteRegion_Result_message_member_array,  // message members
  ExecuteRegion_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  ExecuteRegion_Result_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ExecuteRegion_Result_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ExecuteRegion_Result_message_members,
  get_message_typesupport_handle_function,
  &r2_interfaces__action__ExecuteRegion_Result__get_type_hash,
  &r2_interfaces__action__ExecuteRegion_Result__get_type_description,
  &r2_interfaces__action__ExecuteRegion_Result__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace r2_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<r2_interfaces::action::ExecuteRegion_Result>()
{
  return &::r2_interfaces::action::rosidl_typesupport_introspection_cpp::ExecuteRegion_Result_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, r2_interfaces, action, ExecuteRegion_Result)() {
  return &::r2_interfaces::action::rosidl_typesupport_introspection_cpp::ExecuteRegion_Result_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "r2_interfaces/action/detail/execute_region__functions.h"
// already included above
// #include "r2_interfaces/action/detail/execute_region__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace r2_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void ExecuteRegion_Feedback_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) r2_interfaces::action::ExecuteRegion_Feedback(_init);
}

void ExecuteRegion_Feedback_fini_function(void * message_memory)
{
  auto typed_message = static_cast<r2_interfaces::action::ExecuteRegion_Feedback *>(message_memory);
  typed_message->~ExecuteRegion_Feedback();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ExecuteRegion_Feedback_message_member_array[4] = {
  {
    "current_step",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(r2_interfaces::action::ExecuteRegion_Feedback, current_step),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "steps_completed",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(r2_interfaces::action::ExecuteRegion_Feedback, steps_completed),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "total_steps",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(r2_interfaces::action::ExecuteRegion_Feedback, total_steps),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "progress_percent",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(r2_interfaces::action::ExecuteRegion_Feedback, progress_percent),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ExecuteRegion_Feedback_message_members = {
  "r2_interfaces::action",  // message namespace
  "ExecuteRegion_Feedback",  // message name
  4,  // number of fields
  sizeof(r2_interfaces::action::ExecuteRegion_Feedback),
  false,  // has_any_key_member_
  ExecuteRegion_Feedback_message_member_array,  // message members
  ExecuteRegion_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  ExecuteRegion_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ExecuteRegion_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ExecuteRegion_Feedback_message_members,
  get_message_typesupport_handle_function,
  &r2_interfaces__action__ExecuteRegion_Feedback__get_type_hash,
  &r2_interfaces__action__ExecuteRegion_Feedback__get_type_description,
  &r2_interfaces__action__ExecuteRegion_Feedback__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace r2_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<r2_interfaces::action::ExecuteRegion_Feedback>()
{
  return &::r2_interfaces::action::rosidl_typesupport_introspection_cpp::ExecuteRegion_Feedback_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, r2_interfaces, action, ExecuteRegion_Feedback)() {
  return &::r2_interfaces::action::rosidl_typesupport_introspection_cpp::ExecuteRegion_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "r2_interfaces/action/detail/execute_region__functions.h"
// already included above
// #include "r2_interfaces/action/detail/execute_region__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace r2_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void ExecuteRegion_SendGoal_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) r2_interfaces::action::ExecuteRegion_SendGoal_Request(_init);
}

void ExecuteRegion_SendGoal_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<r2_interfaces::action::ExecuteRegion_SendGoal_Request *>(message_memory);
  typed_message->~ExecuteRegion_SendGoal_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ExecuteRegion_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(r2_interfaces::action::ExecuteRegion_SendGoal_Request, goal_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "goal",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<r2_interfaces::action::ExecuteRegion_Goal>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(r2_interfaces::action::ExecuteRegion_SendGoal_Request, goal),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ExecuteRegion_SendGoal_Request_message_members = {
  "r2_interfaces::action",  // message namespace
  "ExecuteRegion_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(r2_interfaces::action::ExecuteRegion_SendGoal_Request),
  false,  // has_any_key_member_
  ExecuteRegion_SendGoal_Request_message_member_array,  // message members
  ExecuteRegion_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  ExecuteRegion_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ExecuteRegion_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ExecuteRegion_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
  &r2_interfaces__action__ExecuteRegion_SendGoal_Request__get_type_hash,
  &r2_interfaces__action__ExecuteRegion_SendGoal_Request__get_type_description,
  &r2_interfaces__action__ExecuteRegion_SendGoal_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace r2_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<r2_interfaces::action::ExecuteRegion_SendGoal_Request>()
{
  return &::r2_interfaces::action::rosidl_typesupport_introspection_cpp::ExecuteRegion_SendGoal_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, r2_interfaces, action, ExecuteRegion_SendGoal_Request)() {
  return &::r2_interfaces::action::rosidl_typesupport_introspection_cpp::ExecuteRegion_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "r2_interfaces/action/detail/execute_region__functions.h"
// already included above
// #include "r2_interfaces/action/detail/execute_region__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace r2_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void ExecuteRegion_SendGoal_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) r2_interfaces::action::ExecuteRegion_SendGoal_Response(_init);
}

void ExecuteRegion_SendGoal_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<r2_interfaces::action::ExecuteRegion_SendGoal_Response *>(message_memory);
  typed_message->~ExecuteRegion_SendGoal_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ExecuteRegion_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(r2_interfaces::action::ExecuteRegion_SendGoal_Response, accepted),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "stamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<builtin_interfaces::msg::Time>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(r2_interfaces::action::ExecuteRegion_SendGoal_Response, stamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ExecuteRegion_SendGoal_Response_message_members = {
  "r2_interfaces::action",  // message namespace
  "ExecuteRegion_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(r2_interfaces::action::ExecuteRegion_SendGoal_Response),
  false,  // has_any_key_member_
  ExecuteRegion_SendGoal_Response_message_member_array,  // message members
  ExecuteRegion_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  ExecuteRegion_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ExecuteRegion_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ExecuteRegion_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
  &r2_interfaces__action__ExecuteRegion_SendGoal_Response__get_type_hash,
  &r2_interfaces__action__ExecuteRegion_SendGoal_Response__get_type_description,
  &r2_interfaces__action__ExecuteRegion_SendGoal_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace r2_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<r2_interfaces::action::ExecuteRegion_SendGoal_Response>()
{
  return &::r2_interfaces::action::rosidl_typesupport_introspection_cpp::ExecuteRegion_SendGoal_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, r2_interfaces, action, ExecuteRegion_SendGoal_Response)() {
  return &::r2_interfaces::action::rosidl_typesupport_introspection_cpp::ExecuteRegion_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "r2_interfaces/action/detail/execute_region__functions.h"
// already included above
// #include "r2_interfaces/action/detail/execute_region__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace r2_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void ExecuteRegion_SendGoal_Event_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) r2_interfaces::action::ExecuteRegion_SendGoal_Event(_init);
}

void ExecuteRegion_SendGoal_Event_fini_function(void * message_memory)
{
  auto typed_message = static_cast<r2_interfaces::action::ExecuteRegion_SendGoal_Event *>(message_memory);
  typed_message->~ExecuteRegion_SendGoal_Event();
}

size_t size_function__ExecuteRegion_SendGoal_Event__request(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<r2_interfaces::action::ExecuteRegion_SendGoal_Request> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ExecuteRegion_SendGoal_Event__request(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<r2_interfaces::action::ExecuteRegion_SendGoal_Request> *>(untyped_member);
  return &member[index];
}

void * get_function__ExecuteRegion_SendGoal_Event__request(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<r2_interfaces::action::ExecuteRegion_SendGoal_Request> *>(untyped_member);
  return &member[index];
}

void fetch_function__ExecuteRegion_SendGoal_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const r2_interfaces::action::ExecuteRegion_SendGoal_Request *>(
    get_const_function__ExecuteRegion_SendGoal_Event__request(untyped_member, index));
  auto & value = *reinterpret_cast<r2_interfaces::action::ExecuteRegion_SendGoal_Request *>(untyped_value);
  value = item;
}

void assign_function__ExecuteRegion_SendGoal_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<r2_interfaces::action::ExecuteRegion_SendGoal_Request *>(
    get_function__ExecuteRegion_SendGoal_Event__request(untyped_member, index));
  const auto & value = *reinterpret_cast<const r2_interfaces::action::ExecuteRegion_SendGoal_Request *>(untyped_value);
  item = value;
}

void resize_function__ExecuteRegion_SendGoal_Event__request(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<r2_interfaces::action::ExecuteRegion_SendGoal_Request> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ExecuteRegion_SendGoal_Event__response(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<r2_interfaces::action::ExecuteRegion_SendGoal_Response> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ExecuteRegion_SendGoal_Event__response(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<r2_interfaces::action::ExecuteRegion_SendGoal_Response> *>(untyped_member);
  return &member[index];
}

void * get_function__ExecuteRegion_SendGoal_Event__response(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<r2_interfaces::action::ExecuteRegion_SendGoal_Response> *>(untyped_member);
  return &member[index];
}

void fetch_function__ExecuteRegion_SendGoal_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const r2_interfaces::action::ExecuteRegion_SendGoal_Response *>(
    get_const_function__ExecuteRegion_SendGoal_Event__response(untyped_member, index));
  auto & value = *reinterpret_cast<r2_interfaces::action::ExecuteRegion_SendGoal_Response *>(untyped_value);
  value = item;
}

void assign_function__ExecuteRegion_SendGoal_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<r2_interfaces::action::ExecuteRegion_SendGoal_Response *>(
    get_function__ExecuteRegion_SendGoal_Event__response(untyped_member, index));
  const auto & value = *reinterpret_cast<const r2_interfaces::action::ExecuteRegion_SendGoal_Response *>(untyped_value);
  item = value;
}

void resize_function__ExecuteRegion_SendGoal_Event__response(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<r2_interfaces::action::ExecuteRegion_SendGoal_Response> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ExecuteRegion_SendGoal_Event_message_member_array[3] = {
  {
    "info",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<service_msgs::msg::ServiceEventInfo>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(r2_interfaces::action::ExecuteRegion_SendGoal_Event, info),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "request",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<r2_interfaces::action::ExecuteRegion_SendGoal_Request>(),  // members of sub message
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(r2_interfaces::action::ExecuteRegion_SendGoal_Event, request),  // bytes offset in struct
    nullptr,  // default value
    size_function__ExecuteRegion_SendGoal_Event__request,  // size() function pointer
    get_const_function__ExecuteRegion_SendGoal_Event__request,  // get_const(index) function pointer
    get_function__ExecuteRegion_SendGoal_Event__request,  // get(index) function pointer
    fetch_function__ExecuteRegion_SendGoal_Event__request,  // fetch(index, &value) function pointer
    assign_function__ExecuteRegion_SendGoal_Event__request,  // assign(index, value) function pointer
    resize_function__ExecuteRegion_SendGoal_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<r2_interfaces::action::ExecuteRegion_SendGoal_Response>(),  // members of sub message
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(r2_interfaces::action::ExecuteRegion_SendGoal_Event, response),  // bytes offset in struct
    nullptr,  // default value
    size_function__ExecuteRegion_SendGoal_Event__response,  // size() function pointer
    get_const_function__ExecuteRegion_SendGoal_Event__response,  // get_const(index) function pointer
    get_function__ExecuteRegion_SendGoal_Event__response,  // get(index) function pointer
    fetch_function__ExecuteRegion_SendGoal_Event__response,  // fetch(index, &value) function pointer
    assign_function__ExecuteRegion_SendGoal_Event__response,  // assign(index, value) function pointer
    resize_function__ExecuteRegion_SendGoal_Event__response  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ExecuteRegion_SendGoal_Event_message_members = {
  "r2_interfaces::action",  // message namespace
  "ExecuteRegion_SendGoal_Event",  // message name
  3,  // number of fields
  sizeof(r2_interfaces::action::ExecuteRegion_SendGoal_Event),
  false,  // has_any_key_member_
  ExecuteRegion_SendGoal_Event_message_member_array,  // message members
  ExecuteRegion_SendGoal_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  ExecuteRegion_SendGoal_Event_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ExecuteRegion_SendGoal_Event_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ExecuteRegion_SendGoal_Event_message_members,
  get_message_typesupport_handle_function,
  &r2_interfaces__action__ExecuteRegion_SendGoal_Event__get_type_hash,
  &r2_interfaces__action__ExecuteRegion_SendGoal_Event__get_type_description,
  &r2_interfaces__action__ExecuteRegion_SendGoal_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace r2_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<r2_interfaces::action::ExecuteRegion_SendGoal_Event>()
{
  return &::r2_interfaces::action::rosidl_typesupport_introspection_cpp::ExecuteRegion_SendGoal_Event_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, r2_interfaces, action, ExecuteRegion_SendGoal_Event)() {
  return &::r2_interfaces::action::rosidl_typesupport_introspection_cpp::ExecuteRegion_SendGoal_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "r2_interfaces/action/detail/execute_region__functions.h"
// already included above
// #include "r2_interfaces/action/detail/execute_region__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace r2_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers ExecuteRegion_SendGoal_service_members = {
  "r2_interfaces::action",  // service namespace
  "ExecuteRegion_SendGoal",  // service name
  // the following fields are initialized below on first access
  // see get_service_type_support_handle<r2_interfaces::action::ExecuteRegion_SendGoal>()
  nullptr,  // request message
  nullptr,  // response message
  nullptr,  // event message
};

static const rosidl_service_type_support_t ExecuteRegion_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ExecuteRegion_SendGoal_service_members,
  get_service_typesupport_handle_function,
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<r2_interfaces::action::ExecuteRegion_SendGoal_Request>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<r2_interfaces::action::ExecuteRegion_SendGoal_Response>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<r2_interfaces::action::ExecuteRegion_SendGoal_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<r2_interfaces::action::ExecuteRegion_SendGoal>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<r2_interfaces::action::ExecuteRegion_SendGoal>,
  &r2_interfaces__action__ExecuteRegion_SendGoal__get_type_hash,
  &r2_interfaces__action__ExecuteRegion_SendGoal__get_type_description,
  &r2_interfaces__action__ExecuteRegion_SendGoal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace r2_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<r2_interfaces::action::ExecuteRegion_SendGoal>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::r2_interfaces::action::rosidl_typesupport_introspection_cpp::ExecuteRegion_SendGoal_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure all of the service_members are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr ||
    service_members->event_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::r2_interfaces::action::ExecuteRegion_SendGoal_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::r2_interfaces::action::ExecuteRegion_SendGoal_Response
      >()->data
      );
    // initialize the event_members_ with the static function from the external library
    service_members->event_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::r2_interfaces::action::ExecuteRegion_SendGoal_Event
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, r2_interfaces, action, ExecuteRegion_SendGoal)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<r2_interfaces::action::ExecuteRegion_SendGoal>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "r2_interfaces/action/detail/execute_region__functions.h"
// already included above
// #include "r2_interfaces/action/detail/execute_region__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace r2_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void ExecuteRegion_GetResult_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) r2_interfaces::action::ExecuteRegion_GetResult_Request(_init);
}

void ExecuteRegion_GetResult_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<r2_interfaces::action::ExecuteRegion_GetResult_Request *>(message_memory);
  typed_message->~ExecuteRegion_GetResult_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ExecuteRegion_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(r2_interfaces::action::ExecuteRegion_GetResult_Request, goal_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ExecuteRegion_GetResult_Request_message_members = {
  "r2_interfaces::action",  // message namespace
  "ExecuteRegion_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(r2_interfaces::action::ExecuteRegion_GetResult_Request),
  false,  // has_any_key_member_
  ExecuteRegion_GetResult_Request_message_member_array,  // message members
  ExecuteRegion_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  ExecuteRegion_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ExecuteRegion_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ExecuteRegion_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
  &r2_interfaces__action__ExecuteRegion_GetResult_Request__get_type_hash,
  &r2_interfaces__action__ExecuteRegion_GetResult_Request__get_type_description,
  &r2_interfaces__action__ExecuteRegion_GetResult_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace r2_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<r2_interfaces::action::ExecuteRegion_GetResult_Request>()
{
  return &::r2_interfaces::action::rosidl_typesupport_introspection_cpp::ExecuteRegion_GetResult_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, r2_interfaces, action, ExecuteRegion_GetResult_Request)() {
  return &::r2_interfaces::action::rosidl_typesupport_introspection_cpp::ExecuteRegion_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "r2_interfaces/action/detail/execute_region__functions.h"
// already included above
// #include "r2_interfaces/action/detail/execute_region__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace r2_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void ExecuteRegion_GetResult_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) r2_interfaces::action::ExecuteRegion_GetResult_Response(_init);
}

void ExecuteRegion_GetResult_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<r2_interfaces::action::ExecuteRegion_GetResult_Response *>(message_memory);
  typed_message->~ExecuteRegion_GetResult_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ExecuteRegion_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(r2_interfaces::action::ExecuteRegion_GetResult_Response, status),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "result",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<r2_interfaces::action::ExecuteRegion_Result>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(r2_interfaces::action::ExecuteRegion_GetResult_Response, result),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ExecuteRegion_GetResult_Response_message_members = {
  "r2_interfaces::action",  // message namespace
  "ExecuteRegion_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(r2_interfaces::action::ExecuteRegion_GetResult_Response),
  false,  // has_any_key_member_
  ExecuteRegion_GetResult_Response_message_member_array,  // message members
  ExecuteRegion_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  ExecuteRegion_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ExecuteRegion_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ExecuteRegion_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
  &r2_interfaces__action__ExecuteRegion_GetResult_Response__get_type_hash,
  &r2_interfaces__action__ExecuteRegion_GetResult_Response__get_type_description,
  &r2_interfaces__action__ExecuteRegion_GetResult_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace r2_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<r2_interfaces::action::ExecuteRegion_GetResult_Response>()
{
  return &::r2_interfaces::action::rosidl_typesupport_introspection_cpp::ExecuteRegion_GetResult_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, r2_interfaces, action, ExecuteRegion_GetResult_Response)() {
  return &::r2_interfaces::action::rosidl_typesupport_introspection_cpp::ExecuteRegion_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "r2_interfaces/action/detail/execute_region__functions.h"
// already included above
// #include "r2_interfaces/action/detail/execute_region__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace r2_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void ExecuteRegion_GetResult_Event_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) r2_interfaces::action::ExecuteRegion_GetResult_Event(_init);
}

void ExecuteRegion_GetResult_Event_fini_function(void * message_memory)
{
  auto typed_message = static_cast<r2_interfaces::action::ExecuteRegion_GetResult_Event *>(message_memory);
  typed_message->~ExecuteRegion_GetResult_Event();
}

size_t size_function__ExecuteRegion_GetResult_Event__request(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<r2_interfaces::action::ExecuteRegion_GetResult_Request> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ExecuteRegion_GetResult_Event__request(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<r2_interfaces::action::ExecuteRegion_GetResult_Request> *>(untyped_member);
  return &member[index];
}

void * get_function__ExecuteRegion_GetResult_Event__request(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<r2_interfaces::action::ExecuteRegion_GetResult_Request> *>(untyped_member);
  return &member[index];
}

void fetch_function__ExecuteRegion_GetResult_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const r2_interfaces::action::ExecuteRegion_GetResult_Request *>(
    get_const_function__ExecuteRegion_GetResult_Event__request(untyped_member, index));
  auto & value = *reinterpret_cast<r2_interfaces::action::ExecuteRegion_GetResult_Request *>(untyped_value);
  value = item;
}

void assign_function__ExecuteRegion_GetResult_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<r2_interfaces::action::ExecuteRegion_GetResult_Request *>(
    get_function__ExecuteRegion_GetResult_Event__request(untyped_member, index));
  const auto & value = *reinterpret_cast<const r2_interfaces::action::ExecuteRegion_GetResult_Request *>(untyped_value);
  item = value;
}

void resize_function__ExecuteRegion_GetResult_Event__request(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<r2_interfaces::action::ExecuteRegion_GetResult_Request> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ExecuteRegion_GetResult_Event__response(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<r2_interfaces::action::ExecuteRegion_GetResult_Response> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ExecuteRegion_GetResult_Event__response(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<r2_interfaces::action::ExecuteRegion_GetResult_Response> *>(untyped_member);
  return &member[index];
}

void * get_function__ExecuteRegion_GetResult_Event__response(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<r2_interfaces::action::ExecuteRegion_GetResult_Response> *>(untyped_member);
  return &member[index];
}

void fetch_function__ExecuteRegion_GetResult_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const r2_interfaces::action::ExecuteRegion_GetResult_Response *>(
    get_const_function__ExecuteRegion_GetResult_Event__response(untyped_member, index));
  auto & value = *reinterpret_cast<r2_interfaces::action::ExecuteRegion_GetResult_Response *>(untyped_value);
  value = item;
}

void assign_function__ExecuteRegion_GetResult_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<r2_interfaces::action::ExecuteRegion_GetResult_Response *>(
    get_function__ExecuteRegion_GetResult_Event__response(untyped_member, index));
  const auto & value = *reinterpret_cast<const r2_interfaces::action::ExecuteRegion_GetResult_Response *>(untyped_value);
  item = value;
}

void resize_function__ExecuteRegion_GetResult_Event__response(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<r2_interfaces::action::ExecuteRegion_GetResult_Response> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ExecuteRegion_GetResult_Event_message_member_array[3] = {
  {
    "info",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<service_msgs::msg::ServiceEventInfo>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(r2_interfaces::action::ExecuteRegion_GetResult_Event, info),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "request",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<r2_interfaces::action::ExecuteRegion_GetResult_Request>(),  // members of sub message
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(r2_interfaces::action::ExecuteRegion_GetResult_Event, request),  // bytes offset in struct
    nullptr,  // default value
    size_function__ExecuteRegion_GetResult_Event__request,  // size() function pointer
    get_const_function__ExecuteRegion_GetResult_Event__request,  // get_const(index) function pointer
    get_function__ExecuteRegion_GetResult_Event__request,  // get(index) function pointer
    fetch_function__ExecuteRegion_GetResult_Event__request,  // fetch(index, &value) function pointer
    assign_function__ExecuteRegion_GetResult_Event__request,  // assign(index, value) function pointer
    resize_function__ExecuteRegion_GetResult_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<r2_interfaces::action::ExecuteRegion_GetResult_Response>(),  // members of sub message
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(r2_interfaces::action::ExecuteRegion_GetResult_Event, response),  // bytes offset in struct
    nullptr,  // default value
    size_function__ExecuteRegion_GetResult_Event__response,  // size() function pointer
    get_const_function__ExecuteRegion_GetResult_Event__response,  // get_const(index) function pointer
    get_function__ExecuteRegion_GetResult_Event__response,  // get(index) function pointer
    fetch_function__ExecuteRegion_GetResult_Event__response,  // fetch(index, &value) function pointer
    assign_function__ExecuteRegion_GetResult_Event__response,  // assign(index, value) function pointer
    resize_function__ExecuteRegion_GetResult_Event__response  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ExecuteRegion_GetResult_Event_message_members = {
  "r2_interfaces::action",  // message namespace
  "ExecuteRegion_GetResult_Event",  // message name
  3,  // number of fields
  sizeof(r2_interfaces::action::ExecuteRegion_GetResult_Event),
  false,  // has_any_key_member_
  ExecuteRegion_GetResult_Event_message_member_array,  // message members
  ExecuteRegion_GetResult_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  ExecuteRegion_GetResult_Event_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ExecuteRegion_GetResult_Event_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ExecuteRegion_GetResult_Event_message_members,
  get_message_typesupport_handle_function,
  &r2_interfaces__action__ExecuteRegion_GetResult_Event__get_type_hash,
  &r2_interfaces__action__ExecuteRegion_GetResult_Event__get_type_description,
  &r2_interfaces__action__ExecuteRegion_GetResult_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace r2_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<r2_interfaces::action::ExecuteRegion_GetResult_Event>()
{
  return &::r2_interfaces::action::rosidl_typesupport_introspection_cpp::ExecuteRegion_GetResult_Event_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, r2_interfaces, action, ExecuteRegion_GetResult_Event)() {
  return &::r2_interfaces::action::rosidl_typesupport_introspection_cpp::ExecuteRegion_GetResult_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "r2_interfaces/action/detail/execute_region__functions.h"
// already included above
// #include "r2_interfaces/action/detail/execute_region__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace r2_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers ExecuteRegion_GetResult_service_members = {
  "r2_interfaces::action",  // service namespace
  "ExecuteRegion_GetResult",  // service name
  // the following fields are initialized below on first access
  // see get_service_type_support_handle<r2_interfaces::action::ExecuteRegion_GetResult>()
  nullptr,  // request message
  nullptr,  // response message
  nullptr,  // event message
};

static const rosidl_service_type_support_t ExecuteRegion_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ExecuteRegion_GetResult_service_members,
  get_service_typesupport_handle_function,
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<r2_interfaces::action::ExecuteRegion_GetResult_Request>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<r2_interfaces::action::ExecuteRegion_GetResult_Response>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<r2_interfaces::action::ExecuteRegion_GetResult_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<r2_interfaces::action::ExecuteRegion_GetResult>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<r2_interfaces::action::ExecuteRegion_GetResult>,
  &r2_interfaces__action__ExecuteRegion_GetResult__get_type_hash,
  &r2_interfaces__action__ExecuteRegion_GetResult__get_type_description,
  &r2_interfaces__action__ExecuteRegion_GetResult__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace r2_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<r2_interfaces::action::ExecuteRegion_GetResult>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::r2_interfaces::action::rosidl_typesupport_introspection_cpp::ExecuteRegion_GetResult_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure all of the service_members are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr ||
    service_members->event_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::r2_interfaces::action::ExecuteRegion_GetResult_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::r2_interfaces::action::ExecuteRegion_GetResult_Response
      >()->data
      );
    // initialize the event_members_ with the static function from the external library
    service_members->event_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::r2_interfaces::action::ExecuteRegion_GetResult_Event
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, r2_interfaces, action, ExecuteRegion_GetResult)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<r2_interfaces::action::ExecuteRegion_GetResult>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "r2_interfaces/action/detail/execute_region__functions.h"
// already included above
// #include "r2_interfaces/action/detail/execute_region__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace r2_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void ExecuteRegion_FeedbackMessage_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) r2_interfaces::action::ExecuteRegion_FeedbackMessage(_init);
}

void ExecuteRegion_FeedbackMessage_fini_function(void * message_memory)
{
  auto typed_message = static_cast<r2_interfaces::action::ExecuteRegion_FeedbackMessage *>(message_memory);
  typed_message->~ExecuteRegion_FeedbackMessage();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ExecuteRegion_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(r2_interfaces::action::ExecuteRegion_FeedbackMessage, goal_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "feedback",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<r2_interfaces::action::ExecuteRegion_Feedback>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(r2_interfaces::action::ExecuteRegion_FeedbackMessage, feedback),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ExecuteRegion_FeedbackMessage_message_members = {
  "r2_interfaces::action",  // message namespace
  "ExecuteRegion_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(r2_interfaces::action::ExecuteRegion_FeedbackMessage),
  false,  // has_any_key_member_
  ExecuteRegion_FeedbackMessage_message_member_array,  // message members
  ExecuteRegion_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  ExecuteRegion_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ExecuteRegion_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ExecuteRegion_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
  &r2_interfaces__action__ExecuteRegion_FeedbackMessage__get_type_hash,
  &r2_interfaces__action__ExecuteRegion_FeedbackMessage__get_type_description,
  &r2_interfaces__action__ExecuteRegion_FeedbackMessage__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace r2_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<r2_interfaces::action::ExecuteRegion_FeedbackMessage>()
{
  return &::r2_interfaces::action::rosidl_typesupport_introspection_cpp::ExecuteRegion_FeedbackMessage_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, r2_interfaces, action, ExecuteRegion_FeedbackMessage)() {
  return &::r2_interfaces::action::rosidl_typesupport_introspection_cpp::ExecuteRegion_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
