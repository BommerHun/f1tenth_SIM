// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from drive_bridge_msg:msg/InputValues.idl
// generated code does not contain a copyright notice

#ifndef DRIVE_BRIDGE_MSG__MSG__DETAIL__INPUT_VALUES__FUNCTIONS_H_
#define DRIVE_BRIDGE_MSG__MSG__DETAIL__INPUT_VALUES__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "drive_bridge_msg/msg/rosidl_generator_c__visibility_control.h"

#include "drive_bridge_msg/msg/detail/input_values__struct.h"

/// Initialize msg/InputValues message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * drive_bridge_msg__msg__InputValues
 * )) before or use
 * drive_bridge_msg__msg__InputValues__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_drive_bridge_msg
bool
drive_bridge_msg__msg__InputValues__init(drive_bridge_msg__msg__InputValues * msg);

/// Finalize msg/InputValues message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_drive_bridge_msg
void
drive_bridge_msg__msg__InputValues__fini(drive_bridge_msg__msg__InputValues * msg);

/// Create msg/InputValues message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * drive_bridge_msg__msg__InputValues__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_drive_bridge_msg
drive_bridge_msg__msg__InputValues *
drive_bridge_msg__msg__InputValues__create();

/// Destroy msg/InputValues message.
/**
 * It calls
 * drive_bridge_msg__msg__InputValues__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_drive_bridge_msg
void
drive_bridge_msg__msg__InputValues__destroy(drive_bridge_msg__msg__InputValues * msg);

/// Check for msg/InputValues message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_drive_bridge_msg
bool
drive_bridge_msg__msg__InputValues__are_equal(const drive_bridge_msg__msg__InputValues * lhs, const drive_bridge_msg__msg__InputValues * rhs);

/// Copy a msg/InputValues message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_drive_bridge_msg
bool
drive_bridge_msg__msg__InputValues__copy(
  const drive_bridge_msg__msg__InputValues * input,
  drive_bridge_msg__msg__InputValues * output);

/// Initialize array of msg/InputValues messages.
/**
 * It allocates the memory for the number of elements and calls
 * drive_bridge_msg__msg__InputValues__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_drive_bridge_msg
bool
drive_bridge_msg__msg__InputValues__Sequence__init(drive_bridge_msg__msg__InputValues__Sequence * array, size_t size);

/// Finalize array of msg/InputValues messages.
/**
 * It calls
 * drive_bridge_msg__msg__InputValues__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_drive_bridge_msg
void
drive_bridge_msg__msg__InputValues__Sequence__fini(drive_bridge_msg__msg__InputValues__Sequence * array);

/// Create array of msg/InputValues messages.
/**
 * It allocates the memory for the array and calls
 * drive_bridge_msg__msg__InputValues__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_drive_bridge_msg
drive_bridge_msg__msg__InputValues__Sequence *
drive_bridge_msg__msg__InputValues__Sequence__create(size_t size);

/// Destroy array of msg/InputValues messages.
/**
 * It calls
 * drive_bridge_msg__msg__InputValues__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_drive_bridge_msg
void
drive_bridge_msg__msg__InputValues__Sequence__destroy(drive_bridge_msg__msg__InputValues__Sequence * array);

/// Check for msg/InputValues message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_drive_bridge_msg
bool
drive_bridge_msg__msg__InputValues__Sequence__are_equal(const drive_bridge_msg__msg__InputValues__Sequence * lhs, const drive_bridge_msg__msg__InputValues__Sequence * rhs);

/// Copy an array of msg/InputValues messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_drive_bridge_msg
bool
drive_bridge_msg__msg__InputValues__Sequence__copy(
  const drive_bridge_msg__msg__InputValues__Sequence * input,
  drive_bridge_msg__msg__InputValues__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // DRIVE_BRIDGE_MSG__MSG__DETAIL__INPUT_VALUES__FUNCTIONS_H_
