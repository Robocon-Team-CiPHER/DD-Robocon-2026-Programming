// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from r2_interfaces:srv/SetMechanismState.idl
// generated code does not contain a copyright notice

#include "r2_interfaces/srv/detail/set_mechanism_state__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_r2_interfaces
const rosidl_type_hash_t *
r2_interfaces__srv__SetMechanismState__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xce, 0x16, 0x38, 0x23, 0x8c, 0x5e, 0x65, 0x96,
      0x72, 0x12, 0x78, 0x1b, 0x41, 0x4c, 0x42, 0xa1,
      0x4e, 0x11, 0x26, 0x99, 0x75, 0xe0, 0xa9, 0xf0,
      0x86, 0xf4, 0x0a, 0xd8, 0x7f, 0xad, 0x98, 0x6a,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_r2_interfaces
const rosidl_type_hash_t *
r2_interfaces__srv__SetMechanismState_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xa5, 0x19, 0x19, 0xe8, 0xf8, 0x14, 0x6b, 0x34,
      0xb3, 0x6f, 0x89, 0x17, 0x3b, 0xc3, 0xb7, 0x68,
      0xf2, 0x95, 0x89, 0x40, 0xe7, 0xd8, 0xcc, 0x38,
      0xbf, 0xd8, 0x12, 0x62, 0x03, 0x43, 0x72, 0x6b,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_r2_interfaces
const rosidl_type_hash_t *
r2_interfaces__srv__SetMechanismState_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x77, 0xf7, 0x7c, 0x3e, 0xa8, 0x02, 0x75, 0x83,
      0xe4, 0x11, 0x10, 0x3e, 0x12, 0x9f, 0x61, 0x7d,
      0x3c, 0x6a, 0xc1, 0x01, 0xf3, 0x86, 0x4d, 0x2f,
      0x5b, 0x80, 0xe0, 0xad, 0x07, 0xa8, 0x37, 0xb0,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_r2_interfaces
const rosidl_type_hash_t *
r2_interfaces__srv__SetMechanismState_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xdc, 0x4b, 0xde, 0xb3, 0xe7, 0xd1, 0x81, 0xbf,
      0xd4, 0x98, 0xae, 0x5a, 0x0b, 0xf6, 0x87, 0xb8,
      0x00, 0x0e, 0x9c, 0xc3, 0xad, 0x6b, 0xc9, 0xdd,
      0x3d, 0x38, 0x3c, 0xd5, 0xbf, 0x37, 0xca, 0x64,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char r2_interfaces__srv__SetMechanismState__TYPE_NAME[] = "r2_interfaces/srv/SetMechanismState";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char r2_interfaces__srv__SetMechanismState_Event__TYPE_NAME[] = "r2_interfaces/srv/SetMechanismState_Event";
static char r2_interfaces__srv__SetMechanismState_Request__TYPE_NAME[] = "r2_interfaces/srv/SetMechanismState_Request";
static char r2_interfaces__srv__SetMechanismState_Response__TYPE_NAME[] = "r2_interfaces/srv/SetMechanismState_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char r2_interfaces__srv__SetMechanismState__FIELD_NAME__request_message[] = "request_message";
static char r2_interfaces__srv__SetMechanismState__FIELD_NAME__response_message[] = "response_message";
static char r2_interfaces__srv__SetMechanismState__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field r2_interfaces__srv__SetMechanismState__FIELDS[] = {
  {
    {r2_interfaces__srv__SetMechanismState__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {r2_interfaces__srv__SetMechanismState_Request__TYPE_NAME, 43, 43},
    },
    {NULL, 0, 0},
  },
  {
    {r2_interfaces__srv__SetMechanismState__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {r2_interfaces__srv__SetMechanismState_Response__TYPE_NAME, 44, 44},
    },
    {NULL, 0, 0},
  },
  {
    {r2_interfaces__srv__SetMechanismState__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {r2_interfaces__srv__SetMechanismState_Event__TYPE_NAME, 41, 41},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription r2_interfaces__srv__SetMechanismState__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {r2_interfaces__srv__SetMechanismState_Event__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
  {
    {r2_interfaces__srv__SetMechanismState_Request__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
  {
    {r2_interfaces__srv__SetMechanismState_Response__TYPE_NAME, 44, 44},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
r2_interfaces__srv__SetMechanismState__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {r2_interfaces__srv__SetMechanismState__TYPE_NAME, 35, 35},
      {r2_interfaces__srv__SetMechanismState__FIELDS, 3, 3},
    },
    {r2_interfaces__srv__SetMechanismState__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = r2_interfaces__srv__SetMechanismState_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = r2_interfaces__srv__SetMechanismState_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = r2_interfaces__srv__SetMechanismState_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char r2_interfaces__srv__SetMechanismState_Request__FIELD_NAME__mechanism_id[] = "mechanism_id";
static char r2_interfaces__srv__SetMechanismState_Request__FIELD_NAME__command[] = "command";
static char r2_interfaces__srv__SetMechanismState_Request__FIELD_NAME__target_position_mm[] = "target_position_mm";
static char r2_interfaces__srv__SetMechanismState_Request__FIELD_NAME__speed_percent[] = "speed_percent";

static rosidl_runtime_c__type_description__Field r2_interfaces__srv__SetMechanismState_Request__FIELDS[] = {
  {
    {r2_interfaces__srv__SetMechanismState_Request__FIELD_NAME__mechanism_id, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {r2_interfaces__srv__SetMechanismState_Request__FIELD_NAME__command, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {r2_interfaces__srv__SetMechanismState_Request__FIELD_NAME__target_position_mm, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {r2_interfaces__srv__SetMechanismState_Request__FIELD_NAME__speed_percent, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
r2_interfaces__srv__SetMechanismState_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {r2_interfaces__srv__SetMechanismState_Request__TYPE_NAME, 43, 43},
      {r2_interfaces__srv__SetMechanismState_Request__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char r2_interfaces__srv__SetMechanismState_Response__FIELD_NAME__success[] = "success";
static char r2_interfaces__srv__SetMechanismState_Response__FIELD_NAME__message[] = "message";
static char r2_interfaces__srv__SetMechanismState_Response__FIELD_NAME__actual_position_mm[] = "actual_position_mm";

static rosidl_runtime_c__type_description__Field r2_interfaces__srv__SetMechanismState_Response__FIELDS[] = {
  {
    {r2_interfaces__srv__SetMechanismState_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {r2_interfaces__srv__SetMechanismState_Response__FIELD_NAME__message, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {r2_interfaces__srv__SetMechanismState_Response__FIELD_NAME__actual_position_mm, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
r2_interfaces__srv__SetMechanismState_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {r2_interfaces__srv__SetMechanismState_Response__TYPE_NAME, 44, 44},
      {r2_interfaces__srv__SetMechanismState_Response__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char r2_interfaces__srv__SetMechanismState_Event__FIELD_NAME__info[] = "info";
static char r2_interfaces__srv__SetMechanismState_Event__FIELD_NAME__request[] = "request";
static char r2_interfaces__srv__SetMechanismState_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field r2_interfaces__srv__SetMechanismState_Event__FIELDS[] = {
  {
    {r2_interfaces__srv__SetMechanismState_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {r2_interfaces__srv__SetMechanismState_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {r2_interfaces__srv__SetMechanismState_Request__TYPE_NAME, 43, 43},
    },
    {NULL, 0, 0},
  },
  {
    {r2_interfaces__srv__SetMechanismState_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {r2_interfaces__srv__SetMechanismState_Response__TYPE_NAME, 44, 44},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription r2_interfaces__srv__SetMechanismState_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {r2_interfaces__srv__SetMechanismState_Request__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
  {
    {r2_interfaces__srv__SetMechanismState_Response__TYPE_NAME, 44, 44},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
r2_interfaces__srv__SetMechanismState_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {r2_interfaces__srv__SetMechanismState_Event__TYPE_NAME, 41, 41},
      {r2_interfaces__srv__SetMechanismState_Event__FIELDS, 3, 3},
    },
    {r2_interfaces__srv__SetMechanismState_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = r2_interfaces__srv__SetMechanismState_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = r2_interfaces__srv__SetMechanismState_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# SetMechanismState.srv\n"
  "# Generic service to command any Arduino-controlled mechanism\n"
  "\n"
  "string mechanism_id          # Target mechanism ID (see MechanismStatus)\n"
  "uint8  command               # 0=IDLE, 1=EXTEND, 2=RETRACT, 3=GRIP, 4=RELEASE, 5=HOME\n"
  "float32 target_position_mm  # Optional target position (0 if unused)\n"
  "float32 speed_percent        # Motor speed 0\\xe2\\x80\\x93100 %\n"
  "---\n"
  "bool    success\n"
  "string  message              # Human-readable result / error\n"
  "float32 actual_position_mm   # Position after command";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
r2_interfaces__srv__SetMechanismState__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {r2_interfaces__srv__SetMechanismState__TYPE_NAME, 35, 35},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 501, 501},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
r2_interfaces__srv__SetMechanismState_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {r2_interfaces__srv__SetMechanismState_Request__TYPE_NAME, 43, 43},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
r2_interfaces__srv__SetMechanismState_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {r2_interfaces__srv__SetMechanismState_Response__TYPE_NAME, 44, 44},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
r2_interfaces__srv__SetMechanismState_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {r2_interfaces__srv__SetMechanismState_Event__TYPE_NAME, 41, 41},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
r2_interfaces__srv__SetMechanismState__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *r2_interfaces__srv__SetMechanismState__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *r2_interfaces__srv__SetMechanismState_Event__get_individual_type_description_source(NULL);
    sources[3] = *r2_interfaces__srv__SetMechanismState_Request__get_individual_type_description_source(NULL);
    sources[4] = *r2_interfaces__srv__SetMechanismState_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
r2_interfaces__srv__SetMechanismState_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *r2_interfaces__srv__SetMechanismState_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
r2_interfaces__srv__SetMechanismState_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *r2_interfaces__srv__SetMechanismState_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
r2_interfaces__srv__SetMechanismState_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *r2_interfaces__srv__SetMechanismState_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *r2_interfaces__srv__SetMechanismState_Request__get_individual_type_description_source(NULL);
    sources[3] = *r2_interfaces__srv__SetMechanismState_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
