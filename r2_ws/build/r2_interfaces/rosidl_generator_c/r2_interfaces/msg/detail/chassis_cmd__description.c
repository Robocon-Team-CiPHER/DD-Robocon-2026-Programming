// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from r2_interfaces:msg/ChassisCmd.idl
// generated code does not contain a copyright notice

#include "r2_interfaces/msg/detail/chassis_cmd__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_r2_interfaces
const rosidl_type_hash_t *
r2_interfaces__msg__ChassisCmd__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x54, 0x17, 0x16, 0x82, 0x04, 0x51, 0xf2, 0xbc,
      0x69, 0x4e, 0xee, 0xac, 0x91, 0xa5, 0xee, 0x67,
      0x30, 0xf4, 0xac, 0x7e, 0xfa, 0x34, 0x10, 0x92,
      0x5a, 0xe6, 0x9a, 0x20, 0x54, 0xe1, 0xeb, 0xce,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "std_msgs/msg/detail/header__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char r2_interfaces__msg__ChassisCmd__TYPE_NAME[] = "r2_interfaces/msg/ChassisCmd";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char r2_interfaces__msg__ChassisCmd__FIELD_NAME__header[] = "header";
static char r2_interfaces__msg__ChassisCmd__FIELD_NAME__vx[] = "vx";
static char r2_interfaces__msg__ChassisCmd__FIELD_NAME__vy[] = "vy";
static char r2_interfaces__msg__ChassisCmd__FIELD_NAME__omega[] = "omega";
static char r2_interfaces__msg__ChassisCmd__FIELD_NAME__estop[] = "estop";

static rosidl_runtime_c__type_description__Field r2_interfaces__msg__ChassisCmd__FIELDS[] = {
  {
    {r2_interfaces__msg__ChassisCmd__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {r2_interfaces__msg__ChassisCmd__FIELD_NAME__vx, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {r2_interfaces__msg__ChassisCmd__FIELD_NAME__vy, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {r2_interfaces__msg__ChassisCmd__FIELD_NAME__omega, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {r2_interfaces__msg__ChassisCmd__FIELD_NAME__estop, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription r2_interfaces__msg__ChassisCmd__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
r2_interfaces__msg__ChassisCmd__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {r2_interfaces__msg__ChassisCmd__TYPE_NAME, 28, 28},
      {r2_interfaces__msg__ChassisCmd__FIELDS, 5, 5},
    },
    {r2_interfaces__msg__ChassisCmd__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# ChassisCmd.msg\n"
  "# Mecanum wheel chassis velocity command sent to ESP32\n"
  "std_msgs/Header header\n"
  "\n"
  "float32 vx       # Forward/backward velocity (m/s)\n"
  "float32 vy       # Lateral (strafe) velocity (m/s)\n"
  "float32 omega    # Rotational velocity (rad/s)\n"
  "bool    estop    # Emergency stop flag";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
r2_interfaces__msg__ChassisCmd__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {r2_interfaces__msg__ChassisCmd__TYPE_NAME, 28, 28},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 284, 284},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
r2_interfaces__msg__ChassisCmd__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *r2_interfaces__msg__ChassisCmd__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
