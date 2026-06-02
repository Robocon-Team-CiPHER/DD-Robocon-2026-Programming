// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from r2_interfaces:msg/SystemStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "r2_interfaces/msg/system_status.h"


#ifndef R2_INTERFACES__MSG__DETAIL__SYSTEM_STATUS__FUNCTIONS_H_
#define R2_INTERFACES__MSG__DETAIL__SYSTEM_STATUS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/type_description/type_description__struct.h"
#include "rosidl_runtime_c/type_description/type_source__struct.h"
#include "rosidl_runtime_c/type_hash.h"
#include "rosidl_runtime_c/visibility_control.h"
#include "r2_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "r2_interfaces/msg/detail/system_status__struct.h"

/// Initialize msg/SystemStatus message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * r2_interfaces__msg__SystemStatus
 * )) before or use
 * r2_interfaces__msg__SystemStatus__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_r2_interfaces
bool
r2_interfaces__msg__SystemStatus__init(r2_interfaces__msg__SystemStatus * msg);

/// Finalize msg/SystemStatus message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_r2_interfaces
void
r2_interfaces__msg__SystemStatus__fini(r2_interfaces__msg__SystemStatus * msg);

/// Create msg/SystemStatus message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * r2_interfaces__msg__SystemStatus__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_r2_interfaces
r2_interfaces__msg__SystemStatus *
r2_interfaces__msg__SystemStatus__create(void);

/// Destroy msg/SystemStatus message.
/**
 * It calls
 * r2_interfaces__msg__SystemStatus__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_r2_interfaces
void
r2_interfaces__msg__SystemStatus__destroy(r2_interfaces__msg__SystemStatus * msg);

/// Check for msg/SystemStatus message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_r2_interfaces
bool
r2_interfaces__msg__SystemStatus__are_equal(const r2_interfaces__msg__SystemStatus * lhs, const r2_interfaces__msg__SystemStatus * rhs);

/// Copy a msg/SystemStatus message.
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
ROSIDL_GENERATOR_C_PUBLIC_r2_interfaces
bool
r2_interfaces__msg__SystemStatus__copy(
  const r2_interfaces__msg__SystemStatus * input,
  r2_interfaces__msg__SystemStatus * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_r2_interfaces
const rosidl_type_hash_t *
r2_interfaces__msg__SystemStatus__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_r2_interfaces
const rosidl_runtime_c__type_description__TypeDescription *
r2_interfaces__msg__SystemStatus__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_r2_interfaces
const rosidl_runtime_c__type_description__TypeSource *
r2_interfaces__msg__SystemStatus__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_r2_interfaces
const rosidl_runtime_c__type_description__TypeSource__Sequence *
r2_interfaces__msg__SystemStatus__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of msg/SystemStatus messages.
/**
 * It allocates the memory for the number of elements and calls
 * r2_interfaces__msg__SystemStatus__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_r2_interfaces
bool
r2_interfaces__msg__SystemStatus__Sequence__init(r2_interfaces__msg__SystemStatus__Sequence * array, size_t size);

/// Finalize array of msg/SystemStatus messages.
/**
 * It calls
 * r2_interfaces__msg__SystemStatus__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_r2_interfaces
void
r2_interfaces__msg__SystemStatus__Sequence__fini(r2_interfaces__msg__SystemStatus__Sequence * array);

/// Create array of msg/SystemStatus messages.
/**
 * It allocates the memory for the array and calls
 * r2_interfaces__msg__SystemStatus__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_r2_interfaces
r2_interfaces__msg__SystemStatus__Sequence *
r2_interfaces__msg__SystemStatus__Sequence__create(size_t size);

/// Destroy array of msg/SystemStatus messages.
/**
 * It calls
 * r2_interfaces__msg__SystemStatus__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_r2_interfaces
void
r2_interfaces__msg__SystemStatus__Sequence__destroy(r2_interfaces__msg__SystemStatus__Sequence * array);

/// Check for msg/SystemStatus message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_r2_interfaces
bool
r2_interfaces__msg__SystemStatus__Sequence__are_equal(const r2_interfaces__msg__SystemStatus__Sequence * lhs, const r2_interfaces__msg__SystemStatus__Sequence * rhs);

/// Copy an array of msg/SystemStatus messages.
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
ROSIDL_GENERATOR_C_PUBLIC_r2_interfaces
bool
r2_interfaces__msg__SystemStatus__Sequence__copy(
  const r2_interfaces__msg__SystemStatus__Sequence * input,
  r2_interfaces__msg__SystemStatus__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // R2_INTERFACES__MSG__DETAIL__SYSTEM_STATUS__FUNCTIONS_H_
