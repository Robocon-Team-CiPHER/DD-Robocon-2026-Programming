// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from r2_interfaces:srv/SetMechanismState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "r2_interfaces/srv/set_mechanism_state.hpp"


#ifndef R2_INTERFACES__SRV__DETAIL__SET_MECHANISM_STATE__BUILDER_HPP_
#define R2_INTERFACES__SRV__DETAIL__SET_MECHANISM_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "r2_interfaces/srv/detail/set_mechanism_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace r2_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetMechanismState_Request_speed_percent
{
public:
  explicit Init_SetMechanismState_Request_speed_percent(::r2_interfaces::srv::SetMechanismState_Request & msg)
  : msg_(msg)
  {}
  ::r2_interfaces::srv::SetMechanismState_Request speed_percent(::r2_interfaces::srv::SetMechanismState_Request::_speed_percent_type arg)
  {
    msg_.speed_percent = std::move(arg);
    return std::move(msg_);
  }

private:
  ::r2_interfaces::srv::SetMechanismState_Request msg_;
};

class Init_SetMechanismState_Request_target_position_mm
{
public:
  explicit Init_SetMechanismState_Request_target_position_mm(::r2_interfaces::srv::SetMechanismState_Request & msg)
  : msg_(msg)
  {}
  Init_SetMechanismState_Request_speed_percent target_position_mm(::r2_interfaces::srv::SetMechanismState_Request::_target_position_mm_type arg)
  {
    msg_.target_position_mm = std::move(arg);
    return Init_SetMechanismState_Request_speed_percent(msg_);
  }

private:
  ::r2_interfaces::srv::SetMechanismState_Request msg_;
};

class Init_SetMechanismState_Request_command
{
public:
  explicit Init_SetMechanismState_Request_command(::r2_interfaces::srv::SetMechanismState_Request & msg)
  : msg_(msg)
  {}
  Init_SetMechanismState_Request_target_position_mm command(::r2_interfaces::srv::SetMechanismState_Request::_command_type arg)
  {
    msg_.command = std::move(arg);
    return Init_SetMechanismState_Request_target_position_mm(msg_);
  }

private:
  ::r2_interfaces::srv::SetMechanismState_Request msg_;
};

class Init_SetMechanismState_Request_mechanism_id
{
public:
  Init_SetMechanismState_Request_mechanism_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetMechanismState_Request_command mechanism_id(::r2_interfaces::srv::SetMechanismState_Request::_mechanism_id_type arg)
  {
    msg_.mechanism_id = std::move(arg);
    return Init_SetMechanismState_Request_command(msg_);
  }

private:
  ::r2_interfaces::srv::SetMechanismState_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::r2_interfaces::srv::SetMechanismState_Request>()
{
  return r2_interfaces::srv::builder::Init_SetMechanismState_Request_mechanism_id();
}

}  // namespace r2_interfaces


namespace r2_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetMechanismState_Response_actual_position_mm
{
public:
  explicit Init_SetMechanismState_Response_actual_position_mm(::r2_interfaces::srv::SetMechanismState_Response & msg)
  : msg_(msg)
  {}
  ::r2_interfaces::srv::SetMechanismState_Response actual_position_mm(::r2_interfaces::srv::SetMechanismState_Response::_actual_position_mm_type arg)
  {
    msg_.actual_position_mm = std::move(arg);
    return std::move(msg_);
  }

private:
  ::r2_interfaces::srv::SetMechanismState_Response msg_;
};

class Init_SetMechanismState_Response_message
{
public:
  explicit Init_SetMechanismState_Response_message(::r2_interfaces::srv::SetMechanismState_Response & msg)
  : msg_(msg)
  {}
  Init_SetMechanismState_Response_actual_position_mm message(::r2_interfaces::srv::SetMechanismState_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_SetMechanismState_Response_actual_position_mm(msg_);
  }

private:
  ::r2_interfaces::srv::SetMechanismState_Response msg_;
};

class Init_SetMechanismState_Response_success
{
public:
  Init_SetMechanismState_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetMechanismState_Response_message success(::r2_interfaces::srv::SetMechanismState_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SetMechanismState_Response_message(msg_);
  }

private:
  ::r2_interfaces::srv::SetMechanismState_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::r2_interfaces::srv::SetMechanismState_Response>()
{
  return r2_interfaces::srv::builder::Init_SetMechanismState_Response_success();
}

}  // namespace r2_interfaces


namespace r2_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetMechanismState_Event_response
{
public:
  explicit Init_SetMechanismState_Event_response(::r2_interfaces::srv::SetMechanismState_Event & msg)
  : msg_(msg)
  {}
  ::r2_interfaces::srv::SetMechanismState_Event response(::r2_interfaces::srv::SetMechanismState_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::r2_interfaces::srv::SetMechanismState_Event msg_;
};

class Init_SetMechanismState_Event_request
{
public:
  explicit Init_SetMechanismState_Event_request(::r2_interfaces::srv::SetMechanismState_Event & msg)
  : msg_(msg)
  {}
  Init_SetMechanismState_Event_response request(::r2_interfaces::srv::SetMechanismState_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SetMechanismState_Event_response(msg_);
  }

private:
  ::r2_interfaces::srv::SetMechanismState_Event msg_;
};

class Init_SetMechanismState_Event_info
{
public:
  Init_SetMechanismState_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetMechanismState_Event_request info(::r2_interfaces::srv::SetMechanismState_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SetMechanismState_Event_request(msg_);
  }

private:
  ::r2_interfaces::srv::SetMechanismState_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::r2_interfaces::srv::SetMechanismState_Event>()
{
  return r2_interfaces::srv::builder::Init_SetMechanismState_Event_info();
}

}  // namespace r2_interfaces

#endif  // R2_INTERFACES__SRV__DETAIL__SET_MECHANISM_STATE__BUILDER_HPP_
