// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from cpp_pubsub:msg/Sphere.idl
// generated code does not contain a copyright notice
#include "cpp_pubsub/msg/detail/sphere__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `center`
#include "geometry_msgs/msg/detail/point__functions.h"

bool
cpp_pubsub__msg__Sphere__init(cpp_pubsub__msg__Sphere * msg)
{
  if (!msg) {
    return false;
  }
  // center
  if (!geometry_msgs__msg__Point__init(&msg->center)) {
    cpp_pubsub__msg__Sphere__fini(msg);
    return false;
  }
  // radius
  return true;
}

void
cpp_pubsub__msg__Sphere__fini(cpp_pubsub__msg__Sphere * msg)
{
  if (!msg) {
    return;
  }
  // center
  geometry_msgs__msg__Point__fini(&msg->center);
  // radius
}

bool
cpp_pubsub__msg__Sphere__are_equal(const cpp_pubsub__msg__Sphere * lhs, const cpp_pubsub__msg__Sphere * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // center
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->center), &(rhs->center)))
  {
    return false;
  }
  // radius
  if (lhs->radius != rhs->radius) {
    return false;
  }
  return true;
}

bool
cpp_pubsub__msg__Sphere__copy(
  const cpp_pubsub__msg__Sphere * input,
  cpp_pubsub__msg__Sphere * output)
{
  if (!input || !output) {
    return false;
  }
  // center
  if (!geometry_msgs__msg__Point__copy(
      &(input->center), &(output->center)))
  {
    return false;
  }
  // radius
  output->radius = input->radius;
  return true;
}

cpp_pubsub__msg__Sphere *
cpp_pubsub__msg__Sphere__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cpp_pubsub__msg__Sphere * msg = (cpp_pubsub__msg__Sphere *)allocator.allocate(sizeof(cpp_pubsub__msg__Sphere), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cpp_pubsub__msg__Sphere));
  bool success = cpp_pubsub__msg__Sphere__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
cpp_pubsub__msg__Sphere__destroy(cpp_pubsub__msg__Sphere * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    cpp_pubsub__msg__Sphere__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
cpp_pubsub__msg__Sphere__Sequence__init(cpp_pubsub__msg__Sphere__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cpp_pubsub__msg__Sphere * data = NULL;

  if (size) {
    data = (cpp_pubsub__msg__Sphere *)allocator.zero_allocate(size, sizeof(cpp_pubsub__msg__Sphere), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cpp_pubsub__msg__Sphere__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cpp_pubsub__msg__Sphere__fini(&data[i - 1]);
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
cpp_pubsub__msg__Sphere__Sequence__fini(cpp_pubsub__msg__Sphere__Sequence * array)
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
      cpp_pubsub__msg__Sphere__fini(&array->data[i]);
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

cpp_pubsub__msg__Sphere__Sequence *
cpp_pubsub__msg__Sphere__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cpp_pubsub__msg__Sphere__Sequence * array = (cpp_pubsub__msg__Sphere__Sequence *)allocator.allocate(sizeof(cpp_pubsub__msg__Sphere__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = cpp_pubsub__msg__Sphere__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
cpp_pubsub__msg__Sphere__Sequence__destroy(cpp_pubsub__msg__Sphere__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    cpp_pubsub__msg__Sphere__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
cpp_pubsub__msg__Sphere__Sequence__are_equal(const cpp_pubsub__msg__Sphere__Sequence * lhs, const cpp_pubsub__msg__Sphere__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!cpp_pubsub__msg__Sphere__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
cpp_pubsub__msg__Sphere__Sequence__copy(
  const cpp_pubsub__msg__Sphere__Sequence * input,
  cpp_pubsub__msg__Sphere__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(cpp_pubsub__msg__Sphere);
    cpp_pubsub__msg__Sphere * data =
      (cpp_pubsub__msg__Sphere *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!cpp_pubsub__msg__Sphere__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          cpp_pubsub__msg__Sphere__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!cpp_pubsub__msg__Sphere__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
