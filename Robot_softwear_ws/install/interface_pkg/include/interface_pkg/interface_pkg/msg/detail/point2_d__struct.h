// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interface_pkg:msg/Point2D.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_PKG__MSG__DETAIL__POINT2_D__STRUCT_H_
#define INTERFACE_PKG__MSG__DETAIL__POINT2_D__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Point2D in the package interface_pkg.
typedef struct interface_pkg__msg__Point2D
{
  int64_t x;
  int64_t y;
} interface_pkg__msg__Point2D;

// Struct for a sequence of interface_pkg__msg__Point2D.
typedef struct interface_pkg__msg__Point2D__Sequence
{
  interface_pkg__msg__Point2D * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interface_pkg__msg__Point2D__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACE_PKG__MSG__DETAIL__POINT2_D__STRUCT_H_
