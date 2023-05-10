// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from cpp_srvcli:srv/AddThreeInts.idl
// generated code does not contain a copyright notice

#ifndef CPP_SRVCLI__SRV__DETAIL__ADD_THREE_INTS__TRAITS_HPP_
#define CPP_SRVCLI__SRV__DETAIL__ADD_THREE_INTS__TRAITS_HPP_

#include "cpp_srvcli/srv/detail/add_three_ints__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cpp_srvcli::srv::AddThreeInts_Request>()
{
  return "cpp_srvcli::srv::AddThreeInts_Request";
}

template<>
inline const char * name<cpp_srvcli::srv::AddThreeInts_Request>()
{
  return "cpp_srvcli/srv/AddThreeInts_Request";
}

template<>
struct has_fixed_size<cpp_srvcli::srv::AddThreeInts_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<cpp_srvcli::srv::AddThreeInts_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<cpp_srvcli::srv::AddThreeInts_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cpp_srvcli::srv::AddThreeInts_Response>()
{
  return "cpp_srvcli::srv::AddThreeInts_Response";
}

template<>
inline const char * name<cpp_srvcli::srv::AddThreeInts_Response>()
{
  return "cpp_srvcli/srv/AddThreeInts_Response";
}

template<>
struct has_fixed_size<cpp_srvcli::srv::AddThreeInts_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<cpp_srvcli::srv::AddThreeInts_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<cpp_srvcli::srv::AddThreeInts_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cpp_srvcli::srv::AddThreeInts>()
{
  return "cpp_srvcli::srv::AddThreeInts";
}

template<>
inline const char * name<cpp_srvcli::srv::AddThreeInts>()
{
  return "cpp_srvcli/srv/AddThreeInts";
}

template<>
struct has_fixed_size<cpp_srvcli::srv::AddThreeInts>
  : std::integral_constant<
    bool,
    has_fixed_size<cpp_srvcli::srv::AddThreeInts_Request>::value &&
    has_fixed_size<cpp_srvcli::srv::AddThreeInts_Response>::value
  >
{
};

template<>
struct has_bounded_size<cpp_srvcli::srv::AddThreeInts>
  : std::integral_constant<
    bool,
    has_bounded_size<cpp_srvcli::srv::AddThreeInts_Request>::value &&
    has_bounded_size<cpp_srvcli::srv::AddThreeInts_Response>::value
  >
{
};

template<>
struct is_service<cpp_srvcli::srv::AddThreeInts>
  : std::true_type
{
};

template<>
struct is_service_request<cpp_srvcli::srv::AddThreeInts_Request>
  : std::true_type
{
};

template<>
struct is_service_response<cpp_srvcli::srv::AddThreeInts_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CPP_SRVCLI__SRV__DETAIL__ADD_THREE_INTS__TRAITS_HPP_
