// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from cpp_srvcli:msg/Num.idl
// generated code does not contain a copyright notice

#ifndef CPP_SRVCLI__MSG__DETAIL__NUM__TRAITS_HPP_
#define CPP_SRVCLI__MSG__DETAIL__NUM__TRAITS_HPP_

#include "cpp_srvcli/msg/detail/num__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cpp_srvcli::msg::Num>()
{
  return "cpp_srvcli::msg::Num";
}

template<>
inline const char * name<cpp_srvcli::msg::Num>()
{
  return "cpp_srvcli/msg/Num";
}

template<>
struct has_fixed_size<cpp_srvcli::msg::Num>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<cpp_srvcli::msg::Num>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<cpp_srvcli::msg::Num>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CPP_SRVCLI__MSG__DETAIL__NUM__TRAITS_HPP_
