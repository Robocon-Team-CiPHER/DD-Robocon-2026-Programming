// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from r2_interfaces:msg/ChassisCmd.idl
// generated code does not contain a copyright notice
#ifndef R2_INTERFACES__MSG__DETAIL__CHASSIS_CMD__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define R2_INTERFACES__MSG__DETAIL__CHASSIS_CMD__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "r2_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "r2_interfaces/msg/detail/chassis_cmd__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_r2_interfaces
bool cdr_serialize_r2_interfaces__msg__ChassisCmd(
  const r2_interfaces__msg__ChassisCmd * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_r2_interfaces
bool cdr_deserialize_r2_interfaces__msg__ChassisCmd(
  eprosima::fastcdr::Cdr &,
  r2_interfaces__msg__ChassisCmd * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_r2_interfaces
size_t get_serialized_size_r2_interfaces__msg__ChassisCmd(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_r2_interfaces
size_t max_serialized_size_r2_interfaces__msg__ChassisCmd(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_r2_interfaces
bool cdr_serialize_key_r2_interfaces__msg__ChassisCmd(
  const r2_interfaces__msg__ChassisCmd * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_r2_interfaces
size_t get_serialized_size_key_r2_interfaces__msg__ChassisCmd(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_r2_interfaces
size_t max_serialized_size_key_r2_interfaces__msg__ChassisCmd(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_r2_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, r2_interfaces, msg, ChassisCmd)();

#ifdef __cplusplus
}
#endif

#endif  // R2_INTERFACES__MSG__DETAIL__CHASSIS_CMD__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
