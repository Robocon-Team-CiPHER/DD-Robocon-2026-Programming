// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from r2_interfaces:action/MoveToPosition.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "r2_interfaces/action/move_to_position.hpp"


#ifndef R2_INTERFACES__ACTION__DETAIL__MOVE_TO_POSITION__BUILDER_HPP_
#define R2_INTERFACES__ACTION__DETAIL__MOVE_TO_POSITION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "r2_interfaces/action/detail/move_to_position__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace r2_interfaces
{

namespace action
{

namespace builder
{

class Init_MoveToPosition_Goal_tolerance_m
{
public:
  explicit Init_MoveToPosition_Goal_tolerance_m(::r2_interfaces::action::MoveToPosition_Goal & msg)
  : msg_(msg)
  {}
  ::r2_interfaces::action::MoveToPosition_Goal tolerance_m(::r2_interfaces::action::MoveToPosition_Goal::_tolerance_m_type arg)
  {
    msg_.tolerance_m = std::move(arg);
    return std::move(msg_);
  }

private:
  ::r2_interfaces::action::MoveToPosition_Goal msg_;
};

class Init_MoveToPosition_Goal_theta_rad
{
public:
  explicit Init_MoveToPosition_Goal_theta_rad(::r2_interfaces::action::MoveToPosition_Goal & msg)
  : msg_(msg)
  {}
  Init_MoveToPosition_Goal_tolerance_m theta_rad(::r2_interfaces::action::MoveToPosition_Goal::_theta_rad_type arg)
  {
    msg_.theta_rad = std::move(arg);
    return Init_MoveToPosition_Goal_tolerance_m(msg_);
  }

private:
  ::r2_interfaces::action::MoveToPosition_Goal msg_;
};

class Init_MoveToPosition_Goal_y_m
{
public:
  explicit Init_MoveToPosition_Goal_y_m(::r2_interfaces::action::MoveToPosition_Goal & msg)
  : msg_(msg)
  {}
  Init_MoveToPosition_Goal_theta_rad y_m(::r2_interfaces::action::MoveToPosition_Goal::_y_m_type arg)
  {
    msg_.y_m = std::move(arg);
    return Init_MoveToPosition_Goal_theta_rad(msg_);
  }

private:
  ::r2_interfaces::action::MoveToPosition_Goal msg_;
};

class Init_MoveToPosition_Goal_x_m
{
public:
  Init_MoveToPosition_Goal_x_m()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveToPosition_Goal_y_m x_m(::r2_interfaces::action::MoveToPosition_Goal::_x_m_type arg)
  {
    msg_.x_m = std::move(arg);
    return Init_MoveToPosition_Goal_y_m(msg_);
  }

private:
  ::r2_interfaces::action::MoveToPosition_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::r2_interfaces::action::MoveToPosition_Goal>()
{
  return r2_interfaces::action::builder::Init_MoveToPosition_Goal_x_m();
}

}  // namespace r2_interfaces


namespace r2_interfaces
{

namespace action
{

namespace builder
{

class Init_MoveToPosition_Result_message
{
public:
  explicit Init_MoveToPosition_Result_message(::r2_interfaces::action::MoveToPosition_Result & msg)
  : msg_(msg)
  {}
  ::r2_interfaces::action::MoveToPosition_Result message(::r2_interfaces::action::MoveToPosition_Result::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::r2_interfaces::action::MoveToPosition_Result msg_;
};

class Init_MoveToPosition_Result_final_theta_rad
{
public:
  explicit Init_MoveToPosition_Result_final_theta_rad(::r2_interfaces::action::MoveToPosition_Result & msg)
  : msg_(msg)
  {}
  Init_MoveToPosition_Result_message final_theta_rad(::r2_interfaces::action::MoveToPosition_Result::_final_theta_rad_type arg)
  {
    msg_.final_theta_rad = std::move(arg);
    return Init_MoveToPosition_Result_message(msg_);
  }

private:
  ::r2_interfaces::action::MoveToPosition_Result msg_;
};

class Init_MoveToPosition_Result_final_y_m
{
public:
  explicit Init_MoveToPosition_Result_final_y_m(::r2_interfaces::action::MoveToPosition_Result & msg)
  : msg_(msg)
  {}
  Init_MoveToPosition_Result_final_theta_rad final_y_m(::r2_interfaces::action::MoveToPosition_Result::_final_y_m_type arg)
  {
    msg_.final_y_m = std::move(arg);
    return Init_MoveToPosition_Result_final_theta_rad(msg_);
  }

private:
  ::r2_interfaces::action::MoveToPosition_Result msg_;
};

class Init_MoveToPosition_Result_final_x_m
{
public:
  explicit Init_MoveToPosition_Result_final_x_m(::r2_interfaces::action::MoveToPosition_Result & msg)
  : msg_(msg)
  {}
  Init_MoveToPosition_Result_final_y_m final_x_m(::r2_interfaces::action::MoveToPosition_Result::_final_x_m_type arg)
  {
    msg_.final_x_m = std::move(arg);
    return Init_MoveToPosition_Result_final_y_m(msg_);
  }

private:
  ::r2_interfaces::action::MoveToPosition_Result msg_;
};

class Init_MoveToPosition_Result_success
{
public:
  Init_MoveToPosition_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveToPosition_Result_final_x_m success(::r2_interfaces::action::MoveToPosition_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_MoveToPosition_Result_final_x_m(msg_);
  }

private:
  ::r2_interfaces::action::MoveToPosition_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::r2_interfaces::action::MoveToPosition_Result>()
{
  return r2_interfaces::action::builder::Init_MoveToPosition_Result_success();
}

}  // namespace r2_interfaces


namespace r2_interfaces
{

namespace action
{

namespace builder
{

class Init_MoveToPosition_Feedback_current_theta_rad
{
public:
  explicit Init_MoveToPosition_Feedback_current_theta_rad(::r2_interfaces::action::MoveToPosition_Feedback & msg)
  : msg_(msg)
  {}
  ::r2_interfaces::action::MoveToPosition_Feedback current_theta_rad(::r2_interfaces::action::MoveToPosition_Feedback::_current_theta_rad_type arg)
  {
    msg_.current_theta_rad = std::move(arg);
    return std::move(msg_);
  }

private:
  ::r2_interfaces::action::MoveToPosition_Feedback msg_;
};

class Init_MoveToPosition_Feedback_current_y_m
{
public:
  explicit Init_MoveToPosition_Feedback_current_y_m(::r2_interfaces::action::MoveToPosition_Feedback & msg)
  : msg_(msg)
  {}
  Init_MoveToPosition_Feedback_current_theta_rad current_y_m(::r2_interfaces::action::MoveToPosition_Feedback::_current_y_m_type arg)
  {
    msg_.current_y_m = std::move(arg);
    return Init_MoveToPosition_Feedback_current_theta_rad(msg_);
  }

private:
  ::r2_interfaces::action::MoveToPosition_Feedback msg_;
};

class Init_MoveToPosition_Feedback_current_x_m
{
public:
  explicit Init_MoveToPosition_Feedback_current_x_m(::r2_interfaces::action::MoveToPosition_Feedback & msg)
  : msg_(msg)
  {}
  Init_MoveToPosition_Feedback_current_y_m current_x_m(::r2_interfaces::action::MoveToPosition_Feedback::_current_x_m_type arg)
  {
    msg_.current_x_m = std::move(arg);
    return Init_MoveToPosition_Feedback_current_y_m(msg_);
  }

private:
  ::r2_interfaces::action::MoveToPosition_Feedback msg_;
};

class Init_MoveToPosition_Feedback_distance_remaining_m
{
public:
  Init_MoveToPosition_Feedback_distance_remaining_m()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveToPosition_Feedback_current_x_m distance_remaining_m(::r2_interfaces::action::MoveToPosition_Feedback::_distance_remaining_m_type arg)
  {
    msg_.distance_remaining_m = std::move(arg);
    return Init_MoveToPosition_Feedback_current_x_m(msg_);
  }

private:
  ::r2_interfaces::action::MoveToPosition_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::r2_interfaces::action::MoveToPosition_Feedback>()
{
  return r2_interfaces::action::builder::Init_MoveToPosition_Feedback_distance_remaining_m();
}

}  // namespace r2_interfaces


namespace r2_interfaces
{

namespace action
{

namespace builder
{

class Init_MoveToPosition_SendGoal_Request_goal
{
public:
  explicit Init_MoveToPosition_SendGoal_Request_goal(::r2_interfaces::action::MoveToPosition_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::r2_interfaces::action::MoveToPosition_SendGoal_Request goal(::r2_interfaces::action::MoveToPosition_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::r2_interfaces::action::MoveToPosition_SendGoal_Request msg_;
};

class Init_MoveToPosition_SendGoal_Request_goal_id
{
public:
  Init_MoveToPosition_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveToPosition_SendGoal_Request_goal goal_id(::r2_interfaces::action::MoveToPosition_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_MoveToPosition_SendGoal_Request_goal(msg_);
  }

private:
  ::r2_interfaces::action::MoveToPosition_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::r2_interfaces::action::MoveToPosition_SendGoal_Request>()
{
  return r2_interfaces::action::builder::Init_MoveToPosition_SendGoal_Request_goal_id();
}

}  // namespace r2_interfaces


namespace r2_interfaces
{

namespace action
{

namespace builder
{

class Init_MoveToPosition_SendGoal_Response_stamp
{
public:
  explicit Init_MoveToPosition_SendGoal_Response_stamp(::r2_interfaces::action::MoveToPosition_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::r2_interfaces::action::MoveToPosition_SendGoal_Response stamp(::r2_interfaces::action::MoveToPosition_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::r2_interfaces::action::MoveToPosition_SendGoal_Response msg_;
};

class Init_MoveToPosition_SendGoal_Response_accepted
{
public:
  Init_MoveToPosition_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveToPosition_SendGoal_Response_stamp accepted(::r2_interfaces::action::MoveToPosition_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_MoveToPosition_SendGoal_Response_stamp(msg_);
  }

private:
  ::r2_interfaces::action::MoveToPosition_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::r2_interfaces::action::MoveToPosition_SendGoal_Response>()
{
  return r2_interfaces::action::builder::Init_MoveToPosition_SendGoal_Response_accepted();
}

}  // namespace r2_interfaces


namespace r2_interfaces
{

namespace action
{

namespace builder
{

class Init_MoveToPosition_SendGoal_Event_response
{
public:
  explicit Init_MoveToPosition_SendGoal_Event_response(::r2_interfaces::action::MoveToPosition_SendGoal_Event & msg)
  : msg_(msg)
  {}
  ::r2_interfaces::action::MoveToPosition_SendGoal_Event response(::r2_interfaces::action::MoveToPosition_SendGoal_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::r2_interfaces::action::MoveToPosition_SendGoal_Event msg_;
};

class Init_MoveToPosition_SendGoal_Event_request
{
public:
  explicit Init_MoveToPosition_SendGoal_Event_request(::r2_interfaces::action::MoveToPosition_SendGoal_Event & msg)
  : msg_(msg)
  {}
  Init_MoveToPosition_SendGoal_Event_response request(::r2_interfaces::action::MoveToPosition_SendGoal_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_MoveToPosition_SendGoal_Event_response(msg_);
  }

private:
  ::r2_interfaces::action::MoveToPosition_SendGoal_Event msg_;
};

class Init_MoveToPosition_SendGoal_Event_info
{
public:
  Init_MoveToPosition_SendGoal_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveToPosition_SendGoal_Event_request info(::r2_interfaces::action::MoveToPosition_SendGoal_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_MoveToPosition_SendGoal_Event_request(msg_);
  }

private:
  ::r2_interfaces::action::MoveToPosition_SendGoal_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::r2_interfaces::action::MoveToPosition_SendGoal_Event>()
{
  return r2_interfaces::action::builder::Init_MoveToPosition_SendGoal_Event_info();
}

}  // namespace r2_interfaces


namespace r2_interfaces
{

namespace action
{

namespace builder
{

class Init_MoveToPosition_GetResult_Request_goal_id
{
public:
  Init_MoveToPosition_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::r2_interfaces::action::MoveToPosition_GetResult_Request goal_id(::r2_interfaces::action::MoveToPosition_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::r2_interfaces::action::MoveToPosition_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::r2_interfaces::action::MoveToPosition_GetResult_Request>()
{
  return r2_interfaces::action::builder::Init_MoveToPosition_GetResult_Request_goal_id();
}

}  // namespace r2_interfaces


namespace r2_interfaces
{

namespace action
{

namespace builder
{

class Init_MoveToPosition_GetResult_Response_result
{
public:
  explicit Init_MoveToPosition_GetResult_Response_result(::r2_interfaces::action::MoveToPosition_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::r2_interfaces::action::MoveToPosition_GetResult_Response result(::r2_interfaces::action::MoveToPosition_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::r2_interfaces::action::MoveToPosition_GetResult_Response msg_;
};

class Init_MoveToPosition_GetResult_Response_status
{
public:
  Init_MoveToPosition_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveToPosition_GetResult_Response_result status(::r2_interfaces::action::MoveToPosition_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_MoveToPosition_GetResult_Response_result(msg_);
  }

private:
  ::r2_interfaces::action::MoveToPosition_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::r2_interfaces::action::MoveToPosition_GetResult_Response>()
{
  return r2_interfaces::action::builder::Init_MoveToPosition_GetResult_Response_status();
}

}  // namespace r2_interfaces


namespace r2_interfaces
{

namespace action
{

namespace builder
{

class Init_MoveToPosition_GetResult_Event_response
{
public:
  explicit Init_MoveToPosition_GetResult_Event_response(::r2_interfaces::action::MoveToPosition_GetResult_Event & msg)
  : msg_(msg)
  {}
  ::r2_interfaces::action::MoveToPosition_GetResult_Event response(::r2_interfaces::action::MoveToPosition_GetResult_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::r2_interfaces::action::MoveToPosition_GetResult_Event msg_;
};

class Init_MoveToPosition_GetResult_Event_request
{
public:
  explicit Init_MoveToPosition_GetResult_Event_request(::r2_interfaces::action::MoveToPosition_GetResult_Event & msg)
  : msg_(msg)
  {}
  Init_MoveToPosition_GetResult_Event_response request(::r2_interfaces::action::MoveToPosition_GetResult_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_MoveToPosition_GetResult_Event_response(msg_);
  }

private:
  ::r2_interfaces::action::MoveToPosition_GetResult_Event msg_;
};

class Init_MoveToPosition_GetResult_Event_info
{
public:
  Init_MoveToPosition_GetResult_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveToPosition_GetResult_Event_request info(::r2_interfaces::action::MoveToPosition_GetResult_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_MoveToPosition_GetResult_Event_request(msg_);
  }

private:
  ::r2_interfaces::action::MoveToPosition_GetResult_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::r2_interfaces::action::MoveToPosition_GetResult_Event>()
{
  return r2_interfaces::action::builder::Init_MoveToPosition_GetResult_Event_info();
}

}  // namespace r2_interfaces


namespace r2_interfaces
{

namespace action
{

namespace builder
{

class Init_MoveToPosition_FeedbackMessage_feedback
{
public:
  explicit Init_MoveToPosition_FeedbackMessage_feedback(::r2_interfaces::action::MoveToPosition_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::r2_interfaces::action::MoveToPosition_FeedbackMessage feedback(::r2_interfaces::action::MoveToPosition_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::r2_interfaces::action::MoveToPosition_FeedbackMessage msg_;
};

class Init_MoveToPosition_FeedbackMessage_goal_id
{
public:
  Init_MoveToPosition_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveToPosition_FeedbackMessage_feedback goal_id(::r2_interfaces::action::MoveToPosition_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_MoveToPosition_FeedbackMessage_feedback(msg_);
  }

private:
  ::r2_interfaces::action::MoveToPosition_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::r2_interfaces::action::MoveToPosition_FeedbackMessage>()
{
  return r2_interfaces::action::builder::Init_MoveToPosition_FeedbackMessage_goal_id();
}

}  // namespace r2_interfaces

#endif  // R2_INTERFACES__ACTION__DETAIL__MOVE_TO_POSITION__BUILDER_HPP_
