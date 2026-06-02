// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from r2_interfaces:srv/TriggerDetection.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "r2_interfaces/srv/trigger_detection.hpp"


#ifndef R2_INTERFACES__SRV__DETAIL__TRIGGER_DETECTION__STRUCT_HPP_
#define R2_INTERFACES__SRV__DETAIL__TRIGGER_DETECTION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__r2_interfaces__srv__TriggerDetection_Request __attribute__((deprecated))
#else
# define DEPRECATED__r2_interfaces__srv__TriggerDetection_Request __declspec(deprecated)
#endif

namespace r2_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct TriggerDetection_Request_
{
  using Type = TriggerDetection_Request_<ContainerAllocator>;

  explicit TriggerDetection_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->target_type = "";
      this->timeout_ms = 0ul;
    }
  }

  explicit TriggerDetection_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : target_type(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->target_type = "";
      this->timeout_ms = 0ul;
    }
  }

  // field types and members
  using _target_type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _target_type_type target_type;
  using _timeout_ms_type =
    uint32_t;
  _timeout_ms_type timeout_ms;

  // setters for named parameter idiom
  Type & set__target_type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->target_type = _arg;
    return *this;
  }
  Type & set__timeout_ms(
    const uint32_t & _arg)
  {
    this->timeout_ms = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    r2_interfaces::srv::TriggerDetection_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const r2_interfaces::srv::TriggerDetection_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<r2_interfaces::srv::TriggerDetection_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<r2_interfaces::srv::TriggerDetection_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      r2_interfaces::srv::TriggerDetection_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<r2_interfaces::srv::TriggerDetection_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      r2_interfaces::srv::TriggerDetection_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<r2_interfaces::srv::TriggerDetection_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<r2_interfaces::srv::TriggerDetection_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<r2_interfaces::srv::TriggerDetection_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__r2_interfaces__srv__TriggerDetection_Request
    std::shared_ptr<r2_interfaces::srv::TriggerDetection_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__r2_interfaces__srv__TriggerDetection_Request
    std::shared_ptr<r2_interfaces::srv::TriggerDetection_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TriggerDetection_Request_ & other) const
  {
    if (this->target_type != other.target_type) {
      return false;
    }
    if (this->timeout_ms != other.timeout_ms) {
      return false;
    }
    return true;
  }
  bool operator!=(const TriggerDetection_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TriggerDetection_Request_

// alias to use template instance with default allocator
using TriggerDetection_Request =
  r2_interfaces::srv::TriggerDetection_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace r2_interfaces


// Include directives for member types
// Member 'result'
#include "r2_interfaces/msg/detail/detection_result__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__r2_interfaces__srv__TriggerDetection_Response __attribute__((deprecated))
#else
# define DEPRECATED__r2_interfaces__srv__TriggerDetection_Response __declspec(deprecated)
#endif

namespace r2_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct TriggerDetection_Response_
{
  using Type = TriggerDetection_Response_<ContainerAllocator>;

  explicit TriggerDetection_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit TriggerDetection_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _result_type =
    r2_interfaces::msg::DetectionResult_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__result(
    const r2_interfaces::msg::DetectionResult_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    r2_interfaces::srv::TriggerDetection_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const r2_interfaces::srv::TriggerDetection_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<r2_interfaces::srv::TriggerDetection_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<r2_interfaces::srv::TriggerDetection_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      r2_interfaces::srv::TriggerDetection_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<r2_interfaces::srv::TriggerDetection_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      r2_interfaces::srv::TriggerDetection_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<r2_interfaces::srv::TriggerDetection_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<r2_interfaces::srv::TriggerDetection_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<r2_interfaces::srv::TriggerDetection_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__r2_interfaces__srv__TriggerDetection_Response
    std::shared_ptr<r2_interfaces::srv::TriggerDetection_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__r2_interfaces__srv__TriggerDetection_Response
    std::shared_ptr<r2_interfaces::srv::TriggerDetection_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TriggerDetection_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const TriggerDetection_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TriggerDetection_Response_

// alias to use template instance with default allocator
using TriggerDetection_Response =
  r2_interfaces::srv::TriggerDetection_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace r2_interfaces


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__r2_interfaces__srv__TriggerDetection_Event __attribute__((deprecated))
#else
# define DEPRECATED__r2_interfaces__srv__TriggerDetection_Event __declspec(deprecated)
#endif

namespace r2_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct TriggerDetection_Event_
{
  using Type = TriggerDetection_Event_<ContainerAllocator>;

  explicit TriggerDetection_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit TriggerDetection_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<r2_interfaces::srv::TriggerDetection_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<r2_interfaces::srv::TriggerDetection_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<r2_interfaces::srv::TriggerDetection_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<r2_interfaces::srv::TriggerDetection_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<r2_interfaces::srv::TriggerDetection_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<r2_interfaces::srv::TriggerDetection_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<r2_interfaces::srv::TriggerDetection_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<r2_interfaces::srv::TriggerDetection_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    r2_interfaces::srv::TriggerDetection_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const r2_interfaces::srv::TriggerDetection_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<r2_interfaces::srv::TriggerDetection_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<r2_interfaces::srv::TriggerDetection_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      r2_interfaces::srv::TriggerDetection_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<r2_interfaces::srv::TriggerDetection_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      r2_interfaces::srv::TriggerDetection_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<r2_interfaces::srv::TriggerDetection_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<r2_interfaces::srv::TriggerDetection_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<r2_interfaces::srv::TriggerDetection_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__r2_interfaces__srv__TriggerDetection_Event
    std::shared_ptr<r2_interfaces::srv::TriggerDetection_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__r2_interfaces__srv__TriggerDetection_Event
    std::shared_ptr<r2_interfaces::srv::TriggerDetection_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TriggerDetection_Event_ & other) const
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
  bool operator!=(const TriggerDetection_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TriggerDetection_Event_

// alias to use template instance with default allocator
using TriggerDetection_Event =
  r2_interfaces::srv::TriggerDetection_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace r2_interfaces

namespace r2_interfaces
{

namespace srv
{

struct TriggerDetection
{
  using Request = r2_interfaces::srv::TriggerDetection_Request;
  using Response = r2_interfaces::srv::TriggerDetection_Response;
  using Event = r2_interfaces::srv::TriggerDetection_Event;
};

}  // namespace srv

}  // namespace r2_interfaces

#endif  // R2_INTERFACES__SRV__DETAIL__TRIGGER_DETECTION__STRUCT_HPP_
