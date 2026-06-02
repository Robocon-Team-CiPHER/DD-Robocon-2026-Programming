// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from r2_interfaces:action/ExecuteRegion.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "r2_interfaces/action/execute_region.hpp"


#ifndef R2_INTERFACES__ACTION__DETAIL__EXECUTE_REGION__STRUCT_HPP_
#define R2_INTERFACES__ACTION__DETAIL__EXECUTE_REGION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__r2_interfaces__action__ExecuteRegion_Goal __attribute__((deprecated))
#else
# define DEPRECATED__r2_interfaces__action__ExecuteRegion_Goal __declspec(deprecated)
#endif

namespace r2_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ExecuteRegion_Goal_
{
  using Type = ExecuteRegion_Goal_<ContainerAllocator>;

  explicit ExecuteRegion_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->region_name = "";
    }
  }

  explicit ExecuteRegion_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : region_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->region_name = "";
    }
  }

  // field types and members
  using _region_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _region_name_type region_name;

  // setters for named parameter idiom
  Type & set__region_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->region_name = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    r2_interfaces::action::ExecuteRegion_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const r2_interfaces::action::ExecuteRegion_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<r2_interfaces::action::ExecuteRegion_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<r2_interfaces::action::ExecuteRegion_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      r2_interfaces::action::ExecuteRegion_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<r2_interfaces::action::ExecuteRegion_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      r2_interfaces::action::ExecuteRegion_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<r2_interfaces::action::ExecuteRegion_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<r2_interfaces::action::ExecuteRegion_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<r2_interfaces::action::ExecuteRegion_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__r2_interfaces__action__ExecuteRegion_Goal
    std::shared_ptr<r2_interfaces::action::ExecuteRegion_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__r2_interfaces__action__ExecuteRegion_Goal
    std::shared_ptr<r2_interfaces::action::ExecuteRegion_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ExecuteRegion_Goal_ & other) const
  {
    if (this->region_name != other.region_name) {
      return false;
    }
    return true;
  }
  bool operator!=(const ExecuteRegion_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ExecuteRegion_Goal_

// alias to use template instance with default allocator
using ExecuteRegion_Goal =
  r2_interfaces::action::ExecuteRegion_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace r2_interfaces


#ifndef _WIN32
# define DEPRECATED__r2_interfaces__action__ExecuteRegion_Result __attribute__((deprecated))
#else
# define DEPRECATED__r2_interfaces__action__ExecuteRegion_Result __declspec(deprecated)
#endif

namespace r2_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ExecuteRegion_Result_
{
  using Type = ExecuteRegion_Result_<ContainerAllocator>;

  explicit ExecuteRegion_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
      this->kfs_boxes_collected = 0;
    }
  }

  explicit ExecuteRegion_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
      this->kfs_boxes_collected = 0;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;
  using _kfs_boxes_collected_type =
    uint8_t;
  _kfs_boxes_collected_type kfs_boxes_collected;

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
  Type & set__kfs_boxes_collected(
    const uint8_t & _arg)
  {
    this->kfs_boxes_collected = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    r2_interfaces::action::ExecuteRegion_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const r2_interfaces::action::ExecuteRegion_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<r2_interfaces::action::ExecuteRegion_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<r2_interfaces::action::ExecuteRegion_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      r2_interfaces::action::ExecuteRegion_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<r2_interfaces::action::ExecuteRegion_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      r2_interfaces::action::ExecuteRegion_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<r2_interfaces::action::ExecuteRegion_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<r2_interfaces::action::ExecuteRegion_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<r2_interfaces::action::ExecuteRegion_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__r2_interfaces__action__ExecuteRegion_Result
    std::shared_ptr<r2_interfaces::action::ExecuteRegion_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__r2_interfaces__action__ExecuteRegion_Result
    std::shared_ptr<r2_interfaces::action::ExecuteRegion_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ExecuteRegion_Result_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    if (this->kfs_boxes_collected != other.kfs_boxes_collected) {
      return false;
    }
    return true;
  }
  bool operator!=(const ExecuteRegion_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ExecuteRegion_Result_

// alias to use template instance with default allocator
using ExecuteRegion_Result =
  r2_interfaces::action::ExecuteRegion_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace r2_interfaces


#ifndef _WIN32
# define DEPRECATED__r2_interfaces__action__ExecuteRegion_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__r2_interfaces__action__ExecuteRegion_Feedback __declspec(deprecated)
#endif

namespace r2_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ExecuteRegion_Feedback_
{
  using Type = ExecuteRegion_Feedback_<ContainerAllocator>;

  explicit ExecuteRegion_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->current_step = "";
      this->steps_completed = 0;
      this->total_steps = 0;
      this->progress_percent = 0.0f;
    }
  }

  explicit ExecuteRegion_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : current_step(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->current_step = "";
      this->steps_completed = 0;
      this->total_steps = 0;
      this->progress_percent = 0.0f;
    }
  }

  // field types and members
  using _current_step_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _current_step_type current_step;
  using _steps_completed_type =
    uint8_t;
  _steps_completed_type steps_completed;
  using _total_steps_type =
    uint8_t;
  _total_steps_type total_steps;
  using _progress_percent_type =
    float;
  _progress_percent_type progress_percent;

  // setters for named parameter idiom
  Type & set__current_step(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->current_step = _arg;
    return *this;
  }
  Type & set__steps_completed(
    const uint8_t & _arg)
  {
    this->steps_completed = _arg;
    return *this;
  }
  Type & set__total_steps(
    const uint8_t & _arg)
  {
    this->total_steps = _arg;
    return *this;
  }
  Type & set__progress_percent(
    const float & _arg)
  {
    this->progress_percent = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    r2_interfaces::action::ExecuteRegion_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const r2_interfaces::action::ExecuteRegion_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<r2_interfaces::action::ExecuteRegion_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<r2_interfaces::action::ExecuteRegion_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      r2_interfaces::action::ExecuteRegion_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<r2_interfaces::action::ExecuteRegion_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      r2_interfaces::action::ExecuteRegion_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<r2_interfaces::action::ExecuteRegion_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<r2_interfaces::action::ExecuteRegion_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<r2_interfaces::action::ExecuteRegion_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__r2_interfaces__action__ExecuteRegion_Feedback
    std::shared_ptr<r2_interfaces::action::ExecuteRegion_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__r2_interfaces__action__ExecuteRegion_Feedback
    std::shared_ptr<r2_interfaces::action::ExecuteRegion_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ExecuteRegion_Feedback_ & other) const
  {
    if (this->current_step != other.current_step) {
      return false;
    }
    if (this->steps_completed != other.steps_completed) {
      return false;
    }
    if (this->total_steps != other.total_steps) {
      return false;
    }
    if (this->progress_percent != other.progress_percent) {
      return false;
    }
    return true;
  }
  bool operator!=(const ExecuteRegion_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ExecuteRegion_Feedback_

// alias to use template instance with default allocator
using ExecuteRegion_Feedback =
  r2_interfaces::action::ExecuteRegion_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace r2_interfaces


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "r2_interfaces/action/detail/execute_region__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__r2_interfaces__action__ExecuteRegion_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__r2_interfaces__action__ExecuteRegion_SendGoal_Request __declspec(deprecated)
#endif

namespace r2_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ExecuteRegion_SendGoal_Request_
{
  using Type = ExecuteRegion_SendGoal_Request_<ContainerAllocator>;

  explicit ExecuteRegion_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit ExecuteRegion_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    r2_interfaces::action::ExecuteRegion_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const r2_interfaces::action::ExecuteRegion_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    r2_interfaces::action::ExecuteRegion_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const r2_interfaces::action::ExecuteRegion_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<r2_interfaces::action::ExecuteRegion_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<r2_interfaces::action::ExecuteRegion_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      r2_interfaces::action::ExecuteRegion_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<r2_interfaces::action::ExecuteRegion_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      r2_interfaces::action::ExecuteRegion_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<r2_interfaces::action::ExecuteRegion_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<r2_interfaces::action::ExecuteRegion_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<r2_interfaces::action::ExecuteRegion_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__r2_interfaces__action__ExecuteRegion_SendGoal_Request
    std::shared_ptr<r2_interfaces::action::ExecuteRegion_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__r2_interfaces__action__ExecuteRegion_SendGoal_Request
    std::shared_ptr<r2_interfaces::action::ExecuteRegion_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ExecuteRegion_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const ExecuteRegion_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ExecuteRegion_SendGoal_Request_

// alias to use template instance with default allocator
using ExecuteRegion_SendGoal_Request =
  r2_interfaces::action::ExecuteRegion_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace r2_interfaces


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__r2_interfaces__action__ExecuteRegion_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__r2_interfaces__action__ExecuteRegion_SendGoal_Response __declspec(deprecated)
#endif

namespace r2_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ExecuteRegion_SendGoal_Response_
{
  using Type = ExecuteRegion_SendGoal_Response_<ContainerAllocator>;

  explicit ExecuteRegion_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit ExecuteRegion_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    r2_interfaces::action::ExecuteRegion_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const r2_interfaces::action::ExecuteRegion_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<r2_interfaces::action::ExecuteRegion_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<r2_interfaces::action::ExecuteRegion_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      r2_interfaces::action::ExecuteRegion_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<r2_interfaces::action::ExecuteRegion_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      r2_interfaces::action::ExecuteRegion_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<r2_interfaces::action::ExecuteRegion_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<r2_interfaces::action::ExecuteRegion_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<r2_interfaces::action::ExecuteRegion_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__r2_interfaces__action__ExecuteRegion_SendGoal_Response
    std::shared_ptr<r2_interfaces::action::ExecuteRegion_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__r2_interfaces__action__ExecuteRegion_SendGoal_Response
    std::shared_ptr<r2_interfaces::action::ExecuteRegion_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ExecuteRegion_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const ExecuteRegion_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ExecuteRegion_SendGoal_Response_

// alias to use template instance with default allocator
using ExecuteRegion_SendGoal_Response =
  r2_interfaces::action::ExecuteRegion_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace r2_interfaces


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__r2_interfaces__action__ExecuteRegion_SendGoal_Event __attribute__((deprecated))
#else
# define DEPRECATED__r2_interfaces__action__ExecuteRegion_SendGoal_Event __declspec(deprecated)
#endif

namespace r2_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ExecuteRegion_SendGoal_Event_
{
  using Type = ExecuteRegion_SendGoal_Event_<ContainerAllocator>;

  explicit ExecuteRegion_SendGoal_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit ExecuteRegion_SendGoal_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<r2_interfaces::action::ExecuteRegion_SendGoal_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<r2_interfaces::action::ExecuteRegion_SendGoal_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<r2_interfaces::action::ExecuteRegion_SendGoal_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<r2_interfaces::action::ExecuteRegion_SendGoal_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<r2_interfaces::action::ExecuteRegion_SendGoal_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<r2_interfaces::action::ExecuteRegion_SendGoal_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<r2_interfaces::action::ExecuteRegion_SendGoal_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<r2_interfaces::action::ExecuteRegion_SendGoal_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    r2_interfaces::action::ExecuteRegion_SendGoal_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const r2_interfaces::action::ExecuteRegion_SendGoal_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<r2_interfaces::action::ExecuteRegion_SendGoal_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<r2_interfaces::action::ExecuteRegion_SendGoal_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      r2_interfaces::action::ExecuteRegion_SendGoal_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<r2_interfaces::action::ExecuteRegion_SendGoal_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      r2_interfaces::action::ExecuteRegion_SendGoal_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<r2_interfaces::action::ExecuteRegion_SendGoal_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<r2_interfaces::action::ExecuteRegion_SendGoal_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<r2_interfaces::action::ExecuteRegion_SendGoal_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__r2_interfaces__action__ExecuteRegion_SendGoal_Event
    std::shared_ptr<r2_interfaces::action::ExecuteRegion_SendGoal_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__r2_interfaces__action__ExecuteRegion_SendGoal_Event
    std::shared_ptr<r2_interfaces::action::ExecuteRegion_SendGoal_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ExecuteRegion_SendGoal_Event_ & other) const
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
  bool operator!=(const ExecuteRegion_SendGoal_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ExecuteRegion_SendGoal_Event_

// alias to use template instance with default allocator
using ExecuteRegion_SendGoal_Event =
  r2_interfaces::action::ExecuteRegion_SendGoal_Event_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace r2_interfaces

namespace r2_interfaces
{

namespace action
{

struct ExecuteRegion_SendGoal
{
  using Request = r2_interfaces::action::ExecuteRegion_SendGoal_Request;
  using Response = r2_interfaces::action::ExecuteRegion_SendGoal_Response;
  using Event = r2_interfaces::action::ExecuteRegion_SendGoal_Event;
};

}  // namespace action

}  // namespace r2_interfaces


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__r2_interfaces__action__ExecuteRegion_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__r2_interfaces__action__ExecuteRegion_GetResult_Request __declspec(deprecated)
#endif

namespace r2_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ExecuteRegion_GetResult_Request_
{
  using Type = ExecuteRegion_GetResult_Request_<ContainerAllocator>;

  explicit ExecuteRegion_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit ExecuteRegion_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    r2_interfaces::action::ExecuteRegion_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const r2_interfaces::action::ExecuteRegion_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<r2_interfaces::action::ExecuteRegion_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<r2_interfaces::action::ExecuteRegion_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      r2_interfaces::action::ExecuteRegion_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<r2_interfaces::action::ExecuteRegion_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      r2_interfaces::action::ExecuteRegion_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<r2_interfaces::action::ExecuteRegion_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<r2_interfaces::action::ExecuteRegion_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<r2_interfaces::action::ExecuteRegion_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__r2_interfaces__action__ExecuteRegion_GetResult_Request
    std::shared_ptr<r2_interfaces::action::ExecuteRegion_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__r2_interfaces__action__ExecuteRegion_GetResult_Request
    std::shared_ptr<r2_interfaces::action::ExecuteRegion_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ExecuteRegion_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const ExecuteRegion_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ExecuteRegion_GetResult_Request_

// alias to use template instance with default allocator
using ExecuteRegion_GetResult_Request =
  r2_interfaces::action::ExecuteRegion_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace r2_interfaces


// Include directives for member types
// Member 'result'
// already included above
// #include "r2_interfaces/action/detail/execute_region__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__r2_interfaces__action__ExecuteRegion_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__r2_interfaces__action__ExecuteRegion_GetResult_Response __declspec(deprecated)
#endif

namespace r2_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ExecuteRegion_GetResult_Response_
{
  using Type = ExecuteRegion_GetResult_Response_<ContainerAllocator>;

  explicit ExecuteRegion_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit ExecuteRegion_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    r2_interfaces::action::ExecuteRegion_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const r2_interfaces::action::ExecuteRegion_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    r2_interfaces::action::ExecuteRegion_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const r2_interfaces::action::ExecuteRegion_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<r2_interfaces::action::ExecuteRegion_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<r2_interfaces::action::ExecuteRegion_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      r2_interfaces::action::ExecuteRegion_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<r2_interfaces::action::ExecuteRegion_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      r2_interfaces::action::ExecuteRegion_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<r2_interfaces::action::ExecuteRegion_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<r2_interfaces::action::ExecuteRegion_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<r2_interfaces::action::ExecuteRegion_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__r2_interfaces__action__ExecuteRegion_GetResult_Response
    std::shared_ptr<r2_interfaces::action::ExecuteRegion_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__r2_interfaces__action__ExecuteRegion_GetResult_Response
    std::shared_ptr<r2_interfaces::action::ExecuteRegion_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ExecuteRegion_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const ExecuteRegion_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ExecuteRegion_GetResult_Response_

// alias to use template instance with default allocator
using ExecuteRegion_GetResult_Response =
  r2_interfaces::action::ExecuteRegion_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace r2_interfaces


// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__r2_interfaces__action__ExecuteRegion_GetResult_Event __attribute__((deprecated))
#else
# define DEPRECATED__r2_interfaces__action__ExecuteRegion_GetResult_Event __declspec(deprecated)
#endif

namespace r2_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ExecuteRegion_GetResult_Event_
{
  using Type = ExecuteRegion_GetResult_Event_<ContainerAllocator>;

  explicit ExecuteRegion_GetResult_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit ExecuteRegion_GetResult_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<r2_interfaces::action::ExecuteRegion_GetResult_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<r2_interfaces::action::ExecuteRegion_GetResult_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<r2_interfaces::action::ExecuteRegion_GetResult_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<r2_interfaces::action::ExecuteRegion_GetResult_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<r2_interfaces::action::ExecuteRegion_GetResult_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<r2_interfaces::action::ExecuteRegion_GetResult_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<r2_interfaces::action::ExecuteRegion_GetResult_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<r2_interfaces::action::ExecuteRegion_GetResult_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    r2_interfaces::action::ExecuteRegion_GetResult_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const r2_interfaces::action::ExecuteRegion_GetResult_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<r2_interfaces::action::ExecuteRegion_GetResult_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<r2_interfaces::action::ExecuteRegion_GetResult_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      r2_interfaces::action::ExecuteRegion_GetResult_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<r2_interfaces::action::ExecuteRegion_GetResult_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      r2_interfaces::action::ExecuteRegion_GetResult_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<r2_interfaces::action::ExecuteRegion_GetResult_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<r2_interfaces::action::ExecuteRegion_GetResult_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<r2_interfaces::action::ExecuteRegion_GetResult_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__r2_interfaces__action__ExecuteRegion_GetResult_Event
    std::shared_ptr<r2_interfaces::action::ExecuteRegion_GetResult_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__r2_interfaces__action__ExecuteRegion_GetResult_Event
    std::shared_ptr<r2_interfaces::action::ExecuteRegion_GetResult_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ExecuteRegion_GetResult_Event_ & other) const
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
  bool operator!=(const ExecuteRegion_GetResult_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ExecuteRegion_GetResult_Event_

// alias to use template instance with default allocator
using ExecuteRegion_GetResult_Event =
  r2_interfaces::action::ExecuteRegion_GetResult_Event_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace r2_interfaces

namespace r2_interfaces
{

namespace action
{

struct ExecuteRegion_GetResult
{
  using Request = r2_interfaces::action::ExecuteRegion_GetResult_Request;
  using Response = r2_interfaces::action::ExecuteRegion_GetResult_Response;
  using Event = r2_interfaces::action::ExecuteRegion_GetResult_Event;
};

}  // namespace action

}  // namespace r2_interfaces


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "r2_interfaces/action/detail/execute_region__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__r2_interfaces__action__ExecuteRegion_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__r2_interfaces__action__ExecuteRegion_FeedbackMessage __declspec(deprecated)
#endif

namespace r2_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ExecuteRegion_FeedbackMessage_
{
  using Type = ExecuteRegion_FeedbackMessage_<ContainerAllocator>;

  explicit ExecuteRegion_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit ExecuteRegion_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    r2_interfaces::action::ExecuteRegion_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const r2_interfaces::action::ExecuteRegion_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    r2_interfaces::action::ExecuteRegion_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const r2_interfaces::action::ExecuteRegion_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<r2_interfaces::action::ExecuteRegion_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<r2_interfaces::action::ExecuteRegion_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      r2_interfaces::action::ExecuteRegion_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<r2_interfaces::action::ExecuteRegion_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      r2_interfaces::action::ExecuteRegion_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<r2_interfaces::action::ExecuteRegion_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<r2_interfaces::action::ExecuteRegion_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<r2_interfaces::action::ExecuteRegion_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__r2_interfaces__action__ExecuteRegion_FeedbackMessage
    std::shared_ptr<r2_interfaces::action::ExecuteRegion_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__r2_interfaces__action__ExecuteRegion_FeedbackMessage
    std::shared_ptr<r2_interfaces::action::ExecuteRegion_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ExecuteRegion_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const ExecuteRegion_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ExecuteRegion_FeedbackMessage_

// alias to use template instance with default allocator
using ExecuteRegion_FeedbackMessage =
  r2_interfaces::action::ExecuteRegion_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace r2_interfaces

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace r2_interfaces
{

namespace action
{

struct ExecuteRegion
{
  /// The goal message defined in the action definition.
  using Goal = r2_interfaces::action::ExecuteRegion_Goal;
  /// The result message defined in the action definition.
  using Result = r2_interfaces::action::ExecuteRegion_Result;
  /// The feedback message defined in the action definition.
  using Feedback = r2_interfaces::action::ExecuteRegion_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = r2_interfaces::action::ExecuteRegion_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = r2_interfaces::action::ExecuteRegion_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = r2_interfaces::action::ExecuteRegion_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct ExecuteRegion ExecuteRegion;

}  // namespace action

}  // namespace r2_interfaces

#endif  // R2_INTERFACES__ACTION__DETAIL__EXECUTE_REGION__STRUCT_HPP_
