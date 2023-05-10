// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from cpp_pubsub:msg/Num.idl
// generated code does not contain a copyright notice
#include "cpp_pubsub/msg/detail/num__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
cpp_pubsub__msg__Num__init(cpp_pubsub__msg__Num * msg)
{
  if (!msg) {
    return false;
  }
  // num
  return true;
}

void
cpp_pubsub__msg__Num__fini(cpp_pubsub__msg__Num * msg)
{
  if (!msg) {
    return;
  }
  // num
}

bool
cpp_pubsub__msg__Num__are_equal(const cpp_pubsub__msg__Num * lhs, const cpp_pubsub__msg__Num * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // num
  if (lhs->num != rhs->num) {
    return false;
  }
  return true;
}

bool
cpp_pubsub__msg__Num__copy(
  const cpp_pubsub__msg__Num * input,
  cpp_pubsub__msg__Num * output)
{
  if (!input || !output) {
    return false;
  }
  // num
  output->num = input->num;
  return true;
}

cpp_pubsub__msg__Num *
cpp_pubsub__msg__Num__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cpp_pubsub__msg__Num * msg = (cpp_pubsub__msg__Num *)allocator.allocate(sizeof(cpp_pubsub__msg__Num), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cpp_pubsub__msg__Num));
  bool success = cpp_pubsub__msg__Num__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
cpp_pubsub__msg__Num__destroy(cpp_pubsub__msg__Num * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    cpp_pubsub__msg__Num__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
cpp_pubsub__msg__Num__Sequence__init(cpp_pubsub__msg__Num__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cpp_pubsub__msg__Num * data = NULL;

  if (size) {
    data = (cpp_pubsub__msg__Num *)allocator.zero_allocate(size, sizeof(cpp_pubsub__msg__Num), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cpp_pubsub__msg__Num__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cpp_pubsub__msg__Num__fini(&data[i - 1]);
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
cpp_pubsub__msg__Num__Sequence__fini(cpp_pubsub__msg__Num__Sequence * array)
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
      cpp_pubsub__msg__Num__fini(&array->data[i]);
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

cpp_pubsub__msg__Num__Sequence *
cpp_pubsub__msg__Num__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cpp_pubsub__msg__Num__Sequence * array = (cpp_pubsub__msg__Num__Sequence *)allocator.allocate(sizeof(cpp_pubsub__msg__Num__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = cpp_pubsub__msg__Num__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
cpp_pubsub__msg__Num__Sequence__destroy(cpp_pubsub__msg__Num__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    cpp_pubsub__msg__Num__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
cpp_pubsub__msg__Num__Sequence__are_equal(const cpp_pubsub__msg__Num__Sequence * lhs, const cpp_pubsub__msg__Num__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!cpp_pubsub__msg__Num__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
cpp_pubsub__msg__Num__Sequence__copy(
  const cpp_pubsub__msg__Num__Sequence * input,
  cpp_pubsub__msg__Num__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(cpp_pubsub__msg__Num);
    cpp_pubsub__msg__Num * data =
      (cpp_pubsub__msg__Num *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!cpp_pubsub__msg__Num__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          cpp_pubsub__msg__Num__fini(&data[i]);
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
    if (!cpp_pubsub__msg__Num__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
