// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from r2_interfaces:msg/SerialFrame.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "r2_interfaces/msg/serial_frame.hpp"


#ifndef R2_INTERFACES__MSG__DETAIL__SERIAL_FRAME__STRUCT_HPP_
#define R2_INTERFACES__MSG__DETAIL__SERIAL_FRAME__STRUCT_HPP_

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
# define DEPRECATED__r2_interfaces__msg__SerialFrame __attribute__((deprecated))
#else
# define DEPRECATED__r2_interfaces__msg__SerialFrame __declspec(deprecated)
#endif

namespace r2_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SerialFrame_
{
  using Type = SerialFrame_<ContainerAllocator>;

  explicit SerialFrame_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->device_id = 0;
      this->cmd_id = 0;
      this->crc8 = 0;
    }
  }

  explicit SerialFrame_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->device_id = 0;
      this->cmd_id = 0;
      this->crc8 = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _device_id_type =
    uint8_t;
  _device_id_type device_id;
  using _cmd_id_type =
    uint8_t;
  _cmd_id_type cmd_id;
  using _payload_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _payload_type payload;
  using _crc8_type =
    uint8_t;
  _crc8_type crc8;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__device_id(
    const uint8_t & _arg)
  {
    this->device_id = _arg;
    return *this;
  }
  Type & set__cmd_id(
    const uint8_t & _arg)
  {
    this->cmd_id = _arg;
    return *this;
  }
  Type & set__payload(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->payload = _arg;
    return *this;
  }
  Type & set__crc8(
    const uint8_t & _arg)
  {
    this->crc8 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    r2_interfaces::msg::SerialFrame_<ContainerAllocator> *;
  using ConstRawPtr =
    const r2_interfaces::msg::SerialFrame_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<r2_interfaces::msg::SerialFrame_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<r2_interfaces::msg::SerialFrame_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      r2_interfaces::msg::SerialFrame_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<r2_interfaces::msg::SerialFrame_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      r2_interfaces::msg::SerialFrame_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<r2_interfaces::msg::SerialFrame_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<r2_interfaces::msg::SerialFrame_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<r2_interfaces::msg::SerialFrame_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__r2_interfaces__msg__SerialFrame
    std::shared_ptr<r2_interfaces::msg::SerialFrame_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__r2_interfaces__msg__SerialFrame
    std::shared_ptr<r2_interfaces::msg::SerialFrame_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SerialFrame_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->device_id != other.device_id) {
      return false;
    }
    if (this->cmd_id != other.cmd_id) {
      return false;
    }
    if (this->payload != other.payload) {
      return false;
    }
    if (this->crc8 != other.crc8) {
      return false;
    }
    return true;
  }
  bool operator!=(const SerialFrame_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SerialFrame_

// alias to use template instance with default allocator
using SerialFrame =
  r2_interfaces::msg::SerialFrame_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace r2_interfaces

#endif  // R2_INTERFACES__MSG__DETAIL__SERIAL_FRAME__STRUCT_HPP_
