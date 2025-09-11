// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_interfaces:srv/TemplateSm.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "my_interfaces/srv/template_sm.h"


#ifndef MY_INTERFACES__SRV__DETAIL__TEMPLATE_SM__STRUCT_H_
#define MY_INTERFACES__SRV__DETAIL__TEMPLATE_SM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/TemplateSm in the package my_interfaces.
typedef struct my_interfaces__srv__TemplateSm_Request
{
  double x;
  double y;
  double z;
} my_interfaces__srv__TemplateSm_Request;

// Struct for a sequence of my_interfaces__srv__TemplateSm_Request.
typedef struct my_interfaces__srv__TemplateSm_Request__Sequence
{
  my_interfaces__srv__TemplateSm_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_interfaces__srv__TemplateSm_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/TemplateSm in the package my_interfaces.
typedef struct my_interfaces__srv__TemplateSm_Response
{
  double length;
} my_interfaces__srv__TemplateSm_Response;

// Struct for a sequence of my_interfaces__srv__TemplateSm_Response.
typedef struct my_interfaces__srv__TemplateSm_Response__Sequence
{
  my_interfaces__srv__TemplateSm_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_interfaces__srv__TemplateSm_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  my_interfaces__srv__TemplateSm_Event__request__MAX_SIZE = 1
};
// response
enum
{
  my_interfaces__srv__TemplateSm_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/TemplateSm in the package my_interfaces.
typedef struct my_interfaces__srv__TemplateSm_Event
{
  service_msgs__msg__ServiceEventInfo info;
  my_interfaces__srv__TemplateSm_Request__Sequence request;
  my_interfaces__srv__TemplateSm_Response__Sequence response;
} my_interfaces__srv__TemplateSm_Event;

// Struct for a sequence of my_interfaces__srv__TemplateSm_Event.
typedef struct my_interfaces__srv__TemplateSm_Event__Sequence
{
  my_interfaces__srv__TemplateSm_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_interfaces__srv__TemplateSm_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_INTERFACES__SRV__DETAIL__TEMPLATE_SM__STRUCT_H_
