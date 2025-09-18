// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_interfaces:action/TemplateA.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "my_interfaces/action/template_a.hpp"


#ifndef MY_INTERFACES__ACTION__DETAIL__TEMPLATE_A__BUILDER_HPP_
#define MY_INTERFACES__ACTION__DETAIL__TEMPLATE_A__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_interfaces/action/detail/template_a__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_interfaces
{

namespace action
{

namespace builder
{

class Init_TemplateA_Goal_gname
{
public:
  Init_TemplateA_Goal_gname()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::my_interfaces::action::TemplateA_Goal gname(::my_interfaces::action::TemplateA_Goal::_gname_type arg)
  {
    msg_.gname = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_interfaces::action::TemplateA_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_interfaces::action::TemplateA_Goal>()
{
  return my_interfaces::action::builder::Init_TemplateA_Goal_gname();
}

}  // namespace my_interfaces


namespace my_interfaces
{

namespace action
{

namespace builder
{

class Init_TemplateA_Result_rnumber
{
public:
  Init_TemplateA_Result_rnumber()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::my_interfaces::action::TemplateA_Result rnumber(::my_interfaces::action::TemplateA_Result::_rnumber_type arg)
  {
    msg_.rnumber = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_interfaces::action::TemplateA_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_interfaces::action::TemplateA_Result>()
{
  return my_interfaces::action::builder::Init_TemplateA_Result_rnumber();
}

}  // namespace my_interfaces


namespace my_interfaces
{

namespace action
{

namespace builder
{

class Init_TemplateA_Feedback_fnumber
{
public:
  Init_TemplateA_Feedback_fnumber()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::my_interfaces::action::TemplateA_Feedback fnumber(::my_interfaces::action::TemplateA_Feedback::_fnumber_type arg)
  {
    msg_.fnumber = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_interfaces::action::TemplateA_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_interfaces::action::TemplateA_Feedback>()
{
  return my_interfaces::action::builder::Init_TemplateA_Feedback_fnumber();
}

}  // namespace my_interfaces


namespace my_interfaces
{

namespace action
{

namespace builder
{

class Init_TemplateA_SendGoal_Request_goal
{
public:
  explicit Init_TemplateA_SendGoal_Request_goal(::my_interfaces::action::TemplateA_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::my_interfaces::action::TemplateA_SendGoal_Request goal(::my_interfaces::action::TemplateA_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_interfaces::action::TemplateA_SendGoal_Request msg_;
};

class Init_TemplateA_SendGoal_Request_goal_id
{
public:
  Init_TemplateA_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TemplateA_SendGoal_Request_goal goal_id(::my_interfaces::action::TemplateA_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_TemplateA_SendGoal_Request_goal(msg_);
  }

private:
  ::my_interfaces::action::TemplateA_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_interfaces::action::TemplateA_SendGoal_Request>()
{
  return my_interfaces::action::builder::Init_TemplateA_SendGoal_Request_goal_id();
}

}  // namespace my_interfaces


namespace my_interfaces
{

namespace action
{

namespace builder
{

class Init_TemplateA_SendGoal_Response_stamp
{
public:
  explicit Init_TemplateA_SendGoal_Response_stamp(::my_interfaces::action::TemplateA_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::my_interfaces::action::TemplateA_SendGoal_Response stamp(::my_interfaces::action::TemplateA_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_interfaces::action::TemplateA_SendGoal_Response msg_;
};

class Init_TemplateA_SendGoal_Response_accepted
{
public:
  Init_TemplateA_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TemplateA_SendGoal_Response_stamp accepted(::my_interfaces::action::TemplateA_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_TemplateA_SendGoal_Response_stamp(msg_);
  }

private:
  ::my_interfaces::action::TemplateA_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_interfaces::action::TemplateA_SendGoal_Response>()
{
  return my_interfaces::action::builder::Init_TemplateA_SendGoal_Response_accepted();
}

}  // namespace my_interfaces


namespace my_interfaces
{

namespace action
{

namespace builder
{

class Init_TemplateA_SendGoal_Event_response
{
public:
  explicit Init_TemplateA_SendGoal_Event_response(::my_interfaces::action::TemplateA_SendGoal_Event & msg)
  : msg_(msg)
  {}
  ::my_interfaces::action::TemplateA_SendGoal_Event response(::my_interfaces::action::TemplateA_SendGoal_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_interfaces::action::TemplateA_SendGoal_Event msg_;
};

class Init_TemplateA_SendGoal_Event_request
{
public:
  explicit Init_TemplateA_SendGoal_Event_request(::my_interfaces::action::TemplateA_SendGoal_Event & msg)
  : msg_(msg)
  {}
  Init_TemplateA_SendGoal_Event_response request(::my_interfaces::action::TemplateA_SendGoal_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_TemplateA_SendGoal_Event_response(msg_);
  }

private:
  ::my_interfaces::action::TemplateA_SendGoal_Event msg_;
};

class Init_TemplateA_SendGoal_Event_info
{
public:
  Init_TemplateA_SendGoal_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TemplateA_SendGoal_Event_request info(::my_interfaces::action::TemplateA_SendGoal_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_TemplateA_SendGoal_Event_request(msg_);
  }

private:
  ::my_interfaces::action::TemplateA_SendGoal_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_interfaces::action::TemplateA_SendGoal_Event>()
{
  return my_interfaces::action::builder::Init_TemplateA_SendGoal_Event_info();
}

}  // namespace my_interfaces


namespace my_interfaces
{

namespace action
{

namespace builder
{

class Init_TemplateA_GetResult_Request_goal_id
{
public:
  Init_TemplateA_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::my_interfaces::action::TemplateA_GetResult_Request goal_id(::my_interfaces::action::TemplateA_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_interfaces::action::TemplateA_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_interfaces::action::TemplateA_GetResult_Request>()
{
  return my_interfaces::action::builder::Init_TemplateA_GetResult_Request_goal_id();
}

}  // namespace my_interfaces


namespace my_interfaces
{

namespace action
{

namespace builder
{

class Init_TemplateA_GetResult_Response_result
{
public:
  explicit Init_TemplateA_GetResult_Response_result(::my_interfaces::action::TemplateA_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::my_interfaces::action::TemplateA_GetResult_Response result(::my_interfaces::action::TemplateA_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_interfaces::action::TemplateA_GetResult_Response msg_;
};

class Init_TemplateA_GetResult_Response_status
{
public:
  Init_TemplateA_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TemplateA_GetResult_Response_result status(::my_interfaces::action::TemplateA_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_TemplateA_GetResult_Response_result(msg_);
  }

private:
  ::my_interfaces::action::TemplateA_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_interfaces::action::TemplateA_GetResult_Response>()
{
  return my_interfaces::action::builder::Init_TemplateA_GetResult_Response_status();
}

}  // namespace my_interfaces


namespace my_interfaces
{

namespace action
{

namespace builder
{

class Init_TemplateA_GetResult_Event_response
{
public:
  explicit Init_TemplateA_GetResult_Event_response(::my_interfaces::action::TemplateA_GetResult_Event & msg)
  : msg_(msg)
  {}
  ::my_interfaces::action::TemplateA_GetResult_Event response(::my_interfaces::action::TemplateA_GetResult_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_interfaces::action::TemplateA_GetResult_Event msg_;
};

class Init_TemplateA_GetResult_Event_request
{
public:
  explicit Init_TemplateA_GetResult_Event_request(::my_interfaces::action::TemplateA_GetResult_Event & msg)
  : msg_(msg)
  {}
  Init_TemplateA_GetResult_Event_response request(::my_interfaces::action::TemplateA_GetResult_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_TemplateA_GetResult_Event_response(msg_);
  }

private:
  ::my_interfaces::action::TemplateA_GetResult_Event msg_;
};

class Init_TemplateA_GetResult_Event_info
{
public:
  Init_TemplateA_GetResult_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TemplateA_GetResult_Event_request info(::my_interfaces::action::TemplateA_GetResult_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_TemplateA_GetResult_Event_request(msg_);
  }

private:
  ::my_interfaces::action::TemplateA_GetResult_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_interfaces::action::TemplateA_GetResult_Event>()
{
  return my_interfaces::action::builder::Init_TemplateA_GetResult_Event_info();
}

}  // namespace my_interfaces


namespace my_interfaces
{

namespace action
{

namespace builder
{

class Init_TemplateA_FeedbackMessage_feedback
{
public:
  explicit Init_TemplateA_FeedbackMessage_feedback(::my_interfaces::action::TemplateA_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::my_interfaces::action::TemplateA_FeedbackMessage feedback(::my_interfaces::action::TemplateA_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_interfaces::action::TemplateA_FeedbackMessage msg_;
};

class Init_TemplateA_FeedbackMessage_goal_id
{
public:
  Init_TemplateA_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TemplateA_FeedbackMessage_feedback goal_id(::my_interfaces::action::TemplateA_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_TemplateA_FeedbackMessage_feedback(msg_);
  }

private:
  ::my_interfaces::action::TemplateA_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_interfaces::action::TemplateA_FeedbackMessage>()
{
  return my_interfaces::action::builder::Init_TemplateA_FeedbackMessage_goal_id();
}

}  // namespace my_interfaces

#endif  // MY_INTERFACES__ACTION__DETAIL__TEMPLATE_A__BUILDER_HPP_
