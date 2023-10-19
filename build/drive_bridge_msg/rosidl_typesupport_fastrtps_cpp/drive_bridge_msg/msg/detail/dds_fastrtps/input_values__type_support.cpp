// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from drive_bridge_msg:msg/InputValues.idl
// generated code does not contain a copyright notice
#include "drive_bridge_msg/msg/detail/input_values__rosidl_typesupport_fastrtps_cpp.hpp"
#include "drive_bridge_msg/msg/detail/input_values__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

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
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: delta
  cdr << ros_message.delta;
  // Member: d
  cdr << ros_message.d;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_drive_bridge_msg
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  drive_bridge_msg::msg::InputValues & ros_message)
{
  // Member: delta
  cdr >> ros_message.delta;

  // Member: d
  cdr >> ros_message.d;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_drive_bridge_msg
get_serialized_size(
  const drive_bridge_msg::msg::InputValues & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: delta
  {
    size_t item_size = sizeof(ros_message.delta);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: d
  {
    size_t item_size = sizeof(ros_message.d);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_drive_bridge_msg
max_serialized_size_InputValues(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: delta
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: d
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static bool _InputValues__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const drive_bridge_msg::msg::InputValues *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _InputValues__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<drive_bridge_msg::msg::InputValues *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _InputValues__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const drive_bridge_msg::msg::InputValues *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _InputValues__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_InputValues(full_bounded, 0);
}

static message_type_support_callbacks_t _InputValues__callbacks = {
  "drive_bridge_msg::msg",
  "InputValues",
  _InputValues__cdr_serialize,
  _InputValues__cdr_deserialize,
  _InputValues__get_serialized_size,
  _InputValues__max_serialized_size
};

static rosidl_message_type_support_t _InputValues__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_InputValues__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace drive_bridge_msg

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_drive_bridge_msg
const rosidl_message_type_support_t *
get_message_type_support_handle<drive_bridge_msg::msg::InputValues>()
{
  return &drive_bridge_msg::msg::typesupport_fastrtps_cpp::_InputValues__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, drive_bridge_msg, msg, InputValues)() {
  return &drive_bridge_msg::msg::typesupport_fastrtps_cpp::_InputValues__handle;
}

#ifdef __cplusplus
}
#endif
