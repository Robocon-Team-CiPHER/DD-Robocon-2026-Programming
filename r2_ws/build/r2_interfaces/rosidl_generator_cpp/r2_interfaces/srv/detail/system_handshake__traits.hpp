// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from r2_interfaces:srv/SystemHandshake.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "r2_interfaces/srv/system_handshake.hpp"


#ifndef R2_INTERFACES__SRV__DETAIL__SYSTEM_HANDSHAKE__TRAITS_HPP_
#define R2_INTERFACES__SRV__DETAIL__SYSTEM_HANDSHAKE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "r2_interfaces/srv/detail/system_handshake__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace r2_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SystemHandshake_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: device_id
  {
    out << "device_id: ";
    rosidl_generator_traits::value_to_yaml(msg.device_id, out);
    out << ", ";
  }

  // member: timeout_ms
  {
    out << "timeout_ms: ";
    rosidl_generator_traits::value_to_yaml(msg.timeout_ms, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SystemHandshake_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: device_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "device_id: ";
    rosidl_generator_traits::value_to_yaml(msg.device_id, out);
    out << "\n";
  }

  // member: timeout_ms
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timeout_ms: ";
    rosidl_generator_traits::value_to_yaml(msg.timeout_ms, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SystemHandshake_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace r2_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use r2_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const r2_interfaces::srv::SystemHandshake_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  r2_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use r2_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const r2_interfaces::srv::SystemHandshake_Request & msg)
{
  return r2_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<r2_interfaces::srv::SystemHandshake_Request>()
{
  return "r2_interfaces::srv::SystemHandshake_Request";
}

template<>
inline const char * name<r2_interfaces::srv::SystemHandshake_Request>()
{
  return "r2_interfaces/srv/SystemHandshake_Request";
}

template<>
struct has_fixed_size<r2_interfaces::srv::SystemHandshake_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<r2_interfaces::srv::SystemHandshake_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<r2_interfaces::srv::SystemHandshake_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace r2_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SystemHandshake_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: firmware_version
  {
    out << "firmware_version: ";
    rosidl_generator_traits::value_to_yaml(msg.firmware_version, out);
    out << ", ";
  }

  // member: device_status
  {
    out << "device_status: ";
    rosidl_generator_traits::value_to_yaml(msg.device_status, out);
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
  const SystemHandshake_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: firmware_version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "firmware_version: ";
    rosidl_generator_traits::value_to_yaml(msg.firmware_version, out);
    out << "\n";
  }

  // member: device_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "device_status: ";
    rosidl_generator_traits::value_to_yaml(msg.device_status, out);
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

inline std::string to_yaml(const SystemHandshake_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace r2_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use r2_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const r2_interfaces::srv::SystemHandshake_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  r2_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use r2_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const r2_interfaces::srv::SystemHandshake_Response & msg)
{
  return r2_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<r2_interfaces::srv::SystemHandshake_Response>()
{
  return "r2_interfaces::srv::SystemHandshake_Response";
}

template<>
inline const char * name<r2_interfaces::srv::SystemHandshake_Response>()
{
  return "r2_interfaces/srv/SystemHandshake_Response";
}

template<>
struct has_fixed_size<r2_interfaces::srv::SystemHandshake_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<r2_interfaces::srv::SystemHandshake_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<r2_interfaces::srv::SystemHandshake_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace r2_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SystemHandshake_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
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
  const SystemHandshake_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SystemHandshake_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace r2_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use r2_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const r2_interfaces::srv::SystemHandshake_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  r2_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use r2_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const r2_interfaces::srv::SystemHandshake_Event & msg)
{
  return r2_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<r2_interfaces::srv::SystemHandshake_Event>()
{
  return "r2_interfaces::srv::SystemHandshake_Event";
}

template<>
inline const char * name<r2_interfaces::srv::SystemHandshake_Event>()
{
  return "r2_interfaces/srv/SystemHandshake_Event";
}

template<>
struct has_fixed_size<r2_interfaces::srv::SystemHandshake_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<r2_interfaces::srv::SystemHandshake_Event>
  : std::integral_constant<bool, has_bounded_size<r2_interfaces::srv::SystemHandshake_Request>::value && has_bounded_size<r2_interfaces::srv::SystemHandshake_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<r2_interfaces::srv::SystemHandshake_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<r2_interfaces::srv::SystemHandshake>()
{
  return "r2_interfaces::srv::SystemHandshake";
}

template<>
inline const char * name<r2_interfaces::srv::SystemHandshake>()
{
  return "r2_interfaces/srv/SystemHandshake";
}

template<>
struct has_fixed_size<r2_interfaces::srv::SystemHandshake>
  : std::integral_constant<
    bool,
    has_fixed_size<r2_interfaces::srv::SystemHandshake_Request>::value &&
    has_fixed_size<r2_interfaces::srv::SystemHandshake_Response>::value
  >
{
};

template<>
struct has_bounded_size<r2_interfaces::srv::SystemHandshake>
  : std::integral_constant<
    bool,
    has_bounded_size<r2_interfaces::srv::SystemHandshake_Request>::value &&
    has_bounded_size<r2_interfaces::srv::SystemHandshake_Response>::value
  >
{
};

template<>
struct is_service<r2_interfaces::srv::SystemHandshake>
  : std::true_type
{
};

template<>
struct is_service_request<r2_interfaces::srv::SystemHandshake_Request>
  : std::true_type
{
};

template<>
struct is_service_response<r2_interfaces::srv::SystemHandshake_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // R2_INTERFACES__SRV__DETAIL__SYSTEM_HANDSHAKE__TRAITS_HPP_
