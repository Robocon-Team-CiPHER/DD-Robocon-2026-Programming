// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from r2_interfaces:msg/SystemStatus.idl
// generated code does not contain a copyright notice
#include "r2_interfaces/msg/detail/system_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `mission_state`
// Member `warnings`
#include "rosidl_runtime_c/string_functions.h"

bool
r2_interfaces__msg__SystemStatus__init(r2_interfaces__msg__SystemStatus * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    r2_interfaces__msg__SystemStatus__fini(msg);
    return false;
  }
  // rpi_ok
  // esp32_ok
  // arduino_ok
  // cameras_ok
  // encoders_ok
  // mission_state
  if (!rosidl_runtime_c__String__init(&msg->mission_state)) {
    r2_interfaces__msg__SystemStatus__fini(msg);
    return false;
  }
  // warnings
  if (!rosidl_runtime_c__String__Sequence__init(&msg->warnings, 0)) {
    r2_interfaces__msg__SystemStatus__fini(msg);
    return false;
  }
  return true;
}

void
r2_interfaces__msg__SystemStatus__fini(r2_interfaces__msg__SystemStatus * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // rpi_ok
  // esp32_ok
  // arduino_ok
  // cameras_ok
  // encoders_ok
  // mission_state
  rosidl_runtime_c__String__fini(&msg->mission_state);
  // warnings
  rosidl_runtime_c__String__Sequence__fini(&msg->warnings);
}

bool
r2_interfaces__msg__SystemStatus__are_equal(const r2_interfaces__msg__SystemStatus * lhs, const r2_interfaces__msg__SystemStatus * rhs)
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
  // rpi_ok
  if (lhs->rpi_ok != rhs->rpi_ok) {
    return false;
  }
  // esp32_ok
  if (lhs->esp32_ok != rhs->esp32_ok) {
    return false;
  }
  // arduino_ok
  if (lhs->arduino_ok != rhs->arduino_ok) {
    return false;
  }
  // cameras_ok
  if (lhs->cameras_ok != rhs->cameras_ok) {
    return false;
  }
  // encoders_ok
  if (lhs->encoders_ok != rhs->encoders_ok) {
    return false;
  }
  // mission_state
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->mission_state), &(rhs->mission_state)))
  {
    return false;
  }
  // warnings
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->warnings), &(rhs->warnings)))
  {
    return false;
  }
  return true;
}

bool
r2_interfaces__msg__SystemStatus__copy(
  const r2_interfaces__msg__SystemStatus * input,
  r2_interfaces__msg__SystemStatus * output)
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
  // rpi_ok
  output->rpi_ok = input->rpi_ok;
  // esp32_ok
  output->esp32_ok = input->esp32_ok;
  // arduino_ok
  output->arduino_ok = input->arduino_ok;
  // cameras_ok
  output->cameras_ok = input->cameras_ok;
  // encoders_ok
  output->encoders_ok = input->encoders_ok;
  // mission_state
  if (!rosidl_runtime_c__String__copy(
      &(input->mission_state), &(output->mission_state)))
  {
    return false;
  }
  // warnings
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->warnings), &(output->warnings)))
  {
    return false;
  }
  return true;
}

r2_interfaces__msg__SystemStatus *
r2_interfaces__msg__SystemStatus__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  r2_interfaces__msg__SystemStatus * msg = (r2_interfaces__msg__SystemStatus *)allocator.allocate(sizeof(r2_interfaces__msg__SystemStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(r2_interfaces__msg__SystemStatus));
  bool success = r2_interfaces__msg__SystemStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
r2_interfaces__msg__SystemStatus__destroy(r2_interfaces__msg__SystemStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    r2_interfaces__msg__SystemStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
r2_interfaces__msg__SystemStatus__Sequence__init(r2_interfaces__msg__SystemStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  r2_interfaces__msg__SystemStatus * data = NULL;

  if (size) {
    data = (r2_interfaces__msg__SystemStatus *)allocator.zero_allocate(size, sizeof(r2_interfaces__msg__SystemStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = r2_interfaces__msg__SystemStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        r2_interfaces__msg__SystemStatus__fini(&data[i - 1]);
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
r2_interfaces__msg__SystemStatus__Sequence__fini(r2_interfaces__msg__SystemStatus__Sequence * array)
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
      r2_interfaces__msg__SystemStatus__fini(&array->data[i]);
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

r2_interfaces__msg__SystemStatus__Sequence *
r2_interfaces__msg__SystemStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  r2_interfaces__msg__SystemStatus__Sequence * array = (r2_interfaces__msg__SystemStatus__Sequence *)allocator.allocate(sizeof(r2_interfaces__msg__SystemStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = r2_interfaces__msg__SystemStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
r2_interfaces__msg__SystemStatus__Sequence__destroy(r2_interfaces__msg__SystemStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    r2_interfaces__msg__SystemStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
r2_interfaces__msg__SystemStatus__Sequence__are_equal(const r2_interfaces__msg__SystemStatus__Sequence * lhs, const r2_interfaces__msg__SystemStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!r2_interfaces__msg__SystemStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
r2_interfaces__msg__SystemStatus__Sequence__copy(
  const r2_interfaces__msg__SystemStatus__Sequence * input,
  r2_interfaces__msg__SystemStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(r2_interfaces__msg__SystemStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    r2_interfaces__msg__SystemStatus * data =
      (r2_interfaces__msg__SystemStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!r2_interfaces__msg__SystemStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          r2_interfaces__msg__SystemStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!r2_interfaces__msg__SystemStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
