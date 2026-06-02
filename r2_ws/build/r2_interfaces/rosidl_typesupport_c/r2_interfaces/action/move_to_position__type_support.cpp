// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from r2_interfaces:action/MoveToPosition.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "r2_interfaces/action/detail/move_to_position__struct.h"
#include "r2_interfaces/action/detail/move_to_position__type_support.h"
#include "r2_interfaces/action/detail/move_to_position__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace r2_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MoveToPosition_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveToPosition_Goal_type_support_ids_t;

static const _MoveToPosition_Goal_type_support_ids_t _MoveToPosition_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MoveToPosition_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveToPosition_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveToPosition_Goal_type_support_symbol_names_t _MoveToPosition_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, r2_interfaces, action, MoveToPosition_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, r2_interfaces, action, MoveToPosition_Goal)),
  }
};

typedef struct _MoveToPosition_Goal_type_support_data_t
{
  void * data[2];
} _MoveToPosition_Goal_type_support_data_t;

static _MoveToPosition_Goal_type_support_data_t _MoveToPosition_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveToPosition_Goal_message_typesupport_map = {
  2,
  "r2_interfaces",
  &_MoveToPosition_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_MoveToPosition_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_MoveToPosition_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveToPosition_Goal_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveToPosition_Goal_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &r2_interfaces__action__MoveToPosition_Goal__get_type_hash,
  &r2_interfaces__action__MoveToPosition_Goal__get_type_description,
  &r2_interfaces__action__MoveToPosition_Goal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace r2_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, r2_interfaces, action, MoveToPosition_Goal)() {
  return &::r2_interfaces::action::rosidl_typesupport_c::MoveToPosition_Goal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "r2_interfaces/action/detail/move_to_position__struct.h"
// already included above
// #include "r2_interfaces/action/detail/move_to_position__type_support.h"
// already included above
// #include "r2_interfaces/action/detail/move_to_position__functions.h"
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

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MoveToPosition_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveToPosition_Result_type_support_ids_t;

static const _MoveToPosition_Result_type_support_ids_t _MoveToPosition_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MoveToPosition_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveToPosition_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveToPosition_Result_type_support_symbol_names_t _MoveToPosition_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, r2_interfaces, action, MoveToPosition_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, r2_interfaces, action, MoveToPosition_Result)),
  }
};

typedef struct _MoveToPosition_Result_type_support_data_t
{
  void * data[2];
} _MoveToPosition_Result_type_support_data_t;

static _MoveToPosition_Result_type_support_data_t _MoveToPosition_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveToPosition_Result_message_typesupport_map = {
  2,
  "r2_interfaces",
  &_MoveToPosition_Result_message_typesupport_ids.typesupport_identifier[0],
  &_MoveToPosition_Result_message_typesupport_symbol_names.symbol_name[0],
  &_MoveToPosition_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveToPosition_Result_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveToPosition_Result_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &r2_interfaces__action__MoveToPosition_Result__get_type_hash,
  &r2_interfaces__action__MoveToPosition_Result__get_type_description,
  &r2_interfaces__action__MoveToPosition_Result__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace r2_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, r2_interfaces, action, MoveToPosition_Result)() {
  return &::r2_interfaces::action::rosidl_typesupport_c::MoveToPosition_Result_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "r2_interfaces/action/detail/move_to_position__struct.h"
// already included above
// #include "r2_interfaces/action/detail/move_to_position__type_support.h"
// already included above
// #include "r2_interfaces/action/detail/move_to_position__functions.h"
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

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MoveToPosition_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveToPosition_Feedback_type_support_ids_t;

static const _MoveToPosition_Feedback_type_support_ids_t _MoveToPosition_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MoveToPosition_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveToPosition_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveToPosition_Feedback_type_support_symbol_names_t _MoveToPosition_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, r2_interfaces, action, MoveToPosition_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, r2_interfaces, action, MoveToPosition_Feedback)),
  }
};

typedef struct _MoveToPosition_Feedback_type_support_data_t
{
  void * data[2];
} _MoveToPosition_Feedback_type_support_data_t;

static _MoveToPosition_Feedback_type_support_data_t _MoveToPosition_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveToPosition_Feedback_message_typesupport_map = {
  2,
  "r2_interfaces",
  &_MoveToPosition_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_MoveToPosition_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_MoveToPosition_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveToPosition_Feedback_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveToPosition_Feedback_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &r2_interfaces__action__MoveToPosition_Feedback__get_type_hash,
  &r2_interfaces__action__MoveToPosition_Feedback__get_type_description,
  &r2_interfaces__action__MoveToPosition_Feedback__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace r2_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, r2_interfaces, action, MoveToPosition_Feedback)() {
  return &::r2_interfaces::action::rosidl_typesupport_c::MoveToPosition_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "r2_interfaces/action/detail/move_to_position__struct.h"
// already included above
// #include "r2_interfaces/action/detail/move_to_position__type_support.h"
// already included above
// #include "r2_interfaces/action/detail/move_to_position__functions.h"
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

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MoveToPosition_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveToPosition_SendGoal_Request_type_support_ids_t;

static const _MoveToPosition_SendGoal_Request_type_support_ids_t _MoveToPosition_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MoveToPosition_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveToPosition_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveToPosition_SendGoal_Request_type_support_symbol_names_t _MoveToPosition_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, r2_interfaces, action, MoveToPosition_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, r2_interfaces, action, MoveToPosition_SendGoal_Request)),
  }
};

typedef struct _MoveToPosition_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _MoveToPosition_SendGoal_Request_type_support_data_t;

static _MoveToPosition_SendGoal_Request_type_support_data_t _MoveToPosition_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveToPosition_SendGoal_Request_message_typesupport_map = {
  2,
  "r2_interfaces",
  &_MoveToPosition_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_MoveToPosition_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_MoveToPosition_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveToPosition_SendGoal_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveToPosition_SendGoal_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &r2_interfaces__action__MoveToPosition_SendGoal_Request__get_type_hash,
  &r2_interfaces__action__MoveToPosition_SendGoal_Request__get_type_description,
  &r2_interfaces__action__MoveToPosition_SendGoal_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace r2_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, r2_interfaces, action, MoveToPosition_SendGoal_Request)() {
  return &::r2_interfaces::action::rosidl_typesupport_c::MoveToPosition_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "r2_interfaces/action/detail/move_to_position__struct.h"
// already included above
// #include "r2_interfaces/action/detail/move_to_position__type_support.h"
// already included above
// #include "r2_interfaces/action/detail/move_to_position__functions.h"
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

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MoveToPosition_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveToPosition_SendGoal_Response_type_support_ids_t;

static const _MoveToPosition_SendGoal_Response_type_support_ids_t _MoveToPosition_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MoveToPosition_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveToPosition_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveToPosition_SendGoal_Response_type_support_symbol_names_t _MoveToPosition_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, r2_interfaces, action, MoveToPosition_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, r2_interfaces, action, MoveToPosition_SendGoal_Response)),
  }
};

typedef struct _MoveToPosition_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _MoveToPosition_SendGoal_Response_type_support_data_t;

static _MoveToPosition_SendGoal_Response_type_support_data_t _MoveToPosition_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveToPosition_SendGoal_Response_message_typesupport_map = {
  2,
  "r2_interfaces",
  &_MoveToPosition_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_MoveToPosition_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_MoveToPosition_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveToPosition_SendGoal_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveToPosition_SendGoal_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &r2_interfaces__action__MoveToPosition_SendGoal_Response__get_type_hash,
  &r2_interfaces__action__MoveToPosition_SendGoal_Response__get_type_description,
  &r2_interfaces__action__MoveToPosition_SendGoal_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace r2_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, r2_interfaces, action, MoveToPosition_SendGoal_Response)() {
  return &::r2_interfaces::action::rosidl_typesupport_c::MoveToPosition_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "r2_interfaces/action/detail/move_to_position__struct.h"
// already included above
// #include "r2_interfaces/action/detail/move_to_position__type_support.h"
// already included above
// #include "r2_interfaces/action/detail/move_to_position__functions.h"
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

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MoveToPosition_SendGoal_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveToPosition_SendGoal_Event_type_support_ids_t;

static const _MoveToPosition_SendGoal_Event_type_support_ids_t _MoveToPosition_SendGoal_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MoveToPosition_SendGoal_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveToPosition_SendGoal_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveToPosition_SendGoal_Event_type_support_symbol_names_t _MoveToPosition_SendGoal_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, r2_interfaces, action, MoveToPosition_SendGoal_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, r2_interfaces, action, MoveToPosition_SendGoal_Event)),
  }
};

typedef struct _MoveToPosition_SendGoal_Event_type_support_data_t
{
  void * data[2];
} _MoveToPosition_SendGoal_Event_type_support_data_t;

static _MoveToPosition_SendGoal_Event_type_support_data_t _MoveToPosition_SendGoal_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveToPosition_SendGoal_Event_message_typesupport_map = {
  2,
  "r2_interfaces",
  &_MoveToPosition_SendGoal_Event_message_typesupport_ids.typesupport_identifier[0],
  &_MoveToPosition_SendGoal_Event_message_typesupport_symbol_names.symbol_name[0],
  &_MoveToPosition_SendGoal_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveToPosition_SendGoal_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveToPosition_SendGoal_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &r2_interfaces__action__MoveToPosition_SendGoal_Event__get_type_hash,
  &r2_interfaces__action__MoveToPosition_SendGoal_Event__get_type_description,
  &r2_interfaces__action__MoveToPosition_SendGoal_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace r2_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, r2_interfaces, action, MoveToPosition_SendGoal_Event)() {
  return &::r2_interfaces::action::rosidl_typesupport_c::MoveToPosition_SendGoal_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "r2_interfaces/action/detail/move_to_position__type_support.h"
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

namespace action
{

namespace rosidl_typesupport_c
{
typedef struct _MoveToPosition_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveToPosition_SendGoal_type_support_ids_t;

static const _MoveToPosition_SendGoal_type_support_ids_t _MoveToPosition_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MoveToPosition_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveToPosition_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveToPosition_SendGoal_type_support_symbol_names_t _MoveToPosition_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, r2_interfaces, action, MoveToPosition_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, r2_interfaces, action, MoveToPosition_SendGoal)),
  }
};

typedef struct _MoveToPosition_SendGoal_type_support_data_t
{
  void * data[2];
} _MoveToPosition_SendGoal_type_support_data_t;

static _MoveToPosition_SendGoal_type_support_data_t _MoveToPosition_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveToPosition_SendGoal_service_typesupport_map = {
  2,
  "r2_interfaces",
  &_MoveToPosition_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_MoveToPosition_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_MoveToPosition_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t MoveToPosition_SendGoal_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveToPosition_SendGoal_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &MoveToPosition_SendGoal_Request_message_type_support_handle,
  &MoveToPosition_SendGoal_Response_message_type_support_handle,
  &MoveToPosition_SendGoal_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    r2_interfaces,
    action,
    MoveToPosition_SendGoal
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    r2_interfaces,
    action,
    MoveToPosition_SendGoal
  ),
  &r2_interfaces__action__MoveToPosition_SendGoal__get_type_hash,
  &r2_interfaces__action__MoveToPosition_SendGoal__get_type_description,
  &r2_interfaces__action__MoveToPosition_SendGoal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace r2_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, r2_interfaces, action, MoveToPosition_SendGoal)() {
  return &::r2_interfaces::action::rosidl_typesupport_c::MoveToPosition_SendGoal_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "r2_interfaces/action/detail/move_to_position__struct.h"
// already included above
// #include "r2_interfaces/action/detail/move_to_position__type_support.h"
// already included above
// #include "r2_interfaces/action/detail/move_to_position__functions.h"
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

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MoveToPosition_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveToPosition_GetResult_Request_type_support_ids_t;

static const _MoveToPosition_GetResult_Request_type_support_ids_t _MoveToPosition_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MoveToPosition_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveToPosition_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveToPosition_GetResult_Request_type_support_symbol_names_t _MoveToPosition_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, r2_interfaces, action, MoveToPosition_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, r2_interfaces, action, MoveToPosition_GetResult_Request)),
  }
};

typedef struct _MoveToPosition_GetResult_Request_type_support_data_t
{
  void * data[2];
} _MoveToPosition_GetResult_Request_type_support_data_t;

static _MoveToPosition_GetResult_Request_type_support_data_t _MoveToPosition_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveToPosition_GetResult_Request_message_typesupport_map = {
  2,
  "r2_interfaces",
  &_MoveToPosition_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_MoveToPosition_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_MoveToPosition_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveToPosition_GetResult_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveToPosition_GetResult_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &r2_interfaces__action__MoveToPosition_GetResult_Request__get_type_hash,
  &r2_interfaces__action__MoveToPosition_GetResult_Request__get_type_description,
  &r2_interfaces__action__MoveToPosition_GetResult_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace r2_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, r2_interfaces, action, MoveToPosition_GetResult_Request)() {
  return &::r2_interfaces::action::rosidl_typesupport_c::MoveToPosition_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "r2_interfaces/action/detail/move_to_position__struct.h"
// already included above
// #include "r2_interfaces/action/detail/move_to_position__type_support.h"
// already included above
// #include "r2_interfaces/action/detail/move_to_position__functions.h"
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

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MoveToPosition_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveToPosition_GetResult_Response_type_support_ids_t;

static const _MoveToPosition_GetResult_Response_type_support_ids_t _MoveToPosition_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MoveToPosition_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveToPosition_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveToPosition_GetResult_Response_type_support_symbol_names_t _MoveToPosition_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, r2_interfaces, action, MoveToPosition_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, r2_interfaces, action, MoveToPosition_GetResult_Response)),
  }
};

typedef struct _MoveToPosition_GetResult_Response_type_support_data_t
{
  void * data[2];
} _MoveToPosition_GetResult_Response_type_support_data_t;

static _MoveToPosition_GetResult_Response_type_support_data_t _MoveToPosition_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveToPosition_GetResult_Response_message_typesupport_map = {
  2,
  "r2_interfaces",
  &_MoveToPosition_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_MoveToPosition_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_MoveToPosition_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveToPosition_GetResult_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveToPosition_GetResult_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &r2_interfaces__action__MoveToPosition_GetResult_Response__get_type_hash,
  &r2_interfaces__action__MoveToPosition_GetResult_Response__get_type_description,
  &r2_interfaces__action__MoveToPosition_GetResult_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace r2_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, r2_interfaces, action, MoveToPosition_GetResult_Response)() {
  return &::r2_interfaces::action::rosidl_typesupport_c::MoveToPosition_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "r2_interfaces/action/detail/move_to_position__struct.h"
// already included above
// #include "r2_interfaces/action/detail/move_to_position__type_support.h"
// already included above
// #include "r2_interfaces/action/detail/move_to_position__functions.h"
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

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MoveToPosition_GetResult_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveToPosition_GetResult_Event_type_support_ids_t;

static const _MoveToPosition_GetResult_Event_type_support_ids_t _MoveToPosition_GetResult_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MoveToPosition_GetResult_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveToPosition_GetResult_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveToPosition_GetResult_Event_type_support_symbol_names_t _MoveToPosition_GetResult_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, r2_interfaces, action, MoveToPosition_GetResult_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, r2_interfaces, action, MoveToPosition_GetResult_Event)),
  }
};

typedef struct _MoveToPosition_GetResult_Event_type_support_data_t
{
  void * data[2];
} _MoveToPosition_GetResult_Event_type_support_data_t;

static _MoveToPosition_GetResult_Event_type_support_data_t _MoveToPosition_GetResult_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveToPosition_GetResult_Event_message_typesupport_map = {
  2,
  "r2_interfaces",
  &_MoveToPosition_GetResult_Event_message_typesupport_ids.typesupport_identifier[0],
  &_MoveToPosition_GetResult_Event_message_typesupport_symbol_names.symbol_name[0],
  &_MoveToPosition_GetResult_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveToPosition_GetResult_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveToPosition_GetResult_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &r2_interfaces__action__MoveToPosition_GetResult_Event__get_type_hash,
  &r2_interfaces__action__MoveToPosition_GetResult_Event__get_type_description,
  &r2_interfaces__action__MoveToPosition_GetResult_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace r2_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, r2_interfaces, action, MoveToPosition_GetResult_Event)() {
  return &::r2_interfaces::action::rosidl_typesupport_c::MoveToPosition_GetResult_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "r2_interfaces/action/detail/move_to_position__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "service_msgs/msg/service_event_info.h"
// already included above
// #include "builtin_interfaces/msg/time.h"

namespace r2_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{
typedef struct _MoveToPosition_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveToPosition_GetResult_type_support_ids_t;

static const _MoveToPosition_GetResult_type_support_ids_t _MoveToPosition_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MoveToPosition_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveToPosition_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveToPosition_GetResult_type_support_symbol_names_t _MoveToPosition_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, r2_interfaces, action, MoveToPosition_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, r2_interfaces, action, MoveToPosition_GetResult)),
  }
};

typedef struct _MoveToPosition_GetResult_type_support_data_t
{
  void * data[2];
} _MoveToPosition_GetResult_type_support_data_t;

static _MoveToPosition_GetResult_type_support_data_t _MoveToPosition_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveToPosition_GetResult_service_typesupport_map = {
  2,
  "r2_interfaces",
  &_MoveToPosition_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_MoveToPosition_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_MoveToPosition_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t MoveToPosition_GetResult_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveToPosition_GetResult_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &MoveToPosition_GetResult_Request_message_type_support_handle,
  &MoveToPosition_GetResult_Response_message_type_support_handle,
  &MoveToPosition_GetResult_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    r2_interfaces,
    action,
    MoveToPosition_GetResult
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    r2_interfaces,
    action,
    MoveToPosition_GetResult
  ),
  &r2_interfaces__action__MoveToPosition_GetResult__get_type_hash,
  &r2_interfaces__action__MoveToPosition_GetResult__get_type_description,
  &r2_interfaces__action__MoveToPosition_GetResult__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace r2_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, r2_interfaces, action, MoveToPosition_GetResult)() {
  return &::r2_interfaces::action::rosidl_typesupport_c::MoveToPosition_GetResult_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "r2_interfaces/action/detail/move_to_position__struct.h"
// already included above
// #include "r2_interfaces/action/detail/move_to_position__type_support.h"
// already included above
// #include "r2_interfaces/action/detail/move_to_position__functions.h"
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

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MoveToPosition_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveToPosition_FeedbackMessage_type_support_ids_t;

static const _MoveToPosition_FeedbackMessage_type_support_ids_t _MoveToPosition_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MoveToPosition_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveToPosition_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveToPosition_FeedbackMessage_type_support_symbol_names_t _MoveToPosition_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, r2_interfaces, action, MoveToPosition_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, r2_interfaces, action, MoveToPosition_FeedbackMessage)),
  }
};

typedef struct _MoveToPosition_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _MoveToPosition_FeedbackMessage_type_support_data_t;

static _MoveToPosition_FeedbackMessage_type_support_data_t _MoveToPosition_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveToPosition_FeedbackMessage_message_typesupport_map = {
  2,
  "r2_interfaces",
  &_MoveToPosition_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_MoveToPosition_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_MoveToPosition_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveToPosition_FeedbackMessage_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveToPosition_FeedbackMessage_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &r2_interfaces__action__MoveToPosition_FeedbackMessage__get_type_hash,
  &r2_interfaces__action__MoveToPosition_FeedbackMessage__get_type_description,
  &r2_interfaces__action__MoveToPosition_FeedbackMessage__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace r2_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, r2_interfaces, action, MoveToPosition_FeedbackMessage)() {
  return &::r2_interfaces::action::rosidl_typesupport_c::MoveToPosition_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "action_msgs/msg/goal_status_array.h"
#include "action_msgs/srv/cancel_goal.h"
#include "r2_interfaces/action/move_to_position.h"
// already included above
// #include "r2_interfaces/action/detail/move_to_position__type_support.h"

static rosidl_action_type_support_t _r2_interfaces__action__MoveToPosition__typesupport_c = {
  NULL, NULL, NULL, NULL, NULL,
  &r2_interfaces__action__MoveToPosition__get_type_hash,
  &r2_interfaces__action__MoveToPosition__get_type_description,
  &r2_interfaces__action__MoveToPosition__get_type_description_sources,
};

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(
  rosidl_typesupport_c, r2_interfaces, action, MoveToPosition)()
{
  // Thread-safe by always writing the same values to the static struct
  _r2_interfaces__action__MoveToPosition__typesupport_c.goal_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, r2_interfaces, action, MoveToPosition_SendGoal)();
  _r2_interfaces__action__MoveToPosition__typesupport_c.result_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, r2_interfaces, action, MoveToPosition_GetResult)();
  _r2_interfaces__action__MoveToPosition__typesupport_c.cancel_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, srv, CancelGoal)();
  _r2_interfaces__action__MoveToPosition__typesupport_c.feedback_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, r2_interfaces, action, MoveToPosition_FeedbackMessage)();
  _r2_interfaces__action__MoveToPosition__typesupport_c.status_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, msg, GoalStatusArray)();

  return &_r2_interfaces__action__MoveToPosition__typesupport_c;
}

#ifdef __cplusplus
}
#endif
