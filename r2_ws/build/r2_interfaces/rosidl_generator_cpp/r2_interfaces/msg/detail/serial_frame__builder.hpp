// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from r2_interfaces:msg/SerialFrame.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "r2_interfaces/msg/serial_frame.hpp"


#ifndef R2_INTERFACES__MSG__DETAIL__SERIAL_FRAME__BUILDER_HPP_
#define R2_INTERFACES__MSG__DETAIL__SERIAL_FRAME__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "r2_interfaces/msg/detail/serial_frame__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace r2_interfaces
{

namespace msg
{

namespace builder
{

class Init_SerialFrame_crc8
{
public:
  explicit Init_SerialFrame_crc8(::r2_interfaces::msg::SerialFrame & msg)
  : msg_(msg)
  {}
  ::r2_interfaces::msg::SerialFrame crc8(::r2_interfaces::msg::SerialFrame::_crc8_type arg)
  {
    msg_.crc8 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::r2_interfaces::msg::SerialFrame msg_;
};

class Init_SerialFrame_payload
{
public:
  explicit Init_SerialFrame_payload(::r2_interfaces::msg::SerialFrame & msg)
  : msg_(msg)
  {}
  Init_SerialFrame_crc8 payload(::r2_interfaces::msg::SerialFrame::_payload_type arg)
  {
    msg_.payload = std::move(arg);
    return Init_SerialFrame_crc8(msg_);
  }

private:
  ::r2_interfaces::msg::SerialFrame msg_;
};

class Init_SerialFrame_cmd_id
{
public:
  explicit Init_SerialFrame_cmd_id(::r2_interfaces::msg::SerialFrame & msg)
  : msg_(msg)
  {}
  Init_SerialFrame_payload cmd_id(::r2_interfaces::msg::SerialFrame::_cmd_id_type arg)
  {
    msg_.cmd_id = std::move(arg);
    return Init_SerialFrame_payload(msg_);
  }

private:
  ::r2_interfaces::msg::SerialFrame msg_;
};

class Init_SerialFrame_device_id
{
public:
  explicit Init_SerialFrame_device_id(::r2_interfaces::msg::SerialFrame & msg)
  : msg_(msg)
  {}
  Init_SerialFrame_cmd_id device_id(::r2_interfaces::msg::SerialFrame::_device_id_type arg)
  {
    msg_.device_id = std::move(arg);
    return Init_SerialFrame_cmd_id(msg_);
  }

private:
  ::r2_interfaces::msg::SerialFrame msg_;
};

class Init_SerialFrame_header
{
public:
  Init_SerialFrame_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SerialFrame_device_id header(::r2_interfaces::msg::SerialFrame::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SerialFrame_device_id(msg_);
  }

private:
  ::r2_interfaces::msg::SerialFrame msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::r2_interfaces::msg::SerialFrame>()
{
  return r2_interfaces::msg::builder::Init_SerialFrame_header();
}

}  // namespace r2_interfaces

#endif  // R2_INTERFACES__MSG__DETAIL__SERIAL_FRAME__BUILDER_HPP_
