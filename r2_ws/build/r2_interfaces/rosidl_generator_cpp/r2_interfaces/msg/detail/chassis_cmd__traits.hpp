// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from r2_interfaces:msg/ChassisCmd.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "r2_interfaces/msg/chassis_cmd.hpp"


#ifndef R2_INTERFACES__MSG__DETAIL__CHASSIS_CMD__TRAITS_HPP_
#define R2_INTERFACES__MSG__DETAIL__CHASSIS_CMD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "r2_interfaces/msg/detail/chassis_cmd__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace r2_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const ChassisCmd & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: vx
  {
    out << "vx: ";
    rosidl_generator_traits::value_to_yaml(msg.vx, out);
    out << ", ";
  }

  // member: vy
  {
    out << "vy: ";
    rosidl_generator_traits::value_to_yaml(msg.vy, out);
    out << ", ";
  }

  // member: omega
  {
    out << "omega: ";
    rosidl_generator_traits::value_to_yaml(msg.omega, out);
    out << ", ";
  }

  // member: estop
  {
    out << "estop: ";
    rosidl_generator_traits::value_to_yaml(msg.estop, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ChassisCmd & msg,
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

  // member: vx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vx: ";
    rosidl_generator_traits::value_to_yaml(msg.vx, out);
    out << "\n";
  }

  // member: vy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vy: ";
    rosidl_generator_traits::value_to_yaml(msg.vy, out);
    out << "\n";
  }

  // member: omega
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "omega: ";
    rosidl_generator_traits::value_to_yaml(msg.omega, out);
    out << "\n";
  }

  // member: estop
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "estop: ";
    rosidl_generator_traits::value_to_yaml(msg.estop, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ChassisCmd & msg, bool use_flow_style = false)
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
  const r2_interfaces::msg::ChassisCmd & msg,
  std::ostream & out, size_t indentation = 0)
{
  r2_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use r2_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const r2_interfaces::msg::ChassisCmd & msg)
{
  return r2_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<r2_interfaces::msg::ChassisCmd>()
{
  return "r2_interfaces::msg::ChassisCmd";
}

template<>
inline const char * name<r2_interfaces::msg::ChassisCmd>()
{
  return "r2_interfaces/msg/ChassisCmd";
}

template<>
struct has_fixed_size<r2_interfaces::msg::ChassisCmd>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<r2_interfaces::msg::ChassisCmd>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<r2_interfaces::msg::ChassisCmd>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // R2_INTERFACES__MSG__DETAIL__CHASSIS_CMD__TRAITS_HPP_
