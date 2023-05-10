// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cpp_pubsub:msg/Num.idl
// generated code does not contain a copyright notice

#ifndef CPP_PUBSUB__MSG__DETAIL__NUM__STRUCT_H_
#define CPP_PUBSUB__MSG__DETAIL__NUM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/Num in the package cpp_pubsub.
typedef struct cpp_pubsub__msg__Num
{
  int64_t num;
} cpp_pubsub__msg__Num;

// Struct for a sequence of cpp_pubsub__msg__Num.
typedef struct cpp_pubsub__msg__Num__Sequence
{
  cpp_pubsub__msg__Num * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cpp_pubsub__msg__Num__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CPP_PUBSUB__MSG__DETAIL__NUM__STRUCT_H_