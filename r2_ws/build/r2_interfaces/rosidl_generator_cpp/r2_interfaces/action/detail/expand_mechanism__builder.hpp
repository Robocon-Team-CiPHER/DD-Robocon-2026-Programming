// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from r2_interfaces:action/ExpandMechanism.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "r2_interfaces/action/expand_mechanism.hpp"


#ifndef R2_INTERFACES__ACTION__DETAIL__EXPAND_MECHANISM__BUILDER_HPP_
#define R2_INTERFACES__ACTION__DETAIL__EXPAND_MECHANISM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "r2_interfaces/action/detail/expand_mechanism__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace r2_interfaces
{

namespace action
{

namespace builder
{

class Init_ExpandMechanism_Goal_speed_percent
{
public:
  explicit Init_ExpandMechanism_Goal_speed_percent(::r2_interfaces::action::ExpandMechanism_Goal & msg)
  : msg_(msg)
  {}
  ::r2_interfaces::action::ExpandMechanism_Goal speed_percent(::r2_interfaces::action::ExpandMechanism_Goal::_speed_percent_type arg)
  {
    msg_.speed_percent = std::move(arg);
    return std::move(msg_);
  }

private:
  ::r2_interfaces::action::ExpandMechanism_Goal msg_;
};

class Init_ExpandMechanism_Goal_target_position_mm
{
public:
  explicit Init_ExpandMechanism_Goal_target_position_mm(::r2_interfaces::action::ExpandMechanism_Goal & msg)
  : msg_(msg)
  {}
  Init_ExpandMechanism_Goal_speed_percent target_position_mm(::r2_interfaces::action::ExpandMechanism_Goal::_target_position_mm_type arg)
  {
    msg_.target_position_mm = std::move(arg);
    return Init_ExpandMechanism_Goal_speed_percent(msg_);
  }

private:
  ::r2_interfaces::action::ExpandMechanism_Goal msg_;
};

class Init_ExpandMechanism_Goal_direction
{
public:
  explicit Init_ExpandMechanism_Goal_direction(::r2_interfaces::action::ExpandMechanism_Goal & msg)
  : msg_(msg)
  {}
  Init_ExpandMechanism_Goal_target_position_mm direction(::r2_interfaces::action::ExpandMechanism_Goal::_direction_type arg)
  {
    msg_.direction = std::move(arg);
    return Init_ExpandMechanism_Goal_target_position_mm(msg_);
  }

private:
  ::r2_interfaces::action::ExpandMechanism_Goal msg_;
};

class Init_ExpandMechanism_Goal_mechanism_id
{
public:
  Init_ExpandMechanism_Goal_mechanism_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExpandMechanism_Goal_direction mechanism_id(::r2_interfaces::action::ExpandMechanism_Goal::_mechanism_id_type arg)
  {
    msg_.mechanism_id = std::move(arg);
    return Init_ExpandMechanism_Goal_direction(msg_);
  }

private:
  ::r2_interfaces::action::ExpandMechanism_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::r2_interfaces::action::ExpandMechanism_Goal>()
{
  return r2_interfaces::action::builder::Init_ExpandMechanism_Goal_mechanism_id();
}

}  // namespace r2_interfaces


namespace r2_interfaces
{

namespace action
{

namespace builder
{

class Init_ExpandMechanism_Result_message
{
public:
  explicit Init_ExpandMechanism_Result_message(::r2_interfaces::action::ExpandMechanism_Result & msg)
  : msg_(msg)
  {}
  ::r2_interfaces::action::ExpandMechanism_Result message(::r2_interfaces::action::ExpandMechanism_Result::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::r2_interfaces::action::ExpandMechanism_Result msg_;
};

class Init_ExpandMechanism_Result_actual_position_mm
{
public:
  explicit Init_ExpandMechanism_Result_actual_position_mm(::r2_interfaces::action::ExpandMechanism_Result & msg)
  : msg_(msg)
  {}
  Init_ExpandMechanism_Result_message actual_position_mm(::r2_interfaces::action::ExpandMechanism_Result::_actual_position_mm_type arg)
  {
    msg_.actual_position_mm = std::move(arg);
    return Init_ExpandMechanism_Result_message(msg_);
  }

private:
  ::r2_interfaces::action::ExpandMechanism_Result msg_;
};

class Init_ExpandMechanism_Result_success
{
public:
  Init_ExpandMechanism_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExpandMechanism_Result_actual_position_mm success(::r2_interfaces::action::ExpandMechanism_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_ExpandMechanism_Result_actual_position_mm(msg_);
  }

private:
  ::r2_interfaces::action::ExpandMechanism_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::r2_interfaces::action::ExpandMechanism_Result>()
{
  return r2_interfaces::action::builder::Init_ExpandMechanism_Result_success();
}

}  // namespace r2_interfaces


namespace r2_interfaces
{

namespace action
{

namespace builder
{

class Init_ExpandMechanism_Feedback_limit_max_active
{
public:
  explicit Init_ExpandMechanism_Feedback_limit_max_active(::r2_interfaces::action::ExpandMechanism_Feedback & msg)
  : msg_(msg)
  {}
  ::r2_interfaces::action::ExpandMechanism_Feedback limit_max_active(::r2_interfaces::action::ExpandMechanism_Feedback::_limit_max_active_type arg)
  {
    msg_.limit_max_active = std::move(arg);
    return std::move(msg_);
  }

private:
  ::r2_interfaces::action::ExpandMechanism_Feedback msg_;
};

class Init_ExpandMechanism_Feedback_limit_min_active
{
public:
  explicit Init_ExpandMechanism_Feedback_limit_min_active(::r2_interfaces::action::ExpandMechanism_Feedback & msg)
  : msg_(msg)
  {}
  Init_ExpandMechanism_Feedback_limit_max_active limit_min_active(::r2_interfaces::action::ExpandMechanism_Feedback::_limit_min_active_type arg)
  {
    msg_.limit_min_active = std::move(arg);
    return Init_ExpandMechanism_Feedback_limit_max_active(msg_);
  }

private:
  ::r2_interfaces::action::ExpandMechanism_Feedback msg_;
};

class Init_ExpandMechanism_Feedback_current_position_mm
{
public:
  Init_ExpandMechanism_Feedback_current_position_mm()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExpandMechanism_Feedback_limit_min_active current_position_mm(::r2_interfaces::action::ExpandMechanism_Feedback::_current_position_mm_type arg)
  {
    msg_.current_position_mm = std::move(arg);
    return Init_ExpandMechanism_Feedback_limit_min_active(msg_);
  }

private:
  ::r2_interfaces::action::ExpandMechanism_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::r2_interfaces::action::ExpandMechanism_Feedback>()
{
  return r2_interfaces::action::builder::Init_ExpandMechanism_Feedback_current_position_mm();
}

}  // namespace r2_interfaces


namespace r2_interfaces
{

namespace action
{

namespace builder
{

class Init_ExpandMechanism_SendGoal_Request_goal
{
public:
  explicit Init_ExpandMechanism_SendGoal_Request_goal(::r2_interfaces::action::ExpandMechanism_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::r2_interfaces::action::ExpandMechanism_SendGoal_Request goal(::r2_interfaces::action::ExpandMechanism_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::r2_interfaces::action::ExpandMechanism_SendGoal_Request msg_;
};

class Init_ExpandMechanism_SendGoal_Request_goal_id
{
public:
  Init_ExpandMechanism_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExpandMechanism_SendGoal_Request_goal goal_id(::r2_interfaces::action::ExpandMechanism_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_ExpandMechanism_SendGoal_Request_goal(msg_);
  }

private:
  ::r2_interfaces::action::ExpandMechanism_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::r2_interfaces::action::ExpandMechanism_SendGoal_Request>()
{
  return r2_interfaces::action::builder::Init_ExpandMechanism_SendGoal_Request_goal_id();
}

}  // namespace r2_interfaces


namespace r2_interfaces
{

namespace action
{

namespace builder
{

class Init_ExpandMechanism_SendGoal_Response_stamp
{
public:
  explicit Init_ExpandMechanism_SendGoal_Response_stamp(::r2_interfaces::action::ExpandMechanism_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::r2_interfaces::action::ExpandMechanism_SendGoal_Response stamp(::r2_interfaces::action::ExpandMechanism_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::r2_interfaces::action::ExpandMechanism_SendGoal_Response msg_;
};

class Init_ExpandMechanism_SendGoal_Response_accepted
{
public:
  Init_ExpandMechanism_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExpandMechanism_SendGoal_Response_stamp accepted(::r2_interfaces::action::ExpandMechanism_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_ExpandMechanism_SendGoal_Response_stamp(msg_);
  }

private:
  ::r2_interfaces::action::ExpandMechanism_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::r2_interfaces::action::ExpandMechanism_SendGoal_Response>()
{
  return r2_interfaces::action::builder::Init_ExpandMechanism_SendGoal_Response_accepted();
}

}  // namespace r2_interfaces


namespace r2_interfaces
{

namespace action
{

namespace builder
{

class Init_ExpandMechanism_SendGoal_Event_response
{
public:
  explicit Init_ExpandMechanism_SendGoal_Event_response(::r2_interfaces::action::ExpandMechanism_SendGoal_Event & msg)
  : msg_(msg)
  {}
  ::r2_interfaces::action::ExpandMechanism_SendGoal_Event response(::r2_interfaces::action::ExpandMechanism_SendGoal_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::r2_interfaces::action::ExpandMechanism_SendGoal_Event msg_;
};

class Init_ExpandMechanism_SendGoal_Event_request
{
public:
  explicit Init_ExpandMechanism_SendGoal_Event_request(::r2_interfaces::action::ExpandMechanism_SendGoal_Event & msg)
  : msg_(msg)
  {}
  Init_ExpandMechanism_SendGoal_Event_response request(::r2_interfaces::action::ExpandMechanism_SendGoal_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_ExpandMechanism_SendGoal_Event_response(msg_);
  }

private:
  ::r2_interfaces::action::ExpandMechanism_SendGoal_Event msg_;
};

class Init_ExpandMechanism_SendGoal_Event_info
{
public:
  Init_ExpandMechanism_SendGoal_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExpandMechanism_SendGoal_Event_request info(::r2_interfaces::action::ExpandMechanism_SendGoal_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_ExpandMechanism_SendGoal_Event_request(msg_);
  }

private:
  ::r2_interfaces::action::ExpandMechanism_SendGoal_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::r2_interfaces::action::ExpandMechanism_SendGoal_Event>()
{
  return r2_interfaces::action::builder::Init_ExpandMechanism_SendGoal_Event_info();
}

}  // namespace r2_interfaces


namespace r2_interfaces
{

namespace action
{

namespace builder
{

class Init_ExpandMechanism_GetResult_Request_goal_id
{
public:
  Init_ExpandMechanism_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::r2_interfaces::action::ExpandMechanism_GetResult_Request goal_id(::r2_interfaces::action::ExpandMechanism_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::r2_interfaces::action::ExpandMechanism_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::r2_interfaces::action::ExpandMechanism_GetResult_Request>()
{
  return r2_interfaces::action::builder::Init_ExpandMechanism_GetResult_Request_goal_id();
}

}  // namespace r2_interfaces


namespace r2_interfaces
{

namespace action
{

namespace builder
{

class Init_ExpandMechanism_GetResult_Response_result
{
public:
  explicit Init_ExpandMechanism_GetResult_Response_result(::r2_interfaces::action::ExpandMechanism_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::r2_interfaces::action::ExpandMechanism_GetResult_Response result(::r2_interfaces::action::ExpandMechanism_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::r2_interfaces::action::ExpandMechanism_GetResult_Response msg_;
};

class Init_ExpandMechanism_GetResult_Response_status
{
public:
  Init_ExpandMechanism_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExpandMechanism_GetResult_Response_result status(::r2_interfaces::action::ExpandMechanism_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_ExpandMechanism_GetResult_Response_result(msg_);
  }

private:
  ::r2_interfaces::action::ExpandMechanism_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::r2_interfaces::action::ExpandMechanism_GetResult_Response>()
{
  return r2_interfaces::action::builder::Init_ExpandMechanism_GetResult_Response_status();
}

}  // namespace r2_interfaces


namespace r2_interfaces
{

namespace action
{

namespace builder
{

class Init_ExpandMechanism_GetResult_Event_response
{
public:
  explicit Init_ExpandMechanism_GetResult_Event_response(::r2_interfaces::action::ExpandMechanism_GetResult_Event & msg)
  : msg_(msg)
  {}
  ::r2_interfaces::action::ExpandMechanism_GetResult_Event response(::r2_interfaces::action::ExpandMechanism_GetResult_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::r2_interfaces::action::ExpandMechanism_GetResult_Event msg_;
};

class Init_ExpandMechanism_GetResult_Event_request
{
public:
  explicit Init_ExpandMechanism_GetResult_Event_request(::r2_interfaces::action::ExpandMechanism_GetResult_Event & msg)
  : msg_(msg)
  {}
  Init_ExpandMechanism_GetResult_Event_response request(::r2_interfaces::action::ExpandMechanism_GetResult_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_ExpandMechanism_GetResult_Event_response(msg_);
  }

private:
  ::r2_interfaces::action::ExpandMechanism_GetResult_Event msg_;
};

class Init_ExpandMechanism_GetResult_Event_info
{
public:
  Init_ExpandMechanism_GetResult_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExpandMechanism_GetResult_Event_request info(::r2_interfaces::action::ExpandMechanism_GetResult_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_ExpandMechanism_GetResult_Event_request(msg_);
  }

private:
  ::r2_interfaces::action::ExpandMechanism_GetResult_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::r2_interfaces::action::ExpandMechanism_GetResult_Event>()
{
  return r2_interfaces::action::builder::Init_ExpandMechanism_GetResult_Event_info();
}

}  // namespace r2_interfaces


namespace r2_interfaces
{

namespace action
{

namespace builder
{

class Init_ExpandMechanism_FeedbackMessage_feedback
{
public:
  explicit Init_ExpandMechanism_FeedbackMessage_feedback(::r2_interfaces::action::ExpandMechanism_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::r2_interfaces::action::ExpandMechanism_FeedbackMessage feedback(::r2_interfaces::action::ExpandMechanism_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::r2_interfaces::action::ExpandMechanism_FeedbackMessage msg_;
};

class Init_ExpandMechanism_FeedbackMessage_goal_id
{
public:
  Init_ExpandMechanism_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExpandMechanism_FeedbackMessage_feedback goal_id(::r2_interfaces::action::ExpandMechanism_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_ExpandMechanism_FeedbackMessage_feedback(msg_);
  }

private:
  ::r2_interfaces::action::ExpandMechanism_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::r2_interfaces::action::ExpandMechanism_FeedbackMessage>()
{
  return r2_interfaces::action::builder::Init_ExpandMechanism_FeedbackMessage_goal_id();
}

}  // namespace r2_interfaces

#endif  // R2_INTERFACES__ACTION__DETAIL__EXPAND_MECHANISM__BUILDER_HPP_
