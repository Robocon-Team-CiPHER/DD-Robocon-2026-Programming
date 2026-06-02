// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from r2_interfaces:msg/DetectionResult.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "r2_interfaces/msg/detection_result.hpp"


#ifndef R2_INTERFACES__MSG__DETAIL__DETECTION_RESULT__TRAITS_HPP_
#define R2_INTERFACES__MSG__DETAIL__DETECTION_RESULT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "r2_interfaces/msg/detail/detection_result__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'bounding_box'
#include "sensor_msgs/msg/detail/region_of_interest__traits.hpp"

namespace r2_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const DetectionResult & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: target_type
  {
    out << "target_type: ";
    rosidl_generator_traits::value_to_yaml(msg.target_type, out);
    out << ", ";
  }

  // member: detected
  {
    out << "detected: ";
    rosidl_generator_traits::value_to_yaml(msg.detected, out);
    out << ", ";
  }

  // member: distance_mm
  {
    out << "distance_mm: ";
    rosidl_generator_traits::value_to_yaml(msg.distance_mm, out);
    out << ", ";
  }

  // member: offset_x_mm
  {
    out << "offset_x_mm: ";
    rosidl_generator_traits::value_to_yaml(msg.offset_x_mm, out);
    out << ", ";
  }

  // member: offset_y_mm
  {
    out << "offset_y_mm: ";
    rosidl_generator_traits::value_to_yaml(msg.offset_y_mm, out);
    out << ", ";
  }

  // member: confidence
  {
    out << "confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.confidence, out);
    out << ", ";
  }

  // member: bounding_box
  {
    out << "bounding_box: ";
    to_flow_style_yaml(msg.bounding_box, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DetectionResult & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: target_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_type: ";
    rosidl_generator_traits::value_to_yaml(msg.target_type, out);
    out << "\n";
  }

  // member: detected
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "detected: ";
    rosidl_generator_traits::value_to_yaml(msg.detected, out);
    out << "\n";
  }

  // member: distance_mm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "distance_mm: ";
    rosidl_generator_traits::value_to_yaml(msg.distance_mm, out);
    out << "\n";
  }

  // member: offset_x_mm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "offset_x_mm: ";
    rosidl_generator_traits::value_to_yaml(msg.offset_x_mm, out);
    out << "\n";
  }

  // member: offset_y_mm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "offset_y_mm: ";
    rosidl_generator_traits::value_to_yaml(msg.offset_y_mm, out);
    out << "\n";
  }

  // member: confidence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.confidence, out);
    out << "\n";
  }

  // member: bounding_box
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bounding_box:\n";
    to_block_style_yaml(msg.bounding_box, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DetectionResult & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace r2_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use r2_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const r2_interfaces::msg::DetectionResult & msg,
  std::ostream & out, size_t indentation = 0)
{
  r2_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use r2_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const r2_interfaces::msg::DetectionResult & msg)
{
  return r2_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<r2_interfaces::msg::DetectionResult>()
{
  return "r2_interfaces::msg::DetectionResult";
}

template<>
inline const char * name<r2_interfaces::msg::DetectionResult>()
{
  return "r2_interfaces/msg/DetectionResult";
}

template<>
struct has_fixed_size<r2_interfaces::msg::DetectionResult>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<r2_interfaces::msg::DetectionResult>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<r2_interfaces::msg::DetectionResult>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // R2_INTERFACES__MSG__DETAIL__DETECTION_RESULT__TRAITS_HPP_
