// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from r2_interfaces:action/ExecuteRegion.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "r2_interfaces/action/execute_region.hpp"


#ifndef R2_INTERFACES__ACTION__DETAIL__EXECUTE_REGION__BUILDER_HPP_
#define R2_INTERFACES__ACTION__DETAIL__EXECUTE_REGION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "r2_interfaces/action/detail/execute_region__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace r2_interfaces
{

namespace action
{

namespace builder
{

class Init_ExecuteRegion_Goal_region_name
{
public:
  Init_ExecuteRegion_Goal_region_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::r2_interfaces::action::ExecuteRegion_Goal region_name(::r2_interfaces::action::ExecuteRegion_Goal::_region_name_type arg)
  {
    msg_.region_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::r2_interfaces::action::ExecuteRegion_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::r2_interfaces::action::ExecuteRegion_Goal>()
{
  return r2_interfaces::action::builder::Init_ExecuteRegion_Goal_region_name();
}

}  // namespace r2_interfaces


namespace r2_interfaces
{

namespace action
{

namespace builder
{

class Init_ExecuteRegion_Result_kfs_boxes_collected
{
public:
  explicit Init_ExecuteRegion_Result_kfs_boxes_collected(::r2_interfaces::action::ExecuteRegion_Result & msg)
  : msg_(msg)
  {}
  ::r2_interfaces::action::ExecuteRegion_Result kfs_boxes_collected(::r2_interfaces::action::ExecuteRegion_Result::_kfs_boxes_collected_type arg)
  {
    msg_.kfs_boxes_collected = std::move(arg);
    return std::move(msg_);
  }

private:
  ::r2_interfaces::action::ExecuteRegion_Result msg_;
};

class Init_ExecuteRegion_Result_message
{
public:
  explicit Init_ExecuteRegion_Result_message(::r2_interfaces::action::ExecuteRegion_Result & msg)
  : msg_(msg)
  {}
  Init_ExecuteRegion_Result_kfs_boxes_collected message(::r2_interfaces::action::ExecuteRegion_Result::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_ExecuteRegion_Result_kfs_boxes_collected(msg_);
  }

private:
  ::r2_interfaces::action::ExecuteRegion_Result msg_;
};

class Init_ExecuteRegion_Result_success
{
public:
  Init_ExecuteRegion_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecuteRegion_Result_message success(::r2_interfaces::action::ExecuteRegion_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_ExecuteRegion_Result_message(msg_);
  }

private:
  ::r2_interfaces::action::ExecuteRegion_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::r2_interfaces::action::ExecuteRegion_Result>()
{
  return r2_interfaces::action::builder::Init_ExecuteRegion_Result_success();
}

}  // namespace r2_interfaces


namespace r2_interfaces
{

namespace action
{

namespace builder
{

class Init_ExecuteRegion_Feedback_progress_percent
{
public:
  explicit Init_ExecuteRegion_Feedback_progress_percent(::r2_interfaces::action::ExecuteRegion_Feedback & msg)
  : msg_(msg)
  {}
  ::r2_interfaces::action::ExecuteRegion_Feedback progress_percent(::r2_interfaces::action::ExecuteRegion_Feedback::_progress_percent_type arg)
  {
    msg_.progress_percent = std::move(arg);
    return std::move(msg_);
  }

private:
  ::r2_interfaces::action::ExecuteRegion_Feedback msg_;
};

class Init_ExecuteRegion_Feedback_total_steps
{
public:
  explicit Init_ExecuteRegion_Feedback_total_steps(::r2_interfaces::action::ExecuteRegion_Feedback & msg)
  : msg_(msg)
  {}
  Init_ExecuteRegion_Feedback_progress_percent total_steps(::r2_interfaces::action::ExecuteRegion_Feedback::_total_steps_type arg)
  {
    msg_.total_steps = std::move(arg);
    return Init_ExecuteRegion_Feedback_progress_percent(msg_);
  }

private:
  ::r2_interfaces::action::ExecuteRegion_Feedback msg_;
};

class Init_ExecuteRegion_Feedback_steps_completed
{
public:
  explicit Init_ExecuteRegion_Feedback_steps_completed(::r2_interfaces::action::ExecuteRegion_Feedback & msg)
  : msg_(msg)
  {}
  Init_ExecuteRegion_Feedback_total_steps steps_completed(::r2_interfaces::action::ExecuteRegion_Feedback::_steps_completed_type arg)
  {
    msg_.steps_completed = std::move(arg);
    return Init_ExecuteRegion_Feedback_total_steps(msg_);
  }

private:
  ::r2_interfaces::action::ExecuteRegion_Feedback msg_;
};

class Init_ExecuteRegion_Feedback_current_step
{
public:
  Init_ExecuteRegion_Feedback_current_step()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecuteRegion_Feedback_steps_completed current_step(::r2_interfaces::action::ExecuteRegion_Feedback::_current_step_type arg)
  {
    msg_.current_step = std::move(arg);
    return Init_ExecuteRegion_Feedback_steps_completed(msg_);
  }

private:
  ::r2_interfaces::action::ExecuteRegion_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::r2_interfaces::action::ExecuteRegion_Feedback>()
{
  return r2_interfaces::action::builder::Init_ExecuteRegion_Feedback_current_step();
}

}  // namespace r2_interfaces


namespace r2_interfaces
{

namespace action
{

namespace builder
{

class Init_ExecuteRegion_SendGoal_Request_goal
{
public:
  explicit Init_ExecuteRegion_SendGoal_Request_goal(::r2_interfaces::action::ExecuteRegion_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::r2_interfaces::action::ExecuteRegion_SendGoal_Request goal(::r2_interfaces::action::ExecuteRegion_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::r2_interfaces::action::ExecuteRegion_SendGoal_Request msg_;
};

class Init_ExecuteRegion_SendGoal_Request_goal_id
{
public:
  Init_ExecuteRegion_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecuteRegion_SendGoal_Request_goal goal_id(::r2_interfaces::action::ExecuteRegion_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_ExecuteRegion_SendGoal_Request_goal(msg_);
  }

private:
  ::r2_interfaces::action::ExecuteRegion_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::r2_interfaces::action::ExecuteRegion_SendGoal_Request>()
{
  return r2_interfaces::action::builder::Init_ExecuteRegion_SendGoal_Request_goal_id();
}

}  // namespace r2_interfaces


namespace r2_interfaces
{

namespace action
{

namespace builder
{

class Init_ExecuteRegion_SendGoal_Response_stamp
{
public:
  explicit Init_ExecuteRegion_SendGoal_Response_stamp(::r2_interfaces::action::ExecuteRegion_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::r2_interfaces::action::ExecuteRegion_SendGoal_Response stamp(::r2_interfaces::action::ExecuteRegion_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::r2_interfaces::action::ExecuteRegion_SendGoal_Response msg_;
};

class Init_ExecuteRegion_SendGoal_Response_accepted
{
public:
  Init_ExecuteRegion_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecuteRegion_SendGoal_Response_stamp accepted(::r2_interfaces::action::ExecuteRegion_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_ExecuteRegion_SendGoal_Response_stamp(msg_);
  }

private:
  ::r2_interfaces::action::ExecuteRegion_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::r2_interfaces::action::ExecuteRegion_SendGoal_Response>()
{
  return r2_interfaces::action::builder::Init_ExecuteRegion_SendGoal_Response_accepted();
}

}  // namespace r2_interfaces


namespace r2_interfaces
{

namespace action
{

namespace builder
{

class Init_ExecuteRegion_SendGoal_Event_response
{
public:
  explicit Init_ExecuteRegion_SendGoal_Event_response(::r2_interfaces::action::ExecuteRegion_SendGoal_Event & msg)
  : msg_(msg)
  {}
  ::r2_interfaces::action::ExecuteRegion_SendGoal_Event response(::r2_interfaces::action::ExecuteRegion_SendGoal_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::r2_interfaces::action::ExecuteRegion_SendGoal_Event msg_;
};

class Init_ExecuteRegion_SendGoal_Event_request
{
public:
  explicit Init_ExecuteRegion_SendGoal_Event_request(::r2_interfaces::action::ExecuteRegion_SendGoal_Event & msg)
  : msg_(msg)
  {}
  Init_ExecuteRegion_SendGoal_Event_response request(::r2_interfaces::action::ExecuteRegion_SendGoal_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_ExecuteRegion_SendGoal_Event_response(msg_);
  }

private:
  ::r2_interfaces::action::ExecuteRegion_SendGoal_Event msg_;
};

class Init_ExecuteRegion_SendGoal_Event_info
{
public:
  Init_ExecuteRegion_SendGoal_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecuteRegion_SendGoal_Event_request info(::r2_interfaces::action::ExecuteRegion_SendGoal_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_ExecuteRegion_SendGoal_Event_request(msg_);
  }

private:
  ::r2_interfaces::action::ExecuteRegion_SendGoal_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::r2_interfaces::action::ExecuteRegion_SendGoal_Event>()
{
  return r2_interfaces::action::builder::Init_ExecuteRegion_SendGoal_Event_info();
}

}  // namespace r2_interfaces


namespace r2_interfaces
{

namespace action
{

namespace builder
{

class Init_ExecuteRegion_GetResult_Request_goal_id
{
public:
  Init_ExecuteRegion_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::r2_interfaces::action::ExecuteRegion_GetResult_Request goal_id(::r2_interfaces::action::ExecuteRegion_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::r2_interfaces::action::ExecuteRegion_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::r2_interfaces::action::ExecuteRegion_GetResult_Request>()
{
  return r2_interfaces::action::builder::Init_ExecuteRegion_GetResult_Request_goal_id();
}

}  // namespace r2_interfaces


namespace r2_interfaces
{

namespace action
{

namespace builder
{

class Init_ExecuteRegion_GetResult_Response_result
{
public:
  explicit Init_ExecuteRegion_GetResult_Response_result(::r2_interfaces::action::ExecuteRegion_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::r2_interfaces::action::ExecuteRegion_GetResult_Response result(::r2_interfaces::action::ExecuteRegion_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::r2_interfaces::action::ExecuteRegion_GetResult_Response msg_;
};

class Init_ExecuteRegion_GetResult_Response_status
{
public:
  Init_ExecuteRegion_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecuteRegion_GetResult_Response_result status(::r2_interfaces::action::ExecuteRegion_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_ExecuteRegion_GetResult_Response_result(msg_);
  }

private:
  ::r2_interfaces::action::ExecuteRegion_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::r2_interfaces::action::ExecuteRegion_GetResult_Response>()
{
  return r2_interfaces::action::builder::Init_ExecuteRegion_GetResult_Response_status();
}

}  // namespace r2_interfaces


namespace r2_interfaces
{

namespace action
{

namespace builder
{

class Init_ExecuteRegion_GetResult_Event_response
{
public:
  explicit Init_ExecuteRegion_GetResult_Event_response(::r2_interfaces::action::ExecuteRegion_GetResult_Event & msg)
  : msg_(msg)
  {}
  ::r2_interfaces::action::ExecuteRegion_GetResult_Event response(::r2_interfaces::action::ExecuteRegion_GetResult_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::r2_interfaces::action::ExecuteRegion_GetResult_Event msg_;
};

class Init_ExecuteRegion_GetResult_Event_request
{
public:
  explicit Init_ExecuteRegion_GetResult_Event_request(::r2_interfaces::action::ExecuteRegion_GetResult_Event & msg)
  : msg_(msg)
  {}
  Init_ExecuteRegion_GetResult_Event_response request(::r2_interfaces::action::ExecuteRegion_GetResult_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_ExecuteRegion_GetResult_Event_response(msg_);
  }

private:
  ::r2_interfaces::action::ExecuteRegion_GetResult_Event msg_;
};

class Init_ExecuteRegion_GetResult_Event_info
{
public:
  Init_ExecuteRegion_GetResult_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecuteRegion_GetResult_Event_request info(::r2_interfaces::action::ExecuteRegion_GetResult_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_ExecuteRegion_GetResult_Event_request(msg_);
  }

private:
  ::r2_interfaces::action::ExecuteRegion_GetResult_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::r2_interfaces::action::ExecuteRegion_GetResult_Event>()
{
  return r2_interfaces::action::builder::Init_ExecuteRegion_GetResult_Event_info();
}

}  // namespace r2_interfaces


namespace r2_interfaces
{

namespace action
{

namespace builder
{

class Init_ExecuteRegion_FeedbackMessage_feedback
{
public:
  explicit Init_ExecuteRegion_FeedbackMessage_feedback(::r2_interfaces::action::ExecuteRegion_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::r2_interfaces::action::ExecuteRegion_FeedbackMessage feedback(::r2_interfaces::action::ExecuteRegion_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::r2_interfaces::action::ExecuteRegion_FeedbackMessage msg_;
};

class Init_ExecuteRegion_FeedbackMessage_goal_id
{
public:
  Init_ExecuteRegion_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecuteRegion_FeedbackMessage_feedback goal_id(::r2_interfaces::action::ExecuteRegion_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_ExecuteRegion_FeedbackMessage_feedback(msg_);
  }

private:
  ::r2_interfaces::action::ExecuteRegion_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::r2_interfaces::action::ExecuteRegion_FeedbackMessage>()
{
  return r2_interfaces::action::builder::Init_ExecuteRegion_FeedbackMessage_goal_id();
}

}  // namespace r2_interfaces

#endif  // R2_INTERFACES__ACTION__DETAIL__EXECUTE_REGION__BUILDER_HPP_
