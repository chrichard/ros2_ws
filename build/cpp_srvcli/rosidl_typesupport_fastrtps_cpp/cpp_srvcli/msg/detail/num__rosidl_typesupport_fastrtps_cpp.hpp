// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from cpp_srvcli:msg/Num.idl
// generated code does not contain a copyright notice

#ifndef CPP_SRVCLI__MSG__DETAIL__NUM__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define CPP_SRVCLI__MSG__DETAIL__NUM__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "cpp_srvcli/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "cpp_srvcli/msg/detail/num__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace cpp_srvcli
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cpp_srvcli
cdr_serialize(
  const cpp_srvcli::msg::Num & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cpp_srvcli
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  cpp_srvcli::msg::Num & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cpp_srvcli
get_serialized_size(
  const cpp_srvcli::msg::Num & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cpp_srvcli
max_serialized_size_Num(
  bool & full_bounded,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace cpp_srvcli

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cpp_srvcli
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, cpp_srvcli, msg, Num)();

#ifdef __cplusplus
}
#endif

#endif  // CPP_SRVCLI__MSG__DETAIL__NUM__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_