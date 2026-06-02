// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from r2_interfaces:action/MoveToPosition.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "r2_interfaces/action/move_to_position.hpp"


#ifndef R2_INTERFACES__ACTION__DETAIL__MOVE_TO_POSITION__TRAITS_HPP_
#define R2_INTERFACES__ACTION__DETAIL__MOVE_TO_POSITION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "r2_interfaces/action/detail/move_to_position__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace r2_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const MoveToPosition_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: x_m
  {
    out << "x_m: ";
    rosidl_generator_traits::value_to_yaml(msg.x_m, out);
    out << ", ";
  }

  // member: y_m
  {
    out << "y_m: ";
    rosidl_generator_traits::value_to_yaml(msg.y_m, out);
    out << ", ";
  }

  // member: theta_rad
  {
    out << "theta_rad: ";
    rosidl_generator_traits::value_to_yaml(msg.theta_rad, out);
    out << ", ";
  }

  // member: tolerance_m
  {
    out << "tolerance_m: ";
    rosidl_generator_traits::value_to_yaml(msg.tolerance_m, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveToPosition_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x_m
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x_m: ";
    rosidl_generator_traits::value_to_yaml(msg.x_m, out);
    out << "\n";
  }

  // member: y_m
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y_m: ";
    rosidl_generator_traits::value_to_yaml(msg.y_m, out);
    out << "\n";
  }

  // member: theta_rad
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "theta_rad: ";
    rosidl_generator_traits::value_to_yaml(msg.theta_rad, out);
    out << "\n";
  }

  // member: tolerance_m
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tolerance_m: ";
    rosidl_generator_traits::value_to_yaml(msg.tolerance_m, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveToPosition_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace r2_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use r2_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const r2_interfaces::action::MoveToPosition_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  r2_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use r2_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const r2_interfaces::action::MoveToPosition_Goal & msg)
{
  return r2_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<r2_interfaces::action::MoveToPosition_Goal>()
{
  return "r2_interfaces::action::MoveToPosition_Goal";
}

template<>
inline const char * name<r2_interfaces::action::MoveToPosition_Goal>()
{
  return "r2_interfaces/action/MoveToPosition_Goal";
}

template<>
struct has_fixed_size<r2_interfaces::action::MoveToPosition_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<r2_interfaces::action::MoveToPosition_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<r2_interfaces::action::MoveToPosition_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace r2_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const MoveToPosition_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: final_x_m
  {
    out << "final_x_m: ";
    rosidl_generator_traits::value_to_yaml(msg.final_x_m, out);
    out << ", ";
  }

  // member: final_y_m
  {
    out << "final_y_m: ";
    rosidl_generator_traits::value_to_yaml(msg.final_y_m, out);
    out << ", ";
  }

  // member: final_theta_rad
  {
    out << "final_theta_rad: ";
    rosidl_generator_traits::value_to_yaml(msg.final_theta_rad, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveToPosition_Result & msg,
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

  // member: final_x_m
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "final_x_m: ";
    rosidl_generator_traits::value_to_yaml(msg.final_x_m, out);
    out << "\n";
  }

  // member: final_y_m
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "final_y_m: ";
    rosidl_generator_traits::value_to_yaml(msg.final_y_m, out);
    out << "\n";
  }

  // member: final_theta_rad
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "final_theta_rad: ";
    rosidl_generator_traits::value_to_yaml(msg.final_theta_rad, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveToPosition_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace r2_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use r2_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const r2_interfaces::action::MoveToPosition_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  r2_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use r2_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const r2_interfaces::action::MoveToPosition_Result & msg)
{
  return r2_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<r2_interfaces::action::MoveToPosition_Result>()
{
  return "r2_interfaces::action::MoveToPosition_Result";
}

template<>
inline const char * name<r2_interfaces::action::MoveToPosition_Result>()
{
  return "r2_interfaces/action/MoveToPosition_Result";
}

template<>
struct has_fixed_size<r2_interfaces::action::MoveToPosition_Result>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<r2_interfaces::action::MoveToPosition_Result>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<r2_interfaces::action::MoveToPosition_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace r2_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const MoveToPosition_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: distance_remaining_m
  {
    out << "distance_remaining_m: ";
    rosidl_generator_traits::value_to_yaml(msg.distance_remaining_m, out);
    out << ", ";
  }

  // member: current_x_m
  {
    out << "current_x_m: ";
    rosidl_generator_traits::value_to_yaml(msg.current_x_m, out);
    out << ", ";
  }

  // member: current_y_m
  {
    out << "current_y_m: ";
    rosidl_generator_traits::value_to_yaml(msg.current_y_m, out);
    out << ", ";
  }

  // member: current_theta_rad
  {
    out << "current_theta_rad: ";
    rosidl_generator_traits::value_to_yaml(msg.current_theta_rad, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveToPosition_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: distance_remaining_m
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "distance_remaining_m: ";
    rosidl_generator_traits::value_to_yaml(msg.distance_remaining_m, out);
    out << "\n";
  }

  // member: current_x_m
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_x_m: ";
    rosidl_generator_traits::value_to_yaml(msg.current_x_m, out);
    out << "\n";
  }

  // member: current_y_m
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_y_m: ";
    rosidl_generator_traits::value_to_yaml(msg.current_y_m, out);
    out << "\n";
  }

  // member: current_theta_rad
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_theta_rad: ";
    rosidl_generator_traits::value_to_yaml(msg.current_theta_rad, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveToPosition_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace r2_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use r2_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const r2_interfaces::action::MoveToPosition_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  r2_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use r2_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const r2_interfaces::action::MoveToPosition_Feedback & msg)
{
  return r2_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<r2_interfaces::action::MoveToPosition_Feedback>()
{
  return "r2_interfaces::action::MoveToPosition_Feedback";
}

template<>
inline const char * name<r2_interfaces::action::MoveToPosition_Feedback>()
{
  return "r2_interfaces/action/MoveToPosition_Feedback";
}

template<>
struct has_fixed_size<r2_interfaces::action::MoveToPosition_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<r2_interfaces::action::MoveToPosition_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<r2_interfaces::action::MoveToPosition_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "r2_interfaces/action/detail/move_to_position__traits.hpp"

namespace r2_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const MoveToPosition_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveToPosition_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveToPosition_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace r2_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use r2_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const r2_interfaces::action::MoveToPosition_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  r2_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use r2_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const r2_interfaces::action::MoveToPosition_SendGoal_Request & msg)
{
  return r2_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<r2_interfaces::action::MoveToPosition_SendGoal_Request>()
{
  return "r2_interfaces::action::MoveToPosition_SendGoal_Request";
}

template<>
inline const char * name<r2_interfaces::action::MoveToPosition_SendGoal_Request>()
{
  return "r2_interfaces/action/MoveToPosition_SendGoal_Request";
}

template<>
struct has_fixed_size<r2_interfaces::action::MoveToPosition_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<r2_interfaces::action::MoveToPosition_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<r2_interfaces::action::MoveToPosition_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<r2_interfaces::action::MoveToPosition_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<r2_interfaces::action::MoveToPosition_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace r2_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const MoveToPosition_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveToPosition_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveToPosition_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace r2_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use r2_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const r2_interfaces::action::MoveToPosition_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  r2_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use r2_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const r2_interfaces::action::MoveToPosition_SendGoal_Response & msg)
{
  return r2_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<r2_interfaces::action::MoveToPosition_SendGoal_Response>()
{
  return "r2_interfaces::action::MoveToPosition_SendGoal_Response";
}

template<>
inline const char * name<r2_interfaces::action::MoveToPosition_SendGoal_Response>()
{
  return "r2_interfaces/action/MoveToPosition_SendGoal_Response";
}

template<>
struct has_fixed_size<r2_interfaces::action::MoveToPosition_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<r2_interfaces::action::MoveToPosition_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<r2_interfaces::action::MoveToPosition_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace r2_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const MoveToPosition_SendGoal_Event & msg,
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
  const MoveToPosition_SendGoal_Event & msg,
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

inline std::string to_yaml(const MoveToPosition_SendGoal_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace r2_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use r2_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const r2_interfaces::action::MoveToPosition_SendGoal_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  r2_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use r2_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const r2_interfaces::action::MoveToPosition_SendGoal_Event & msg)
{
  return r2_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<r2_interfaces::action::MoveToPosition_SendGoal_Event>()
{
  return "r2_interfaces::action::MoveToPosition_SendGoal_Event";
}

template<>
inline const char * name<r2_interfaces::action::MoveToPosition_SendGoal_Event>()
{
  return "r2_interfaces/action/MoveToPosition_SendGoal_Event";
}

template<>
struct has_fixed_size<r2_interfaces::action::MoveToPosition_SendGoal_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<r2_interfaces::action::MoveToPosition_SendGoal_Event>
  : std::integral_constant<bool, has_bounded_size<r2_interfaces::action::MoveToPosition_SendGoal_Request>::value && has_bounded_size<r2_interfaces::action::MoveToPosition_SendGoal_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<r2_interfaces::action::MoveToPosition_SendGoal_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<r2_interfaces::action::MoveToPosition_SendGoal>()
{
  return "r2_interfaces::action::MoveToPosition_SendGoal";
}

template<>
inline const char * name<r2_interfaces::action::MoveToPosition_SendGoal>()
{
  return "r2_interfaces/action/MoveToPosition_SendGoal";
}

template<>
struct has_fixed_size<r2_interfaces::action::MoveToPosition_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<r2_interfaces::action::MoveToPosition_SendGoal_Request>::value &&
    has_fixed_size<r2_interfaces::action::MoveToPosition_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<r2_interfaces::action::MoveToPosition_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<r2_interfaces::action::MoveToPosition_SendGoal_Request>::value &&
    has_bounded_size<r2_interfaces::action::MoveToPosition_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<r2_interfaces::action::MoveToPosition_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<r2_interfaces::action::MoveToPosition_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<r2_interfaces::action::MoveToPosition_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace r2_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const MoveToPosition_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveToPosition_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveToPosition_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace r2_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use r2_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const r2_interfaces::action::MoveToPosition_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  r2_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use r2_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const r2_interfaces::action::MoveToPosition_GetResult_Request & msg)
{
  return r2_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<r2_interfaces::action::MoveToPosition_GetResult_Request>()
{
  return "r2_interfaces::action::MoveToPosition_GetResult_Request";
}

template<>
inline const char * name<r2_interfaces::action::MoveToPosition_GetResult_Request>()
{
  return "r2_interfaces/action/MoveToPosition_GetResult_Request";
}

template<>
struct has_fixed_size<r2_interfaces::action::MoveToPosition_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<r2_interfaces::action::MoveToPosition_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<r2_interfaces::action::MoveToPosition_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "r2_interfaces/action/detail/move_to_position__traits.hpp"

namespace r2_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const MoveToPosition_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveToPosition_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveToPosition_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace r2_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use r2_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const r2_interfaces::action::MoveToPosition_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  r2_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use r2_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const r2_interfaces::action::MoveToPosition_GetResult_Response & msg)
{
  return r2_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<r2_interfaces::action::MoveToPosition_GetResult_Response>()
{
  return "r2_interfaces::action::MoveToPosition_GetResult_Response";
}

template<>
inline const char * name<r2_interfaces::action::MoveToPosition_GetResult_Response>()
{
  return "r2_interfaces/action/MoveToPosition_GetResult_Response";
}

template<>
struct has_fixed_size<r2_interfaces::action::MoveToPosition_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<r2_interfaces::action::MoveToPosition_Result>::value> {};

template<>
struct has_bounded_size<r2_interfaces::action::MoveToPosition_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<r2_interfaces::action::MoveToPosition_Result>::value> {};

template<>
struct is_message<r2_interfaces::action::MoveToPosition_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace r2_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const MoveToPosition_GetResult_Event & msg,
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
  const MoveToPosition_GetResult_Event & msg,
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

inline std::string to_yaml(const MoveToPosition_GetResult_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace r2_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use r2_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const r2_interfaces::action::MoveToPosition_GetResult_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  r2_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use r2_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const r2_interfaces::action::MoveToPosition_GetResult_Event & msg)
{
  return r2_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<r2_interfaces::action::MoveToPosition_GetResult_Event>()
{
  return "r2_interfaces::action::MoveToPosition_GetResult_Event";
}

template<>
inline const char * name<r2_interfaces::action::MoveToPosition_GetResult_Event>()
{
  return "r2_interfaces/action/MoveToPosition_GetResult_Event";
}

template<>
struct has_fixed_size<r2_interfaces::action::MoveToPosition_GetResult_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<r2_interfaces::action::MoveToPosition_GetResult_Event>
  : std::integral_constant<bool, has_bounded_size<r2_interfaces::action::MoveToPosition_GetResult_Request>::value && has_bounded_size<r2_interfaces::action::MoveToPosition_GetResult_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<r2_interfaces::action::MoveToPosition_GetResult_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<r2_interfaces::action::MoveToPosition_GetResult>()
{
  return "r2_interfaces::action::MoveToPosition_GetResult";
}

template<>
inline const char * name<r2_interfaces::action::MoveToPosition_GetResult>()
{
  return "r2_interfaces/action/MoveToPosition_GetResult";
}

template<>
struct has_fixed_size<r2_interfaces::action::MoveToPosition_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<r2_interfaces::action::MoveToPosition_GetResult_Request>::value &&
    has_fixed_size<r2_interfaces::action::MoveToPosition_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<r2_interfaces::action::MoveToPosition_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<r2_interfaces::action::MoveToPosition_GetResult_Request>::value &&
    has_bounded_size<r2_interfaces::action::MoveToPosition_GetResult_Response>::value
  >
{
};

template<>
struct is_service<r2_interfaces::action::MoveToPosition_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<r2_interfaces::action::MoveToPosition_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<r2_interfaces::action::MoveToPosition_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "r2_interfaces/action/detail/move_to_position__traits.hpp"

namespace r2_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const MoveToPosition_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveToPosition_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveToPosition_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace r2_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use r2_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const r2_interfaces::action::MoveToPosition_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  r2_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use r2_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const r2_interfaces::action::MoveToPosition_FeedbackMessage & msg)
{
  return r2_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<r2_interfaces::action::MoveToPosition_FeedbackMessage>()
{
  return "r2_interfaces::action::MoveToPosition_FeedbackMessage";
}

template<>
inline const char * name<r2_interfaces::action::MoveToPosition_FeedbackMessage>()
{
  return "r2_interfaces/action/MoveToPosition_FeedbackMessage";
}

template<>
struct has_fixed_size<r2_interfaces::action::MoveToPosition_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<r2_interfaces::action::MoveToPosition_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<r2_interfaces::action::MoveToPosition_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<r2_interfaces::action::MoveToPosition_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<r2_interfaces::action::MoveToPosition_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<r2_interfaces::action::MoveToPosition>
  : std::true_type
{
};

template<>
struct is_action_goal<r2_interfaces::action::MoveToPosition_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<r2_interfaces::action::MoveToPosition_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<r2_interfaces::action::MoveToPosition_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // R2_INTERFACES__ACTION__DETAIL__MOVE_TO_POSITION__TRAITS_HPP_
