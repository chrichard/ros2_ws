// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from cpp_srvcli:srv/AddThreeInts.idl
// generated code does not contain a copyright notice

#ifndef CPP_SRVCLI__SRV__DETAIL__ADD_THREE_INTS__FUNCTIONS_H_
#define CPP_SRVCLI__SRV__DETAIL__ADD_THREE_INTS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "cpp_srvcli/msg/rosidl_generator_c__visibility_control.h"

#include "cpp_srvcli/srv/detail/add_three_ints__struct.h"

/// Initialize srv/AddThreeInts message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * cpp_srvcli__srv__AddThreeInts_Request
 * )) before or use
 * cpp_srvcli__srv__AddThreeInts_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_srvcli
bool
cpp_srvcli__srv__AddThreeInts_Request__init(cpp_srvcli__srv__AddThreeInts_Request * msg);

/// Finalize srv/AddThreeInts message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_srvcli
void
cpp_srvcli__srv__AddThreeInts_Request__fini(cpp_srvcli__srv__AddThreeInts_Request * msg);

/// Create srv/AddThreeInts message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * cpp_srvcli__srv__AddThreeInts_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_srvcli
cpp_srvcli__srv__AddThreeInts_Request *
cpp_srvcli__srv__AddThreeInts_Request__create();

/// Destroy srv/AddThreeInts message.
/**
 * It calls
 * cpp_srvcli__srv__AddThreeInts_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_srvcli
void
cpp_srvcli__srv__AddThreeInts_Request__destroy(cpp_srvcli__srv__AddThreeInts_Request * msg);

/// Check for srv/AddThreeInts message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_srvcli
bool
cpp_srvcli__srv__AddThreeInts_Request__are_equal(const cpp_srvcli__srv__AddThreeInts_Request * lhs, const cpp_srvcli__srv__AddThreeInts_Request * rhs);

/// Copy a srv/AddThreeInts message.
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
ROSIDL_GENERATOR_C_PUBLIC_cpp_srvcli
bool
cpp_srvcli__srv__AddThreeInts_Request__copy(
  const cpp_srvcli__srv__AddThreeInts_Request * input,
  cpp_srvcli__srv__AddThreeInts_Request * output);

/// Initialize array of srv/AddThreeInts messages.
/**
 * It allocates the memory for the number of elements and calls
 * cpp_srvcli__srv__AddThreeInts_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_srvcli
bool
cpp_srvcli__srv__AddThreeInts_Request__Sequence__init(cpp_srvcli__srv__AddThreeInts_Request__Sequence * array, size_t size);

/// Finalize array of srv/AddThreeInts messages.
/**
 * It calls
 * cpp_srvcli__srv__AddThreeInts_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_srvcli
void
cpp_srvcli__srv__AddThreeInts_Request__Sequence__fini(cpp_srvcli__srv__AddThreeInts_Request__Sequence * array);

/// Create array of srv/AddThreeInts messages.
/**
 * It allocates the memory for the array and calls
 * cpp_srvcli__srv__AddThreeInts_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_srvcli
cpp_srvcli__srv__AddThreeInts_Request__Sequence *
cpp_srvcli__srv__AddThreeInts_Request__Sequence__create(size_t size);

/// Destroy array of srv/AddThreeInts messages.
/**
 * It calls
 * cpp_srvcli__srv__AddThreeInts_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_srvcli
void
cpp_srvcli__srv__AddThreeInts_Request__Sequence__destroy(cpp_srvcli__srv__AddThreeInts_Request__Sequence * array);

/// Check for srv/AddThreeInts message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_srvcli
bool
cpp_srvcli__srv__AddThreeInts_Request__Sequence__are_equal(const cpp_srvcli__srv__AddThreeInts_Request__Sequence * lhs, const cpp_srvcli__srv__AddThreeInts_Request__Sequence * rhs);

/// Copy an array of srv/AddThreeInts messages.
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
ROSIDL_GENERATOR_C_PUBLIC_cpp_srvcli
bool
cpp_srvcli__srv__AddThreeInts_Request__Sequence__copy(
  const cpp_srvcli__srv__AddThreeInts_Request__Sequence * input,
  cpp_srvcli__srv__AddThreeInts_Request__Sequence * output);

/// Initialize srv/AddThreeInts message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * cpp_srvcli__srv__AddThreeInts_Response
 * )) before or use
 * cpp_srvcli__srv__AddThreeInts_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_srvcli
bool
cpp_srvcli__srv__AddThreeInts_Response__init(cpp_srvcli__srv__AddThreeInts_Response * msg);

/// Finalize srv/AddThreeInts message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_srvcli
void
cpp_srvcli__srv__AddThreeInts_Response__fini(cpp_srvcli__srv__AddThreeInts_Response * msg);

/// Create srv/AddThreeInts message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * cpp_srvcli__srv__AddThreeInts_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_srvcli
cpp_srvcli__srv__AddThreeInts_Response *
cpp_srvcli__srv__AddThreeInts_Response__create();

/// Destroy srv/AddThreeInts message.
/**
 * It calls
 * cpp_srvcli__srv__AddThreeInts_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_srvcli
void
cpp_srvcli__srv__AddThreeInts_Response__destroy(cpp_srvcli__srv__AddThreeInts_Response * msg);

/// Check for srv/AddThreeInts message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_srvcli
bool
cpp_srvcli__srv__AddThreeInts_Response__are_equal(const cpp_srvcli__srv__AddThreeInts_Response * lhs, const cpp_srvcli__srv__AddThreeInts_Response * rhs);

/// Copy a srv/AddThreeInts message.
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
ROSIDL_GENERATOR_C_PUBLIC_cpp_srvcli
bool
cpp_srvcli__srv__AddThreeInts_Response__copy(
  const cpp_srvcli__srv__AddThreeInts_Response * input,
  cpp_srvcli__srv__AddThreeInts_Response * output);

/// Initialize array of srv/AddThreeInts messages.
/**
 * It allocates the memory for the number of elements and calls
 * cpp_srvcli__srv__AddThreeInts_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_srvcli
bool
cpp_srvcli__srv__AddThreeInts_Response__Sequence__init(cpp_srvcli__srv__AddThreeInts_Response__Sequence * array, size_t size);

/// Finalize array of srv/AddThreeInts messages.
/**
 * It calls
 * cpp_srvcli__srv__AddThreeInts_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_srvcli
void
cpp_srvcli__srv__AddThreeInts_Response__Sequence__fini(cpp_srvcli__srv__AddThreeInts_Response__Sequence * array);

/// Create array of srv/AddThreeInts messages.
/**
 * It allocates the memory for the array and calls
 * cpp_srvcli__srv__AddThreeInts_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_srvcli
cpp_srvcli__srv__AddThreeInts_Response__Sequence *
cpp_srvcli__srv__AddThreeInts_Response__Sequence__create(size_t size);

/// Destroy array of srv/AddThreeInts messages.
/**
 * It calls
 * cpp_srvcli__srv__AddThreeInts_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_srvcli
void
cpp_srvcli__srv__AddThreeInts_Response__Sequence__destroy(cpp_srvcli__srv__AddThreeInts_Response__Sequence * array);

/// Check for srv/AddThreeInts message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_srvcli
bool
cpp_srvcli__srv__AddThreeInts_Response__Sequence__are_equal(const cpp_srvcli__srv__AddThreeInts_Response__Sequence * lhs, const cpp_srvcli__srv__AddThreeInts_Response__Sequence * rhs);

/// Copy an array of srv/AddThreeInts messages.
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
ROSIDL_GENERATOR_C_PUBLIC_cpp_srvcli
bool
cpp_srvcli__srv__AddThreeInts_Response__Sequence__copy(
  const cpp_srvcli__srv__AddThreeInts_Response__Sequence * input,
  cpp_srvcli__srv__AddThreeInts_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // CPP_SRVCLI__SRV__DETAIL__ADD_THREE_INTS__FUNCTIONS_H_
