// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cpp_srvcli:msg/Sphere.idl
// generated code does not contain a copyright notice

#ifndef CPP_SRVCLI__MSG__DETAIL__SPHERE__BUILDER_HPP_
#define CPP_SRVCLI__MSG__DETAIL__SPHERE__BUILDER_HPP_

#include "cpp_srvcli/msg/detail/sphere__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace cpp_srvcli
{

namespace msg
{

namespace builder
{

class Init_Sphere_radius
{
public:
  explicit Init_Sphere_radius(::cpp_srvcli::msg::Sphere & msg)
  : msg_(msg)
  {}
  ::cpp_srvcli::msg::Sphere radius(::cpp_srvcli::msg::Sphere::_radius_type arg)
  {
    msg_.radius = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cpp_srvcli::msg::Sphere msg_;
};

class Init_Sphere_center
{
public:
  Init_Sphere_center()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Sphere_radius center(::cpp_srvcli::msg::Sphere::_center_type arg)
  {
    msg_.center = std::move(arg);
    return Init_Sphere_radius(msg_);
  }

private:
  ::cpp_srvcli::msg::Sphere msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::cpp_srvcli::msg::Sphere>()
{
  return cpp_srvcli::msg::builder::Init_Sphere_center();
}

}  // namespace cpp_srvcli

#endif  // CPP_SRVCLI__MSG__DETAIL__SPHERE__BUILDER_HPP_
