// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from r2_interfaces:srv/TriggerDetection.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "r2_interfaces/srv/trigger_detection.hpp"


#ifndef R2_INTERFACES__SRV__DETAIL__TRIGGER_DETECTION__BUILDER_HPP_
#define R2_INTERFACES__SRV__DETAIL__TRIGGER_DETECTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "r2_interfaces/srv/detail/trigger_detection__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace r2_interfaces
{

namespace srv
{

namespace builder
{

class Init_TriggerDetection_Request_timeout_ms
{
public:
  explicit Init_TriggerDetection_Request_timeout_ms(::r2_interfaces::srv::TriggerDetection_Request & msg)
  : msg_(msg)
  {}
  ::r2_interfaces::srv::TriggerDetection_Request timeout_ms(::r2_interfaces::srv::TriggerDetection_Request::_timeout_ms_type arg)
  {
    msg_.timeout_ms = std::move(arg);
    return std::move(msg_);
  }

private:
  ::r2_interfaces::srv::TriggerDetection_Request msg_;
};

class Init_TriggerDetection_Request_target_type
{
public:
  Init_TriggerDetection_Request_target_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TriggerDetection_Request_timeout_ms target_type(::r2_interfaces::srv::TriggerDetection_Request::_target_type_type arg)
  {
    msg_.target_type = std::move(arg);
    return Init_TriggerDetection_Request_timeout_ms(msg_);
  }

private:
  ::r2_interfaces::srv::TriggerDetection_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::r2_interfaces::srv::TriggerDetection_Request>()
{
  return r2_interfaces::srv::builder::Init_TriggerDetection_Request_target_type();
}

}  // namespace r2_interfaces


namespace r2_interfaces
{

namespace srv
{

namespace builder
{

class Init_TriggerDetection_Response_result
{
public:
  explicit Init_TriggerDetection_Response_result(::r2_interfaces::srv::TriggerDetection_Response & msg)
  : msg_(msg)
  {}
  ::r2_interfaces::srv::TriggerDetection_Response result(::r2_interfaces::srv::TriggerDetection_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::r2_interfaces::srv::TriggerDetection_Response msg_;
};

class Init_TriggerDetection_Response_success
{
public:
  Init_TriggerDetection_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TriggerDetection_Response_result success(::r2_interfaces::srv::TriggerDetection_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_TriggerDetection_Response_result(msg_);
  }

private:
  ::r2_interfaces::srv::TriggerDetection_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::r2_interfaces::srv::TriggerDetection_Response>()
{
  return r2_interfaces::srv::builder::Init_TriggerDetection_Response_success();
}

}  // namespace r2_interfaces


namespace r2_interfaces
{

namespace srv
{

namespace builder
{

class Init_TriggerDetection_Event_response
{
public:
  explicit Init_TriggerDetection_Event_response(::r2_interfaces::srv::TriggerDetection_Event & msg)
  : msg_(msg)
  {}
  ::r2_interfaces::srv::TriggerDetection_Event response(::r2_interfaces::srv::TriggerDetection_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::r2_interfaces::srv::TriggerDetection_Event msg_;
};

class Init_TriggerDetection_Event_request
{
public:
  explicit Init_TriggerDetection_Event_request(::r2_interfaces::srv::TriggerDetection_Event & msg)
  : msg_(msg)
  {}
  Init_TriggerDetection_Event_response request(::r2_interfaces::srv::TriggerDetection_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_TriggerDetection_Event_response(msg_);
  }

private:
  ::r2_interfaces::srv::TriggerDetection_Event msg_;
};

class Init_TriggerDetection_Event_info
{
public:
  Init_TriggerDetection_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TriggerDetection_Event_request info(::r2_interfaces::srv::TriggerDetection_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_TriggerDetection_Event_request(msg_);
  }

private:
  ::r2_interfaces::srv::TriggerDetection_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::r2_interfaces::srv::TriggerDetection_Event>()
{
  return r2_interfaces::srv::builder::Init_TriggerDetection_Event_info();
}

}  // namespace r2_interfaces

#endif  // R2_INTERFACES__SRV__DETAIL__TRIGGER_DETECTION__BUILDER_HPP_
