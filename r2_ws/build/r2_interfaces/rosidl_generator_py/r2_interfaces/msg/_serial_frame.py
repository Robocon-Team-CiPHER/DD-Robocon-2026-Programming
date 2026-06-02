# generated from rosidl_generator_py/resource/_idl.py.em
# with input from r2_interfaces:msg/SerialFrame.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

# Member 'payload'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SerialFrame(type):
    """Metaclass of message 'SerialFrame'."""

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
                'r2_interfaces.msg.SerialFrame')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__serial_frame
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__serial_frame
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__serial_frame
            cls._TYPE_SUPPORT = module.type_support_msg__msg__serial_frame
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__serial_frame

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


class SerialFrame(metaclass=Metaclass_SerialFrame):
    """Message class 'SerialFrame'."""

    __slots__ = [
        '_header',
        '_device_id',
        '_cmd_id',
        '_payload',
        '_crc8',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'device_id': 'uint8',
        'cmd_id': 'uint8',
        'payload': 'sequence<uint8>',
        'crc8': 'uint8',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
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
        self.device_id = kwargs.get('device_id', int())
        self.cmd_id = kwargs.get('cmd_id', int())
        self.payload = array.array('B', kwargs.get('payload', []))
        self.crc8 = kwargs.get('crc8', int())

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
        if self.device_id != other.device_id:
            return False
        if self.cmd_id != other.cmd_id:
            return False
        if self.payload != other.payload:
            return False
        if self.crc8 != other.crc8:
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
    def device_id(self):
        """Message field 'device_id'."""
        return self._device_id

    @device_id.setter
    def device_id(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'device_id' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'device_id' field must be an unsigned integer in [0, 255]"
        self._device_id = value

    @builtins.property
    def cmd_id(self):
        """Message field 'cmd_id'."""
        return self._cmd_id

    @cmd_id.setter
    def cmd_id(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'cmd_id' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'cmd_id' field must be an unsigned integer in [0, 255]"
        self._cmd_id = value

    @builtins.property
    def payload(self):
        """Message field 'payload'."""
        return self._payload

    @payload.setter
    def payload(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'B', \
                    "The 'payload' array.array() must have the type code of 'B'"
                self._payload = value
                return
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'payload' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._payload = array.array('B', value)

    @builtins.property
    def crc8(self):
        """Message field 'crc8'."""
        return self._crc8

    @crc8.setter
    def crc8(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'crc8' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'crc8' field must be an unsigned integer in [0, 255]"
        self._crc8 = value
