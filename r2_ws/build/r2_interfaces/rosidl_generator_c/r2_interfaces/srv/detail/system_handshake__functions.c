// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from r2_interfaces:srv/SystemHandshake.idl
// generated code does not contain a copyright notice
#include "r2_interfaces/srv/detail/system_handshake__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
r2_interfaces__srv__SystemHandshake_Request__init(r2_interfaces__srv__SystemHandshake_Request * msg)
{
  if (!msg) {
    return false;
  }
  // device_id
  // timeout_ms
  return true;
}

void
r2_interfaces__srv__SystemHandshake_Request__fini(r2_interfaces__srv__SystemHandshake_Request * msg)
{
  if (!msg) {
    return;
  }
  // device_id
  // timeout_ms
}

bool
r2_interfaces__srv__SystemHandshake_Request__are_equal(const r2_interfaces__srv__SystemHandshake_Request * lhs, const r2_interfaces__srv__SystemHandshake_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // device_id
  if (lhs->device_id != rhs->device_id) {
    return false;
  }
  // timeout_ms
  if (lhs->timeout_ms != rhs->timeout_ms) {
    return false;
  }
  return true;
}

bool
r2_interfaces__srv__SystemHandshake_Request__copy(
  const r2_interfaces__srv__SystemHandshake_Request * input,
  r2_interfaces__srv__SystemHandshake_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // device_id
  output->device_id = input->device_id;
  // timeout_ms
  output->timeout_ms = input->timeout_ms;
  return true;
}

r2_interfaces__srv__SystemHandshake_Request *
r2_interfaces__srv__SystemHandshake_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  r2_interfaces__srv__SystemHandshake_Request * msg = (r2_interfaces__srv__SystemHandshake_Request *)allocator.allocate(sizeof(r2_interfaces__srv__SystemHandshake_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(r2_interfaces__srv__SystemHandshake_Request));
  bool success = r2_interfaces__srv__SystemHandshake_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
r2_interfaces__srv__SystemHandshake_Request__destroy(r2_interfaces__srv__SystemHandshake_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    r2_interfaces__srv__SystemHandshake_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
r2_interfaces__srv__SystemHandshake_Request__Sequence__init(r2_interfaces__srv__SystemHandshake_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  r2_interfaces__srv__SystemHandshake_Request * data = NULL;

  if (size) {
    data = (r2_interfaces__srv__SystemHandshake_Request *)allocator.zero_allocate(size, sizeof(r2_interfaces__srv__SystemHandshake_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = r2_interfaces__srv__SystemHandshake_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        r2_interfaces__srv__SystemHandshake_Request__fini(&data[i - 1]);
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
r2_interfaces__srv__SystemHandshake_Request__Sequence__fini(r2_interfaces__srv__SystemHandshake_Request__Sequence * array)
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
      r2_interfaces__srv__SystemHandshake_Request__fini(&array->data[i]);
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

r2_interfaces__srv__SystemHandshake_Request__Sequence *
r2_interfaces__srv__SystemHandshake_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  r2_interfaces__srv__SystemHandshake_Request__Sequence * array = (r2_interfaces__srv__SystemHandshake_Request__Sequence *)allocator.allocate(sizeof(r2_interfaces__srv__SystemHandshake_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = r2_interfaces__srv__SystemHandshake_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
r2_interfaces__srv__SystemHandshake_Request__Sequence__destroy(r2_interfaces__srv__SystemHandshake_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    r2_interfaces__srv__SystemHandshake_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
r2_interfaces__srv__SystemHandshake_Request__Sequence__are_equal(const r2_interfaces__srv__SystemHandshake_Request__Sequence * lhs, const r2_interfaces__srv__SystemHandshake_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!r2_interfaces__srv__SystemHandshake_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
r2_interfaces__srv__SystemHandshake_Request__Sequence__copy(
  const r2_interfaces__srv__SystemHandshake_Request__Sequence * input,
  r2_interfaces__srv__SystemHandshake_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(r2_interfaces__srv__SystemHandshake_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    r2_interfaces__srv__SystemHandshake_Request * data =
      (r2_interfaces__srv__SystemHandshake_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!r2_interfaces__srv__SystemHandshake_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          r2_interfaces__srv__SystemHandshake_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!r2_interfaces__srv__SystemHandshake_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `firmware_version`
// Member `device_status`
// Member `error_msg`
#include "rosidl_runtime_c/string_functions.h"

bool
r2_interfaces__srv__SystemHandshake_Response__init(r2_interfaces__srv__SystemHandshake_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // firmware_version
  if (!rosidl_runtime_c__String__init(&msg->firmware_version)) {
    r2_interfaces__srv__SystemHandshake_Response__fini(msg);
    return false;
  }
  // device_status
  if (!rosidl_runtime_c__String__init(&msg->device_status)) {
    r2_interfaces__srv__SystemHandshake_Response__fini(msg);
    return false;
  }
  // error_msg
  if (!rosidl_runtime_c__String__init(&msg->error_msg)) {
    r2_interfaces__srv__SystemHandshake_Response__fini(msg);
    return false;
  }
  return true;
}

void
r2_interfaces__srv__SystemHandshake_Response__fini(r2_interfaces__srv__SystemHandshake_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // firmware_version
  rosidl_runtime_c__String__fini(&msg->firmware_version);
  // device_status
  rosidl_runtime_c__String__fini(&msg->device_status);
  // error_msg
  rosidl_runtime_c__String__fini(&msg->error_msg);
}

bool
r2_interfaces__srv__SystemHandshake_Response__are_equal(const r2_interfaces__srv__SystemHandshake_Response * lhs, const r2_interfaces__srv__SystemHandshake_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // firmware_version
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->firmware_version), &(rhs->firmware_version)))
  {
    return false;
  }
  // device_status
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->device_status), &(rhs->device_status)))
  {
    return false;
  }
  // error_msg
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->error_msg), &(rhs->error_msg)))
  {
    return false;
  }
  return true;
}

bool
r2_interfaces__srv__SystemHandshake_Response__copy(
  const r2_interfaces__srv__SystemHandshake_Response * input,
  r2_interfaces__srv__SystemHandshake_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // firmware_version
  if (!rosidl_runtime_c__String__copy(
      &(input->firmware_version), &(output->firmware_version)))
  {
    return false;
  }
  // device_status
  if (!rosidl_runtime_c__String__copy(
      &(input->device_status), &(output->device_status)))
  {
    return false;
  }
  // error_msg
  if (!rosidl_runtime_c__String__copy(
      &(input->error_msg), &(output->error_msg)))
  {
    return false;
  }
  return true;
}

r2_interfaces__srv__SystemHandshake_Response *
r2_interfaces__srv__SystemHandshake_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  r2_interfaces__srv__SystemHandshake_Response * msg = (r2_interfaces__srv__SystemHandshake_Response *)allocator.allocate(sizeof(r2_interfaces__srv__SystemHandshake_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(r2_interfaces__srv__SystemHandshake_Response));
  bool success = r2_interfaces__srv__SystemHandshake_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
r2_interfaces__srv__SystemHandshake_Response__destroy(r2_interfaces__srv__SystemHandshake_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    r2_interfaces__srv__SystemHandshake_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
r2_interfaces__srv__SystemHandshake_Response__Sequence__init(r2_interfaces__srv__SystemHandshake_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  r2_interfaces__srv__SystemHandshake_Response * data = NULL;

  if (size) {
    data = (r2_interfaces__srv__SystemHandshake_Response *)allocator.zero_allocate(size, sizeof(r2_interfaces__srv__SystemHandshake_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = r2_interfaces__srv__SystemHandshake_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        r2_interfaces__srv__SystemHandshake_Response__fini(&data[i - 1]);
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
r2_interfaces__srv__SystemHandshake_Response__Sequence__fini(r2_interfaces__srv__SystemHandshake_Response__Sequence * array)
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
      r2_interfaces__srv__SystemHandshake_Response__fini(&array->data[i]);
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

r2_interfaces__srv__SystemHandshake_Response__Sequence *
r2_interfaces__srv__SystemHandshake_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  r2_interfaces__srv__SystemHandshake_Response__Sequence * array = (r2_interfaces__srv__SystemHandshake_Response__Sequence *)allocator.allocate(sizeof(r2_interfaces__srv__SystemHandshake_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = r2_interfaces__srv__SystemHandshake_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
r2_interfaces__srv__SystemHandshake_Response__Sequence__destroy(r2_interfaces__srv__SystemHandshake_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    r2_interfaces__srv__SystemHandshake_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
r2_interfaces__srv__SystemHandshake_Response__Sequence__are_equal(const r2_interfaces__srv__SystemHandshake_Response__Sequence * lhs, const r2_interfaces__srv__SystemHandshake_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!r2_interfaces__srv__SystemHandshake_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
r2_interfaces__srv__SystemHandshake_Response__Sequence__copy(
  const r2_interfaces__srv__SystemHandshake_Response__Sequence * input,
  r2_interfaces__srv__SystemHandshake_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(r2_interfaces__srv__SystemHandshake_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    r2_interfaces__srv__SystemHandshake_Response * data =
      (r2_interfaces__srv__SystemHandshake_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!r2_interfaces__srv__SystemHandshake_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          r2_interfaces__srv__SystemHandshake_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!r2_interfaces__srv__SystemHandshake_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "r2_interfaces/srv/detail/system_handshake__functions.h"

bool
r2_interfaces__srv__SystemHandshake_Event__init(r2_interfaces__srv__SystemHandshake_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    r2_interfaces__srv__SystemHandshake_Event__fini(msg);
    return false;
  }
  // request
  if (!r2_interfaces__srv__SystemHandshake_Request__Sequence__init(&msg->request, 0)) {
    r2_interfaces__srv__SystemHandshake_Event__fini(msg);
    return false;
  }
  // response
  if (!r2_interfaces__srv__SystemHandshake_Response__Sequence__init(&msg->response, 0)) {
    r2_interfaces__srv__SystemHandshake_Event__fini(msg);
    return false;
  }
  return true;
}

void
r2_interfaces__srv__SystemHandshake_Event__fini(r2_interfaces__srv__SystemHandshake_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  r2_interfaces__srv__SystemHandshake_Request__Sequence__fini(&msg->request);
  // response
  r2_interfaces__srv__SystemHandshake_Response__Sequence__fini(&msg->response);
}

bool
r2_interfaces__srv__SystemHandshake_Event__are_equal(const r2_interfaces__srv__SystemHandshake_Event * lhs, const r2_interfaces__srv__SystemHandshake_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!r2_interfaces__srv__SystemHandshake_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!r2_interfaces__srv__SystemHandshake_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
r2_interfaces__srv__SystemHandshake_Event__copy(
  const r2_interfaces__srv__SystemHandshake_Event * input,
  r2_interfaces__srv__SystemHandshake_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!r2_interfaces__srv__SystemHandshake_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!r2_interfaces__srv__SystemHandshake_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

r2_interfaces__srv__SystemHandshake_Event *
r2_interfaces__srv__SystemHandshake_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  r2_interfaces__srv__SystemHandshake_Event * msg = (r2_interfaces__srv__SystemHandshake_Event *)allocator.allocate(sizeof(r2_interfaces__srv__SystemHandshake_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(r2_interfaces__srv__SystemHandshake_Event));
  bool success = r2_interfaces__srv__SystemHandshake_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
r2_interfaces__srv__SystemHandshake_Event__destroy(r2_interfaces__srv__SystemHandshake_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    r2_interfaces__srv__SystemHandshake_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
r2_interfaces__srv__SystemHandshake_Event__Sequence__init(r2_interfaces__srv__SystemHandshake_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  r2_interfaces__srv__SystemHandshake_Event * data = NULL;

  if (size) {
    data = (r2_interfaces__srv__SystemHandshake_Event *)allocator.zero_allocate(size, sizeof(r2_interfaces__srv__SystemHandshake_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = r2_interfaces__srv__SystemHandshake_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        r2_interfaces__srv__SystemHandshake_Event__fini(&data[i - 1]);
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
r2_interfaces__srv__SystemHandshake_Event__Sequence__fini(r2_interfaces__srv__SystemHandshake_Event__Sequence * array)
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
      r2_interfaces__srv__SystemHandshake_Event__fini(&array->data[i]);
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

r2_interfaces__srv__SystemHandshake_Event__Sequence *
r2_interfaces__srv__SystemHandshake_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  r2_interfaces__srv__SystemHandshake_Event__Sequence * array = (r2_interfaces__srv__SystemHandshake_Event__Sequence *)allocator.allocate(sizeof(r2_interfaces__srv__SystemHandshake_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = r2_interfaces__srv__SystemHandshake_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
r2_interfaces__srv__SystemHandshake_Event__Sequence__destroy(r2_interfaces__srv__SystemHandshake_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    r2_interfaces__srv__SystemHandshake_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
r2_interfaces__srv__SystemHandshake_Event__Sequence__are_equal(const r2_interfaces__srv__SystemHandshake_Event__Sequence * lhs, const r2_interfaces__srv__SystemHandshake_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!r2_interfaces__srv__SystemHandshake_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
r2_interfaces__srv__SystemHandshake_Event__Sequence__copy(
  const r2_interfaces__srv__SystemHandshake_Event__Sequence * input,
  r2_interfaces__srv__SystemHandshake_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(r2_interfaces__srv__SystemHandshake_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    r2_interfaces__srv__SystemHandshake_Event * data =
      (r2_interfaces__srv__SystemHandshake_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!r2_interfaces__srv__SystemHandshake_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          r2_interfaces__srv__SystemHandshake_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!r2_interfaces__srv__SystemHandshake_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
