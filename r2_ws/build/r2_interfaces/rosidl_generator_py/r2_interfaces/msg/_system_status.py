# generated from rosidl_generator_py/resource/_idl.py.em
# with input from r2_interfaces:msg/SystemStatus.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SystemStatus(type):
    """Metaclass of message 'SystemStatus'."""

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
                'r2_interfaces.msg.SystemStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__system_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__system_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__system_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__system_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__system_status

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


class SystemStatus(metaclass=Metaclass_SystemStatus):
    """Message class 'SystemStatus'."""

    __slots__ = [
        '_header',
        '_rpi_ok',
        '_esp32_ok',
        '_arduino_ok',
        '_cameras_ok',
        '_encoders_ok',
        '_mission_state',
        '_warnings',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'rpi_ok': 'boolean',
        'esp32_ok': 'boolean',
        'arduino_ok': 'boolean',
        'cameras_ok': 'boolean',
        'encoders_ok': 'boolean',
        'mission_state': 'string',
        'warnings': 'sequence<string>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
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
        self.rpi_ok = kwargs.get('rpi_ok', bool())
        self.esp32_ok = kwargs.get('esp32_ok', bool())
        self.arduino_ok = kwargs.get('arduino_ok', bool())
        self.cameras_ok = kwargs.get('cameras_ok', bool())
        self.encoders_ok = kwargs.get('encoders_ok', bool())
        self.mission_state = kwargs.get('mission_state', str())
        self.warnings = kwargs.get('warnings', [])

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
        if self.rpi_ok != other.rpi_ok:
            return False
        if self.esp32_ok != other.esp32_ok:
            return False
        if self.arduino_ok != other.arduino_ok:
            return False
        if self.cameras_ok != other.cameras_ok:
            return False
        if self.encoders_ok != other.encoders_ok:
            return False
        if self.mission_state != other.mission_state:
            return False
        if self.warnings != other.warnings:
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
    def rpi_ok(self):
        """Message field 'rpi_ok'."""
        return self._rpi_ok

    @rpi_ok.setter
    def rpi_ok(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'rpi_ok' field must be of type 'bool'"
        self._rpi_ok = value

    @builtins.property
    def esp32_ok(self):
        """Message field 'esp32_ok'."""
        return self._esp32_ok

    @esp32_ok.setter
    def esp32_ok(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'esp32_ok' field must be of type 'bool'"
        self._esp32_ok = value

    @builtins.property
    def arduino_ok(self):
        """Message field 'arduino_ok'."""
        return self._arduino_ok

    @arduino_ok.setter
    def arduino_ok(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'arduino_ok' field must be of type 'bool'"
        self._arduino_ok = value

    @builtins.property
    def cameras_ok(self):
        """Message field 'cameras_ok'."""
        return self._cameras_ok

    @cameras_ok.setter
    def cameras_ok(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'cameras_ok' field must be of type 'bool'"
        self._cameras_ok = value

    @builtins.property
    def encoders_ok(self):
        """Message field 'encoders_ok'."""
        return self._encoders_ok

    @encoders_ok.setter
    def encoders_ok(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'encoders_ok' field must be of type 'bool'"
        self._encoders_ok = value

    @builtins.property
    def mission_state(self):
        """Message field 'mission_state'."""
        return self._mission_state

    @mission_state.setter
    def mission_state(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'mission_state' field must be of type 'str'"
        self._mission_state = value

    @builtins.property
    def warnings(self):
        """Message field 'warnings'."""
        return self._warnings

    @warnings.setter
    def warnings(self, value):
        if self._check_fields:
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
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'warnings' field must be a set or sequence and each value of type 'str'"
        self._warnings = value
