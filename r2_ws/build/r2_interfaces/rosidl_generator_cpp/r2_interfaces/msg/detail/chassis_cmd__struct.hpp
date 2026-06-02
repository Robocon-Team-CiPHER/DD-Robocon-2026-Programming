// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from r2_interfaces:msg/ChassisCmd.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "r2_interfaces/msg/chassis_cmd.hpp"


#ifndef R2_INTERFACES__MSG__DETAIL__CHASSIS_CMD__STRUCT_HPP_
#define R2_INTERFACES__MSG__DETAIL__CHASSIS_CMD__STRUCT_HPP_

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
# define DEPRECATED__r2_interfaces__msg__ChassisCmd __attribute__((deprecated))
#else
# define DEPRECATED__r2_interfaces__msg__ChassisCmd __declspec(deprecated)
#endif

namespace r2_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ChassisCmd_
{
  using Type = ChassisCmd_<ContainerAllocator>;

  explicit ChassisCmd_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->vx = 0.0f;
      this->vy = 0.0f;
      this->omega = 0.0f;
      this->estop = false;
    }
  }

  explicit ChassisCmd_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->vx = 0.0f;
      this->vy = 0.0f;
      this->omega = 0.0f;
      this->estop = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _vx_type =
    float;
  _vx_type vx;
  using _vy_type =
    float;
  _vy_type vy;
  using _omega_type =
    float;
  _omega_type omega;
  using _estop_type =
    bool;
  _estop_type estop;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__vx(
    const float & _arg)
  {
    this->vx = _arg;
    return *this;
  }
  Type & set__vy(
    const float & _arg)
  {
    this->vy = _arg;
    return *this;
  }
  Type & set__omega(
    const float & _arg)
  {
    this->omega = _arg;
    return *this;
  }
  Type & set__estop(
    const bool & _arg)
  {
    this->estop = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    r2_interfaces::msg::ChassisCmd_<ContainerAllocator> *;
  using ConstRawPtr =
    const r2_interfaces::msg::ChassisCmd_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<r2_interfaces::msg::ChassisCmd_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<r2_interfaces::msg::ChassisCmd_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      r2_interfaces::msg::ChassisCmd_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<r2_interfaces::msg::ChassisCmd_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      r2_interfaces::msg::ChassisCmd_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<r2_interfaces::msg::ChassisCmd_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<r2_interfaces::msg::ChassisCmd_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<r2_interfaces::msg::ChassisCmd_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__r2_interfaces__msg__ChassisCmd
    std::shared_ptr<r2_interfaces::msg::ChassisCmd_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__r2_interfaces__msg__ChassisCmd
    std::shared_ptr<r2_interfaces::msg::ChassisCmd_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ChassisCmd_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->vx != other.vx) {
      return false;
    }
    if (this->vy != other.vy) {
      return false;
    }
    if (this->omega != other.omega) {
      return false;
    }
    if (this->estop != other.estop) {
      return false;
    }
    return true;
  }
  bool operator!=(const ChassisCmd_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ChassisCmd_

// alias to use template instance with default allocator
using ChassisCmd =
  r2_interfaces::msg::ChassisCmd_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace r2_interfaces

#endif  // R2_INTERFACES__MSG__DETAIL__CHASSIS_CMD__STRUCT_HPP_
