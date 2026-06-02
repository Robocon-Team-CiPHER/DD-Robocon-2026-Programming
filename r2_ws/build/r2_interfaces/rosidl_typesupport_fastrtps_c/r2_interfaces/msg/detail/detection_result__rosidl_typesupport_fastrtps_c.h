// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from r2_interfaces:msg/DetectionResult.idl
// generated code does not contain a copyright notice
#ifndef R2_INTERFACES__MSG__DETAIL__DETECTION_RESULT__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define R2_INTERFACES__MSG__DETAIL__DETECTION_RESULT__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "r2_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "r2_interfaces/msg/detail/detection_result__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_r2_interfaces
bool cdr_serialize_r2_interfaces__msg__DetectionResult(
  const r2_interfaces__msg__DetectionResult * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_r2_interfaces
bool cdr_deserialize_r2_interfaces__msg__DetectionResult(
  eprosima::fastcdr::Cdr &,
  r2_interfaces__msg__DetectionResult * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_r2_interfaces
size_t get_serialized_size_r2_interfaces__msg__DetectionResult(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_r2_interfaces
size_t max_serialized_size_r2_interfaces__msg__DetectionResult(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_r2_interfaces
bool cdr_serialize_key_r2_interfaces__msg__DetectionResult(
  const r2_interfaces__msg__DetectionResult * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_r2_interfaces
size_t get_serialized_size_key_r2_interfaces__msg__DetectionResult(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_r2_interfaces
size_t max_serialized_size_key_r2_interfaces__msg__DetectionResult(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_r2_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, r2_interfaces, msg, DetectionResult)();

#ifdef __cplusplus
}
#endif

#endif  // R2_INTERFACES__MSG__DETAIL__DETECTION_RESULT__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
