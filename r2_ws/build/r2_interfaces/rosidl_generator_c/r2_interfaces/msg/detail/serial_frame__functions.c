// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from r2_interfaces:msg/SerialFrame.idl
// generated code does not contain a copyright notice
#include "r2_interfaces/msg/detail/serial_frame__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `payload`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
r2_interfaces__msg__SerialFrame__init(r2_interfaces__msg__SerialFrame * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    r2_interfaces__msg__SerialFrame__fini(msg);
    return false;
  }
  // device_id
  // cmd_id
  // payload
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->payload, 0)) {
    r2_interfaces__msg__SerialFrame__fini(msg);
    return false;
  }
  // crc8
  return true;
}

void
r2_interfaces__msg__SerialFrame__fini(r2_interfaces__msg__SerialFrame * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // device_id
  // cmd_id
  // payload
  rosidl_runtime_c__uint8__Sequence__fini(&msg->payload);
  // crc8
}

bool
r2_interfaces__msg__SerialFrame__are_equal(const r2_interfaces__msg__SerialFrame * lhs, const r2_interfaces__msg__SerialFrame * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // device_id
  if (lhs->device_id != rhs->device_id) {
    return false;
  }
  // cmd_id
  if (lhs->cmd_id != rhs->cmd_id) {
    return false;
  }
  // payload
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->payload), &(rhs->payload)))
  {
    return false;
  }
  // crc8
  if (lhs->crc8 != rhs->crc8) {
    return false;
  }
  return true;
}

bool
r2_interfaces__msg__SerialFrame__copy(
  const r2_interfaces__msg__SerialFrame * input,
  r2_interfaces__msg__SerialFrame * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // device_id
  output->device_id = input->device_id;
  // cmd_id
  output->cmd_id = input->cmd_id;
  // payload
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->payload), &(output->payload)))
  {
    return false;
  }
  // crc8
  output->crc8 = input->crc8;
  return true;
}

r2_interfaces__msg__SerialFrame *
r2_interfaces__msg__SerialFrame__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  r2_interfaces__msg__SerialFrame * msg = (r2_interfaces__msg__SerialFrame *)allocator.allocate(sizeof(r2_interfaces__msg__SerialFrame), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(r2_interfaces__msg__SerialFrame));
  bool success = r2_interfaces__msg__SerialFrame__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
r2_interfaces__msg__SerialFrame__destroy(r2_interfaces__msg__SerialFrame * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    r2_interfaces__msg__SerialFrame__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
r2_interfaces__msg__SerialFrame__Sequence__init(r2_interfaces__msg__SerialFrame__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  r2_interfaces__msg__SerialFrame * data = NULL;

  if (size) {
    data = (r2_interfaces__msg__SerialFrame *)allocator.zero_allocate(size, sizeof(r2_interfaces__msg__SerialFrame), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = r2_interfaces__msg__SerialFrame__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        r2_interfaces__msg__SerialFrame__fini(&data[i - 1]);
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
r2_interfaces__msg__SerialFrame__Sequence__fini(r2_interfaces__msg__SerialFrame__Sequence * array)
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
      r2_interfaces__msg__SerialFrame__fini(&array->data[i]);
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

r2_interfaces__msg__SerialFrame__Sequence *
r2_interfaces__msg__SerialFrame__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  r2_interfaces__msg__SerialFrame__Sequence * array = (r2_interfaces__msg__SerialFrame__Sequence *)allocator.allocate(sizeof(r2_interfaces__msg__SerialFrame__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = r2_interfaces__msg__SerialFrame__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
r2_interfaces__msg__SerialFrame__Sequence__destroy(r2_interfaces__msg__SerialFrame__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    r2_interfaces__msg__SerialFrame__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
r2_interfaces__msg__SerialFrame__Sequence__are_equal(const r2_interfaces__msg__SerialFrame__Sequence * lhs, const r2_interfaces__msg__SerialFrame__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!r2_interfaces__msg__SerialFrame__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
r2_interfaces__msg__SerialFrame__Sequence__copy(
  const r2_interfaces__msg__SerialFrame__Sequence * input,
  r2_interfaces__msg__SerialFrame__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(r2_interfaces__msg__SerialFrame);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    r2_interfaces__msg__SerialFrame * data =
      (r2_interfaces__msg__SerialFrame *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!r2_interfaces__msg__SerialFrame__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          r2_interfaces__msg__SerialFrame__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!r2_interfaces__msg__SerialFrame__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
