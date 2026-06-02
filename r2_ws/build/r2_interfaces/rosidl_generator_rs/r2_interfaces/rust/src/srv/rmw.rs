#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



#[link(name = "r2_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__r2_interfaces__srv__SetMechanismState_Request() -> *const std::ffi::c_void;
}

#[link(name = "r2_interfaces__rosidl_generator_c")]
extern "C" {
    fn r2_interfaces__srv__SetMechanismState_Request__init(msg: *mut SetMechanismState_Request) -> bool;
    fn r2_interfaces__srv__SetMechanismState_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetMechanismState_Request>, size: usize) -> bool;
    fn r2_interfaces__srv__SetMechanismState_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetMechanismState_Request>);
    fn r2_interfaces__srv__SetMechanismState_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetMechanismState_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetMechanismState_Request>) -> bool;
}

// Corresponds to r2_interfaces__srv__SetMechanismState_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetMechanismState_Request {
    /// Target mechanism ID (see MechanismStatus)
    pub mechanism_id: rosidl_runtime_rs::String,

    /// 0=IDLE, 1=EXTEND, 2=RETRACT, 3=GRIP, 4=RELEASE, 5=HOME
    pub command: u8,

    /// Optional target position (0 if unused)
    pub target_position_mm: f32,

    /// Motor speed 0–100 %
    pub speed_percent: f32,

}



impl Default for SetMechanismState_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !r2_interfaces__srv__SetMechanismState_Request__init(&mut msg as *mut _) {
        panic!("Call to r2_interfaces__srv__SetMechanismState_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetMechanismState_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__srv__SetMechanismState_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__srv__SetMechanismState_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__srv__SetMechanismState_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetMechanismState_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetMechanismState_Request where Self: Sized {
  const TYPE_NAME: &'static str = "r2_interfaces/srv/SetMechanismState_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__r2_interfaces__srv__SetMechanismState_Request() }
  }
}


#[link(name = "r2_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__r2_interfaces__srv__SetMechanismState_Response() -> *const std::ffi::c_void;
}

#[link(name = "r2_interfaces__rosidl_generator_c")]
extern "C" {
    fn r2_interfaces__srv__SetMechanismState_Response__init(msg: *mut SetMechanismState_Response) -> bool;
    fn r2_interfaces__srv__SetMechanismState_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetMechanismState_Response>, size: usize) -> bool;
    fn r2_interfaces__srv__SetMechanismState_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetMechanismState_Response>);
    fn r2_interfaces__srv__SetMechanismState_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetMechanismState_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetMechanismState_Response>) -> bool;
}

// Corresponds to r2_interfaces__srv__SetMechanismState_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetMechanismState_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,

    /// Human-readable result / error
    pub message: rosidl_runtime_rs::String,

    /// Position after command
    pub actual_position_mm: f32,

}



impl Default for SetMechanismState_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !r2_interfaces__srv__SetMechanismState_Response__init(&mut msg as *mut _) {
        panic!("Call to r2_interfaces__srv__SetMechanismState_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetMechanismState_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__srv__SetMechanismState_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__srv__SetMechanismState_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__srv__SetMechanismState_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetMechanismState_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetMechanismState_Response where Self: Sized {
  const TYPE_NAME: &'static str = "r2_interfaces/srv/SetMechanismState_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__r2_interfaces__srv__SetMechanismState_Response() }
  }
}


#[link(name = "r2_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__r2_interfaces__srv__SystemHandshake_Request() -> *const std::ffi::c_void;
}

#[link(name = "r2_interfaces__rosidl_generator_c")]
extern "C" {
    fn r2_interfaces__srv__SystemHandshake_Request__init(msg: *mut SystemHandshake_Request) -> bool;
    fn r2_interfaces__srv__SystemHandshake_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SystemHandshake_Request>, size: usize) -> bool;
    fn r2_interfaces__srv__SystemHandshake_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SystemHandshake_Request>);
    fn r2_interfaces__srv__SystemHandshake_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SystemHandshake_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SystemHandshake_Request>) -> bool;
}

// Corresponds to r2_interfaces__srv__SystemHandshake_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SystemHandshake_Request {
    /// 0x01 = ESP32, 0x02 = Arduino Mega
    pub device_id: u8,

    /// Max wait for ACK
    pub timeout_ms: u32,

}



impl Default for SystemHandshake_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !r2_interfaces__srv__SystemHandshake_Request__init(&mut msg as *mut _) {
        panic!("Call to r2_interfaces__srv__SystemHandshake_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SystemHandshake_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__srv__SystemHandshake_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__srv__SystemHandshake_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__srv__SystemHandshake_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SystemHandshake_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SystemHandshake_Request where Self: Sized {
  const TYPE_NAME: &'static str = "r2_interfaces/srv/SystemHandshake_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__r2_interfaces__srv__SystemHandshake_Request() }
  }
}


#[link(name = "r2_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__r2_interfaces__srv__SystemHandshake_Response() -> *const std::ffi::c_void;
}

#[link(name = "r2_interfaces__rosidl_generator_c")]
extern "C" {
    fn r2_interfaces__srv__SystemHandshake_Response__init(msg: *mut SystemHandshake_Response) -> bool;
    fn r2_interfaces__srv__SystemHandshake_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SystemHandshake_Response>, size: usize) -> bool;
    fn r2_interfaces__srv__SystemHandshake_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SystemHandshake_Response>);
    fn r2_interfaces__srv__SystemHandshake_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SystemHandshake_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SystemHandshake_Response>) -> bool;
}

// Corresponds to r2_interfaces__srv__SystemHandshake_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SystemHandshake_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub firmware_version: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub device_status: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub error_msg: rosidl_runtime_rs::String,

}



impl Default for SystemHandshake_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !r2_interfaces__srv__SystemHandshake_Response__init(&mut msg as *mut _) {
        panic!("Call to r2_interfaces__srv__SystemHandshake_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SystemHandshake_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__srv__SystemHandshake_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__srv__SystemHandshake_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__srv__SystemHandshake_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SystemHandshake_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SystemHandshake_Response where Self: Sized {
  const TYPE_NAME: &'static str = "r2_interfaces/srv/SystemHandshake_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__r2_interfaces__srv__SystemHandshake_Response() }
  }
}


#[link(name = "r2_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__r2_interfaces__srv__TriggerDetection_Request() -> *const std::ffi::c_void;
}

#[link(name = "r2_interfaces__rosidl_generator_c")]
extern "C" {
    fn r2_interfaces__srv__TriggerDetection_Request__init(msg: *mut TriggerDetection_Request) -> bool;
    fn r2_interfaces__srv__TriggerDetection_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TriggerDetection_Request>, size: usize) -> bool;
    fn r2_interfaces__srv__TriggerDetection_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TriggerDetection_Request>);
    fn r2_interfaces__srv__TriggerDetection_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TriggerDetection_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<TriggerDetection_Request>) -> bool;
}

// Corresponds to r2_interfaces__srv__TriggerDetection_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TriggerDetection_Request {
    /// "spearhead" | "kfs_box" | "ttt_rack"
    pub target_type: rosidl_runtime_rs::String,

    /// Maximum time to wait for a confident detection
    pub timeout_ms: u32,

}



impl Default for TriggerDetection_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !r2_interfaces__srv__TriggerDetection_Request__init(&mut msg as *mut _) {
        panic!("Call to r2_interfaces__srv__TriggerDetection_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TriggerDetection_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__srv__TriggerDetection_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__srv__TriggerDetection_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__srv__TriggerDetection_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TriggerDetection_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TriggerDetection_Request where Self: Sized {
  const TYPE_NAME: &'static str = "r2_interfaces/srv/TriggerDetection_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__r2_interfaces__srv__TriggerDetection_Request() }
  }
}


#[link(name = "r2_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__r2_interfaces__srv__TriggerDetection_Response() -> *const std::ffi::c_void;
}

#[link(name = "r2_interfaces__rosidl_generator_c")]
extern "C" {
    fn r2_interfaces__srv__TriggerDetection_Response__init(msg: *mut TriggerDetection_Response) -> bool;
    fn r2_interfaces__srv__TriggerDetection_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TriggerDetection_Response>, size: usize) -> bool;
    fn r2_interfaces__srv__TriggerDetection_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TriggerDetection_Response>);
    fn r2_interfaces__srv__TriggerDetection_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TriggerDetection_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<TriggerDetection_Response>) -> bool;
}

// Corresponds to r2_interfaces__srv__TriggerDetection_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TriggerDetection_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::super::msg::rmw::DetectionResult,

}



impl Default for TriggerDetection_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !r2_interfaces__srv__TriggerDetection_Response__init(&mut msg as *mut _) {
        panic!("Call to r2_interfaces__srv__TriggerDetection_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TriggerDetection_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__srv__TriggerDetection_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__srv__TriggerDetection_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__srv__TriggerDetection_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TriggerDetection_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TriggerDetection_Response where Self: Sized {
  const TYPE_NAME: &'static str = "r2_interfaces/srv/TriggerDetection_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__r2_interfaces__srv__TriggerDetection_Response() }
  }
}






#[link(name = "r2_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__r2_interfaces__srv__SetMechanismState() -> *const std::ffi::c_void;
}

// Corresponds to r2_interfaces__srv__SetMechanismState
#[allow(missing_docs, non_camel_case_types)]
pub struct SetMechanismState;

impl rosidl_runtime_rs::Service for SetMechanismState {
    type Request = SetMechanismState_Request;
    type Response = SetMechanismState_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__r2_interfaces__srv__SetMechanismState() }
    }
}




#[link(name = "r2_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__r2_interfaces__srv__SystemHandshake() -> *const std::ffi::c_void;
}

// Corresponds to r2_interfaces__srv__SystemHandshake
#[allow(missing_docs, non_camel_case_types)]
pub struct SystemHandshake;

impl rosidl_runtime_rs::Service for SystemHandshake {
    type Request = SystemHandshake_Request;
    type Response = SystemHandshake_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__r2_interfaces__srv__SystemHandshake() }
    }
}




#[link(name = "r2_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__r2_interfaces__srv__TriggerDetection() -> *const std::ffi::c_void;
}

// Corresponds to r2_interfaces__srv__TriggerDetection
#[allow(missing_docs, non_camel_case_types)]
pub struct TriggerDetection;

impl rosidl_runtime_rs::Service for TriggerDetection {
    type Request = TriggerDetection_Request;
    type Response = TriggerDetection_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__r2_interfaces__srv__TriggerDetection() }
    }
}


