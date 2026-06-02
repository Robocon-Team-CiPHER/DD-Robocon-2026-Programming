// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from r2_interfaces:msg/DetectionResult.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "r2_interfaces/msg/detection_result.h"


#ifndef R2_INTERFACES__MSG__DETAIL__DETECTION_RESULT__STRUCT_H_
#define R2_INTERFACES__MSG__DETAIL__DETECTION_RESULT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'target_type'
#include "rosidl_runtime_c/string.h"
// Member 'bounding_box'
#include "sensor_msgs/msg/detail/region_of_interest__struct.h"

/// Struct defined in msg/DetectionResult in the package r2_interfaces.
/**
  * DetectionResult.msg
  * Published by detection nodes (spearhead, KFS, TicTacToe rack)
 */
typedef struct r2_interfaces__msg__DetectionResult
{
  std_msgs__msg__Header header;
  /// "spearhead" | "kfs_box" | "ttt_rack"
  rosidl_runtime_c__String target_type;
  /// True when target is visible
  bool detected;
  /// Estimated distance to target (mm)
  float distance_mm;
  /// Horizontal offset from robot centre (mm)
  float offset_x_mm;
  /// Vertical   offset from robot centre (mm)
  float offset_y_mm;
  /// Detection confidence 0.0–1.0
  float confidence;
  /// Pixel bounding box
  sensor_msgs__msg__RegionOfInterest bounding_box;
} r2_interfaces__msg__DetectionResult;

// Struct for a sequence of r2_interfaces__msg__DetectionResult.
typedef struct r2_interfaces__msg__DetectionResult__Sequence
{
  r2_interfaces__msg__DetectionResult * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} r2_interfaces__msg__DetectionResult__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // R2_INTERFACES__MSG__DETAIL__DETECTION_RESULT__STRUCT_H_
