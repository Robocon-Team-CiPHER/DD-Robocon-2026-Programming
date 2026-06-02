// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from r2_interfaces:msg/MechanismStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "r2_interfaces/msg/mechanism_status.hpp"


#ifndef R2_INTERFACES__MSG__DETAIL__MECHANISM_STATUS__BUILDER_HPP_
#define R2_INTERFACES__MSG__DETAIL__MECHANISM_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "r2_interfaces/msg/detail/mechanism_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace r2_interfaces
{

namespace msg
{

namespace builder
{

class Init_MechanismStatus_error_msg
{
public:
  explicit Init_MechanismStatus_error_msg(::r2_interfaces::msg::MechanismStatus & msg)
  : msg_(msg)
  {}
  ::r2_interfaces::msg::MechanismStatus error_msg(::r2_interfaces::msg::MechanismStatus::_error_msg_type arg)
  {
    msg_.error_msg = std::move(arg);
    return std::move(msg_);
  }

private:
  ::r2_interfaces::msg::MechanismStatus msg_;
};

class Init_MechanismStatus_limit_switch_max
{
public:
  explicit Init_MechanismStatus_limit_switch_max(::r2_interfaces::msg::MechanismStatus & msg)
  : msg_(msg)
  {}
  Init_MechanismStatus_error_msg limit_switch_max(::r2_interfaces::msg::MechanismStatus::_limit_switch_max_type arg)
  {
    msg_.limit_switch_max = std::move(arg);
    return Init_MechanismStatus_error_msg(msg_);
  }

private:
  ::r2_interfaces::msg::MechanismStatus msg_;
};

class Init_MechanismStatus_limit_switch_min
{
public:
  explicit Init_MechanismStatus_limit_switch_min(::r2_interfaces::msg::MechanismStatus & msg)
  : msg_(msg)
  {}
  Init_MechanismStatus_limit_switch_max limit_switch_min(::r2_interfaces::msg::MechanismStatus::_limit_switch_min_type arg)
  {
    msg_.limit_switch_min = std::move(arg);
    return Init_MechanismStatus_limit_switch_max(msg_);
  }

private:
  ::r2_interfaces::msg::MechanismStatus msg_;
};

class Init_MechanismStatus_position_mm
{
public:
  explicit Init_MechanismStatus_position_mm(::r2_interfaces::msg::MechanismStatus & msg)
  : msg_(msg)
  {}
  Init_MechanismStatus_limit_switch_min position_mm(::r2_interfaces::msg::MechanismStatus::_position_mm_type arg)
  {
    msg_.position_mm = std::move(arg);
    return Init_MechanismStatus_limit_switch_min(msg_);
  }

private:
  ::r2_interfaces::msg::MechanismStatus msg_;
};

class Init_MechanismStatus_state
{
public:
  explicit Init_MechanismStatus_state(::r2_interfaces::msg::MechanismStatus & msg)
  : msg_(msg)
  {}
  Init_MechanismStatus_position_mm state(::r2_interfaces::msg::MechanismStatus::_state_type arg)
  {
    msg_.state = std::move(arg);
    return Init_MechanismStatus_position_mm(msg_);
  }

private:
  ::r2_interfaces::msg::MechanismStatus msg_;
};

class Init_MechanismStatus_mechanism_id
{
public:
  explicit Init_MechanismStatus_mechanism_id(::r2_interfaces::msg::MechanismStatus & msg)
  : msg_(msg)
  {}
  Init_MechanismStatus_state mechanism_id(::r2_interfaces::msg::MechanismStatus::_mechanism_id_type arg)
  {
    msg_.mechanism_id = std::move(arg);
    return Init_MechanismStatus_state(msg_);
  }

private:
  ::r2_interfaces::msg::MechanismStatus msg_;
};

class Init_MechanismStatus_header
{
public:
  Init_MechanismStatus_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MechanismStatus_mechanism_id header(::r2_interfaces::msg::MechanismStatus::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_MechanismStatus_mechanism_id(msg_);
  }

private:
  ::r2_interfaces::msg::MechanismStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::r2_interfaces::msg::MechanismStatus>()
{
  return r2_interfaces::msg::builder::Init_MechanismStatus_header();
}

}  // namespace r2_interfaces

#endif  // R2_INTERFACES__MSG__DETAIL__MECHANISM_STATUS__BUILDER_HPP_
