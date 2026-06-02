// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from r2_interfaces:srv/TriggerDetection.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "r2_interfaces/srv/detail/trigger_detection__struct.h"
#include "r2_interfaces/srv/detail/trigger_detection__type_support.h"
#include "r2_interfaces/srv/detail/trigger_detection__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace r2_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _TriggerDetection_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TriggerDetection_Request_type_support_ids_t;

static const _TriggerDetection_Request_type_support_ids_t _TriggerDetection_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _TriggerDetection_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TriggerDetection_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TriggerDetection_Request_type_support_symbol_names_t _TriggerDetection_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, r2_interfaces, srv, TriggerDetection_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, r2_interfaces, srv, TriggerDetection_Request)),
  }
};

typedef struct _TriggerDetection_Request_type_support_data_t
{
  void * data[2];
} _TriggerDetection_Request_type_support_data_t;

static _TriggerDetection_Request_type_support_data_t _TriggerDetection_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TriggerDetection_Request_message_typesupport_map = {
  2,
  "r2_interfaces",
  &_TriggerDetection_Request_message_typesupport_ids.typesupport_identifier[0],
  &_TriggerDetection_Request_message_typesupport_symbol_names.symbol_name[0],
  &_TriggerDetection_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t TriggerDetection_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TriggerDetection_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &r2_interfaces__srv__TriggerDetection_Request__get_type_hash,
  &r2_interfaces__srv__TriggerDetection_Request__get_type_description,
  &r2_interfaces__srv__TriggerDetection_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace r2_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, r2_interfaces, srv, TriggerDetection_Request)() {
  return &::r2_interfaces::srv::rosidl_typesupport_c::TriggerDetection_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "r2_interfaces/srv/detail/trigger_detection__struct.h"
// already included above
// #include "r2_interfaces/srv/detail/trigger_detection__type_support.h"
// already included above
// #include "r2_interfaces/srv/detail/trigger_detection__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace r2_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _TriggerDetection_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TriggerDetection_Response_type_support_ids_t;

static const _TriggerDetection_Response_type_support_ids_t _TriggerDetection_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _TriggerDetection_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TriggerDetection_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TriggerDetection_Response_type_support_symbol_names_t _TriggerDetection_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, r2_interfaces, srv, TriggerDetection_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, r2_interfaces, srv, TriggerDetection_Response)),
  }
};

typedef struct _TriggerDetection_Response_type_support_data_t
{
  void * data[2];
} _TriggerDetection_Response_type_support_data_t;

static _TriggerDetection_Response_type_support_data_t _TriggerDetection_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TriggerDetection_Response_message_typesupport_map = {
  2,
  "r2_interfaces",
  &_TriggerDetection_Response_message_typesupport_ids.typesupport_identifier[0],
  &_TriggerDetection_Response_message_typesupport_symbol_names.symbol_name[0],
  &_TriggerDetection_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t TriggerDetection_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TriggerDetection_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &r2_interfaces__srv__TriggerDetection_Response__get_type_hash,
  &r2_interfaces__srv__TriggerDetection_Response__get_type_description,
  &r2_interfaces__srv__TriggerDetection_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace r2_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, r2_interfaces, srv, TriggerDetection_Response)() {
  return &::r2_interfaces::srv::rosidl_typesupport_c::TriggerDetection_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "r2_interfaces/srv/detail/trigger_detection__struct.h"
// already included above
// #include "r2_interfaces/srv/detail/trigger_detection__type_support.h"
// already included above
// #include "r2_interfaces/srv/detail/trigger_detection__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace r2_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _TriggerDetection_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TriggerDetection_Event_type_support_ids_t;

static const _TriggerDetection_Event_type_support_ids_t _TriggerDetection_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _TriggerDetection_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TriggerDetection_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TriggerDetection_Event_type_support_symbol_names_t _TriggerDetection_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, r2_interfaces, srv, TriggerDetection_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, r2_interfaces, srv, TriggerDetection_Event)),
  }
};

typedef struct _TriggerDetection_Event_type_support_data_t
{
  void * data[2];
} _TriggerDetection_Event_type_support_data_t;

static _TriggerDetection_Event_type_support_data_t _TriggerDetection_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TriggerDetection_Event_message_typesupport_map = {
  2,
  "r2_interfaces",
  &_TriggerDetection_Event_message_typesupport_ids.typesupport_identifier[0],
  &_TriggerDetection_Event_message_typesupport_symbol_names.symbol_name[0],
  &_TriggerDetection_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t TriggerDetection_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TriggerDetection_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &r2_interfaces__srv__TriggerDetection_Event__get_type_hash,
  &r2_interfaces__srv__TriggerDetection_Event__get_type_description,
  &r2_interfaces__srv__TriggerDetection_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace r2_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, r2_interfaces, srv, TriggerDetection_Event)() {
  return &::r2_interfaces::srv::rosidl_typesupport_c::TriggerDetection_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "r2_interfaces/srv/detail/trigger_detection__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace r2_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{
typedef struct _TriggerDetection_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TriggerDetection_type_support_ids_t;

static const _TriggerDetection_type_support_ids_t _TriggerDetection_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _TriggerDetection_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TriggerDetection_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TriggerDetection_type_support_symbol_names_t _TriggerDetection_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, r2_interfaces, srv, TriggerDetection)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, r2_interfaces, srv, TriggerDetection)),
  }
};

typedef struct _TriggerDetection_type_support_data_t
{
  void * data[2];
} _TriggerDetection_type_support_data_t;

static _TriggerDetection_type_support_data_t _TriggerDetection_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TriggerDetection_service_typesupport_map = {
  2,
  "r2_interfaces",
  &_TriggerDetection_service_typesupport_ids.typesupport_identifier[0],
  &_TriggerDetection_service_typesupport_symbol_names.symbol_name[0],
  &_TriggerDetection_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t TriggerDetection_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TriggerDetection_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &TriggerDetection_Request_message_type_support_handle,
  &TriggerDetection_Response_message_type_support_handle,
  &TriggerDetection_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    r2_interfaces,
    srv,
    TriggerDetection
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    r2_interfaces,
    srv,
    TriggerDetection
  ),
  &r2_interfaces__srv__TriggerDetection__get_type_hash,
  &r2_interfaces__srv__TriggerDetection__get_type_description,
  &r2_interfaces__srv__TriggerDetection__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace r2_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, r2_interfaces, srv, TriggerDetection)() {
  return &::r2_interfaces::srv::rosidl_typesupport_c::TriggerDetection_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
