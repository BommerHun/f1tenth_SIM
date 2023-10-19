// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from drive_bridge_msg:msg/InputValues.idl
// generated code does not contain a copyright notice

#ifndef DRIVE_BRIDGE_MSG__MSG__DETAIL__INPUT_VALUES__STRUCT_H_
#define DRIVE_BRIDGE_MSG__MSG__DETAIL__INPUT_VALUES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/InputValues in the package drive_bridge_msg.
typedef struct drive_bridge_msg__msg__InputValues
{
  double delta;
  double d;
} drive_bridge_msg__msg__InputValues;

// Struct for a sequence of drive_bridge_msg__msg__InputValues.
typedef struct drive_bridge_msg__msg__InputValues__Sequence
{
  drive_bridge_msg__msg__InputValues * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} drive_bridge_msg__msg__InputValues__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DRIVE_BRIDGE_MSG__MSG__DETAIL__INPUT_VALUES__STRUCT_H_
