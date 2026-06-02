// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from r2_interfaces:msg/SerialFrame.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "r2_interfaces/msg/serial_frame.hpp"


#ifndef R2_INTERFACES__MSG__DETAIL__SERIAL_FRAME__TRAITS_HPP_
#define R2_INTERFACES__MSG__DETAIL__SERIAL_FRAME__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "r2_interfaces/msg/detail/serial_frame__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace r2_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const SerialFrame & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: device_id
  {
    out << "device_id: ";
    rosidl_generator_traits::value_to_yaml(msg.device_id, out);
    out << ", ";
  }

  // member: cmd_id
  {
    out << "cmd_id: ";
    rosidl_generator_traits::value_to_yaml(msg.cmd_id, out);
    out << ", ";
  }

  // member: payload
  {
    if (msg.payload.size() == 0) {
      out << "payload: []";
    } else {
      out << "payload: [";
      size_t pending_items = msg.payload.size();
      for (auto item : msg.payload) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: crc8
  {
    out << "crc8: ";
    rosidl_generator_traits::value_to_yaml(msg.crc8, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SerialFrame & msg,
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

  // member: device_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "device_id: ";
    rosidl_generator_traits::value_to_yaml(msg.device_id, out);
    out << "\n";
  }

  // member: cmd_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cmd_id: ";
    rosidl_generator_traits::value_to_yaml(msg.cmd_id, out);
    out << "\n";
  }

  // member: payload
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.payload.size() == 0) {
      out << "payload: []\n";
    } else {
      out << "payload:\n";
      for (auto item : msg.payload) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: crc8
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "crc8: ";
    rosidl_generator_traits::value_to_yaml(msg.crc8, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SerialFrame & msg, bool use_flow_style = false)
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
  const r2_interfaces::msg::SerialFrame & msg,
  std::ostream & out, size_t indentation = 0)
{
  r2_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use r2_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const r2_interfaces::msg::SerialFrame & msg)
{
  return r2_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<r2_interfaces::msg::SerialFrame>()
{
  return "r2_interfaces::msg::SerialFrame";
}

template<>
inline const char * name<r2_interfaces::msg::SerialFrame>()
{
  return "r2_interfaces/msg/SerialFrame";
}

template<>
struct has_fixed_size<r2_interfaces::msg::SerialFrame>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<r2_interfaces::msg::SerialFrame>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<r2_interfaces::msg::SerialFrame>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // R2_INTERFACES__MSG__DETAIL__SERIAL_FRAME__TRAITS_HPP_
