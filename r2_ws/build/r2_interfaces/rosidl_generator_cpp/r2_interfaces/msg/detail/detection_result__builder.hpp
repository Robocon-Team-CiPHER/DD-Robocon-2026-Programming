// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from r2_interfaces:msg/DetectionResult.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "r2_interfaces/msg/detection_result.hpp"


#ifndef R2_INTERFACES__MSG__DETAIL__DETECTION_RESULT__BUILDER_HPP_
#define R2_INTERFACES__MSG__DETAIL__DETECTION_RESULT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "r2_interfaces/msg/detail/detection_result__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace r2_interfaces
{

namespace msg
{

namespace builder
{

class Init_DetectionResult_bounding_box
{
public:
  explicit Init_DetectionResult_bounding_box(::r2_interfaces::msg::DetectionResult & msg)
  : msg_(msg)
  {}
  ::r2_interfaces::msg::DetectionResult bounding_box(::r2_interfaces::msg::DetectionResult::_bounding_box_type arg)
  {
    msg_.bounding_box = std::move(arg);
    return std::move(msg_);
  }

private:
  ::r2_interfaces::msg::DetectionResult msg_;
};

class Init_DetectionResult_confidence
{
public:
  explicit Init_DetectionResult_confidence(::r2_interfaces::msg::DetectionResult & msg)
  : msg_(msg)
  {}
  Init_DetectionResult_bounding_box confidence(::r2_interfaces::msg::DetectionResult::_confidence_type arg)
  {
    msg_.confidence = std::move(arg);
    return Init_DetectionResult_bounding_box(msg_);
  }

private:
  ::r2_interfaces::msg::DetectionResult msg_;
};

class Init_DetectionResult_offset_y_mm
{
public:
  explicit Init_DetectionResult_offset_y_mm(::r2_interfaces::msg::DetectionResult & msg)
  : msg_(msg)
  {}
  Init_DetectionResult_confidence offset_y_mm(::r2_interfaces::msg::DetectionResult::_offset_y_mm_type arg)
  {
    msg_.offset_y_mm = std::move(arg);
    return Init_DetectionResult_confidence(msg_);
  }

private:
  ::r2_interfaces::msg::DetectionResult msg_;
};

class Init_DetectionResult_offset_x_mm
{
public:
  explicit Init_DetectionResult_offset_x_mm(::r2_interfaces::msg::DetectionResult & msg)
  : msg_(msg)
  {}
  Init_DetectionResult_offset_y_mm offset_x_mm(::r2_interfaces::msg::DetectionResult::_offset_x_mm_type arg)
  {
    msg_.offset_x_mm = std::move(arg);
    return Init_DetectionResult_offset_y_mm(msg_);
  }

private:
  ::r2_interfaces::msg::DetectionResult msg_;
};

class Init_DetectionResult_distance_mm
{
public:
  explicit Init_DetectionResult_distance_mm(::r2_interfaces::msg::DetectionResult & msg)
  : msg_(msg)
  {}
  Init_DetectionResult_offset_x_mm distance_mm(::r2_interfaces::msg::DetectionResult::_distance_mm_type arg)
  {
    msg_.distance_mm = std::move(arg);
    return Init_DetectionResult_offset_x_mm(msg_);
  }

private:
  ::r2_interfaces::msg::DetectionResult msg_;
};

class Init_DetectionResult_detected
{
public:
  explicit Init_DetectionResult_detected(::r2_interfaces::msg::DetectionResult & msg)
  : msg_(msg)
  {}
  Init_DetectionResult_distance_mm detected(::r2_interfaces::msg::DetectionResult::_detected_type arg)
  {
    msg_.detected = std::move(arg);
    return Init_DetectionResult_distance_mm(msg_);
  }

private:
  ::r2_interfaces::msg::DetectionResult msg_;
};

class Init_DetectionResult_target_type
{
public:
  explicit Init_DetectionResult_target_type(::r2_interfaces::msg::DetectionResult & msg)
  : msg_(msg)
  {}
  Init_DetectionResult_detected target_type(::r2_interfaces::msg::DetectionResult::_target_type_type arg)
  {
    msg_.target_type = std::move(arg);
    return Init_DetectionResult_detected(msg_);
  }

private:
  ::r2_interfaces::msg::DetectionResult msg_;
};

class Init_DetectionResult_header
{
public:
  Init_DetectionResult_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DetectionResult_target_type header(::r2_interfaces::msg::DetectionResult::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_DetectionResult_target_type(msg_);
  }

private:
  ::r2_interfaces::msg::DetectionResult msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::r2_interfaces::msg::DetectionResult>()
{
  return r2_interfaces::msg::builder::Init_DetectionResult_header();
}

}  // namespace r2_interfaces

#endif  // R2_INTERFACES__MSG__DETAIL__DETECTION_RESULT__BUILDER_HPP_
