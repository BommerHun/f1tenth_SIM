// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from drive_bridge_msg:msg/InputValues.idl
// generated code does not contain a copyright notice

#ifndef DRIVE_BRIDGE_MSG__MSG__DETAIL__INPUT_VALUES__BUILDER_HPP_
#define DRIVE_BRIDGE_MSG__MSG__DETAIL__INPUT_VALUES__BUILDER_HPP_

#include "drive_bridge_msg/msg/detail/input_values__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace drive_bridge_msg
{

namespace msg
{

namespace builder
{

class Init_InputValues_d
{
public:
  explicit Init_InputValues_d(::drive_bridge_msg::msg::InputValues & msg)
  : msg_(msg)
  {}
  ::drive_bridge_msg::msg::InputValues d(::drive_bridge_msg::msg::InputValues::_d_type arg)
  {
    msg_.d = std::move(arg);
    return std::move(msg_);
  }

private:
  ::drive_bridge_msg::msg::InputValues msg_;
};

class Init_InputValues_delta
{
public:
  Init_InputValues_delta()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_InputValues_d delta(::drive_bridge_msg::msg::InputValues::_delta_type arg)
  {
    msg_.delta = std::move(arg);
    return Init_InputValues_d(msg_);
  }

private:
  ::drive_bridge_msg::msg::InputValues msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::drive_bridge_msg::msg::InputValues>()
{
  return drive_bridge_msg::msg::builder::Init_InputValues_delta();
}

}  // namespace drive_bridge_msg

#endif  // DRIVE_BRIDGE_MSG__MSG__DETAIL__INPUT_VALUES__BUILDER_HPP_
