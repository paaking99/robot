// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from test_interfaces:msg/Sphere.idl
// generated code does not contain a copyright notice

#ifndef TEST_INTERFACES__MSG__DETAIL__SPHERE__STRUCT_H_
#define TEST_INTERFACES__MSG__DETAIL__SPHERE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/Sphere in the package test_interfaces.
typedef struct test_interfaces__msg__Sphere
{
  uint8_t structure_needs_at_least_one_member;
} test_interfaces__msg__Sphere;

// Struct for a sequence of test_interfaces__msg__Sphere.
typedef struct test_interfaces__msg__Sphere__Sequence
{
  test_interfaces__msg__Sphere * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} test_interfaces__msg__Sphere__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TEST_INTERFACES__MSG__DETAIL__SPHERE__STRUCT_H_
