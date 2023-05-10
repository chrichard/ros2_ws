// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from cpp_srvcli:srv/AddThreeInts.idl
// generated code does not contain a copyright notice
#include "cpp_srvcli/srv/detail/add_three_ints__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
cpp_srvcli__srv__AddThreeInts_Request__init(cpp_srvcli__srv__AddThreeInts_Request * msg)
{
  if (!msg) {
    return false;
  }
  // a
  // b
  // c
  return true;
}

void
cpp_srvcli__srv__AddThreeInts_Request__fini(cpp_srvcli__srv__AddThreeInts_Request * msg)
{
  if (!msg) {
    return;
  }
  // a
  // b
  // c
}

bool
cpp_srvcli__srv__AddThreeInts_Request__are_equal(const cpp_srvcli__srv__AddThreeInts_Request * lhs, const cpp_srvcli__srv__AddThreeInts_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // a
  if (lhs->a != rhs->a) {
    return false;
  }
  // b
  if (lhs->b != rhs->b) {
    return false;
  }
  // c
  if (lhs->c != rhs->c) {
    return false;
  }
  return true;
}

bool
cpp_srvcli__srv__AddThreeInts_Request__copy(
  const cpp_srvcli__srv__AddThreeInts_Request * input,
  cpp_srvcli__srv__AddThreeInts_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // a
  output->a = input->a;
  // b
  output->b = input->b;
  // c
  output->c = input->c;
  return true;
}

cpp_srvcli__srv__AddThreeInts_Request *
cpp_srvcli__srv__AddThreeInts_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cpp_srvcli__srv__AddThreeInts_Request * msg = (cpp_srvcli__srv__AddThreeInts_Request *)allocator.allocate(sizeof(cpp_srvcli__srv__AddThreeInts_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cpp_srvcli__srv__AddThreeInts_Request));
  bool success = cpp_srvcli__srv__AddThreeInts_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
cpp_srvcli__srv__AddThreeInts_Request__destroy(cpp_srvcli__srv__AddThreeInts_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    cpp_srvcli__srv__AddThreeInts_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
cpp_srvcli__srv__AddThreeInts_Request__Sequence__init(cpp_srvcli__srv__AddThreeInts_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cpp_srvcli__srv__AddThreeInts_Request * data = NULL;

  if (size) {
    data = (cpp_srvcli__srv__AddThreeInts_Request *)allocator.zero_allocate(size, sizeof(cpp_srvcli__srv__AddThreeInts_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cpp_srvcli__srv__AddThreeInts_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cpp_srvcli__srv__AddThreeInts_Request__fini(&data[i - 1]);
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
cpp_srvcli__srv__AddThreeInts_Request__Sequence__fini(cpp_srvcli__srv__AddThreeInts_Request__Sequence * array)
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
      cpp_srvcli__srv__AddThreeInts_Request__fini(&array->data[i]);
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

cpp_srvcli__srv__AddThreeInts_Request__Sequence *
cpp_srvcli__srv__AddThreeInts_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cpp_srvcli__srv__AddThreeInts_Request__Sequence * array = (cpp_srvcli__srv__AddThreeInts_Request__Sequence *)allocator.allocate(sizeof(cpp_srvcli__srv__AddThreeInts_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = cpp_srvcli__srv__AddThreeInts_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
cpp_srvcli__srv__AddThreeInts_Request__Sequence__destroy(cpp_srvcli__srv__AddThreeInts_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    cpp_srvcli__srv__AddThreeInts_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
cpp_srvcli__srv__AddThreeInts_Request__Sequence__are_equal(const cpp_srvcli__srv__AddThreeInts_Request__Sequence * lhs, const cpp_srvcli__srv__AddThreeInts_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!cpp_srvcli__srv__AddThreeInts_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
cpp_srvcli__srv__AddThreeInts_Request__Sequence__copy(
  const cpp_srvcli__srv__AddThreeInts_Request__Sequence * input,
  cpp_srvcli__srv__AddThreeInts_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(cpp_srvcli__srv__AddThreeInts_Request);
    cpp_srvcli__srv__AddThreeInts_Request * data =
      (cpp_srvcli__srv__AddThreeInts_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!cpp_srvcli__srv__AddThreeInts_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          cpp_srvcli__srv__AddThreeInts_Request__fini(&data[i]);
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
    if (!cpp_srvcli__srv__AddThreeInts_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
cpp_srvcli__srv__AddThreeInts_Response__init(cpp_srvcli__srv__AddThreeInts_Response * msg)
{
  if (!msg) {
    return false;
  }
  // sum
  return true;
}

void
cpp_srvcli__srv__AddThreeInts_Response__fini(cpp_srvcli__srv__AddThreeInts_Response * msg)
{
  if (!msg) {
    return;
  }
  // sum
}

bool
cpp_srvcli__srv__AddThreeInts_Response__are_equal(const cpp_srvcli__srv__AddThreeInts_Response * lhs, const cpp_srvcli__srv__AddThreeInts_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // sum
  if (lhs->sum != rhs->sum) {
    return false;
  }
  return true;
}

bool
cpp_srvcli__srv__AddThreeInts_Response__copy(
  const cpp_srvcli__srv__AddThreeInts_Response * input,
  cpp_srvcli__srv__AddThreeInts_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // sum
  output->sum = input->sum;
  return true;
}

cpp_srvcli__srv__AddThreeInts_Response *
cpp_srvcli__srv__AddThreeInts_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cpp_srvcli__srv__AddThreeInts_Response * msg = (cpp_srvcli__srv__AddThreeInts_Response *)allocator.allocate(sizeof(cpp_srvcli__srv__AddThreeInts_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cpp_srvcli__srv__AddThreeInts_Response));
  bool success = cpp_srvcli__srv__AddThreeInts_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
cpp_srvcli__srv__AddThreeInts_Response__destroy(cpp_srvcli__srv__AddThreeInts_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    cpp_srvcli__srv__AddThreeInts_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
cpp_srvcli__srv__AddThreeInts_Response__Sequence__init(cpp_srvcli__srv__AddThreeInts_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cpp_srvcli__srv__AddThreeInts_Response * data = NULL;

  if (size) {
    data = (cpp_srvcli__srv__AddThreeInts_Response *)allocator.zero_allocate(size, sizeof(cpp_srvcli__srv__AddThreeInts_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cpp_srvcli__srv__AddThreeInts_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cpp_srvcli__srv__AddThreeInts_Response__fini(&data[i - 1]);
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
cpp_srvcli__srv__AddThreeInts_Response__Sequence__fini(cpp_srvcli__srv__AddThreeInts_Response__Sequence * array)
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
      cpp_srvcli__srv__AddThreeInts_Response__fini(&array->data[i]);
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

cpp_srvcli__srv__AddThreeInts_Response__Sequence *
cpp_srvcli__srv__AddThreeInts_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cpp_srvcli__srv__AddThreeInts_Response__Sequence * array = (cpp_srvcli__srv__AddThreeInts_Response__Sequence *)allocator.allocate(sizeof(cpp_srvcli__srv__AddThreeInts_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = cpp_srvcli__srv__AddThreeInts_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
cpp_srvcli__srv__AddThreeInts_Response__Sequence__destroy(cpp_srvcli__srv__AddThreeInts_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    cpp_srvcli__srv__AddThreeInts_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
cpp_srvcli__srv__AddThreeInts_Response__Sequence__are_equal(const cpp_srvcli__srv__AddThreeInts_Response__Sequence * lhs, const cpp_srvcli__srv__AddThreeInts_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!cpp_srvcli__srv__AddThreeInts_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
cpp_srvcli__srv__AddThreeInts_Response__Sequence__copy(
  const cpp_srvcli__srv__AddThreeInts_Response__Sequence * input,
  cpp_srvcli__srv__AddThreeInts_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(cpp_srvcli__srv__AddThreeInts_Response);
    cpp_srvcli__srv__AddThreeInts_Response * data =
      (cpp_srvcli__srv__AddThreeInts_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!cpp_srvcli__srv__AddThreeInts_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          cpp_srvcli__srv__AddThreeInts_Response__fini(&data[i]);
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
    if (!cpp_srvcli__srv__AddThreeInts_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}