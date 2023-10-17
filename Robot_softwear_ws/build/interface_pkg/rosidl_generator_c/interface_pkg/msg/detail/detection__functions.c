// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from interface_pkg:msg/Detection.idl
// generated code does not contain a copyright notice
#include "interface_pkg/msg/detail/detection__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `object_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `position`
#include "interface_pkg/msg/detail/point2_d__functions.h"

bool
interface_pkg__msg__Detection__init(interface_pkg__msg__Detection * msg)
{
  if (!msg) {
    return false;
  }
  // object_name
  if (!rosidl_runtime_c__String__init(&msg->object_name)) {
    interface_pkg__msg__Detection__fini(msg);
    return false;
  }
  // position
  if (!interface_pkg__msg__Point2D__init(&msg->position)) {
    interface_pkg__msg__Detection__fini(msg);
    return false;
  }
  // confidence_score
  return true;
}

void
interface_pkg__msg__Detection__fini(interface_pkg__msg__Detection * msg)
{
  if (!msg) {
    return;
  }
  // object_name
  rosidl_runtime_c__String__fini(&msg->object_name);
  // position
  interface_pkg__msg__Point2D__fini(&msg->position);
  // confidence_score
}

bool
interface_pkg__msg__Detection__are_equal(const interface_pkg__msg__Detection * lhs, const interface_pkg__msg__Detection * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // object_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->object_name), &(rhs->object_name)))
  {
    return false;
  }
  // position
  if (!interface_pkg__msg__Point2D__are_equal(
      &(lhs->position), &(rhs->position)))
  {
    return false;
  }
  // confidence_score
  if (lhs->confidence_score != rhs->confidence_score) {
    return false;
  }
  return true;
}

bool
interface_pkg__msg__Detection__copy(
  const interface_pkg__msg__Detection * input,
  interface_pkg__msg__Detection * output)
{
  if (!input || !output) {
    return false;
  }
  // object_name
  if (!rosidl_runtime_c__String__copy(
      &(input->object_name), &(output->object_name)))
  {
    return false;
  }
  // position
  if (!interface_pkg__msg__Point2D__copy(
      &(input->position), &(output->position)))
  {
    return false;
  }
  // confidence_score
  output->confidence_score = input->confidence_score;
  return true;
}

interface_pkg__msg__Detection *
interface_pkg__msg__Detection__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interface_pkg__msg__Detection * msg = (interface_pkg__msg__Detection *)allocator.allocate(sizeof(interface_pkg__msg__Detection), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interface_pkg__msg__Detection));
  bool success = interface_pkg__msg__Detection__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
interface_pkg__msg__Detection__destroy(interface_pkg__msg__Detection * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    interface_pkg__msg__Detection__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
interface_pkg__msg__Detection__Sequence__init(interface_pkg__msg__Detection__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interface_pkg__msg__Detection * data = NULL;

  if (size) {
    data = (interface_pkg__msg__Detection *)allocator.zero_allocate(size, sizeof(interface_pkg__msg__Detection), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interface_pkg__msg__Detection__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interface_pkg__msg__Detection__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
interface_pkg__msg__Detection__Sequence__fini(interface_pkg__msg__Detection__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      interface_pkg__msg__Detection__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

interface_pkg__msg__Detection__Sequence *
interface_pkg__msg__Detection__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interface_pkg__msg__Detection__Sequence * array = (interface_pkg__msg__Detection__Sequence *)allocator.allocate(sizeof(interface_pkg__msg__Detection__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = interface_pkg__msg__Detection__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
interface_pkg__msg__Detection__Sequence__destroy(interface_pkg__msg__Detection__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    interface_pkg__msg__Detection__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
interface_pkg__msg__Detection__Sequence__are_equal(const interface_pkg__msg__Detection__Sequence * lhs, const interface_pkg__msg__Detection__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!interface_pkg__msg__Detection__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
interface_pkg__msg__Detection__Sequence__copy(
  const interface_pkg__msg__Detection__Sequence * input,
  interface_pkg__msg__Detection__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(interface_pkg__msg__Detection);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    interface_pkg__msg__Detection * data =
      (interface_pkg__msg__Detection *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!interface_pkg__msg__Detection__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          interface_pkg__msg__Detection__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!interface_pkg__msg__Detection__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
