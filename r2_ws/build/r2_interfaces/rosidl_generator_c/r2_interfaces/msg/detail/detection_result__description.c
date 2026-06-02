// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from r2_interfaces:msg/DetectionResult.idl
// generated code does not contain a copyright notice

#include "r2_interfaces/msg/detail/detection_result__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_r2_interfaces
const rosidl_type_hash_t *
r2_interfaces__msg__DetectionResult__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xd9, 0x17, 0xac, 0x41, 0x33, 0xcc, 0xf7, 0xb0,
      0x9f, 0x8c, 0x15, 0x81, 0xd2, 0x86, 0x67, 0xf5,
      0xfe, 0xd4, 0xa7, 0xb8, 0x94, 0x39, 0x46, 0x57,
      0xbf, 0xed, 0x8f, 0x3c, 0xef, 0x8c, 0x65, 0x75,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "std_msgs/msg/detail/header__functions.h"
#include "sensor_msgs/msg/detail/region_of_interest__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t sensor_msgs__msg__RegionOfInterest__EXPECTED_HASH = {1, {
    0xad, 0x16, 0xbc, 0xba, 0x5f, 0x91, 0x31, 0xdc,
    0xdb, 0xa6, 0xfb, 0xde, 0xd1, 0x9f, 0x72, 0x6f,
    0x54, 0x40, 0xe3, 0xc5, 0x13, 0xb4, 0xfb, 0x58,
    0x6d, 0xd3, 0x02, 0x7e, 0xee, 0xd8, 0xab, 0xb1,
  }};
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char r2_interfaces__msg__DetectionResult__TYPE_NAME[] = "r2_interfaces/msg/DetectionResult";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char sensor_msgs__msg__RegionOfInterest__TYPE_NAME[] = "sensor_msgs/msg/RegionOfInterest";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char r2_interfaces__msg__DetectionResult__FIELD_NAME__header[] = "header";
static char r2_interfaces__msg__DetectionResult__FIELD_NAME__target_type[] = "target_type";
static char r2_interfaces__msg__DetectionResult__FIELD_NAME__detected[] = "detected";
static char r2_interfaces__msg__DetectionResult__FIELD_NAME__distance_mm[] = "distance_mm";
static char r2_interfaces__msg__DetectionResult__FIELD_NAME__offset_x_mm[] = "offset_x_mm";
static char r2_interfaces__msg__DetectionResult__FIELD_NAME__offset_y_mm[] = "offset_y_mm";
static char r2_interfaces__msg__DetectionResult__FIELD_NAME__confidence[] = "confidence";
static char r2_interfaces__msg__DetectionResult__FIELD_NAME__bounding_box[] = "bounding_box";

static rosidl_runtime_c__type_description__Field r2_interfaces__msg__DetectionResult__FIELDS[] = {
  {
    {r2_interfaces__msg__DetectionResult__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {r2_interfaces__msg__DetectionResult__FIELD_NAME__target_type, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {r2_interfaces__msg__DetectionResult__FIELD_NAME__detected, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {r2_interfaces__msg__DetectionResult__FIELD_NAME__distance_mm, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {r2_interfaces__msg__DetectionResult__FIELD_NAME__offset_x_mm, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {r2_interfaces__msg__DetectionResult__FIELD_NAME__offset_y_mm, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {r2_interfaces__msg__DetectionResult__FIELD_NAME__confidence, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {r2_interfaces__msg__DetectionResult__FIELD_NAME__bounding_box, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {sensor_msgs__msg__RegionOfInterest__TYPE_NAME, 32, 32},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription r2_interfaces__msg__DetectionResult__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {sensor_msgs__msg__RegionOfInterest__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
r2_interfaces__msg__DetectionResult__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {r2_interfaces__msg__DetectionResult__TYPE_NAME, 33, 33},
      {r2_interfaces__msg__DetectionResult__FIELDS, 8, 8},
    },
    {r2_interfaces__msg__DetectionResult__REFERENCED_TYPE_DESCRIPTIONS, 3, 3},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&sensor_msgs__msg__RegionOfInterest__EXPECTED_HASH, sensor_msgs__msg__RegionOfInterest__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = sensor_msgs__msg__RegionOfInterest__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# DetectionResult.msg\n"
  "# Published by detection nodes (spearhead, KFS, TicTacToe rack)\n"
  "\n"
  "std_msgs/Header header\n"
  "\n"
  "string  target_type          # \"spearhead\" | \"kfs_box\" | \"ttt_rack\"\n"
  "bool    detected             # True when target is visible\n"
  "float32 distance_mm          # Estimated distance to target (mm)\n"
  "float32 offset_x_mm          # Horizontal offset from robot centre (mm)\n"
  "float32 offset_y_mm          # Vertical   offset from robot centre (mm)\n"
  "float32 confidence           # Detection confidence 0.0\\xe2\\x80\\x931.0\n"
  "sensor_msgs/RegionOfInterest bounding_box   # Pixel bounding box";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
r2_interfaces__msg__DetectionResult__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {r2_interfaces__msg__DetectionResult__TYPE_NAME, 33, 33},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 572, 572},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
r2_interfaces__msg__DetectionResult__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[4];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 4, 4};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *r2_interfaces__msg__DetectionResult__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *sensor_msgs__msg__RegionOfInterest__get_individual_type_description_source(NULL);
    sources[3] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
