// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from r2_interfaces:msg/MechanismStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "r2_interfaces/msg/mechanism_status.hpp"


#ifndef R2_INTERFACES__MSG__DETAIL__MECHANISM_STATUS__TRAITS_HPP_
#define R2_INTERFACES__MSG__DETAIL__MECHANISM_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "r2_interfaces/msg/detail/mechanism_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace r2_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const MechanismStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: mechanism_id
  {
    out << "mechanism_id: ";
    rosidl_generator_traits::value_to_yaml(msg.mechanism_id, out);
    out << ", ";
  }

  // member: state
  {
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
    out << ", ";
  }

  // member: position_mm
  {
    out << "position_mm: ";
    rosidl_generator_traits::value_to_yaml(msg.position_mm, out);
    out << ", ";
  }

  // member: limit_switch_min
  {
    out << "limit_switch_min: ";
    rosidl_generator_traits::value_to_yaml(msg.limit_switch_min, out);
    out << ", ";
  }

  // member: limit_switch_max
  {
    out << "limit_switch_max: ";
    rosidl_generator_traits::value_to_yaml(msg.limit_switch_max, out);
    out << ", ";
  }

  // member: error_msg
  {
    out << "error_msg: ";
    rosidl_generator_traits::value_to_yaml(msg.error_msg, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MechanismStatus & msg,
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

  // member: mechanism_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mechanism_id: ";
    rosidl_generator_traits::value_to_yaml(msg.mechanism_id, out);
    out << "\n";
  }

  // member: state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
    out << "\n";
  }

  // member: position_mm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position_mm: ";
    rosidl_generator_traits::value_to_yaml(msg.position_mm, out);
    out << "\n";
  }

  // member: limit_switch_min
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "limit_switch_min: ";
    rosidl_generator_traits::value_to_yaml(msg.limit_switch_min, out);
    out << "\n";
  }

  // member: limit_switch_max
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "limit_switch_max: ";
    rosidl_generator_traits::value_to_yaml(msg.limit_switch_max, out);
    out << "\n";
  }

  // member: error_msg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_msg: ";
    rosidl_generator_traits::value_to_yaml(msg.error_msg, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MechanismStatus & msg, bool use_flow_style = false)
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
  const r2_interfaces::msg::MechanismStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  r2_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use r2_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const r2_interfaces::msg::MechanismStatus & msg)
{
  return r2_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<r2_interfaces::msg::MechanismStatus>()
{
  return "r2_interfaces::msg::MechanismStatus";
}

template<>
inline const char * name<r2_interfaces::msg::MechanismStatus>()
{
  return "r2_interfaces/msg/MechanismStatus";
}

template<>
struct has_fixed_size<r2_interfaces::msg::MechanismStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<r2_interfaces::msg::MechanismStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<r2_interfaces::msg::MechanismStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // R2_INTERFACES__MSG__DETAIL__MECHANISM_STATUS__TRAITS_HPP_
