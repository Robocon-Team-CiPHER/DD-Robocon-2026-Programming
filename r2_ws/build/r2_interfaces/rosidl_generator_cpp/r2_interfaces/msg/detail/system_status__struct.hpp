// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from r2_interfaces:msg/SystemStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "r2_interfaces/msg/system_status.hpp"


#ifndef R2_INTERFACES__MSG__DETAIL__SYSTEM_STATUS__STRUCT_HPP_
#define R2_INTERFACES__MSG__DETAIL__SYSTEM_STATUS__STRUCT_HPP_

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
# define DEPRECATED__r2_interfaces__msg__SystemStatus __attribute__((deprecated))
#else
# define DEPRECATED__r2_interfaces__msg__SystemStatus __declspec(deprecated)
#endif

namespace r2_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SystemStatus_
{
  using Type = SystemStatus_<ContainerAllocator>;

  explicit SystemStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->rpi_ok = false;
      this->esp32_ok = false;
      this->arduino_ok = false;
      this->cameras_ok = false;
      this->encoders_ok = false;
      this->mission_state = "";
    }
  }

  explicit SystemStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    mission_state(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->rpi_ok = false;
      this->esp32_ok = false;
      this->arduino_ok = false;
      this->cameras_ok = false;
      this->encoders_ok = false;
      this->mission_state = "";
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _rpi_ok_type =
    bool;
  _rpi_ok_type rpi_ok;
  using _esp32_ok_type =
    bool;
  _esp32_ok_type esp32_ok;
  using _arduino_ok_type =
    bool;
  _arduino_ok_type arduino_ok;
  using _cameras_ok_type =
    bool;
  _cameras_ok_type cameras_ok;
  using _encoders_ok_type =
    bool;
  _encoders_ok_type encoders_ok;
  using _mission_state_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _mission_state_type mission_state;
  using _warnings_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _warnings_type warnings;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__rpi_ok(
    const bool & _arg)
  {
    this->rpi_ok = _arg;
    return *this;
  }
  Type & set__esp32_ok(
    const bool & _arg)
  {
    this->esp32_ok = _arg;
    return *this;
  }
  Type & set__arduino_ok(
    const bool & _arg)
  {
    this->arduino_ok = _arg;
    return *this;
  }
  Type & set__cameras_ok(
    const bool & _arg)
  {
    this->cameras_ok = _arg;
    return *this;
  }
  Type & set__encoders_ok(
    const bool & _arg)
  {
    this->encoders_ok = _arg;
    return *this;
  }
  Type & set__mission_state(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->mission_state = _arg;
    return *this;
  }
  Type & set__warnings(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->warnings = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    r2_interfaces::msg::SystemStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const r2_interfaces::msg::SystemStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<r2_interfaces::msg::SystemStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<r2_interfaces::msg::SystemStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      r2_interfaces::msg::SystemStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<r2_interfaces::msg::SystemStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      r2_interfaces::msg::SystemStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<r2_interfaces::msg::SystemStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<r2_interfaces::msg::SystemStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<r2_interfaces::msg::SystemStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__r2_interfaces__msg__SystemStatus
    std::shared_ptr<r2_interfaces::msg::SystemStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__r2_interfaces__msg__SystemStatus
    std::shared_ptr<r2_interfaces::msg::SystemStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SystemStatus_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->rpi_ok != other.rpi_ok) {
      return false;
    }
    if (this->esp32_ok != other.esp32_ok) {
      return false;
    }
    if (this->arduino_ok != other.arduino_ok) {
      return false;
    }
    if (this->cameras_ok != other.cameras_ok) {
      return false;
    }
    if (this->encoders_ok != other.encoders_ok) {
      return false;
    }
    if (this->mission_state != other.mission_state) {
      return false;
    }
    if (this->warnings != other.warnings) {
      return false;
    }
    return true;
  }
  bool operator!=(const SystemStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SystemStatus_

// alias to use template instance with default allocator
using SystemStatus =
  r2_interfaces::msg::SystemStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace r2_interfaces

#endif  // R2_INTERFACES__MSG__DETAIL__SYSTEM_STATUS__STRUCT_HPP_
