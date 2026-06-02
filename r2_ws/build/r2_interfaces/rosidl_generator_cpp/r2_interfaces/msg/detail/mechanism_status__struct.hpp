// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from r2_interfaces:msg/MechanismStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "r2_interfaces/msg/mechanism_status.hpp"


#ifndef R2_INTERFACES__MSG__DETAIL__MECHANISM_STATUS__STRUCT_HPP_
#define R2_INTERFACES__MSG__DETAIL__MECHANISM_STATUS__STRUCT_HPP_

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

#ifndef _WIN32
# define DEPRECATED__r2_interfaces__msg__MechanismStatus __attribute__((deprecated))
#else
# define DEPRECATED__r2_interfaces__msg__MechanismStatus __declspec(deprecated)
#endif

namespace r2_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MechanismStatus_
{
  using Type = MechanismStatus_<ContainerAllocator>;

  explicit MechanismStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mechanism_id = "";
      this->state = 0;
      this->position_mm = 0.0f;
      this->limit_switch_min = false;
      this->limit_switch_max = false;
      this->error_msg = "";
    }
  }

  explicit MechanismStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    mechanism_id(_alloc),
    error_msg(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mechanism_id = "";
      this->state = 0;
      this->position_mm = 0.0f;
      this->limit_switch_min = false;
      this->limit_switch_max = false;
      this->error_msg = "";
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _mechanism_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _mechanism_id_type mechanism_id;
  using _state_type =
    uint8_t;
  _state_type state;
  using _position_mm_type =
    float;
  _position_mm_type position_mm;
  using _limit_switch_min_type =
    bool;
  _limit_switch_min_type limit_switch_min;
  using _limit_switch_max_type =
    bool;
  _limit_switch_max_type limit_switch_max;
  using _error_msg_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _error_msg_type error_msg;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__mechanism_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->mechanism_id = _arg;
    return *this;
  }
  Type & set__state(
    const uint8_t & _arg)
  {
    this->state = _arg;
    return *this;
  }
  Type & set__position_mm(
    const float & _arg)
  {
    this->position_mm = _arg;
    return *this;
  }
  Type & set__limit_switch_min(
    const bool & _arg)
  {
    this->limit_switch_min = _arg;
    return *this;
  }
  Type & set__limit_switch_max(
    const bool & _arg)
  {
    this->limit_switch_max = _arg;
    return *this;
  }
  Type & set__error_msg(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->error_msg = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    r2_interfaces::msg::MechanismStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const r2_interfaces::msg::MechanismStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<r2_interfaces::msg::MechanismStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<r2_interfaces::msg::MechanismStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      r2_interfaces::msg::MechanismStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<r2_interfaces::msg::MechanismStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      r2_interfaces::msg::MechanismStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<r2_interfaces::msg::MechanismStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<r2_interfaces::msg::MechanismStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<r2_interfaces::msg::MechanismStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__r2_interfaces__msg__MechanismStatus
    std::shared_ptr<r2_interfaces::msg::MechanismStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__r2_interfaces__msg__MechanismStatus
    std::shared_ptr<r2_interfaces::msg::MechanismStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MechanismStatus_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->mechanism_id != other.mechanism_id) {
      return false;
    }
    if (this->state != other.state) {
      return false;
    }
    if (this->position_mm != other.position_mm) {
      return false;
    }
    if (this->limit_switch_min != other.limit_switch_min) {
      return false;
    }
    if (this->limit_switch_max != other.limit_switch_max) {
      return false;
    }
    if (this->error_msg != other.error_msg) {
      return false;
    }
    return true;
  }
  bool operator!=(const MechanismStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MechanismStatus_

// alias to use template instance with default allocator
using MechanismStatus =
  r2_interfaces::msg::MechanismStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace r2_interfaces

#endif  // R2_INTERFACES__MSG__DETAIL__MECHANISM_STATUS__STRUCT_HPP_
