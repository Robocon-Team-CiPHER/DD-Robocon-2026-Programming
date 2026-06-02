// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from r2_interfaces:msg/ChassisCmd.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "r2_interfaces/msg/chassis_cmd.hpp"


#ifndef R2_INTERFACES__MSG__DETAIL__CHASSIS_CMD__BUILDER_HPP_
#define R2_INTERFACES__MSG__DETAIL__CHASSIS_CMD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "r2_interfaces/msg/detail/chassis_cmd__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace r2_interfaces
{

namespace msg
{

namespace builder
{

class Init_ChassisCmd_estop
{
public:
  explicit Init_ChassisCmd_estop(::r2_interfaces::msg::ChassisCmd & msg)
  : msg_(msg)
  {}
  ::r2_interfaces::msg::ChassisCmd estop(::r2_interfaces::msg::ChassisCmd::_estop_type arg)
  {
    msg_.estop = std::move(arg);
    return std::move(msg_);
  }

private:
  ::r2_interfaces::msg::ChassisCmd msg_;
};

class Init_ChassisCmd_omega
{
public:
  explicit Init_ChassisCmd_omega(::r2_interfaces::msg::ChassisCmd & msg)
  : msg_(msg)
  {}
  Init_ChassisCmd_estop omega(::r2_interfaces::msg::ChassisCmd::_omega_type arg)
  {
    msg_.omega = std::move(arg);
    return Init_ChassisCmd_estop(msg_);
  }

private:
  ::r2_interfaces::msg::ChassisCmd msg_;
};

class Init_ChassisCmd_vy
{
public:
  explicit Init_ChassisCmd_vy(::r2_interfaces::msg::ChassisCmd & msg)
  : msg_(msg)
  {}
  Init_ChassisCmd_omega vy(::r2_interfaces::msg::ChassisCmd::_vy_type arg)
  {
    msg_.vy = std::move(arg);
    return Init_ChassisCmd_omega(msg_);
  }

private:
  ::r2_interfaces::msg::ChassisCmd msg_;
};

class Init_ChassisCmd_vx
{
public:
  explicit Init_ChassisCmd_vx(::r2_interfaces::msg::ChassisCmd & msg)
  : msg_(msg)
  {}
  Init_ChassisCmd_vy vx(::r2_interfaces::msg::ChassisCmd::_vx_type arg)
  {
    msg_.vx = std::move(arg);
    return Init_ChassisCmd_vy(msg_);
  }

private:
  ::r2_interfaces::msg::ChassisCmd msg_;
};

class Init_ChassisCmd_header
{
public:
  Init_ChassisCmd_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ChassisCmd_vx header(::r2_interfaces::msg::ChassisCmd::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ChassisCmd_vx(msg_);
  }

private:
  ::r2_interfaces::msg::ChassisCmd msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::r2_interfaces::msg::ChassisCmd>()
{
  return r2_interfaces::msg::builder::Init_ChassisCmd_header();
}

}  // namespace r2_interfaces

#endif  // R2_INTERFACES__MSG__DETAIL__CHASSIS_CMD__BUILDER_HPP_
