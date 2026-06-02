// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from r2_interfaces:action/ClimbStep.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "r2_interfaces/action/detail/climb_step__functions.h"
#include "r2_interfaces/action/detail/climb_step__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace r2_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _ClimbStep_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ClimbStep_Goal_type_support_ids_t;

static const _ClimbStep_Goal_type_support_ids_t _ClimbStep_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ClimbStep_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ClimbStep_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ClimbStep_Goal_type_support_symbol_names_t _ClimbStep_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, r2_interfaces, action, ClimbStep_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, r2_interfaces, action, ClimbStep_Goal)),
  }
};

typedef struct _ClimbStep_Goal_type_support_data_t
{
  void * data[2];
} _ClimbStep_Goal_type_support_data_t;

static _ClimbStep_Goal_type_support_data_t _ClimbStep_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ClimbStep_Goal_message_typesupport_map = {
  2,
  "r2_interfaces",
  &_ClimbStep_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_ClimbStep_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_ClimbStep_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ClimbStep_Goal_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ClimbStep_Goal_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &r2_interfaces__action__ClimbStep_Goal__get_type_hash,
  &r2_interfaces__action__ClimbStep_Goal__get_type_description,
  &r2_interfaces__action__ClimbStep_Goal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace r2_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<r2_interfaces::action::ClimbStep_Goal>()
{
  return &::r2_interfaces::action::rosidl_typesupport_cpp::ClimbStep_Goal_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, r2_interfaces, action, ClimbStep_Goal)() {
  return get_message_type_support_handle<r2_interfaces::action::ClimbStep_Goal>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "r2_interfaces/action/detail/climb_step__functions.h"
// already included above
// #include "r2_interfaces/action/detail/climb_step__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace r2_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _ClimbStep_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ClimbStep_Result_type_support_ids_t;

static const _ClimbStep_Result_type_support_ids_t _ClimbStep_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ClimbStep_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ClimbStep_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ClimbStep_Result_type_support_symbol_names_t _ClimbStep_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, r2_interfaces, action, ClimbStep_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, r2_interfaces, action, ClimbStep_Result)),
  }
};

typedef struct _ClimbStep_Result_type_support_data_t
{
  void * data[2];
} _ClimbStep_Result_type_support_data_t;

static _ClimbStep_Result_type_support_data_t _ClimbStep_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ClimbStep_Result_message_typesupport_map = {
  2,
  "r2_interfaces",
  &_ClimbStep_Result_message_typesupport_ids.typesupport_identifier[0],
  &_ClimbStep_Result_message_typesupport_symbol_names.symbol_name[0],
  &_ClimbStep_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ClimbStep_Result_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ClimbStep_Result_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &r2_interfaces__action__ClimbStep_Result__get_type_hash,
  &r2_interfaces__action__ClimbStep_Result__get_type_description,
  &r2_interfaces__action__ClimbStep_Result__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace r2_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<r2_interfaces::action::ClimbStep_Result>()
{
  return &::r2_interfaces::action::rosidl_typesupport_cpp::ClimbStep_Result_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, r2_interfaces, action, ClimbStep_Result)() {
  return get_message_type_support_handle<r2_interfaces::action::ClimbStep_Result>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "r2_interfaces/action/detail/climb_step__functions.h"
// already included above
// #include "r2_interfaces/action/detail/climb_step__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace r2_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _ClimbStep_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ClimbStep_Feedback_type_support_ids_t;

static const _ClimbStep_Feedback_type_support_ids_t _ClimbStep_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ClimbStep_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ClimbStep_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ClimbStep_Feedback_type_support_symbol_names_t _ClimbStep_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, r2_interfaces, action, ClimbStep_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, r2_interfaces, action, ClimbStep_Feedback)),
  }
};

typedef struct _ClimbStep_Feedback_type_support_data_t
{
  void * data[2];
} _ClimbStep_Feedback_type_support_data_t;

static _ClimbStep_Feedback_type_support_data_t _ClimbStep_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ClimbStep_Feedback_message_typesupport_map = {
  2,
  "r2_interfaces",
  &_ClimbStep_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_ClimbStep_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_ClimbStep_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ClimbStep_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ClimbStep_Feedback_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &r2_interfaces__action__ClimbStep_Feedback__get_type_hash,
  &r2_interfaces__action__ClimbStep_Feedback__get_type_description,
  &r2_interfaces__action__ClimbStep_Feedback__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace r2_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<r2_interfaces::action::ClimbStep_Feedback>()
{
  return &::r2_interfaces::action::rosidl_typesupport_cpp::ClimbStep_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, r2_interfaces, action, ClimbStep_Feedback)() {
  return get_message_type_support_handle<r2_interfaces::action::ClimbStep_Feedback>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "r2_interfaces/action/detail/climb_step__functions.h"
// already included above
// #include "r2_interfaces/action/detail/climb_step__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace r2_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _ClimbStep_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ClimbStep_SendGoal_Request_type_support_ids_t;

static const _ClimbStep_SendGoal_Request_type_support_ids_t _ClimbStep_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ClimbStep_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ClimbStep_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ClimbStep_SendGoal_Request_type_support_symbol_names_t _ClimbStep_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, r2_interfaces, action, ClimbStep_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, r2_interfaces, action, ClimbStep_SendGoal_Request)),
  }
};

typedef struct _ClimbStep_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _ClimbStep_SendGoal_Request_type_support_data_t;

static _ClimbStep_SendGoal_Request_type_support_data_t _ClimbStep_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ClimbStep_SendGoal_Request_message_typesupport_map = {
  2,
  "r2_interfaces",
  &_ClimbStep_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_ClimbStep_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_ClimbStep_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ClimbStep_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ClimbStep_SendGoal_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &r2_interfaces__action__ClimbStep_SendGoal_Request__get_type_hash,
  &r2_interfaces__action__ClimbStep_SendGoal_Request__get_type_description,
  &r2_interfaces__action__ClimbStep_SendGoal_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace r2_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<r2_interfaces::action::ClimbStep_SendGoal_Request>()
{
  return &::r2_interfaces::action::rosidl_typesupport_cpp::ClimbStep_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, r2_interfaces, action, ClimbStep_SendGoal_Request)() {
  return get_message_type_support_handle<r2_interfaces::action::ClimbStep_SendGoal_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "r2_interfaces/action/detail/climb_step__functions.h"
// already included above
// #include "r2_interfaces/action/detail/climb_step__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace r2_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _ClimbStep_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ClimbStep_SendGoal_Response_type_support_ids_t;

static const _ClimbStep_SendGoal_Response_type_support_ids_t _ClimbStep_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ClimbStep_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ClimbStep_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ClimbStep_SendGoal_Response_type_support_symbol_names_t _ClimbStep_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, r2_interfaces, action, ClimbStep_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, r2_interfaces, action, ClimbStep_SendGoal_Response)),
  }
};

typedef struct _ClimbStep_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _ClimbStep_SendGoal_Response_type_support_data_t;

static _ClimbStep_SendGoal_Response_type_support_data_t _ClimbStep_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ClimbStep_SendGoal_Response_message_typesupport_map = {
  2,
  "r2_interfaces",
  &_ClimbStep_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_ClimbStep_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_ClimbStep_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ClimbStep_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ClimbStep_SendGoal_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &r2_interfaces__action__ClimbStep_SendGoal_Response__get_type_hash,
  &r2_interfaces__action__ClimbStep_SendGoal_Response__get_type_description,
  &r2_interfaces__action__ClimbStep_SendGoal_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace r2_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<r2_interfaces::action::ClimbStep_SendGoal_Response>()
{
  return &::r2_interfaces::action::rosidl_typesupport_cpp::ClimbStep_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, r2_interfaces, action, ClimbStep_SendGoal_Response)() {
  return get_message_type_support_handle<r2_interfaces::action::ClimbStep_SendGoal_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "r2_interfaces/action/detail/climb_step__functions.h"
// already included above
// #include "r2_interfaces/action/detail/climb_step__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace r2_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _ClimbStep_SendGoal_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ClimbStep_SendGoal_Event_type_support_ids_t;

static const _ClimbStep_SendGoal_Event_type_support_ids_t _ClimbStep_SendGoal_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ClimbStep_SendGoal_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ClimbStep_SendGoal_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ClimbStep_SendGoal_Event_type_support_symbol_names_t _ClimbStep_SendGoal_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, r2_interfaces, action, ClimbStep_SendGoal_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, r2_interfaces, action, ClimbStep_SendGoal_Event)),
  }
};

typedef struct _ClimbStep_SendGoal_Event_type_support_data_t
{
  void * data[2];
} _ClimbStep_SendGoal_Event_type_support_data_t;

static _ClimbStep_SendGoal_Event_type_support_data_t _ClimbStep_SendGoal_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ClimbStep_SendGoal_Event_message_typesupport_map = {
  2,
  "r2_interfaces",
  &_ClimbStep_SendGoal_Event_message_typesupport_ids.typesupport_identifier[0],
  &_ClimbStep_SendGoal_Event_message_typesupport_symbol_names.symbol_name[0],
  &_ClimbStep_SendGoal_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ClimbStep_SendGoal_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ClimbStep_SendGoal_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &r2_interfaces__action__ClimbStep_SendGoal_Event__get_type_hash,
  &r2_interfaces__action__ClimbStep_SendGoal_Event__get_type_description,
  &r2_interfaces__action__ClimbStep_SendGoal_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace r2_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<r2_interfaces::action::ClimbStep_SendGoal_Event>()
{
  return &::r2_interfaces::action::rosidl_typesupport_cpp::ClimbStep_SendGoal_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, r2_interfaces, action, ClimbStep_SendGoal_Event)() {
  return get_message_type_support_handle<r2_interfaces::action::ClimbStep_SendGoal_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "r2_interfaces/action/detail/climb_step__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace r2_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _ClimbStep_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ClimbStep_SendGoal_type_support_ids_t;

static const _ClimbStep_SendGoal_type_support_ids_t _ClimbStep_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ClimbStep_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ClimbStep_SendGoal_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ClimbStep_SendGoal_type_support_symbol_names_t _ClimbStep_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, r2_interfaces, action, ClimbStep_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, r2_interfaces, action, ClimbStep_SendGoal)),
  }
};

typedef struct _ClimbStep_SendGoal_type_support_data_t
{
  void * data[2];
} _ClimbStep_SendGoal_type_support_data_t;

static _ClimbStep_SendGoal_type_support_data_t _ClimbStep_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ClimbStep_SendGoal_service_typesupport_map = {
  2,
  "r2_interfaces",
  &_ClimbStep_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_ClimbStep_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_ClimbStep_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t ClimbStep_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ClimbStep_SendGoal_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<r2_interfaces::action::ClimbStep_SendGoal_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<r2_interfaces::action::ClimbStep_SendGoal_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<r2_interfaces::action::ClimbStep_SendGoal_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<r2_interfaces::action::ClimbStep_SendGoal>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<r2_interfaces::action::ClimbStep_SendGoal>,
  &r2_interfaces__action__ClimbStep_SendGoal__get_type_hash,
  &r2_interfaces__action__ClimbStep_SendGoal__get_type_description,
  &r2_interfaces__action__ClimbStep_SendGoal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace r2_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<r2_interfaces::action::ClimbStep_SendGoal>()
{
  return &::r2_interfaces::action::rosidl_typesupport_cpp::ClimbStep_SendGoal_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, r2_interfaces, action, ClimbStep_SendGoal)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<r2_interfaces::action::ClimbStep_SendGoal>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "r2_interfaces/action/detail/climb_step__functions.h"
// already included above
// #include "r2_interfaces/action/detail/climb_step__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace r2_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _ClimbStep_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ClimbStep_GetResult_Request_type_support_ids_t;

static const _ClimbStep_GetResult_Request_type_support_ids_t _ClimbStep_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ClimbStep_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ClimbStep_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ClimbStep_GetResult_Request_type_support_symbol_names_t _ClimbStep_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, r2_interfaces, action, ClimbStep_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, r2_interfaces, action, ClimbStep_GetResult_Request)),
  }
};

typedef struct _ClimbStep_GetResult_Request_type_support_data_t
{
  void * data[2];
} _ClimbStep_GetResult_Request_type_support_data_t;

static _ClimbStep_GetResult_Request_type_support_data_t _ClimbStep_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ClimbStep_GetResult_Request_message_typesupport_map = {
  2,
  "r2_interfaces",
  &_ClimbStep_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_ClimbStep_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_ClimbStep_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ClimbStep_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ClimbStep_GetResult_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &r2_interfaces__action__ClimbStep_GetResult_Request__get_type_hash,
  &r2_interfaces__action__ClimbStep_GetResult_Request__get_type_description,
  &r2_interfaces__action__ClimbStep_GetResult_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace r2_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<r2_interfaces::action::ClimbStep_GetResult_Request>()
{
  return &::r2_interfaces::action::rosidl_typesupport_cpp::ClimbStep_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, r2_interfaces, action, ClimbStep_GetResult_Request)() {
  return get_message_type_support_handle<r2_interfaces::action::ClimbStep_GetResult_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "r2_interfaces/action/detail/climb_step__functions.h"
// already included above
// #include "r2_interfaces/action/detail/climb_step__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace r2_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _ClimbStep_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ClimbStep_GetResult_Response_type_support_ids_t;

static const _ClimbStep_GetResult_Response_type_support_ids_t _ClimbStep_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ClimbStep_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ClimbStep_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ClimbStep_GetResult_Response_type_support_symbol_names_t _ClimbStep_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, r2_interfaces, action, ClimbStep_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, r2_interfaces, action, ClimbStep_GetResult_Response)),
  }
};

typedef struct _ClimbStep_GetResult_Response_type_support_data_t
{
  void * data[2];
} _ClimbStep_GetResult_Response_type_support_data_t;

static _ClimbStep_GetResult_Response_type_support_data_t _ClimbStep_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ClimbStep_GetResult_Response_message_typesupport_map = {
  2,
  "r2_interfaces",
  &_ClimbStep_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_ClimbStep_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_ClimbStep_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ClimbStep_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ClimbStep_GetResult_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &r2_interfaces__action__ClimbStep_GetResult_Response__get_type_hash,
  &r2_interfaces__action__ClimbStep_GetResult_Response__get_type_description,
  &r2_interfaces__action__ClimbStep_GetResult_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace r2_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<r2_interfaces::action::ClimbStep_GetResult_Response>()
{
  return &::r2_interfaces::action::rosidl_typesupport_cpp::ClimbStep_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, r2_interfaces, action, ClimbStep_GetResult_Response)() {
  return get_message_type_support_handle<r2_interfaces::action::ClimbStep_GetResult_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "r2_interfaces/action/detail/climb_step__functions.h"
// already included above
// #include "r2_interfaces/action/detail/climb_step__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace r2_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _ClimbStep_GetResult_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ClimbStep_GetResult_Event_type_support_ids_t;

static const _ClimbStep_GetResult_Event_type_support_ids_t _ClimbStep_GetResult_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ClimbStep_GetResult_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ClimbStep_GetResult_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ClimbStep_GetResult_Event_type_support_symbol_names_t _ClimbStep_GetResult_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, r2_interfaces, action, ClimbStep_GetResult_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, r2_interfaces, action, ClimbStep_GetResult_Event)),
  }
};

typedef struct _ClimbStep_GetResult_Event_type_support_data_t
{
  void * data[2];
} _ClimbStep_GetResult_Event_type_support_data_t;

static _ClimbStep_GetResult_Event_type_support_data_t _ClimbStep_GetResult_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ClimbStep_GetResult_Event_message_typesupport_map = {
  2,
  "r2_interfaces",
  &_ClimbStep_GetResult_Event_message_typesupport_ids.typesupport_identifier[0],
  &_ClimbStep_GetResult_Event_message_typesupport_symbol_names.symbol_name[0],
  &_ClimbStep_GetResult_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ClimbStep_GetResult_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ClimbStep_GetResult_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &r2_interfaces__action__ClimbStep_GetResult_Event__get_type_hash,
  &r2_interfaces__action__ClimbStep_GetResult_Event__get_type_description,
  &r2_interfaces__action__ClimbStep_GetResult_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace r2_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<r2_interfaces::action::ClimbStep_GetResult_Event>()
{
  return &::r2_interfaces::action::rosidl_typesupport_cpp::ClimbStep_GetResult_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, r2_interfaces, action, ClimbStep_GetResult_Event)() {
  return get_message_type_support_handle<r2_interfaces::action::ClimbStep_GetResult_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "r2_interfaces/action/detail/climb_step__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace r2_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _ClimbStep_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ClimbStep_GetResult_type_support_ids_t;

static const _ClimbStep_GetResult_type_support_ids_t _ClimbStep_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ClimbStep_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ClimbStep_GetResult_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ClimbStep_GetResult_type_support_symbol_names_t _ClimbStep_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, r2_interfaces, action, ClimbStep_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, r2_interfaces, action, ClimbStep_GetResult)),
  }
};

typedef struct _ClimbStep_GetResult_type_support_data_t
{
  void * data[2];
} _ClimbStep_GetResult_type_support_data_t;

static _ClimbStep_GetResult_type_support_data_t _ClimbStep_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ClimbStep_GetResult_service_typesupport_map = {
  2,
  "r2_interfaces",
  &_ClimbStep_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_ClimbStep_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_ClimbStep_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t ClimbStep_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ClimbStep_GetResult_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<r2_interfaces::action::ClimbStep_GetResult_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<r2_interfaces::action::ClimbStep_GetResult_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<r2_interfaces::action::ClimbStep_GetResult_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<r2_interfaces::action::ClimbStep_GetResult>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<r2_interfaces::action::ClimbStep_GetResult>,
  &r2_interfaces__action__ClimbStep_GetResult__get_type_hash,
  &r2_interfaces__action__ClimbStep_GetResult__get_type_description,
  &r2_interfaces__action__ClimbStep_GetResult__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace r2_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<r2_interfaces::action::ClimbStep_GetResult>()
{
  return &::r2_interfaces::action::rosidl_typesupport_cpp::ClimbStep_GetResult_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, r2_interfaces, action, ClimbStep_GetResult)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<r2_interfaces::action::ClimbStep_GetResult>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "r2_interfaces/action/detail/climb_step__functions.h"
// already included above
// #include "r2_interfaces/action/detail/climb_step__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace r2_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _ClimbStep_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ClimbStep_FeedbackMessage_type_support_ids_t;

static const _ClimbStep_FeedbackMessage_type_support_ids_t _ClimbStep_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ClimbStep_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ClimbStep_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ClimbStep_FeedbackMessage_type_support_symbol_names_t _ClimbStep_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, r2_interfaces, action, ClimbStep_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, r2_interfaces, action, ClimbStep_FeedbackMessage)),
  }
};

typedef struct _ClimbStep_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _ClimbStep_FeedbackMessage_type_support_data_t;

static _ClimbStep_FeedbackMessage_type_support_data_t _ClimbStep_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ClimbStep_FeedbackMessage_message_typesupport_map = {
  2,
  "r2_interfaces",
  &_ClimbStep_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_ClimbStep_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_ClimbStep_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ClimbStep_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ClimbStep_FeedbackMessage_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &r2_interfaces__action__ClimbStep_FeedbackMessage__get_type_hash,
  &r2_interfaces__action__ClimbStep_FeedbackMessage__get_type_description,
  &r2_interfaces__action__ClimbStep_FeedbackMessage__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace r2_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<r2_interfaces::action::ClimbStep_FeedbackMessage>()
{
  return &::r2_interfaces::action::rosidl_typesupport_cpp::ClimbStep_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, r2_interfaces, action, ClimbStep_FeedbackMessage)() {
  return get_message_type_support_handle<r2_interfaces::action::ClimbStep_FeedbackMessage>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

#include "action_msgs/msg/goal_status_array.hpp"
#include "action_msgs/srv/cancel_goal.hpp"
// already included above
// #include "r2_interfaces/action/detail/climb_step__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_typesupport_cpp/action_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"

namespace r2_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

static rosidl_action_type_support_t ClimbStep_action_type_support_handle = {
  NULL, NULL, NULL, NULL, NULL,
  &r2_interfaces__action__ClimbStep__get_type_hash,
  &r2_interfaces__action__ClimbStep__get_type_description,
  &r2_interfaces__action__ClimbStep__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace r2_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
get_action_type_support_handle<r2_interfaces::action::ClimbStep>()
{
  using ::r2_interfaces::action::rosidl_typesupport_cpp::ClimbStep_action_type_support_handle;
  // Thread-safe by always writing the same values to the static struct
  ClimbStep_action_type_support_handle.goal_service_type_support = get_service_type_support_handle<::r2_interfaces::action::ClimbStep::Impl::SendGoalService>();
  ClimbStep_action_type_support_handle.result_service_type_support = get_service_type_support_handle<::r2_interfaces::action::ClimbStep::Impl::GetResultService>();
  ClimbStep_action_type_support_handle.cancel_service_type_support = get_service_type_support_handle<::r2_interfaces::action::ClimbStep::Impl::CancelGoalService>();
  ClimbStep_action_type_support_handle.feedback_message_type_support = get_message_type_support_handle<::r2_interfaces::action::ClimbStep::Impl::FeedbackMessage>();
  ClimbStep_action_type_support_handle.status_message_type_support = get_message_type_support_handle<::r2_interfaces::action::ClimbStep::Impl::GoalStatusMessage>();
  return &ClimbStep_action_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(rosidl_typesupport_cpp, r2_interfaces, action, ClimbStep)() {
  return ::rosidl_typesupport_cpp::get_action_type_support_handle<r2_interfaces::action::ClimbStep>();
}

#ifdef __cplusplus
}
#endif
