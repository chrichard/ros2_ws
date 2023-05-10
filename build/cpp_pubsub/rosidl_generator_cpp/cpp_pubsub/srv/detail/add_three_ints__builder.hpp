// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cpp_pubsub:srv/AddThreeInts.idl
// generated code does not contain a copyright notice

#ifndef CPP_PUBSUB__SRV__DETAIL__ADD_THREE_INTS__BUILDER_HPP_
#define CPP_PUBSUB__SRV__DETAIL__ADD_THREE_INTS__BUILDER_HPP_

#include "cpp_pubsub/srv/detail/add_three_ints__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace cpp_pubsub
{

namespace srv
{

namespace builder
{

class Init_AddThreeInts_Request_c
{
public:
  explicit Init_AddThreeInts_Request_c(::cpp_pubsub::srv::AddThreeInts_Request & msg)
  : msg_(msg)
  {}
  ::cpp_pubsub::srv::AddThreeInts_Request c(::cpp_pubsub::srv::AddThreeInts_Request::_c_type arg)
  {
    msg_.c = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cpp_pubsub::srv::AddThreeInts_Request msg_;
};

class Init_AddThreeInts_Request_b
{
public:
  explicit Init_AddThreeInts_Request_b(::cpp_pubsub::srv::AddThreeInts_Request & msg)
  : msg_(msg)
  {}
  Init_AddThreeInts_Request_c b(::cpp_pubsub::srv::AddThreeInts_Request::_b_type arg)
  {
    msg_.b = std::move(arg);
    return Init_AddThreeInts_Request_c(msg_);
  }

private:
  ::cpp_pubsub::srv::AddThreeInts_Request msg_;
};

class Init_AddThreeInts_Request_a
{
public:
  Init_AddThreeInts_Request_a()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AddThreeInts_Request_b a(::cpp_pubsub::srv::AddThreeInts_Request::_a_type arg)
  {
    msg_.a = std::move(arg);
    return Init_AddThreeInts_Request_b(msg_);
  }

private:
  ::cpp_pubsub::srv::AddThreeInts_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::cpp_pubsub::srv::AddThreeInts_Request>()
{
  return cpp_pubsub::srv::builder::Init_AddThreeInts_Request_a();
}

}  // namespace cpp_pubsub


namespace cpp_pubsub
{

namespace srv
{

namespace builder
{

class Init_AddThreeInts_Response_sum
{
public:
  Init_AddThreeInts_Response_sum()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::cpp_pubsub::srv::AddThreeInts_Response sum(::cpp_pubsub::srv::AddThreeInts_Response::_sum_type arg)
  {
    msg_.sum = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cpp_pubsub::srv::AddThreeInts_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::cpp_pubsub::srv::AddThreeInts_Response>()
{
  return cpp_pubsub::srv::builder::Init_AddThreeInts_Response_sum();
}

}  // namespace cpp_pubsub

#endif  // CPP_PUBSUB__SRV__DETAIL__ADD_THREE_INTS__BUILDER_HPP_
