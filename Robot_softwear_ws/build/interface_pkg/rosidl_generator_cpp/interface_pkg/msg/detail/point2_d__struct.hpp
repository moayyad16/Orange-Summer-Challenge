// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interface_pkg:msg/Point2D.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_PKG__MSG__DETAIL__POINT2_D__STRUCT_HPP_
#define INTERFACE_PKG__MSG__DETAIL__POINT2_D__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__interface_pkg__msg__Point2D __attribute__((deprecated))
#else
# define DEPRECATED__interface_pkg__msg__Point2D __declspec(deprecated)
#endif

namespace interface_pkg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Point2D_
{
  using Type = Point2D_<ContainerAllocator>;

  explicit Point2D_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0ll;
      this->y = 0ll;
    }
  }

  explicit Point2D_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0ll;
      this->y = 0ll;
    }
  }

  // field types and members
  using _x_type =
    int64_t;
  _x_type x;
  using _y_type =
    int64_t;
  _y_type y;

  // setters for named parameter idiom
  Type & set__x(
    const int64_t & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const int64_t & _arg)
  {
    this->y = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interface_pkg::msg::Point2D_<ContainerAllocator> *;
  using ConstRawPtr =
    const interface_pkg::msg::Point2D_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interface_pkg::msg::Point2D_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interface_pkg::msg::Point2D_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interface_pkg::msg::Point2D_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interface_pkg::msg::Point2D_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interface_pkg::msg::Point2D_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interface_pkg::msg::Point2D_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interface_pkg::msg::Point2D_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interface_pkg::msg::Point2D_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interface_pkg__msg__Point2D
    std::shared_ptr<interface_pkg::msg::Point2D_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interface_pkg__msg__Point2D
    std::shared_ptr<interface_pkg::msg::Point2D_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Point2D_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    return true;
  }
  bool operator!=(const Point2D_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Point2D_

// alias to use template instance with default allocator
using Point2D =
  interface_pkg::msg::Point2D_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace interface_pkg

#endif  // INTERFACE_PKG__MSG__DETAIL__POINT2_D__STRUCT_HPP_
