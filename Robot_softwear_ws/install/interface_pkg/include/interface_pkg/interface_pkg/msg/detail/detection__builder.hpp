// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interface_pkg:msg/Detection.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_PKG__MSG__DETAIL__DETECTION__BUILDER_HPP_
#define INTERFACE_PKG__MSG__DETAIL__DETECTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interface_pkg/msg/detail/detection__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interface_pkg
{

namespace msg
{

namespace builder
{

class Init_Detection_confidence_score
{
public:
  explicit Init_Detection_confidence_score(::interface_pkg::msg::Detection & msg)
  : msg_(msg)
  {}
  ::interface_pkg::msg::Detection confidence_score(::interface_pkg::msg::Detection::_confidence_score_type arg)
  {
    msg_.confidence_score = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interface_pkg::msg::Detection msg_;
};

class Init_Detection_position
{
public:
  explicit Init_Detection_position(::interface_pkg::msg::Detection & msg)
  : msg_(msg)
  {}
  Init_Detection_confidence_score position(::interface_pkg::msg::Detection::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_Detection_confidence_score(msg_);
  }

private:
  ::interface_pkg::msg::Detection msg_;
};

class Init_Detection_object_name
{
public:
  Init_Detection_object_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Detection_position object_name(::interface_pkg::msg::Detection::_object_name_type arg)
  {
    msg_.object_name = std::move(arg);
    return Init_Detection_position(msg_);
  }

private:
  ::interface_pkg::msg::Detection msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interface_pkg::msg::Detection>()
{
  return interface_pkg::msg::builder::Init_Detection_object_name();
}

}  // namespace interface_pkg

#endif  // INTERFACE_PKG__MSG__DETAIL__DETECTION__BUILDER_HPP_
