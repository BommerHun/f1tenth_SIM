// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from drive_bridge_msg:msg/InputValues.idl
// generated code does not contain a copyright notice

#ifndef DRIVE_BRIDGE_MSG__MSG__DETAIL__INPUT_VALUES__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define DRIVE_BRIDGE_MSG__MSG__DETAIL__INPUT_VALUES__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "drive_bridge_msg/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "drive_bridge_msg/msg/detail/input_values__struct.hpp"

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

namespace drive_bridge_msg
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_drive_bridge_msg
cdr_serialize(
  const drive_bridge_msg::msg::InputValues & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_drive_bridge_msg
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  drive_bridge_msg::msg::InputValues & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_drive_bridge_msg
get_serialized_size(
  const drive_bridge_msg::msg::InputValues & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_drive_bridge_msg
max_serialized_size_InputValues(
  bool & full_bounded,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace drive_bridge_msg

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_drive_bridge_msg
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, drive_bridge_msg, msg, InputValues)();

#ifdef __cplusplus
}
#endif

#endif  // DRIVE_BRIDGE_MSG__MSG__DETAIL__INPUT_VALUES__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
