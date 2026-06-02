// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from r2_interfaces:msg/ChassisCmd.idl
// generated code does not contain a copyright notice
#include "r2_interfaces/msg/detail/chassis_cmd__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
r2_interfaces__msg__ChassisCmd__init(r2_interfaces__msg__ChassisCmd * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    r2_interfaces__msg__ChassisCmd__fini(msg);
    return false;
  }
  // vx
  // vy
  // omega
  // estop
  return true;
}

void
r2_interfaces__msg__ChassisCmd__fini(r2_interfaces__msg__ChassisCmd * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // vx
  // vy
  // omega
  // estop
}

bool
r2_interfaces__msg__ChassisCmd__are_equal(const r2_interfaces__msg__ChassisCmd * lhs, const r2_interfaces__msg__ChassisCmd * rhs)
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
  // vx
  if (lhs->vx != rhs->vx) {
    return false;
  }
  // vy
  if (lhs->vy != rhs->vy) {
    return false;
  }
  // omega
  if (lhs->omega != rhs->omega) {
    return false;
  }
  // estop
  if (lhs->estop != rhs->estop) {
    return false;
  }
  return true;
}

bool
r2_interfaces__msg__ChassisCmd__copy(
  const r2_interfaces__msg__ChassisCmd * input,
  r2_interfaces__msg__ChassisCmd * output)
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
  // vx
  output->vx = input->vx;
  // vy
  output->vy = input->vy;
  // omega
  output->omega = input->omega;
  // estop
  output->estop = input->estop;
  return true;
}

r2_interfaces__msg__ChassisCmd *
r2_interfaces__msg__ChassisCmd__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  r2_interfaces__msg__ChassisCmd * msg = (r2_interfaces__msg__ChassisCmd *)allocator.allocate(sizeof(r2_interfaces__msg__ChassisCmd), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(r2_interfaces__msg__ChassisCmd));
  bool success = r2_interfaces__msg__ChassisCmd__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
r2_interfaces__msg__ChassisCmd__destroy(r2_interfaces__msg__ChassisCmd * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    r2_interfaces__msg__ChassisCmd__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
r2_interfaces__msg__ChassisCmd__Sequence__init(r2_interfaces__msg__ChassisCmd__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  r2_interfaces__msg__ChassisCmd * data = NULL;

  if (size) {
    data = (r2_interfaces__msg__ChassisCmd *)allocator.zero_allocate(size, sizeof(r2_interfaces__msg__ChassisCmd), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = r2_interfaces__msg__ChassisCmd__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        r2_interfaces__msg__ChassisCmd__fini(&data[i - 1]);
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
r2_interfaces__msg__ChassisCmd__Sequence__fini(r2_interfaces__msg__ChassisCmd__Sequence * array)
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
      r2_interfaces__msg__ChassisCmd__fini(&array->data[i]);
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

r2_interfaces__msg__ChassisCmd__Sequence *
r2_interfaces__msg__ChassisCmd__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  r2_interfaces__msg__ChassisCmd__Sequence * array = (r2_interfaces__msg__ChassisCmd__Sequence *)allocator.allocate(sizeof(r2_interfaces__msg__ChassisCmd__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = r2_interfaces__msg__ChassisCmd__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
r2_interfaces__msg__ChassisCmd__Sequence__destroy(r2_interfaces__msg__ChassisCmd__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    r2_interfaces__msg__ChassisCmd__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
r2_interfaces__msg__ChassisCmd__Sequence__are_equal(const r2_interfaces__msg__ChassisCmd__Sequence * lhs, const r2_interfaces__msg__ChassisCmd__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!r2_interfaces__msg__ChassisCmd__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
r2_interfaces__msg__ChassisCmd__Sequence__copy(
  const r2_interfaces__msg__ChassisCmd__Sequence * input,
  r2_interfaces__msg__ChassisCmd__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(r2_interfaces__msg__ChassisCmd);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    r2_interfaces__msg__ChassisCmd * data =
      (r2_interfaces__msg__ChassisCmd *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!r2_interfaces__msg__ChassisCmd__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          r2_interfaces__msg__ChassisCmd__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!r2_interfaces__msg__ChassisCmd__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
