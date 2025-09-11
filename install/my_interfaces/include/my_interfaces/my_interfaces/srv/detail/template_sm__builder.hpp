// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_interfaces:srv/TemplateSm.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "my_interfaces/srv/template_sm.hpp"


#ifndef MY_INTERFACES__SRV__DETAIL__TEMPLATE_SM__BUILDER_HPP_
#define MY_INTERFACES__SRV__DETAIL__TEMPLATE_SM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_interfaces/srv/detail/template_sm__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_interfaces
{

namespace srv
{

namespace builder
{

class Init_TemplateSm_Request_z
{
public:
  explicit Init_TemplateSm_Request_z(::my_interfaces::srv::TemplateSm_Request & msg)
  : msg_(msg)
  {}
  ::my_interfaces::srv::TemplateSm_Request z(::my_interfaces::srv::TemplateSm_Request::_z_type arg)
  {
    msg_.z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_interfaces::srv::TemplateSm_Request msg_;
};

class Init_TemplateSm_Request_y
{
public:
  explicit Init_TemplateSm_Request_y(::my_interfaces::srv::TemplateSm_Request & msg)
  : msg_(msg)
  {}
  Init_TemplateSm_Request_z y(::my_interfaces::srv::TemplateSm_Request::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_TemplateSm_Request_z(msg_);
  }

private:
  ::my_interfaces::srv::TemplateSm_Request msg_;
};

class Init_TemplateSm_Request_x
{
public:
  Init_TemplateSm_Request_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TemplateSm_Request_y x(::my_interfaces::srv::TemplateSm_Request::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_TemplateSm_Request_y(msg_);
  }

private:
  ::my_interfaces::srv::TemplateSm_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_interfaces::srv::TemplateSm_Request>()
{
  return my_interfaces::srv::builder::Init_TemplateSm_Request_x();
}

}  // namespace my_interfaces


namespace my_interfaces
{

namespace srv
{

namespace builder
{

class Init_TemplateSm_Response_length
{
public:
  Init_TemplateSm_Response_length()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::my_interfaces::srv::TemplateSm_Response length(::my_interfaces::srv::TemplateSm_Response::_length_type arg)
  {
    msg_.length = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_interfaces::srv::TemplateSm_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_interfaces::srv::TemplateSm_Response>()
{
  return my_interfaces::srv::builder::Init_TemplateSm_Response_length();
}

}  // namespace my_interfaces


namespace my_interfaces
{

namespace srv
{

namespace builder
{

class Init_TemplateSm_Event_response
{
public:
  explicit Init_TemplateSm_Event_response(::my_interfaces::srv::TemplateSm_Event & msg)
  : msg_(msg)
  {}
  ::my_interfaces::srv::TemplateSm_Event response(::my_interfaces::srv::TemplateSm_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_interfaces::srv::TemplateSm_Event msg_;
};

class Init_TemplateSm_Event_request
{
public:
  explicit Init_TemplateSm_Event_request(::my_interfaces::srv::TemplateSm_Event & msg)
  : msg_(msg)
  {}
  Init_TemplateSm_Event_response request(::my_interfaces::srv::TemplateSm_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_TemplateSm_Event_response(msg_);
  }

private:
  ::my_interfaces::srv::TemplateSm_Event msg_;
};

class Init_TemplateSm_Event_info
{
public:
  Init_TemplateSm_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TemplateSm_Event_request info(::my_interfaces::srv::TemplateSm_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_TemplateSm_Event_request(msg_);
  }

private:
  ::my_interfaces::srv::TemplateSm_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_interfaces::srv::TemplateSm_Event>()
{
  return my_interfaces::srv::builder::Init_TemplateSm_Event_info();
}

}  // namespace my_interfaces

#endif  // MY_INTERFACES__SRV__DETAIL__TEMPLATE_SM__BUILDER_HPP_
