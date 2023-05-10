// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cpp_srvcli:msg/Num.idl
// generated code does not contain a copyright notice

#ifndef CPP_SRVCLI__MSG__DETAIL__NUM__BUILDER_HPP_
#define CPP_SRVCLI__MSG__DETAIL__NUM__BUILDER_HPP_

#include "cpp_srvcli/msg/detail/num__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace cpp_srvcli
{

namespace msg
{

namespace builder
{

class Init_Num_num
{
public:
  Init_Num_num()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::cpp_srvcli::msg::Num num(::cpp_srvcli::msg::Num::_num_type arg)
  {
    msg_.num = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cpp_srvcli::msg::Num msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::cpp_srvcli::msg::Num>()
{
  return cpp_srvcli::msg::builder::Init_Num_num();
}

}  // namespace cpp_srvcli

#endif  // CPP_SRVCLI__MSG__DETAIL__NUM__BUILDER_HPP_
