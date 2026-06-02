// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from r2_interfaces:srv/SystemHandshake.idl
// generated code does not contain a copyright notice

#include "r2_interfaces/srv/detail/system_handshake__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_r2_interfaces
const rosidl_type_hash_t *
r2_interfaces__srv__SystemHandshake__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc5, 0x97, 0x67, 0x39, 0x5a, 0x9d, 0x69, 0x0d,
      0x99, 0xd1, 0x1e, 0x87, 0x24, 0x68, 0x01, 0xd4,
      0x5d, 0x47, 0x60, 0xb7, 0x06, 0xe6, 0xb4, 0xc2,
      0xf5, 0x94, 0x27, 0x1b, 0xc7, 0x07, 0x3c, 0x9b,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_r2_interfaces
const rosidl_type_hash_t *
r2_interfaces__srv__SystemHandshake_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x90, 0x89, 0x0d, 0xb1, 0x3f, 0x07, 0x4c, 0xd9,
      0x89, 0x71, 0x86, 0x31, 0x89, 0xc8, 0x3d, 0x9d,
      0x9c, 0x2b, 0x3e, 0x69, 0xc8, 0x7a, 0x59, 0x47,
      0x41, 0x08, 0xba, 0x05, 0x83, 0x85, 0xbb, 0x0c,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_r2_interfaces
const rosidl_type_hash_t *
r2_interfaces__srv__SystemHandshake_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xeb, 0xaa, 0x82, 0xd5, 0xd4, 0xdb, 0x19, 0xef,
      0xcd, 0x60, 0x56, 0x70, 0x0e, 0xf4, 0x76, 0xef,
      0x50, 0xae, 0x26, 0x5e, 0x0f, 0xd7, 0x66, 0xcf,
      0xaf, 0xa2, 0xe7, 0xfd, 0x92, 0x37, 0x69, 0xff,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_r2_interfaces
const rosidl_type_hash_t *
r2_interfaces__srv__SystemHandshake_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xfd, 0x6b, 0x38, 0xd6, 0x0e, 0x06, 0x26, 0xd2,
      0x13, 0x2e, 0xbf, 0x6b, 0x0e, 0xd3, 0xbe, 0xef,
      0x65, 0x03, 0x0a, 0x17, 0x84, 0xe1, 0x3f, 0x5a,
      0x9b, 0x0f, 0x4e, 0xbf, 0xfb, 0x1a, 0xac, 0xab,
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

static char r2_interfaces__srv__SystemHandshake__TYPE_NAME[] = "r2_interfaces/srv/SystemHandshake";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char r2_interfaces__srv__SystemHandshake_Event__TYPE_NAME[] = "r2_interfaces/srv/SystemHandshake_Event";
static char r2_interfaces__srv__SystemHandshake_Request__TYPE_NAME[] = "r2_interfaces/srv/SystemHandshake_Request";
static char r2_interfaces__srv__SystemHandshake_Response__TYPE_NAME[] = "r2_interfaces/srv/SystemHandshake_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char r2_interfaces__srv__SystemHandshake__FIELD_NAME__request_message[] = "request_message";
static char r2_interfaces__srv__SystemHandshake__FIELD_NAME__response_message[] = "response_message";
static char r2_interfaces__srv__SystemHandshake__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field r2_interfaces__srv__SystemHandshake__FIELDS[] = {
  {
    {r2_interfaces__srv__SystemHandshake__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {r2_interfaces__srv__SystemHandshake_Request__TYPE_NAME, 41, 41},
    },
    {NULL, 0, 0},
  },
  {
    {r2_interfaces__srv__SystemHandshake__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {r2_interfaces__srv__SystemHandshake_Response__TYPE_NAME, 42, 42},
    },
    {NULL, 0, 0},
  },
  {
    {r2_interfaces__srv__SystemHandshake__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {r2_interfaces__srv__SystemHandshake_Event__TYPE_NAME, 39, 39},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription r2_interfaces__srv__SystemHandshake__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {r2_interfaces__srv__SystemHandshake_Event__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
  {
    {r2_interfaces__srv__SystemHandshake_Request__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
  {
    {r2_interfaces__srv__SystemHandshake_Response__TYPE_NAME, 42, 42},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
r2_interfaces__srv__SystemHandshake__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {r2_interfaces__srv__SystemHandshake__TYPE_NAME, 33, 33},
      {r2_interfaces__srv__SystemHandshake__FIELDS, 3, 3},
    },
    {r2_interfaces__srv__SystemHandshake__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = r2_interfaces__srv__SystemHandshake_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = r2_interfaces__srv__SystemHandshake_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = r2_interfaces__srv__SystemHandshake_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char r2_interfaces__srv__SystemHandshake_Request__FIELD_NAME__device_id[] = "device_id";
static char r2_interfaces__srv__SystemHandshake_Request__FIELD_NAME__timeout_ms[] = "timeout_ms";

static rosidl_runtime_c__type_description__Field r2_interfaces__srv__SystemHandshake_Request__FIELDS[] = {
  {
    {r2_interfaces__srv__SystemHandshake_Request__FIELD_NAME__device_id, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {r2_interfaces__srv__SystemHandshake_Request__FIELD_NAME__timeout_ms, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
r2_interfaces__srv__SystemHandshake_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {r2_interfaces__srv__SystemHandshake_Request__TYPE_NAME, 41, 41},
      {r2_interfaces__srv__SystemHandshake_Request__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char r2_interfaces__srv__SystemHandshake_Response__FIELD_NAME__success[] = "success";
static char r2_interfaces__srv__SystemHandshake_Response__FIELD_NAME__firmware_version[] = "firmware_version";
static char r2_interfaces__srv__SystemHandshake_Response__FIELD_NAME__device_status[] = "device_status";
static char r2_interfaces__srv__SystemHandshake_Response__FIELD_NAME__error_msg[] = "error_msg";

static rosidl_runtime_c__type_description__Field r2_interfaces__srv__SystemHandshake_Response__FIELDS[] = {
  {
    {r2_interfaces__srv__SystemHandshake_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {r2_interfaces__srv__SystemHandshake_Response__FIELD_NAME__firmware_version, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {r2_interfaces__srv__SystemHandshake_Response__FIELD_NAME__device_status, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {r2_interfaces__srv__SystemHandshake_Response__FIELD_NAME__error_msg, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
r2_interfaces__srv__SystemHandshake_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {r2_interfaces__srv__SystemHandshake_Response__TYPE_NAME, 42, 42},
      {r2_interfaces__srv__SystemHandshake_Response__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char r2_interfaces__srv__SystemHandshake_Event__FIELD_NAME__info[] = "info";
static char r2_interfaces__srv__SystemHandshake_Event__FIELD_NAME__request[] = "request";
static char r2_interfaces__srv__SystemHandshake_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field r2_interfaces__srv__SystemHandshake_Event__FIELDS[] = {
  {
    {r2_interfaces__srv__SystemHandshake_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {r2_interfaces__srv__SystemHandshake_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {r2_interfaces__srv__SystemHandshake_Request__TYPE_NAME, 41, 41},
    },
    {NULL, 0, 0},
  },
  {
    {r2_interfaces__srv__SystemHandshake_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {r2_interfaces__srv__SystemHandshake_Response__TYPE_NAME, 42, 42},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription r2_interfaces__srv__SystemHandshake_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {r2_interfaces__srv__SystemHandshake_Request__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
  {
    {r2_interfaces__srv__SystemHandshake_Response__TYPE_NAME, 42, 42},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
r2_interfaces__srv__SystemHandshake_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {r2_interfaces__srv__SystemHandshake_Event__TYPE_NAME, 39, 39},
      {r2_interfaces__srv__SystemHandshake_Event__FIELDS, 3, 3},
    },
    {r2_interfaces__srv__SystemHandshake_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = r2_interfaces__srv__SystemHandshake_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = r2_interfaces__srv__SystemHandshake_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# SystemHandshake.srv\n"
  "# Called during initialization to ping a hardware device and get its status\n"
  "\n"
  "uint8   device_id       # 0x01 = ESP32, 0x02 = Arduino Mega\n"
  "uint32  timeout_ms      # Max wait for ACK\n"
  "---\n"
  "bool    success\n"
  "string  firmware_version\n"
  "string  device_status\n"
  "string  error_msg";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
r2_interfaces__srv__SystemHandshake__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {r2_interfaces__srv__SystemHandshake__TYPE_NAME, 33, 33},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 287, 287},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
r2_interfaces__srv__SystemHandshake_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {r2_interfaces__srv__SystemHandshake_Request__TYPE_NAME, 41, 41},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
r2_interfaces__srv__SystemHandshake_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {r2_interfaces__srv__SystemHandshake_Response__TYPE_NAME, 42, 42},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
r2_interfaces__srv__SystemHandshake_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {r2_interfaces__srv__SystemHandshake_Event__TYPE_NAME, 39, 39},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
r2_interfaces__srv__SystemHandshake__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *r2_interfaces__srv__SystemHandshake__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *r2_interfaces__srv__SystemHandshake_Event__get_individual_type_description_source(NULL);
    sources[3] = *r2_interfaces__srv__SystemHandshake_Request__get_individual_type_description_source(NULL);
    sources[4] = *r2_interfaces__srv__SystemHandshake_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
r2_interfaces__srv__SystemHandshake_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *r2_interfaces__srv__SystemHandshake_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
r2_interfaces__srv__SystemHandshake_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *r2_interfaces__srv__SystemHandshake_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
r2_interfaces__srv__SystemHandshake_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *r2_interfaces__srv__SystemHandshake_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *r2_interfaces__srv__SystemHandshake_Request__get_individual_type_description_source(NULL);
    sources[3] = *r2_interfaces__srv__SystemHandshake_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
