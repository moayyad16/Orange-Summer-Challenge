// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interface_pkg:msg/Detection.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_PKG__MSG__DETAIL__DETECTION__STRUCT_H_
#define INTERFACE_PKG__MSG__DETAIL__DETECTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'object_name'
#include "rosidl_runtime_c/string.h"
// Member 'position'
#include "interface_pkg/msg/detail/point2_d__struct.h"

/// Struct defined in msg/Detection in the package interface_pkg.
typedef struct interface_pkg__msg__Detection
{
  rosidl_runtime_c__String object_name;
  interface_pkg__msg__Point2D position;
  double confidence_score;
} interface_pkg__msg__Detection;

// Struct for a sequence of interface_pkg__msg__Detection.
typedef struct interface_pkg__msg__Detection__Sequence
{
  interface_pkg__msg__Detection * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interface_pkg__msg__Detection__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACE_PKG__MSG__DETAIL__DETECTION__STRUCT_H_
