// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interface_pkg:msg/Detection.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_PKG__MSG__DETAIL__DETECTION__TRAITS_HPP_
#define INTERFACE_PKG__MSG__DETAIL__DETECTION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "interface_pkg/msg/detail/detection__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'position'
#include "interface_pkg/msg/detail/point2_d__traits.hpp"

namespace interface_pkg
{

namespace msg
{

inline void to_flow_style_yaml(
  const Detection & msg,
  std::ostream & out)
{
  out << "{";
  // member: object_name
  {
    out << "object_name: ";
    rosidl_generator_traits::value_to_yaml(msg.object_name, out);
    out << ", ";
  }

  // member: position
  {
    out << "position: ";
    to_flow_style_yaml(msg.position, out);
    out << ", ";
  }

  // member: confidence_score
  {
    out << "confidence_score: ";
    rosidl_generator_traits::value_to_yaml(msg.confidence_score, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Detection & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: object_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "object_name: ";
    rosidl_generator_traits::value_to_yaml(msg.object_name, out);
    out << "\n";
  }

  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position:\n";
    to_block_style_yaml(msg.position, out, indentation + 2);
  }

  // member: confidence_score
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "confidence_score: ";
    rosidl_generator_traits::value_to_yaml(msg.confidence_score, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Detection & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace interface_pkg

namespace rosidl_generator_traits
{

[[deprecated("use interface_pkg::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const interface_pkg::msg::Detection & msg,
  std::ostream & out, size_t indentation = 0)
{
  interface_pkg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interface_pkg::msg::to_yaml() instead")]]
inline std::string to_yaml(const interface_pkg::msg::Detection & msg)
{
  return interface_pkg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<interface_pkg::msg::Detection>()
{
  return "interface_pkg::msg::Detection";
}

template<>
inline const char * name<interface_pkg::msg::Detection>()
{
  return "interface_pkg/msg/Detection";
}

template<>
struct has_fixed_size<interface_pkg::msg::Detection>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<interface_pkg::msg::Detection>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<interface_pkg::msg::Detection>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // INTERFACE_PKG__MSG__DETAIL__DETECTION__TRAITS_HPP_
