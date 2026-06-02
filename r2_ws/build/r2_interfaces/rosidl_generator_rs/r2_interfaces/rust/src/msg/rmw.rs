#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "r2_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__r2_interfaces__msg__ChassisCmd() -> *const std::ffi::c_void;
}

#[link(name = "r2_interfaces__rosidl_generator_c")]
extern "C" {
    fn r2_interfaces__msg__ChassisCmd__init(msg: *mut ChassisCmd) -> bool;
    fn r2_interfaces__msg__ChassisCmd__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ChassisCmd>, size: usize) -> bool;
    fn r2_interfaces__msg__ChassisCmd__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ChassisCmd>);
    fn r2_interfaces__msg__ChassisCmd__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ChassisCmd>, out_seq: *mut rosidl_runtime_rs::Sequence<ChassisCmd>) -> bool;
}

// Corresponds to r2_interfaces__msg__ChassisCmd
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// ChassisCmd.msg
/// Mecanum wheel chassis velocity command sent to ESP32

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ChassisCmd {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

    /// Forward/backward velocity (m/s)
    pub vx: f32,

    /// Lateral (strafe) velocity (m/s)
    pub vy: f32,

    /// Rotational velocity (rad/s)
    pub omega: f32,

    /// Emergency stop flag
    pub estop: bool,

}



impl Default for ChassisCmd {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !r2_interfaces__msg__ChassisCmd__init(&mut msg as *mut _) {
        panic!("Call to r2_interfaces__msg__ChassisCmd__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ChassisCmd {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__msg__ChassisCmd__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__msg__ChassisCmd__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__msg__ChassisCmd__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ChassisCmd {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ChassisCmd where Self: Sized {
  const TYPE_NAME: &'static str = "r2_interfaces/msg/ChassisCmd";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__r2_interfaces__msg__ChassisCmd() }
  }
}


#[link(name = "r2_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__r2_interfaces__msg__MechanismStatus() -> *const std::ffi::c_void;
}

#[link(name = "r2_interfaces__rosidl_generator_c")]
extern "C" {
    fn r2_interfaces__msg__MechanismStatus__init(msg: *mut MechanismStatus) -> bool;
    fn r2_interfaces__msg__MechanismStatus__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MechanismStatus>, size: usize) -> bool;
    fn r2_interfaces__msg__MechanismStatus__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MechanismStatus>);
    fn r2_interfaces__msg__MechanismStatus__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MechanismStatus>, out_seq: *mut rosidl_runtime_rs::Sequence<MechanismStatus>) -> bool;
}

// Corresponds to r2_interfaces__msg__MechanismStatus
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// MechanismStatus.msg
/// Generic status feedback from any actuated mechanism on Arduino Mega

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MechanismStatus {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

    /// e.g. "spearhead_gripper", "kfs_gripper", "step_climber"
    pub mechanism_id: rosidl_runtime_rs::String,

    /// 0=IDLE, 1=MOVING, 2=DONE, 3=ERROR
    pub state: u8,

    /// Current position in mm (encoder-derived)
    pub position_mm: f32,

    /// Lower / retracted limit triggered
    pub limit_switch_min: bool,

    /// Upper / extended limit triggered
    pub limit_switch_max: bool,

    /// Non-empty when state == ERROR
    pub error_msg: rosidl_runtime_rs::String,

}



impl Default for MechanismStatus {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !r2_interfaces__msg__MechanismStatus__init(&mut msg as *mut _) {
        panic!("Call to r2_interfaces__msg__MechanismStatus__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MechanismStatus {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__msg__MechanismStatus__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__msg__MechanismStatus__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__msg__MechanismStatus__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MechanismStatus {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MechanismStatus where Self: Sized {
  const TYPE_NAME: &'static str = "r2_interfaces/msg/MechanismStatus";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__r2_interfaces__msg__MechanismStatus() }
  }
}


#[link(name = "r2_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__r2_interfaces__msg__DetectionResult() -> *const std::ffi::c_void;
}

#[link(name = "r2_interfaces__rosidl_generator_c")]
extern "C" {
    fn r2_interfaces__msg__DetectionResult__init(msg: *mut DetectionResult) -> bool;
    fn r2_interfaces__msg__DetectionResult__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DetectionResult>, size: usize) -> bool;
    fn r2_interfaces__msg__DetectionResult__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DetectionResult>);
    fn r2_interfaces__msg__DetectionResult__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DetectionResult>, out_seq: *mut rosidl_runtime_rs::Sequence<DetectionResult>) -> bool;
}

// Corresponds to r2_interfaces__msg__DetectionResult
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// DetectionResult.msg
/// Published by detection nodes (spearhead, KFS, TicTacToe rack)

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DetectionResult {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

    /// "spearhead" | "kfs_box" | "ttt_rack"
    pub target_type: rosidl_runtime_rs::String,

    /// True when target is visible
    pub detected: bool,

    /// Estimated distance to target (mm)
    pub distance_mm: f32,

    /// Horizontal offset from robot centre (mm)
    pub offset_x_mm: f32,

    /// Vertical   offset from robot centre (mm)
    pub offset_y_mm: f32,

    /// Detection confidence 0.0–1.0
    pub confidence: f32,

    /// Pixel bounding box
    pub bounding_box: sensor_msgs::msg::rmw::RegionOfInterest,

}



impl Default for DetectionResult {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !r2_interfaces__msg__DetectionResult__init(&mut msg as *mut _) {
        panic!("Call to r2_interfaces__msg__DetectionResult__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DetectionResult {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__msg__DetectionResult__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__msg__DetectionResult__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__msg__DetectionResult__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DetectionResult {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DetectionResult where Self: Sized {
  const TYPE_NAME: &'static str = "r2_interfaces/msg/DetectionResult";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__r2_interfaces__msg__DetectionResult() }
  }
}


#[link(name = "r2_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__r2_interfaces__msg__SystemStatus() -> *const std::ffi::c_void;
}

#[link(name = "r2_interfaces__rosidl_generator_c")]
extern "C" {
    fn r2_interfaces__msg__SystemStatus__init(msg: *mut SystemStatus) -> bool;
    fn r2_interfaces__msg__SystemStatus__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SystemStatus>, size: usize) -> bool;
    fn r2_interfaces__msg__SystemStatus__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SystemStatus>);
    fn r2_interfaces__msg__SystemStatus__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SystemStatus>, out_seq: *mut rosidl_runtime_rs::Sequence<SystemStatus>) -> bool;
}

// Corresponds to r2_interfaces__msg__SystemStatus
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// SystemStatus.msg
/// Published by initialization nodes; aggregates hardware readiness

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SystemStatus {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

    /// Raspberry Pi self-check passed
    pub rpi_ok: bool,

    /// ESP32 handshake ACK received
    pub esp32_ok: bool,

    /// Arduino Mega handshake ACK received
    pub arduino_ok: bool,

    /// All cameras streaming
    pub cameras_ok: bool,

    /// Encoder feedback nominal
    pub encoders_ok: bool,

    /// Current high-level mission state name
    pub mission_state: rosidl_runtime_rs::String,

    /// Non-fatal warning strings
    pub warnings: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,

}



impl Default for SystemStatus {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !r2_interfaces__msg__SystemStatus__init(&mut msg as *mut _) {
        panic!("Call to r2_interfaces__msg__SystemStatus__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SystemStatus {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__msg__SystemStatus__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__msg__SystemStatus__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__msg__SystemStatus__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SystemStatus {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SystemStatus where Self: Sized {
  const TYPE_NAME: &'static str = "r2_interfaces/msg/SystemStatus";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__r2_interfaces__msg__SystemStatus() }
  }
}


#[link(name = "r2_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__r2_interfaces__msg__SerialFrame() -> *const std::ffi::c_void;
}

#[link(name = "r2_interfaces__rosidl_generator_c")]
extern "C" {
    fn r2_interfaces__msg__SerialFrame__init(msg: *mut SerialFrame) -> bool;
    fn r2_interfaces__msg__SerialFrame__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SerialFrame>, size: usize) -> bool;
    fn r2_interfaces__msg__SerialFrame__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SerialFrame>);
    fn r2_interfaces__msg__SerialFrame__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SerialFrame>, out_seq: *mut rosidl_runtime_rs::Sequence<SerialFrame>) -> bool;
}

// Corresponds to r2_interfaces__msg__SerialFrame
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// SerialFrame.msg
/// Low-level serial frame relayed by the communication bridge nodes.
/// The frame follows a simple protocol: [START][CMD][LEN][DATA...][CRC]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SerialFrame {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

    /// 0x01 = ESP32, 0x02 = Arduino Mega
    pub device_id: u8,

    /// Command identifier (see comm_bridge/config/protocol.yaml)
    pub cmd_id: u8,

    /// Raw data bytes
    pub payload: rosidl_runtime_rs::Sequence<u8>,

    /// CRC-8 checksum of (cmd_id + payload)
    pub crc8: u8,

}



impl Default for SerialFrame {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !r2_interfaces__msg__SerialFrame__init(&mut msg as *mut _) {
        panic!("Call to r2_interfaces__msg__SerialFrame__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SerialFrame {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__msg__SerialFrame__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__msg__SerialFrame__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__msg__SerialFrame__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SerialFrame {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SerialFrame where Self: Sized {
  const TYPE_NAME: &'static str = "r2_interfaces/msg/SerialFrame";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__r2_interfaces__msg__SerialFrame() }
  }
}


