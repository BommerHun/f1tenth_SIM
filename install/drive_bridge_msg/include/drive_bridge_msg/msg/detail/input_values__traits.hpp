// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from drive_bridge_msg:msg/InputValues.idl
// generated code does not contain a copyright notice

#ifndef DRIVE_BRIDGE_MSG__MSG__DETAIL__INPUT_VALUES__TRAITS_HPP_
#define DRIVE_BRIDGE_MSG__MSG__DETAIL__INPUT_VALUES__TRAITS_HPP_

#include "drive_bridge_msg/msg/detail/input_values__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<drive_bridge_msg::msg::InputValues>()
{
  return "drive_bridge_msg::msg::InputValues";
}

template<>
inline const char * name<drive_bridge_msg::msg::InputValues>()
{
  return "drive_bridge_msg/msg/InputValues";
}

template<>
struct has_fixed_size<drive_bridge_msg::msg::InputValues>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<drive_bridge_msg::msg::InputValues>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<drive_bridge_msg::msg::InputValues>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DRIVE_BRIDGE_MSG__MSG__DETAIL__INPUT_VALUES__TRAITS_HPP_
