// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from drive_bridge_msg:msg/InputValues.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "drive_bridge_msg/msg/rosidl_typesupport_c__visibility_control.h"
#include "drive_bridge_msg/msg/detail/input_values__struct.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace drive_bridge_msg
{

namespace msg
{

namespace rosidl_typesupport_c
{

typedef struct _InputValues_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _InputValues_type_support_ids_t;

static const _InputValues_type_support_ids_t _InputValues_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _InputValues_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _InputValues_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _InputValues_type_support_symbol_names_t _InputValues_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, drive_bridge_msg, msg, InputValues)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, drive_bridge_msg, msg, InputValues)),
  }
};

typedef struct _InputValues_type_support_data_t
{
  void * data[2];
} _InputValues_type_support_data_t;

static _InputValues_type_support_data_t _InputValues_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _InputValues_message_typesupport_map = {
  2,
  "drive_bridge_msg",
  &_InputValues_message_typesupport_ids.typesupport_identifier[0],
  &_InputValues_message_typesupport_symbol_names.symbol_name[0],
  &_InputValues_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t InputValues_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_InputValues_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace msg

}  // namespace drive_bridge_msg

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_drive_bridge_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, drive_bridge_msg, msg, InputValues)() {
  return &::drive_bridge_msg::msg::rosidl_typesupport_c::InputValues_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
