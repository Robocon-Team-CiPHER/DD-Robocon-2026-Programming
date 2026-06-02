// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from r2_interfaces:msg/SystemStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "r2_interfaces/msg/system_status.hpp"


#ifndef R2_INTERFACES__MSG__DETAIL__SYSTEM_STATUS__BUILDER_HPP_
#define R2_INTERFACES__MSG__DETAIL__SYSTEM_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "r2_interfaces/msg/detail/system_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace r2_interfaces
{

namespace msg
{

namespace builder
{

class Init_SystemStatus_warnings
{
public:
  explicit Init_SystemStatus_warnings(::r2_interfaces::msg::SystemStatus & msg)
  : msg_(msg)
  {}
  ::r2_interfaces::msg::SystemStatus warnings(::r2_interfaces::msg::SystemStatus::_warnings_type arg)
  {
    msg_.warnings = std::move(arg);
    return std::move(msg_);
  }

private:
  ::r2_interfaces::msg::SystemStatus msg_;
};

class Init_SystemStatus_mission_state
{
public:
  explicit Init_SystemStatus_mission_state(::r2_interfaces::msg::SystemStatus & msg)
  : msg_(msg)
  {}
  Init_SystemStatus_warnings mission_state(::r2_interfaces::msg::SystemStatus::_mission_state_type arg)
  {
    msg_.mission_state = std::move(arg);
    return Init_SystemStatus_warnings(msg_);
  }

private:
  ::r2_interfaces::msg::SystemStatus msg_;
};

class Init_SystemStatus_encoders_ok
{
public:
  explicit Init_SystemStatus_encoders_ok(::r2_interfaces::msg::SystemStatus & msg)
  : msg_(msg)
  {}
  Init_SystemStatus_mission_state encoders_ok(::r2_interfaces::msg::SystemStatus::_encoders_ok_type arg)
  {
    msg_.encoders_ok = std::move(arg);
    return Init_SystemStatus_mission_state(msg_);
  }

private:
  ::r2_interfaces::msg::SystemStatus msg_;
};

class Init_SystemStatus_cameras_ok
{
public:
  explicit Init_SystemStatus_cameras_ok(::r2_interfaces::msg::SystemStatus & msg)
  : msg_(msg)
  {}
  Init_SystemStatus_encoders_ok cameras_ok(::r2_interfaces::msg::SystemStatus::_cameras_ok_type arg)
  {
    msg_.cameras_ok = std::move(arg);
    return Init_SystemStatus_encoders_ok(msg_);
  }

private:
  ::r2_interfaces::msg::SystemStatus msg_;
};

class Init_SystemStatus_arduino_ok
{
public:
  explicit Init_SystemStatus_arduino_ok(::r2_interfaces::msg::SystemStatus & msg)
  : msg_(msg)
  {}
  Init_SystemStatus_cameras_ok arduino_ok(::r2_interfaces::msg::SystemStatus::_arduino_ok_type arg)
  {
    msg_.arduino_ok = std::move(arg);
    return Init_SystemStatus_cameras_ok(msg_);
  }

private:
  ::r2_interfaces::msg::SystemStatus msg_;
};

class Init_SystemStatus_esp32_ok
{
public:
  explicit Init_SystemStatus_esp32_ok(::r2_interfaces::msg::SystemStatus & msg)
  : msg_(msg)
  {}
  Init_SystemStatus_arduino_ok esp32_ok(::r2_interfaces::msg::SystemStatus::_esp32_ok_type arg)
  {
    msg_.esp32_ok = std::move(arg);
    return Init_SystemStatus_arduino_ok(msg_);
  }

private:
  ::r2_interfaces::msg::SystemStatus msg_;
};

class Init_SystemStatus_rpi_ok
{
public:
  explicit Init_SystemStatus_rpi_ok(::r2_interfaces::msg::SystemStatus & msg)
  : msg_(msg)
  {}
  Init_SystemStatus_esp32_ok rpi_ok(::r2_interfaces::msg::SystemStatus::_rpi_ok_type arg)
  {
    msg_.rpi_ok = std::move(arg);
    return Init_SystemStatus_esp32_ok(msg_);
  }

private:
  ::r2_interfaces::msg::SystemStatus msg_;
};

class Init_SystemStatus_header
{
public:
  Init_SystemStatus_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SystemStatus_rpi_ok header(::r2_interfaces::msg::SystemStatus::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SystemStatus_rpi_ok(msg_);
  }

private:
  ::r2_interfaces::msg::SystemStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::r2_interfaces::msg::SystemStatus>()
{
  return r2_interfaces::msg::builder::Init_SystemStatus_header();
}

}  // namespace r2_interfaces

#endif  // R2_INTERFACES__MSG__DETAIL__SYSTEM_STATUS__BUILDER_HPP_
