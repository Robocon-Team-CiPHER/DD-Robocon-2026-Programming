// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from r2_interfaces:msg/DetectionResult.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "r2_interfaces/msg/detection_result.hpp"


#ifndef R2_INTERFACES__MSG__DETAIL__DETECTION_RESULT__STRUCT_HPP_
#define R2_INTERFACES__MSG__DETAIL__DETECTION_RESULT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'bounding_box'
#include "sensor_msgs/msg/detail/region_of_interest__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__r2_interfaces__msg__DetectionResult __attribute__((deprecated))
#else
# define DEPRECATED__r2_interfaces__msg__DetectionResult __declspec(deprecated)
#endif

namespace r2_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DetectionResult_
{
  using Type = DetectionResult_<ContainerAllocator>;

  explicit DetectionResult_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    bounding_box(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->target_type = "";
      this->detected = false;
      this->distance_mm = 0.0f;
      this->offset_x_mm = 0.0f;
      this->offset_y_mm = 0.0f;
      this->confidence = 0.0f;
    }
  }

  explicit DetectionResult_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    target_type(_alloc),
    bounding_box(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->target_type = "";
      this->detected = false;
      this->distance_mm = 0.0f;
      this->offset_x_mm = 0.0f;
      this->offset_y_mm = 0.0f;
      this->confidence = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _target_type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _target_type_type target_type;
  using _detected_type =
    bool;
  _detected_type detected;
  using _distance_mm_type =
    float;
  _distance_mm_type distance_mm;
  using _offset_x_mm_type =
    float;
  _offset_x_mm_type offset_x_mm;
  using _offset_y_mm_type =
    float;
  _offset_y_mm_type offset_y_mm;
  using _confidence_type =
    float;
  _confidence_type confidence;
  using _bounding_box_type =
    sensor_msgs::msg::RegionOfInterest_<ContainerAllocator>;
  _bounding_box_type bounding_box;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__target_type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->target_type = _arg;
    return *this;
  }
  Type & set__detected(
    const bool & _arg)
  {
    this->detected = _arg;
    return *this;
  }
  Type & set__distance_mm(
    const float & _arg)
  {
    this->distance_mm = _arg;
    return *this;
  }
  Type & set__offset_x_mm(
    const float & _arg)
  {
    this->offset_x_mm = _arg;
    return *this;
  }
  Type & set__offset_y_mm(
    const float & _arg)
  {
    this->offset_y_mm = _arg;
    return *this;
  }
  Type & set__confidence(
    const float & _arg)
  {
    this->confidence = _arg;
    return *this;
  }
  Type & set__bounding_box(
    const sensor_msgs::msg::RegionOfInterest_<ContainerAllocator> & _arg)
  {
    this->bounding_box = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    r2_interfaces::msg::DetectionResult_<ContainerAllocator> *;
  using ConstRawPtr =
    const r2_interfaces::msg::DetectionResult_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<r2_interfaces::msg::DetectionResult_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<r2_interfaces::msg::DetectionResult_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      r2_interfaces::msg::DetectionResult_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<r2_interfaces::msg::DetectionResult_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      r2_interfaces::msg::DetectionResult_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<r2_interfaces::msg::DetectionResult_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<r2_interfaces::msg::DetectionResult_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<r2_interfaces::msg::DetectionResult_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__r2_interfaces__msg__DetectionResult
    std::shared_ptr<r2_interfaces::msg::DetectionResult_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__r2_interfaces__msg__DetectionResult
    std::shared_ptr<r2_interfaces::msg::DetectionResult_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DetectionResult_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->target_type != other.target_type) {
      return false;
    }
    if (this->detected != other.detected) {
      return false;
    }
    if (this->distance_mm != other.distance_mm) {
      return false;
    }
    if (this->offset_x_mm != other.offset_x_mm) {
      return false;
    }
    if (this->offset_y_mm != other.offset_y_mm) {
      return false;
    }
    if (this->confidence != other.confidence) {
      return false;
    }
    if (this->bounding_box != other.bounding_box) {
      return false;
    }
    return true;
  }
  bool operator!=(const DetectionResult_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DetectionResult_

// alias to use template instance with default allocator
using DetectionResult =
  r2_interfaces::msg::DetectionResult_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace r2_interfaces

#endif  // R2_INTERFACES__MSG__DETAIL__DETECTION_RESULT__STRUCT_HPP_
