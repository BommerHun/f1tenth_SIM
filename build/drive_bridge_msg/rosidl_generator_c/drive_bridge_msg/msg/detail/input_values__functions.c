// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from drive_bridge_msg:msg/InputValues.idl
// generated code does not contain a copyright notice
#include "drive_bridge_msg/msg/detail/input_values__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
drive_bridge_msg__msg__InputValues__init(drive_bridge_msg__msg__InputValues * msg)
{
  if (!msg) {
    return false;
  }
  // delta
  // d
  return true;
}

void
drive_bridge_msg__msg__InputValues__fini(drive_bridge_msg__msg__InputValues * msg)
{
  if (!msg) {
    return;
  }
  // delta
  // d
}

bool
drive_bridge_msg__msg__InputValues__are_equal(const drive_bridge_msg__msg__InputValues * lhs, const drive_bridge_msg__msg__InputValues * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // delta
  if (lhs->delta != rhs->delta) {
    return false;
  }
  // d
  if (lhs->d != rhs->d) {
    return false;
  }
  return true;
}

bool
drive_bridge_msg__msg__InputValues__copy(
  const drive_bridge_msg__msg__InputValues * input,
  drive_bridge_msg__msg__InputValues * output)
{
  if (!input || !output) {
    return false;
  }
  // delta
  output->delta = input->delta;
  // d
  output->d = input->d;
  return true;
}

drive_bridge_msg__msg__InputValues *
drive_bridge_msg__msg__InputValues__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  drive_bridge_msg__msg__InputValues * msg = (drive_bridge_msg__msg__InputValues *)allocator.allocate(sizeof(drive_bridge_msg__msg__InputValues), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(drive_bridge_msg__msg__InputValues));
  bool success = drive_bridge_msg__msg__InputValues__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
drive_bridge_msg__msg__InputValues__destroy(drive_bridge_msg__msg__InputValues * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    drive_bridge_msg__msg__InputValues__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
drive_bridge_msg__msg__InputValues__Sequence__init(drive_bridge_msg__msg__InputValues__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  drive_bridge_msg__msg__InputValues * data = NULL;

  if (size) {
    data = (drive_bridge_msg__msg__InputValues *)allocator.zero_allocate(size, sizeof(drive_bridge_msg__msg__InputValues), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = drive_bridge_msg__msg__InputValues__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        drive_bridge_msg__msg__InputValues__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
drive_bridge_msg__msg__InputValues__Sequence__fini(drive_bridge_msg__msg__InputValues__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      drive_bridge_msg__msg__InputValues__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

drive_bridge_msg__msg__InputValues__Sequence *
drive_bridge_msg__msg__InputValues__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  drive_bridge_msg__msg__InputValues__Sequence * array = (drive_bridge_msg__msg__InputValues__Sequence *)allocator.allocate(sizeof(drive_bridge_msg__msg__InputValues__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = drive_bridge_msg__msg__InputValues__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
drive_bridge_msg__msg__InputValues__Sequence__destroy(drive_bridge_msg__msg__InputValues__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    drive_bridge_msg__msg__InputValues__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
drive_bridge_msg__msg__InputValues__Sequence__are_equal(const drive_bridge_msg__msg__InputValues__Sequence * lhs, const drive_bridge_msg__msg__InputValues__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!drive_bridge_msg__msg__InputValues__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
drive_bridge_msg__msg__InputValues__Sequence__copy(
  const drive_bridge_msg__msg__InputValues__Sequence * input,
  drive_bridge_msg__msg__InputValues__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(drive_bridge_msg__msg__InputValues);
    drive_bridge_msg__msg__InputValues * data =
      (drive_bridge_msg__msg__InputValues *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!drive_bridge_msg__msg__InputValues__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          drive_bridge_msg__msg__InputValues__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!drive_bridge_msg__msg__InputValues__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
