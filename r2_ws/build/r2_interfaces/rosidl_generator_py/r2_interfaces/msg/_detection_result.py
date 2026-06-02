# generated from rosidl_generator_py/resource/_idl.py.em
# with input from r2_interfaces:msg/DetectionResult.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DetectionResult(type):
    """Metaclass of message 'DetectionResult'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('r2_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'r2_interfaces.msg.DetectionResult')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__detection_result
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__detection_result
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__detection_result
            cls._TYPE_SUPPORT = module.type_support_msg__msg__detection_result
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__detection_result

            from sensor_msgs.msg import RegionOfInterest
            if RegionOfInterest.__class__._TYPE_SUPPORT is None:
                RegionOfInterest.__class__.__import_type_support__()

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class DetectionResult(metaclass=Metaclass_DetectionResult):
    """Message class 'DetectionResult'."""

    __slots__ = [
        '_header',
        '_target_type',
        '_detected',
        '_distance_mm',
        '_offset_x_mm',
        '_offset_y_mm',
        '_confidence',
        '_bounding_box',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'target_type': 'string',
        'detected': 'boolean',
        'distance_mm': 'float',
        'offset_x_mm': 'float',
        'offset_y_mm': 'float',
        'confidence': 'float',
        'bounding_box': 'sensor_msgs/RegionOfInterest',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'RegionOfInterest'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.target_type = kwargs.get('target_type', str())
        self.detected = kwargs.get('detected', bool())
        self.distance_mm = kwargs.get('distance_mm', float())
        self.offset_x_mm = kwargs.get('offset_x_mm', float())
        self.offset_y_mm = kwargs.get('offset_y_mm', float())
        self.confidence = kwargs.get('confidence', float())
        from sensor_msgs.msg import RegionOfInterest
        self.bounding_box = kwargs.get('bounding_box', RegionOfInterest())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.header != other.header:
            return False
        if self.target_type != other.target_type:
            return False
        if self.detected != other.detected:
            return False
        if self.distance_mm != other.distance_mm:
            return False
        if self.offset_x_mm != other.offset_x_mm:
            return False
        if self.offset_y_mm != other.offset_y_mm:
            return False
        if self.confidence != other.confidence:
            return False
        if self.bounding_box != other.bounding_box:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if self._check_fields:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def target_type(self):
        """Message field 'target_type'."""
        return self._target_type

    @target_type.setter
    def target_type(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'target_type' field must be of type 'str'"
        self._target_type = value

    @builtins.property
    def detected(self):
        """Message field 'detected'."""
        return self._detected

    @detected.setter
    def detected(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'detected' field must be of type 'bool'"
        self._detected = value

    @builtins.property
    def distance_mm(self):
        """Message field 'distance_mm'."""
        return self._distance_mm

    @distance_mm.setter
    def distance_mm(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'distance_mm' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'distance_mm' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._distance_mm = value

    @builtins.property
    def offset_x_mm(self):
        """Message field 'offset_x_mm'."""
        return self._offset_x_mm

    @offset_x_mm.setter
    def offset_x_mm(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'offset_x_mm' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'offset_x_mm' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._offset_x_mm = value

    @builtins.property
    def offset_y_mm(self):
        """Message field 'offset_y_mm'."""
        return self._offset_y_mm

    @offset_y_mm.setter
    def offset_y_mm(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'offset_y_mm' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'offset_y_mm' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._offset_y_mm = value

    @builtins.property
    def confidence(self):
        """Message field 'confidence'."""
        return self._confidence

    @confidence.setter
    def confidence(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'confidence' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'confidence' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._confidence = value

    @builtins.property
    def bounding_box(self):
        """Message field 'bounding_box'."""
        return self._bounding_box

    @bounding_box.setter
    def bounding_box(self, value):
        if self._check_fields:
            from sensor_msgs.msg import RegionOfInterest
            assert \
                isinstance(value, RegionOfInterest), \
                "The 'bounding_box' field must be a sub message of type 'RegionOfInterest'"
        self._bounding_box = value
