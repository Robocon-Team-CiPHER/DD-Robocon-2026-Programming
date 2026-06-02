// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from r2_interfaces:msg/DetectionResult.idl
// generated code does not contain a copyright notice
#include "r2_interfaces/msg/detail/detection_result__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `target_type`
#include "rosidl_runtime_c/string_functions.h"
// Member `bounding_box`
#include "sensor_msgs/msg/detail/region_of_interest__functions.h"

bool
r2_interfaces__msg__DetectionResult__init(r2_interfaces__msg__DetectionResult * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    r2_interfaces__msg__DetectionResult__fini(msg);
    return false;
  }
  // target_type
  if (!rosidl_runtime_c__String__init(&msg->target_type)) {
    r2_interfaces__msg__DetectionResult__fini(msg);
    return false;
  }
  // detected
  // distance_mm
  // offset_x_mm
  // offset_y_mm
  // confidence
  // bounding_box
  if (!sensor_msgs__msg__RegionOfInterest__init(&msg->bounding_box)) {
    r2_interfaces__msg__DetectionResult__fini(msg);
    return false;
  }
  return true;
}

void
r2_interfaces__msg__DetectionResult__fini(r2_interfaces__msg__DetectionResult * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // target_type
  rosidl_runtime_c__String__fini(&msg->target_type);
  // detected
  // distance_mm
  // offset_x_mm
  // offset_y_mm
  // confidence
  // bounding_box
  sensor_msgs__msg__RegionOfInterest__fini(&msg->bounding_box);
}

bool
r2_interfaces__msg__DetectionResult__are_equal(const r2_interfaces__msg__DetectionResult * lhs, const r2_interfaces__msg__DetectionResult * rhs)
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
  // target_type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->target_type), &(rhs->target_type)))
  {
    return false;
  }
  // detected
  if (lhs->detected != rhs->detected) {
    return false;
  }
  // distance_mm
  if (lhs->distance_mm != rhs->distance_mm) {
    return false;
  }
  // offset_x_mm
  if (lhs->offset_x_mm != rhs->offset_x_mm) {
    return false;
  }
  // offset_y_mm
  if (lhs->offset_y_mm != rhs->offset_y_mm) {
    return false;
  }
  // confidence
  if (lhs->confidence != rhs->confidence) {
    return false;
  }
  // bounding_box
  if (!sensor_msgs__msg__RegionOfInterest__are_equal(
      &(lhs->bounding_box), &(rhs->bounding_box)))
  {
    return false;
  }
  return true;
}

bool
r2_interfaces__msg__DetectionResult__copy(
  const r2_interfaces__msg__DetectionResult * input,
  r2_interfaces__msg__DetectionResult * output)
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
  // target_type
  if (!rosidl_runtime_c__String__copy(
      &(input->target_type), &(output->target_type)))
  {
    return false;
  }
  // detected
  output->detected = input->detected;
  // distance_mm
  output->distance_mm = input->distance_mm;
  // offset_x_mm
  output->offset_x_mm = input->offset_x_mm;
  // offset_y_mm
  output->offset_y_mm = input->offset_y_mm;
  // confidence
  output->confidence = input->confidence;
  // bounding_box
  if (!sensor_msgs__msg__RegionOfInterest__copy(
      &(input->bounding_box), &(output->bounding_box)))
  {
    return false;
  }
  return true;
}

r2_interfaces__msg__DetectionResult *
r2_interfaces__msg__DetectionResult__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  r2_interfaces__msg__DetectionResult * msg = (r2_interfaces__msg__DetectionResult *)allocator.allocate(sizeof(r2_interfaces__msg__DetectionResult), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(r2_interfaces__msg__DetectionResult));
  bool success = r2_interfaces__msg__DetectionResult__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
r2_interfaces__msg__DetectionResult__destroy(r2_interfaces__msg__DetectionResult * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    r2_interfaces__msg__DetectionResult__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
r2_interfaces__msg__DetectionResult__Sequence__init(r2_interfaces__msg__DetectionResult__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  r2_interfaces__msg__DetectionResult * data = NULL;

  if (size) {
    data = (r2_interfaces__msg__DetectionResult *)allocator.zero_allocate(size, sizeof(r2_interfaces__msg__DetectionResult), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = r2_interfaces__msg__DetectionResult__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        r2_interfaces__msg__DetectionResult__fini(&data[i - 1]);
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
r2_interfaces__msg__DetectionResult__Sequence__fini(r2_interfaces__msg__DetectionResult__Sequence * array)
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
      r2_interfaces__msg__DetectionResult__fini(&array->data[i]);
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

r2_interfaces__msg__DetectionResult__Sequence *
r2_interfaces__msg__DetectionResult__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  r2_interfaces__msg__DetectionResult__Sequence * array = (r2_interfaces__msg__DetectionResult__Sequence *)allocator.allocate(sizeof(r2_interfaces__msg__DetectionResult__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = r2_interfaces__msg__DetectionResult__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
r2_interfaces__msg__DetectionResult__Sequence__destroy(r2_interfaces__msg__DetectionResult__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    r2_interfaces__msg__DetectionResult__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
r2_interfaces__msg__DetectionResult__Sequence__are_equal(const r2_interfaces__msg__DetectionResult__Sequence * lhs, const r2_interfaces__msg__DetectionResult__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!r2_interfaces__msg__DetectionResult__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
r2_interfaces__msg__DetectionResult__Sequence__copy(
  const r2_interfaces__msg__DetectionResult__Sequence * input,
  r2_interfaces__msg__DetectionResult__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(r2_interfaces__msg__DetectionResult);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    r2_interfaces__msg__DetectionResult * data =
      (r2_interfaces__msg__DetectionResult *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!r2_interfaces__msg__DetectionResult__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          r2_interfaces__msg__DetectionResult__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!r2_interfaces__msg__DetectionResult__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
