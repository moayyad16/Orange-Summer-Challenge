// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interface_pkg:msg/Detection.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_PKG__MSG__DETAIL__DETECTION__STRUCT_HPP_
#define INTERFACE_PKG__MSG__DETAIL__DETECTION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'position'
#include "interface_pkg/msg/detail/point2_d__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__interface_pkg__msg__Detection __attribute__((deprecated))
#else
# define DEPRECATED__interface_pkg__msg__Detection __declspec(deprecated)
#endif

namespace interface_pkg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Detection_
{
  using Type = Detection_<ContainerAllocator>;

  explicit Detection_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->object_name = "";
      this->confidence_score = 0.0;
    }
  }

  explicit Detection_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : object_name(_alloc),
    position(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->object_name = "";
      this->confidence_score = 0.0;
    }
  }

  // field types and members
  using _object_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _object_name_type object_name;
  using _position_type =
    interface_pkg::msg::Point2D_<ContainerAllocator>;
  _position_type position;
  using _confidence_score_type =
    double;
  _confidence_score_type confidence_score;

  // setters for named parameter idiom
  Type & set__object_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->object_name = _arg;
    return *this;
  }
  Type & set__position(
    const interface_pkg::msg::Point2D_<ContainerAllocator> & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__confidence_score(
    const double & _arg)
  {
    this->confidence_score = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interface_pkg::msg::Detection_<ContainerAllocator> *;
  using ConstRawPtr =
    const interface_pkg::msg::Detection_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interface_pkg::msg::Detection_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interface_pkg::msg::Detection_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interface_pkg::msg::Detection_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interface_pkg::msg::Detection_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interface_pkg::msg::Detection_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interface_pkg::msg::Detection_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interface_pkg::msg::Detection_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interface_pkg::msg::Detection_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interface_pkg__msg__Detection
    std::shared_ptr<interface_pkg::msg::Detection_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interface_pkg__msg__Detection
    std::shared_ptr<interface_pkg::msg::Detection_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Detection_ & other) const
  {
    if (this->object_name != other.object_name) {
      return false;
    }
    if (this->position != other.position) {
      return false;
    }
    if (this->confidence_score != other.confidence_score) {
      return false;
    }
    return true;
  }
  bool operator!=(const Detection_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Detection_

// alias to use template instance with default allocator
using Detection =
  interface_pkg::msg::Detection_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace interface_pkg

#endif  // INTERFACE_PKG__MSG__DETAIL__DETECTION__STRUCT_HPP_
