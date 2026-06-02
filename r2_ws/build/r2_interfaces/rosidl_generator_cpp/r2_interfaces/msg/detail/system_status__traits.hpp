// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from r2_interfaces:msg/SystemStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "r2_interfaces/msg/system_status.hpp"


#ifndef R2_INTERFACES__MSG__DETAIL__SYSTEM_STATUS__TRAITS_HPP_
#define R2_INTERFACES__MSG__DETAIL__SYSTEM_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "r2_interfaces/msg/detail/system_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace r2_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const SystemStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: rpi_ok
  {
    out << "rpi_ok: ";
    rosidl_generator_traits::value_to_yaml(msg.rpi_ok, out);
    out << ", ";
  }

  // member: esp32_ok
  {
    out << "esp32_ok: ";
    rosidl_generator_traits::value_to_yaml(msg.esp32_ok, out);
    out << ", ";
  }

  // member: arduino_ok
  {
    out << "arduino_ok: ";
    rosidl_generator_traits::value_to_yaml(msg.arduino_ok, out);
    out << ", ";
  }

  // member: cameras_ok
  {
    out << "cameras_ok: ";
    rosidl_generator_traits::value_to_yaml(msg.cameras_ok, out);
    out << ", ";
  }

  // member: encoders_ok
  {
    out << "encoders_ok: ";
    rosidl_generator_traits::value_to_yaml(msg.encoders_ok, out);
    out << ", ";
  }

  // member: mission_state
  {
    out << "mission_state: ";
    rosidl_generator_traits::value_to_yaml(msg.mission_state, out);
    out << ", ";
  }

  // member: warnings
  {
    if (msg.warnings.size() == 0) {
      out << "warnings: []";
    } else {
      out << "warnings: [";
      size_t pending_items = msg.warnings.size();
      for (auto item : msg.warnings) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SystemStatus & msg,
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

  // member: rpi_ok
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rpi_ok: ";
    rosidl_generator_traits::value_to_yaml(msg.rpi_ok, out);
    out << "\n";
  }

  // member: esp32_ok
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "esp32_ok: ";
    rosidl_generator_traits::value_to_yaml(msg.esp32_ok, out);
    out << "\n";
  }

  // member: arduino_ok
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "arduino_ok: ";
    rosidl_generator_traits::value_to_yaml(msg.arduino_ok, out);
    out << "\n";
  }

  // member: cameras_ok
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cameras_ok: ";
    rosidl_generator_traits::value_to_yaml(msg.cameras_ok, out);
    out << "\n";
  }

  // member: encoders_ok
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "encoders_ok: ";
    rosidl_generator_traits::value_to_yaml(msg.encoders_ok, out);
    out << "\n";
  }

  // member: mission_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mission_state: ";
    rosidl_generator_traits::value_to_yaml(msg.mission_state, out);
    out << "\n";
  }

  // member: warnings
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.warnings.size() == 0) {
      out << "warnings: []\n";
    } else {
      out << "warnings:\n";
      for (auto item : msg.warnings) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SystemStatus & msg, bool use_flow_style = false)
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
  const r2_interfaces::msg::SystemStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  r2_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use r2_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const r2_interfaces::msg::SystemStatus & msg)
{
  return r2_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<r2_interfaces::msg::SystemStatus>()
{
  return "r2_interfaces::msg::SystemStatus";
}

template<>
inline const char * name<r2_interfaces::msg::SystemStatus>()
{
  return "r2_interfaces/msg/SystemStatus";
}

template<>
struct has_fixed_size<r2_interfaces::msg::SystemStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<r2_interfaces::msg::SystemStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<r2_interfaces::msg::SystemStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // R2_INTERFACES__MSG__DETAIL__SYSTEM_STATUS__TRAITS_HPP_
