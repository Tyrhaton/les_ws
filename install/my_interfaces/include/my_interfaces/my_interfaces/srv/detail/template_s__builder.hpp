// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_interfaces:srv/TemplateS.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "my_interfaces/srv/template_s.hpp"


#ifndef MY_INTERFACES__SRV__DETAIL__TEMPLATE_S__BUILDER_HPP_
#define MY_INTERFACES__SRV__DETAIL__TEMPLATE_S__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_interfaces/srv/detail/template_s__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_interfaces
{

namespace srv
{

namespace builder
{

class Init_TemplateS_Request_sname
{
public:
  Init_TemplateS_Request_sname()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::my_interfaces::srv::TemplateS_Request sname(::my_interfaces::srv::TemplateS_Request::_sname_type arg)
  {
    msg_.sname = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_interfaces::srv::TemplateS_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_interfaces::srv::TemplateS_Request>()
{
  return my_interfaces::srv::builder::Init_TemplateS_Request_sname();
}

}  // namespace my_interfaces


namespace my_interfaces
{

namespace srv
{

namespace builder
{

class Init_TemplateS_Response_snumber
{
public:
  Init_TemplateS_Response_snumber()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::my_interfaces::srv::TemplateS_Response snumber(::my_interfaces::srv::TemplateS_Response::_snumber_type arg)
  {
    msg_.snumber = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_interfaces::srv::TemplateS_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_interfaces::srv::TemplateS_Response>()
{
  return my_interfaces::srv::builder::Init_TemplateS_Response_snumber();
}

}  // namespace my_interfaces


namespace my_interfaces
{

namespace srv
{

namespace builder
{

class Init_TemplateS_Event_response
{
public:
  explicit Init_TemplateS_Event_response(::my_interfaces::srv::TemplateS_Event & msg)
  : msg_(msg)
  {}
  ::my_interfaces::srv::TemplateS_Event response(::my_interfaces::srv::TemplateS_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_interfaces::srv::TemplateS_Event msg_;
};

class Init_TemplateS_Event_request
{
public:
  explicit Init_TemplateS_Event_request(::my_interfaces::srv::TemplateS_Event & msg)
  : msg_(msg)
  {}
  Init_TemplateS_Event_response request(::my_interfaces::srv::TemplateS_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_TemplateS_Event_response(msg_);
  }

private:
  ::my_interfaces::srv::TemplateS_Event msg_;
};

class Init_TemplateS_Event_info
{
public:
  Init_TemplateS_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TemplateS_Event_request info(::my_interfaces::srv::TemplateS_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_TemplateS_Event_request(msg_);
  }

private:
  ::my_interfaces::srv::TemplateS_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_interfaces::srv::TemplateS_Event>()
{
  return my_interfaces::srv::builder::Init_TemplateS_Event_info();
}

}  // namespace my_interfaces

#endif  // MY_INTERFACES__SRV__DETAIL__TEMPLATE_S__BUILDER_HPP_
