# generated from rosidl_generator_py/resource/_idl.py.em
# with input from r2_interfaces:msg/MechanismStatus.idl
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


class Metaclass_MechanismStatus(type):
    """Metaclass of message 'MechanismStatus'."""

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
                'r2_interfaces.msg.MechanismStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__mechanism_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__mechanism_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__mechanism_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__mechanism_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__mechanism_status

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


class MechanismStatus(metaclass=Metaclass_MechanismStatus):
    """Message class 'MechanismStatus'."""

    __slots__ = [
        '_header',
        '_mechanism_id',
        '_state',
        '_position_mm',
        '_limit_switch_min',
        '_limit_switch_max',
        '_error_msg',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'mechanism_id': 'string',
        'state': 'uint8',
        'position_mm': 'float',
        'limit_switch_min': 'boolean',
        'limit_switch_max': 'boolean',
        'error_msg': 'string',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
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
        self.mechanism_id = kwargs.get('mechanism_id', str())
        self.state = kwargs.get('state', int())
        self.position_mm = kwargs.get('position_mm', float())
        self.limit_switch_min = kwargs.get('limit_switch_min', bool())
        self.limit_switch_max = kwargs.get('limit_switch_max', bool())
        self.error_msg = kwargs.get('error_msg', str())

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
        if self.mechanism_id != other.mechanism_id:
            return False
        if self.state != other.state:
            return False
        if self.position_mm != other.position_mm:
            return False
        if self.limit_switch_min != other.limit_switch_min:
            return False
        if self.limit_switch_max != other.limit_switch_max:
            return False
        if self.error_msg != other.error_msg:
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
    def mechanism_id(self):
        """Message field 'mechanism_id'."""
        return self._mechanism_id

    @mechanism_id.setter
    def mechanism_id(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'mechanism_id' field must be of type 'str'"
        self._mechanism_id = value

    @builtins.property
    def state(self):
        """Message field 'state'."""
        return self._state

    @state.setter
    def state(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'state' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'state' field must be an unsigned integer in [0, 255]"
        self._state = value

    @builtins.property
    def position_mm(self):
        """Message field 'position_mm'."""
        return self._position_mm

    @position_mm.setter
    def position_mm(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'position_mm' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'position_mm' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._position_mm = value

    @builtins.property
    def limit_switch_min(self):
        """Message field 'limit_switch_min'."""
        return self._limit_switch_min

    @limit_switch_min.setter
    def limit_switch_min(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'limit_switch_min' field must be of type 'bool'"
        self._limit_switch_min = value

    @builtins.property
    def limit_switch_max(self):
        """Message field 'limit_switch_max'."""
        return self._limit_switch_max

    @limit_switch_max.setter
    def limit_switch_max(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'limit_switch_max' field must be of type 'bool'"
        self._limit_switch_max = value

    @builtins.property
    def error_msg(self):
        """Message field 'error_msg'."""
        return self._error_msg

    @error_msg.setter
    def error_msg(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'error_msg' field must be of type 'str'"
        self._error_msg = value
