// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from r2_interfaces:srv/SystemHandshake.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "r2_interfaces/srv/system_handshake.hpp"


#ifndef R2_INTERFACES__SRV__DETAIL__SYSTEM_HANDSHAKE__BUILDER_HPP_
#define R2_INTERFACES__SRV__DETAIL__SYSTEM_HANDSHAKE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "r2_interfaces/srv/detail/system_handshake__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace r2_interfaces
{

namespace srv
{

namespace builder
{

class Init_SystemHandshake_Request_timeout_ms
{
public:
  explicit Init_SystemHandshake_Request_timeout_ms(::r2_interfaces::srv::SystemHandshake_Request & msg)
  : msg_(msg)
  {}
  ::r2_interfaces::srv::SystemHandshake_Request timeout_ms(::r2_interfaces::srv::SystemHandshake_Request::_timeout_ms_type arg)
  {
    msg_.timeout_ms = std::move(arg);
    return std::move(msg_);
  }

private:
  ::r2_interfaces::srv::SystemHandshake_Request msg_;
};

class Init_SystemHandshake_Request_device_id
{
public:
  Init_SystemHandshake_Request_device_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SystemHandshake_Request_timeout_ms device_id(::r2_interfaces::srv::SystemHandshake_Request::_device_id_type arg)
  {
    msg_.device_id = std::move(arg);
    return Init_SystemHandshake_Request_timeout_ms(msg_);
  }

private:
  ::r2_interfaces::srv::SystemHandshake_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::r2_interfaces::srv::SystemHandshake_Request>()
{
  return r2_interfaces::srv::builder::Init_SystemHandshake_Request_device_id();
}

}  // namespace r2_interfaces


namespace r2_interfaces
{

namespace srv
{

namespace builder
{

class Init_SystemHandshake_Response_error_msg
{
public:
  explicit Init_SystemHandshake_Response_error_msg(::r2_interfaces::srv::SystemHandshake_Response & msg)
  : msg_(msg)
  {}
  ::r2_interfaces::srv::SystemHandshake_Response error_msg(::r2_interfaces::srv::SystemHandshake_Response::_error_msg_type arg)
  {
    msg_.error_msg = std::move(arg);
    return std::move(msg_);
  }

private:
  ::r2_interfaces::srv::SystemHandshake_Response msg_;
};

class Init_SystemHandshake_Response_device_status
{
public:
  explicit Init_SystemHandshake_Response_device_status(::r2_interfaces::srv::SystemHandshake_Response & msg)
  : msg_(msg)
  {}
  Init_SystemHandshake_Response_error_msg device_status(::r2_interfaces::srv::SystemHandshake_Response::_device_status_type arg)
  {
    msg_.device_status = std::move(arg);
    return Init_SystemHandshake_Response_error_msg(msg_);
  }

private:
  ::r2_interfaces::srv::SystemHandshake_Response msg_;
};

class Init_SystemHandshake_Response_firmware_version
{
public:
  explicit Init_SystemHandshake_Response_firmware_version(::r2_interfaces::srv::SystemHandshake_Response & msg)
  : msg_(msg)
  {}
  Init_SystemHandshake_Response_device_status firmware_version(::r2_interfaces::srv::SystemHandshake_Response::_firmware_version_type arg)
  {
    msg_.firmware_version = std::move(arg);
    return Init_SystemHandshake_Response_device_status(msg_);
  }

private:
  ::r2_interfaces::srv::SystemHandshake_Response msg_;
};

class Init_SystemHandshake_Response_success
{
public:
  Init_SystemHandshake_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SystemHandshake_Response_firmware_version success(::r2_interfaces::srv::SystemHandshake_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SystemHandshake_Response_firmware_version(msg_);
  }

private:
  ::r2_interfaces::srv::SystemHandshake_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::r2_interfaces::srv::SystemHandshake_Response>()
{
  return r2_interfaces::srv::builder::Init_SystemHandshake_Response_success();
}

}  // namespace r2_interfaces


namespace r2_interfaces
{

namespace srv
{

namespace builder
{

class Init_SystemHandshake_Event_response
{
public:
  explicit Init_SystemHandshake_Event_response(::r2_interfaces::srv::SystemHandshake_Event & msg)
  : msg_(msg)
  {}
  ::r2_interfaces::srv::SystemHandshake_Event response(::r2_interfaces::srv::SystemHandshake_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::r2_interfaces::srv::SystemHandshake_Event msg_;
};

class Init_SystemHandshake_Event_request
{
public:
  explicit Init_SystemHandshake_Event_request(::r2_interfaces::srv::SystemHandshake_Event & msg)
  : msg_(msg)
  {}
  Init_SystemHandshake_Event_response request(::r2_interfaces::srv::SystemHandshake_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SystemHandshake_Event_response(msg_);
  }

private:
  ::r2_interfaces::srv::SystemHandshake_Event msg_;
};

class Init_SystemHandshake_Event_info
{
public:
  Init_SystemHandshake_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SystemHandshake_Event_request info(::r2_interfaces::srv::SystemHandshake_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SystemHandshake_Event_request(msg_);
  }

private:
  ::r2_interfaces::srv::SystemHandshake_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::r2_interfaces::srv::SystemHandshake_Event>()
{
  return r2_interfaces::srv::builder::Init_SystemHandshake_Event_info();
}

}  // namespace r2_interfaces

#endif  // R2_INTERFACES__SRV__DETAIL__SYSTEM_HANDSHAKE__BUILDER_HPP_
