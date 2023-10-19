// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from drive_bridge_msg:msg/InputValues.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "drive_bridge_msg/msg/detail/input_values__rosidl_typesupport_introspection_c.h"
#include "drive_bridge_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "drive_bridge_msg/msg/detail/input_values__functions.h"
#include "drive_bridge_msg/msg/detail/input_values__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void InputValues__rosidl_typesupport_introspection_c__InputValues_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  drive_bridge_msg__msg__InputValues__init(message_memory);
}

void InputValues__rosidl_typesupport_introspection_c__InputValues_fini_function(void * message_memory)
{
  drive_bridge_msg__msg__InputValues__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember InputValues__rosidl_typesupport_introspection_c__InputValues_message_member_array[2] = {
  {
    "delta",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(drive_bridge_msg__msg__InputValues, delta),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "d",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(drive_bridge_msg__msg__InputValues, d),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers InputValues__rosidl_typesupport_introspection_c__InputValues_message_members = {
  "drive_bridge_msg__msg",  // message namespace
  "InputValues",  // message name
  2,  // number of fields
  sizeof(drive_bridge_msg__msg__InputValues),
  InputValues__rosidl_typesupport_introspection_c__InputValues_message_member_array,  // message members
  InputValues__rosidl_typesupport_introspection_c__InputValues_init_function,  // function to initialize message memory (memory has to be allocated)
  InputValues__rosidl_typesupport_introspection_c__InputValues_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t InputValues__rosidl_typesupport_introspection_c__InputValues_message_type_support_handle = {
  0,
  &InputValues__rosidl_typesupport_introspection_c__InputValues_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_drive_bridge_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, drive_bridge_msg, msg, InputValues)() {
  if (!InputValues__rosidl_typesupport_introspection_c__InputValues_message_type_support_handle.typesupport_identifier) {
    InputValues__rosidl_typesupport_introspection_c__InputValues_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &InputValues__rosidl_typesupport_introspection_c__InputValues_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
