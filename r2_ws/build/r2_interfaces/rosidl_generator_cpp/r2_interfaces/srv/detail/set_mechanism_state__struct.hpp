// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from r2_interfaces:srv/SetMechanismState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "r2_interfaces/srv/set_mechanism_state.hpp"


#ifndef R2_INTERFACES__SRV__DETAIL__SET_MECHANISM_STATE__STRUCT_HPP_
#define R2_INTERFACES__SRV__DETAIL__SET_MECHANISM_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__r2_interfaces__srv__SetMechanismState_Request __attribute__((deprecated))
#else
# define DEPRECATED__r2_interfaces__srv__SetMechanismState_Request __declspec(deprecated)
#endif

namespace r2_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetMechanismState_Request_
{
  using Type = SetMechanismState_Request_<ContainerAllocator>;

  explicit SetMechanismState_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mechanism_id = "";
      this->command = 0;
      this->target_position_mm = 0.0f;
      this->speed_percent = 0.0f;
    }
  }

  explicit SetMechanismState_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : mechanism_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mechanism_id = "";
      this->command = 0;
      this->target_position_mm = 0.0f;
      this->speed_percent = 0.0f;
    }
  }

  // field types and members
  using _mechanism_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _mechanism_id_type mechanism_id;
  using _command_type =
    uint8_t;
  _command_type command;
  using _target_position_mm_type =
    float;
  _target_position_mm_type target_position_mm;
  using _speed_percent_type =
    float;
  _speed_percent_type speed_percent;

  // setters for named parameter idiom
  Type & set__mechanism_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->mechanism_id = _arg;
    return *this;
  }
  Type & set__command(
    const uint8_t & _arg)
  {
    this->command = _arg;
    return *this;
  }
  Type & set__target_position_mm(
    const float & _arg)
  {
    this->target_position_mm = _arg;
    return *this;
  }
  Type & set__speed_percent(
    const float & _arg)
  {
    this->speed_percent = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    r2_interfaces::srv::SetMechanismState_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const r2_interfaces::srv::SetMechanismState_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<r2_interfaces::srv::SetMechanismState_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<r2_interfaces::srv::SetMechanismState_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      r2_interfaces::srv::SetMechanismState_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<r2_interfaces::srv::SetMechanismState_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      r2_interfaces::srv::SetMechanismState_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<r2_interfaces::srv::SetMechanismState_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<r2_interfaces::srv::SetMechanismState_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<r2_interfaces::srv::SetMechanismState_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__r2_interfaces__srv__SetMechanismState_Request
    std::shared_ptr<r2_interfaces::srv::SetMechanismState_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__r2_interfaces__srv__SetMechanismState_Request
    std::shared_ptr<r2_interfaces::srv::SetMechanismState_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetMechanismState_Request_ & other) const
  {
    if (this->mechanism_id != other.mechanism_id) {
      return false;
    }
    if (this->command != other.command) {
      return false;
    }
    if (this->target_position_mm != other.target_position_mm) {
      return false;
    }
    if (this->speed_percent != other.speed_percent) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetMechanismState_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetMechanismState_Request_

// alias to use template instance with default allocator
using SetMechanismState_Request =
  r2_interfaces::srv::SetMechanismState_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace r2_interfaces


#ifndef _WIN32
# define DEPRECATED__r2_interfaces__srv__SetMechanismState_Response __attribute__((deprecated))
#else
# define DEPRECATED__r2_interfaces__srv__SetMechanismState_Response __declspec(deprecated)
#endif

namespace r2_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetMechanismState_Response_
{
  using Type = SetMechanismState_Response_<ContainerAllocator>;

  explicit SetMechanismState_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
      this->actual_position_mm = 0.0f;
    }
  }

  explicit SetMechanismState_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
      this->actual_position_mm = 0.0f;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;
  using _actual_position_mm_type =
    float;
  _actual_position_mm_type actual_position_mm;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }
  Type & set__actual_position_mm(
    const float & _arg)
  {
    this->actual_position_mm = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    r2_interfaces::srv::SetMechanismState_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const r2_interfaces::srv::SetMechanismState_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<r2_interfaces::srv::SetMechanismState_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<r2_interfaces::srv::SetMechanismState_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      r2_interfaces::srv::SetMechanismState_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<r2_interfaces::srv::SetMechanismState_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      r2_interfaces::srv::SetMechanismState_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<r2_interfaces::srv::SetMechanismState_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<r2_interfaces::srv::SetMechanismState_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<r2_interfaces::srv::SetMechanismState_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__r2_interfaces__srv__SetMechanismState_Response
    std::shared_ptr<r2_interfaces::srv::SetMechanismState_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__r2_interfaces__srv__SetMechanismState_Response
    std::shared_ptr<r2_interfaces::srv::SetMechanismState_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetMechanismState_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    if (this->actual_position_mm != other.actual_position_mm) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetMechanismState_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetMechanismState_Response_

// alias to use template instance with default allocator
using SetMechanismState_Response =
  r2_interfaces::srv::SetMechanismState_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace r2_interfaces


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__r2_interfaces__srv__SetMechanismState_Event __attribute__((deprecated))
#else
# define DEPRECATED__r2_interfaces__srv__SetMechanismState_Event __declspec(deprecated)
#endif

namespace r2_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetMechanismState_Event_
{
  using Type = SetMechanismState_Event_<ContainerAllocator>;

  explicit SetMechanismState_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit SetMechanismState_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<r2_interfaces::srv::SetMechanismState_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<r2_interfaces::srv::SetMechanismState_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<r2_interfaces::srv::SetMechanismState_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<r2_interfaces::srv::SetMechanismState_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<r2_interfaces::srv::SetMechanismState_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<r2_interfaces::srv::SetMechanismState_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<r2_interfaces::srv::SetMechanismState_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<r2_interfaces::srv::SetMechanismState_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    r2_interfaces::srv::SetMechanismState_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const r2_interfaces::srv::SetMechanismState_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<r2_interfaces::srv::SetMechanismState_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<r2_interfaces::srv::SetMechanismState_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      r2_interfaces::srv::SetMechanismState_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<r2_interfaces::srv::SetMechanismState_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      r2_interfaces::srv::SetMechanismState_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<r2_interfaces::srv::SetMechanismState_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<r2_interfaces::srv::SetMechanismState_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<r2_interfaces::srv::SetMechanismState_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__r2_interfaces__srv__SetMechanismState_Event
    std::shared_ptr<r2_interfaces::srv::SetMechanismState_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__r2_interfaces__srv__SetMechanismState_Event
    std::shared_ptr<r2_interfaces::srv::SetMechanismState_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetMechanismState_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetMechanismState_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetMechanismState_Event_

// alias to use template instance with default allocator
using SetMechanismState_Event =
  r2_interfaces::srv::SetMechanismState_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace r2_interfaces

namespace r2_interfaces
{

namespace srv
{

struct SetMechanismState
{
  using Request = r2_interfaces::srv::SetMechanismState_Request;
  using Response = r2_interfaces::srv::SetMechanismState_Response;
  using Event = r2_interfaces::srv::SetMechanismState_Event;
};

}  // namespace srv

}  // namespace r2_interfaces

#endif  // R2_INTERFACES__SRV__DETAIL__SET_MECHANISM_STATE__STRUCT_HPP_
