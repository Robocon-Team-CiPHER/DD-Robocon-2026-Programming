
#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "r2_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__r2_interfaces__action__MoveToPosition_Goal() -> *const std::ffi::c_void;
}

#[link(name = "r2_interfaces__rosidl_generator_c")]
extern "C" {
    fn r2_interfaces__action__MoveToPosition_Goal__init(msg: *mut MoveToPosition_Goal) -> bool;
    fn r2_interfaces__action__MoveToPosition_Goal__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MoveToPosition_Goal>, size: usize) -> bool;
    fn r2_interfaces__action__MoveToPosition_Goal__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MoveToPosition_Goal>);
    fn r2_interfaces__action__MoveToPosition_Goal__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MoveToPosition_Goal>, out_seq: *mut rosidl_runtime_rs::Sequence<MoveToPosition_Goal>) -> bool;
}

// Corresponds to r2_interfaces__action__MoveToPosition_Goal
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MoveToPosition_Goal {
    /// GOAL
    /// Target X in map frame (metres)
    pub x_m: f32,

    /// Target Y in map frame (metres)
    pub y_m: f32,

    /// Target heading  (radians)
    pub theta_rad: f32,

    /// Acceptable position tolerance
    pub tolerance_m: f32,

}



impl Default for MoveToPosition_Goal {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !r2_interfaces__action__MoveToPosition_Goal__init(&mut msg as *mut _) {
        panic!("Call to r2_interfaces__action__MoveToPosition_Goal__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MoveToPosition_Goal {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__action__MoveToPosition_Goal__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__action__MoveToPosition_Goal__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__action__MoveToPosition_Goal__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MoveToPosition_Goal {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MoveToPosition_Goal where Self: Sized {
  const TYPE_NAME: &'static str = "r2_interfaces/action/MoveToPosition_Goal";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__r2_interfaces__action__MoveToPosition_Goal() }
  }
}


#[link(name = "r2_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__r2_interfaces__action__MoveToPosition_Result() -> *const std::ffi::c_void;
}

#[link(name = "r2_interfaces__rosidl_generator_c")]
extern "C" {
    fn r2_interfaces__action__MoveToPosition_Result__init(msg: *mut MoveToPosition_Result) -> bool;
    fn r2_interfaces__action__MoveToPosition_Result__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MoveToPosition_Result>, size: usize) -> bool;
    fn r2_interfaces__action__MoveToPosition_Result__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MoveToPosition_Result>);
    fn r2_interfaces__action__MoveToPosition_Result__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MoveToPosition_Result>, out_seq: *mut rosidl_runtime_rs::Sequence<MoveToPosition_Result>) -> bool;
}

// Corresponds to r2_interfaces__action__MoveToPosition_Result
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MoveToPosition_Result {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub final_x_m: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub final_y_m: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub final_theta_rad: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,

}



impl Default for MoveToPosition_Result {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !r2_interfaces__action__MoveToPosition_Result__init(&mut msg as *mut _) {
        panic!("Call to r2_interfaces__action__MoveToPosition_Result__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MoveToPosition_Result {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__action__MoveToPosition_Result__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__action__MoveToPosition_Result__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__action__MoveToPosition_Result__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MoveToPosition_Result {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MoveToPosition_Result where Self: Sized {
  const TYPE_NAME: &'static str = "r2_interfaces/action/MoveToPosition_Result";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__r2_interfaces__action__MoveToPosition_Result() }
  }
}


#[link(name = "r2_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__r2_interfaces__action__MoveToPosition_Feedback() -> *const std::ffi::c_void;
}

#[link(name = "r2_interfaces__rosidl_generator_c")]
extern "C" {
    fn r2_interfaces__action__MoveToPosition_Feedback__init(msg: *mut MoveToPosition_Feedback) -> bool;
    fn r2_interfaces__action__MoveToPosition_Feedback__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MoveToPosition_Feedback>, size: usize) -> bool;
    fn r2_interfaces__action__MoveToPosition_Feedback__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MoveToPosition_Feedback>);
    fn r2_interfaces__action__MoveToPosition_Feedback__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MoveToPosition_Feedback>, out_seq: *mut rosidl_runtime_rs::Sequence<MoveToPosition_Feedback>) -> bool;
}

// Corresponds to r2_interfaces__action__MoveToPosition_Feedback
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MoveToPosition_Feedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub distance_remaining_m: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub current_x_m: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub current_y_m: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub current_theta_rad: f32,

}



impl Default for MoveToPosition_Feedback {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !r2_interfaces__action__MoveToPosition_Feedback__init(&mut msg as *mut _) {
        panic!("Call to r2_interfaces__action__MoveToPosition_Feedback__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MoveToPosition_Feedback {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__action__MoveToPosition_Feedback__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__action__MoveToPosition_Feedback__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__action__MoveToPosition_Feedback__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MoveToPosition_Feedback {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MoveToPosition_Feedback where Self: Sized {
  const TYPE_NAME: &'static str = "r2_interfaces/action/MoveToPosition_Feedback";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__r2_interfaces__action__MoveToPosition_Feedback() }
  }
}


#[link(name = "r2_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__r2_interfaces__action__MoveToPosition_FeedbackMessage() -> *const std::ffi::c_void;
}

#[link(name = "r2_interfaces__rosidl_generator_c")]
extern "C" {
    fn r2_interfaces__action__MoveToPosition_FeedbackMessage__init(msg: *mut MoveToPosition_FeedbackMessage) -> bool;
    fn r2_interfaces__action__MoveToPosition_FeedbackMessage__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MoveToPosition_FeedbackMessage>, size: usize) -> bool;
    fn r2_interfaces__action__MoveToPosition_FeedbackMessage__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MoveToPosition_FeedbackMessage>);
    fn r2_interfaces__action__MoveToPosition_FeedbackMessage__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MoveToPosition_FeedbackMessage>, out_seq: *mut rosidl_runtime_rs::Sequence<MoveToPosition_FeedbackMessage>) -> bool;
}

// Corresponds to r2_interfaces__action__MoveToPosition_FeedbackMessage
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MoveToPosition_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::super::action::rmw::MoveToPosition_Feedback,

}



impl Default for MoveToPosition_FeedbackMessage {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !r2_interfaces__action__MoveToPosition_FeedbackMessage__init(&mut msg as *mut _) {
        panic!("Call to r2_interfaces__action__MoveToPosition_FeedbackMessage__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MoveToPosition_FeedbackMessage {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__action__MoveToPosition_FeedbackMessage__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__action__MoveToPosition_FeedbackMessage__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__action__MoveToPosition_FeedbackMessage__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MoveToPosition_FeedbackMessage {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MoveToPosition_FeedbackMessage where Self: Sized {
  const TYPE_NAME: &'static str = "r2_interfaces/action/MoveToPosition_FeedbackMessage";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__r2_interfaces__action__MoveToPosition_FeedbackMessage() }
  }
}


#[link(name = "r2_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__r2_interfaces__action__ClimbStep_Goal() -> *const std::ffi::c_void;
}

#[link(name = "r2_interfaces__rosidl_generator_c")]
extern "C" {
    fn r2_interfaces__action__ClimbStep_Goal__init(msg: *mut ClimbStep_Goal) -> bool;
    fn r2_interfaces__action__ClimbStep_Goal__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ClimbStep_Goal>, size: usize) -> bool;
    fn r2_interfaces__action__ClimbStep_Goal__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ClimbStep_Goal>);
    fn r2_interfaces__action__ClimbStep_Goal__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ClimbStep_Goal>, out_seq: *mut rosidl_runtime_rs::Sequence<ClimbStep_Goal>) -> bool;
}

// Corresponds to r2_interfaces__action__ClimbStep_Goal
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ClimbStep_Goal {
    /// GOAL
    /// 200, 400, or 600 mm
    pub target_height_mm: f32,

    /// 0–100
    pub speed_percent: f32,

}



impl Default for ClimbStep_Goal {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !r2_interfaces__action__ClimbStep_Goal__init(&mut msg as *mut _) {
        panic!("Call to r2_interfaces__action__ClimbStep_Goal__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ClimbStep_Goal {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__action__ClimbStep_Goal__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__action__ClimbStep_Goal__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__action__ClimbStep_Goal__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ClimbStep_Goal {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ClimbStep_Goal where Self: Sized {
  const TYPE_NAME: &'static str = "r2_interfaces/action/ClimbStep_Goal";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__r2_interfaces__action__ClimbStep_Goal() }
  }
}


#[link(name = "r2_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__r2_interfaces__action__ClimbStep_Result() -> *const std::ffi::c_void;
}

#[link(name = "r2_interfaces__rosidl_generator_c")]
extern "C" {
    fn r2_interfaces__action__ClimbStep_Result__init(msg: *mut ClimbStep_Result) -> bool;
    fn r2_interfaces__action__ClimbStep_Result__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ClimbStep_Result>, size: usize) -> bool;
    fn r2_interfaces__action__ClimbStep_Result__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ClimbStep_Result>);
    fn r2_interfaces__action__ClimbStep_Result__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ClimbStep_Result>, out_seq: *mut rosidl_runtime_rs::Sequence<ClimbStep_Result>) -> bool;
}

// Corresponds to r2_interfaces__action__ClimbStep_Result
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ClimbStep_Result {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub achieved_height_mm: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,

}



impl Default for ClimbStep_Result {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !r2_interfaces__action__ClimbStep_Result__init(&mut msg as *mut _) {
        panic!("Call to r2_interfaces__action__ClimbStep_Result__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ClimbStep_Result {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__action__ClimbStep_Result__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__action__ClimbStep_Result__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__action__ClimbStep_Result__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ClimbStep_Result {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ClimbStep_Result where Self: Sized {
  const TYPE_NAME: &'static str = "r2_interfaces/action/ClimbStep_Result";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__r2_interfaces__action__ClimbStep_Result() }
  }
}


#[link(name = "r2_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__r2_interfaces__action__ClimbStep_Feedback() -> *const std::ffi::c_void;
}

#[link(name = "r2_interfaces__rosidl_generator_c")]
extern "C" {
    fn r2_interfaces__action__ClimbStep_Feedback__init(msg: *mut ClimbStep_Feedback) -> bool;
    fn r2_interfaces__action__ClimbStep_Feedback__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ClimbStep_Feedback>, size: usize) -> bool;
    fn r2_interfaces__action__ClimbStep_Feedback__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ClimbStep_Feedback>);
    fn r2_interfaces__action__ClimbStep_Feedback__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ClimbStep_Feedback>, out_seq: *mut rosidl_runtime_rs::Sequence<ClimbStep_Feedback>) -> bool;
}

// Corresponds to r2_interfaces__action__ClimbStep_Feedback
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ClimbStep_Feedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub current_height_mm: f32,

    /// "LIFTING_FRONT" | "DRIVING" | "LIFTING_BACK" | "DONE"
    pub phase: rosidl_runtime_rs::String,

}



impl Default for ClimbStep_Feedback {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !r2_interfaces__action__ClimbStep_Feedback__init(&mut msg as *mut _) {
        panic!("Call to r2_interfaces__action__ClimbStep_Feedback__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ClimbStep_Feedback {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__action__ClimbStep_Feedback__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__action__ClimbStep_Feedback__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__action__ClimbStep_Feedback__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ClimbStep_Feedback {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ClimbStep_Feedback where Self: Sized {
  const TYPE_NAME: &'static str = "r2_interfaces/action/ClimbStep_Feedback";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__r2_interfaces__action__ClimbStep_Feedback() }
  }
}


#[link(name = "r2_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__r2_interfaces__action__ClimbStep_FeedbackMessage() -> *const std::ffi::c_void;
}

#[link(name = "r2_interfaces__rosidl_generator_c")]
extern "C" {
    fn r2_interfaces__action__ClimbStep_FeedbackMessage__init(msg: *mut ClimbStep_FeedbackMessage) -> bool;
    fn r2_interfaces__action__ClimbStep_FeedbackMessage__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ClimbStep_FeedbackMessage>, size: usize) -> bool;
    fn r2_interfaces__action__ClimbStep_FeedbackMessage__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ClimbStep_FeedbackMessage>);
    fn r2_interfaces__action__ClimbStep_FeedbackMessage__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ClimbStep_FeedbackMessage>, out_seq: *mut rosidl_runtime_rs::Sequence<ClimbStep_FeedbackMessage>) -> bool;
}

// Corresponds to r2_interfaces__action__ClimbStep_FeedbackMessage
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ClimbStep_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::super::action::rmw::ClimbStep_Feedback,

}



impl Default for ClimbStep_FeedbackMessage {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !r2_interfaces__action__ClimbStep_FeedbackMessage__init(&mut msg as *mut _) {
        panic!("Call to r2_interfaces__action__ClimbStep_FeedbackMessage__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ClimbStep_FeedbackMessage {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__action__ClimbStep_FeedbackMessage__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__action__ClimbStep_FeedbackMessage__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__action__ClimbStep_FeedbackMessage__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ClimbStep_FeedbackMessage {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ClimbStep_FeedbackMessage where Self: Sized {
  const TYPE_NAME: &'static str = "r2_interfaces/action/ClimbStep_FeedbackMessage";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__r2_interfaces__action__ClimbStep_FeedbackMessage() }
  }
}


#[link(name = "r2_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__r2_interfaces__action__GripObject_Goal() -> *const std::ffi::c_void;
}

#[link(name = "r2_interfaces__rosidl_generator_c")]
extern "C" {
    fn r2_interfaces__action__GripObject_Goal__init(msg: *mut GripObject_Goal) -> bool;
    fn r2_interfaces__action__GripObject_Goal__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GripObject_Goal>, size: usize) -> bool;
    fn r2_interfaces__action__GripObject_Goal__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GripObject_Goal>);
    fn r2_interfaces__action__GripObject_Goal__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GripObject_Goal>, out_seq: *mut rosidl_runtime_rs::Sequence<GripObject_Goal>) -> bool;
}

// Corresponds to r2_interfaces__action__GripObject_Goal
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GripObject_Goal {
    /// GOAL
    /// "spearhead" | "kfs"
    pub gripper_id: rosidl_runtime_rs::String,

    /// 0=RELEASE, 1=GRIP, 2=ROTATE_AND_DOCK
    pub command: u8,

    /// For spearhead servo rotation (0 if unused)
    pub target_angle_deg: f32,

}



impl Default for GripObject_Goal {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !r2_interfaces__action__GripObject_Goal__init(&mut msg as *mut _) {
        panic!("Call to r2_interfaces__action__GripObject_Goal__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GripObject_Goal {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__action__GripObject_Goal__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__action__GripObject_Goal__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__action__GripObject_Goal__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GripObject_Goal {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GripObject_Goal where Self: Sized {
  const TYPE_NAME: &'static str = "r2_interfaces/action/GripObject_Goal";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__r2_interfaces__action__GripObject_Goal() }
  }
}


#[link(name = "r2_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__r2_interfaces__action__GripObject_Result() -> *const std::ffi::c_void;
}

#[link(name = "r2_interfaces__rosidl_generator_c")]
extern "C" {
    fn r2_interfaces__action__GripObject_Result__init(msg: *mut GripObject_Result) -> bool;
    fn r2_interfaces__action__GripObject_Result__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GripObject_Result>, size: usize) -> bool;
    fn r2_interfaces__action__GripObject_Result__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GripObject_Result>);
    fn r2_interfaces__action__GripObject_Result__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GripObject_Result>, out_seq: *mut rosidl_runtime_rs::Sequence<GripObject_Result>) -> bool;
}

// Corresponds to r2_interfaces__action__GripObject_Result
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GripObject_Result {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,

    /// Estimated (0–100), 0 if unavailable
    pub grip_force_estimate: f32,

}



impl Default for GripObject_Result {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !r2_interfaces__action__GripObject_Result__init(&mut msg as *mut _) {
        panic!("Call to r2_interfaces__action__GripObject_Result__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GripObject_Result {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__action__GripObject_Result__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__action__GripObject_Result__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__action__GripObject_Result__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GripObject_Result {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GripObject_Result where Self: Sized {
  const TYPE_NAME: &'static str = "r2_interfaces/action/GripObject_Result";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__r2_interfaces__action__GripObject_Result() }
  }
}


#[link(name = "r2_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__r2_interfaces__action__GripObject_Feedback() -> *const std::ffi::c_void;
}

#[link(name = "r2_interfaces__rosidl_generator_c")]
extern "C" {
    fn r2_interfaces__action__GripObject_Feedback__init(msg: *mut GripObject_Feedback) -> bool;
    fn r2_interfaces__action__GripObject_Feedback__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GripObject_Feedback>, size: usize) -> bool;
    fn r2_interfaces__action__GripObject_Feedback__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GripObject_Feedback>);
    fn r2_interfaces__action__GripObject_Feedback__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GripObject_Feedback>, out_seq: *mut rosidl_runtime_rs::Sequence<GripObject_Feedback>) -> bool;
}

// Corresponds to r2_interfaces__action__GripObject_Feedback
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GripObject_Feedback {
    /// Current gripper phase description
    pub phase: rosidl_runtime_rs::String,

    /// 0–100
    pub progress_percent: f32,

}



impl Default for GripObject_Feedback {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !r2_interfaces__action__GripObject_Feedback__init(&mut msg as *mut _) {
        panic!("Call to r2_interfaces__action__GripObject_Feedback__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GripObject_Feedback {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__action__GripObject_Feedback__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__action__GripObject_Feedback__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__action__GripObject_Feedback__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GripObject_Feedback {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GripObject_Feedback where Self: Sized {
  const TYPE_NAME: &'static str = "r2_interfaces/action/GripObject_Feedback";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__r2_interfaces__action__GripObject_Feedback() }
  }
}


#[link(name = "r2_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__r2_interfaces__action__GripObject_FeedbackMessage() -> *const std::ffi::c_void;
}

#[link(name = "r2_interfaces__rosidl_generator_c")]
extern "C" {
    fn r2_interfaces__action__GripObject_FeedbackMessage__init(msg: *mut GripObject_FeedbackMessage) -> bool;
    fn r2_interfaces__action__GripObject_FeedbackMessage__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GripObject_FeedbackMessage>, size: usize) -> bool;
    fn r2_interfaces__action__GripObject_FeedbackMessage__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GripObject_FeedbackMessage>);
    fn r2_interfaces__action__GripObject_FeedbackMessage__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GripObject_FeedbackMessage>, out_seq: *mut rosidl_runtime_rs::Sequence<GripObject_FeedbackMessage>) -> bool;
}

// Corresponds to r2_interfaces__action__GripObject_FeedbackMessage
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GripObject_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::super::action::rmw::GripObject_Feedback,

}



impl Default for GripObject_FeedbackMessage {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !r2_interfaces__action__GripObject_FeedbackMessage__init(&mut msg as *mut _) {
        panic!("Call to r2_interfaces__action__GripObject_FeedbackMessage__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GripObject_FeedbackMessage {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__action__GripObject_FeedbackMessage__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__action__GripObject_FeedbackMessage__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__action__GripObject_FeedbackMessage__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GripObject_FeedbackMessage {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GripObject_FeedbackMessage where Self: Sized {
  const TYPE_NAME: &'static str = "r2_interfaces/action/GripObject_FeedbackMessage";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__r2_interfaces__action__GripObject_FeedbackMessage() }
  }
}


#[link(name = "r2_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__r2_interfaces__action__ExpandMechanism_Goal() -> *const std::ffi::c_void;
}

#[link(name = "r2_interfaces__rosidl_generator_c")]
extern "C" {
    fn r2_interfaces__action__ExpandMechanism_Goal__init(msg: *mut ExpandMechanism_Goal) -> bool;
    fn r2_interfaces__action__ExpandMechanism_Goal__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ExpandMechanism_Goal>, size: usize) -> bool;
    fn r2_interfaces__action__ExpandMechanism_Goal__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ExpandMechanism_Goal>);
    fn r2_interfaces__action__ExpandMechanism_Goal__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ExpandMechanism_Goal>, out_seq: *mut rosidl_runtime_rs::Sequence<ExpandMechanism_Goal>) -> bool;
}

// Corresponds to r2_interfaces__action__ExpandMechanism_Goal
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExpandMechanism_Goal {
    /// GOAL
    /// "horizontal_expansion" | "vertical_expansion"
    pub mechanism_id: rosidl_runtime_rs::String,

    /// 0=RETRACT, 1=EXTEND
    pub direction: u8,

    /// Desired final position
    pub target_position_mm: f32,

    /// Motor duty cycle 0–100
    pub speed_percent: f32,

}



impl Default for ExpandMechanism_Goal {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !r2_interfaces__action__ExpandMechanism_Goal__init(&mut msg as *mut _) {
        panic!("Call to r2_interfaces__action__ExpandMechanism_Goal__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ExpandMechanism_Goal {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__action__ExpandMechanism_Goal__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__action__ExpandMechanism_Goal__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__action__ExpandMechanism_Goal__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ExpandMechanism_Goal {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ExpandMechanism_Goal where Self: Sized {
  const TYPE_NAME: &'static str = "r2_interfaces/action/ExpandMechanism_Goal";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__r2_interfaces__action__ExpandMechanism_Goal() }
  }
}


#[link(name = "r2_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__r2_interfaces__action__ExpandMechanism_Result() -> *const std::ffi::c_void;
}

#[link(name = "r2_interfaces__rosidl_generator_c")]
extern "C" {
    fn r2_interfaces__action__ExpandMechanism_Result__init(msg: *mut ExpandMechanism_Result) -> bool;
    fn r2_interfaces__action__ExpandMechanism_Result__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ExpandMechanism_Result>, size: usize) -> bool;
    fn r2_interfaces__action__ExpandMechanism_Result__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ExpandMechanism_Result>);
    fn r2_interfaces__action__ExpandMechanism_Result__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ExpandMechanism_Result>, out_seq: *mut rosidl_runtime_rs::Sequence<ExpandMechanism_Result>) -> bool;
}

// Corresponds to r2_interfaces__action__ExpandMechanism_Result
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExpandMechanism_Result {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub actual_position_mm: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,

}



impl Default for ExpandMechanism_Result {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !r2_interfaces__action__ExpandMechanism_Result__init(&mut msg as *mut _) {
        panic!("Call to r2_interfaces__action__ExpandMechanism_Result__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ExpandMechanism_Result {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__action__ExpandMechanism_Result__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__action__ExpandMechanism_Result__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__action__ExpandMechanism_Result__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ExpandMechanism_Result {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ExpandMechanism_Result where Self: Sized {
  const TYPE_NAME: &'static str = "r2_interfaces/action/ExpandMechanism_Result";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__r2_interfaces__action__ExpandMechanism_Result() }
  }
}


#[link(name = "r2_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__r2_interfaces__action__ExpandMechanism_Feedback() -> *const std::ffi::c_void;
}

#[link(name = "r2_interfaces__rosidl_generator_c")]
extern "C" {
    fn r2_interfaces__action__ExpandMechanism_Feedback__init(msg: *mut ExpandMechanism_Feedback) -> bool;
    fn r2_interfaces__action__ExpandMechanism_Feedback__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ExpandMechanism_Feedback>, size: usize) -> bool;
    fn r2_interfaces__action__ExpandMechanism_Feedback__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ExpandMechanism_Feedback>);
    fn r2_interfaces__action__ExpandMechanism_Feedback__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ExpandMechanism_Feedback>, out_seq: *mut rosidl_runtime_rs::Sequence<ExpandMechanism_Feedback>) -> bool;
}

// Corresponds to r2_interfaces__action__ExpandMechanism_Feedback
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExpandMechanism_Feedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub current_position_mm: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub limit_min_active: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub limit_max_active: bool,

}



impl Default for ExpandMechanism_Feedback {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !r2_interfaces__action__ExpandMechanism_Feedback__init(&mut msg as *mut _) {
        panic!("Call to r2_interfaces__action__ExpandMechanism_Feedback__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ExpandMechanism_Feedback {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__action__ExpandMechanism_Feedback__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__action__ExpandMechanism_Feedback__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__action__ExpandMechanism_Feedback__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ExpandMechanism_Feedback {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ExpandMechanism_Feedback where Self: Sized {
  const TYPE_NAME: &'static str = "r2_interfaces/action/ExpandMechanism_Feedback";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__r2_interfaces__action__ExpandMechanism_Feedback() }
  }
}


#[link(name = "r2_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__r2_interfaces__action__ExpandMechanism_FeedbackMessage() -> *const std::ffi::c_void;
}

#[link(name = "r2_interfaces__rosidl_generator_c")]
extern "C" {
    fn r2_interfaces__action__ExpandMechanism_FeedbackMessage__init(msg: *mut ExpandMechanism_FeedbackMessage) -> bool;
    fn r2_interfaces__action__ExpandMechanism_FeedbackMessage__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ExpandMechanism_FeedbackMessage>, size: usize) -> bool;
    fn r2_interfaces__action__ExpandMechanism_FeedbackMessage__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ExpandMechanism_FeedbackMessage>);
    fn r2_interfaces__action__ExpandMechanism_FeedbackMessage__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ExpandMechanism_FeedbackMessage>, out_seq: *mut rosidl_runtime_rs::Sequence<ExpandMechanism_FeedbackMessage>) -> bool;
}

// Corresponds to r2_interfaces__action__ExpandMechanism_FeedbackMessage
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExpandMechanism_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::super::action::rmw::ExpandMechanism_Feedback,

}



impl Default for ExpandMechanism_FeedbackMessage {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !r2_interfaces__action__ExpandMechanism_FeedbackMessage__init(&mut msg as *mut _) {
        panic!("Call to r2_interfaces__action__ExpandMechanism_FeedbackMessage__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ExpandMechanism_FeedbackMessage {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__action__ExpandMechanism_FeedbackMessage__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__action__ExpandMechanism_FeedbackMessage__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__action__ExpandMechanism_FeedbackMessage__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ExpandMechanism_FeedbackMessage {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ExpandMechanism_FeedbackMessage where Self: Sized {
  const TYPE_NAME: &'static str = "r2_interfaces/action/ExpandMechanism_FeedbackMessage";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__r2_interfaces__action__ExpandMechanism_FeedbackMessage() }
  }
}


#[link(name = "r2_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__r2_interfaces__action__ExecuteRegion_Goal() -> *const std::ffi::c_void;
}

#[link(name = "r2_interfaces__rosidl_generator_c")]
extern "C" {
    fn r2_interfaces__action__ExecuteRegion_Goal__init(msg: *mut ExecuteRegion_Goal) -> bool;
    fn r2_interfaces__action__ExecuteRegion_Goal__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ExecuteRegion_Goal>, size: usize) -> bool;
    fn r2_interfaces__action__ExecuteRegion_Goal__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ExecuteRegion_Goal>);
    fn r2_interfaces__action__ExecuteRegion_Goal__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ExecuteRegion_Goal>, out_seq: *mut rosidl_runtime_rs::Sequence<ExecuteRegion_Goal>) -> bool;
}

// Corresponds to r2_interfaces__action__ExecuteRegion_Goal
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExecuteRegion_Goal {
    /// GOAL
    /// "martial_club" | "meihua_forest" | "martial_arena"
    pub region_name: rosidl_runtime_rs::String,

}



impl Default for ExecuteRegion_Goal {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !r2_interfaces__action__ExecuteRegion_Goal__init(&mut msg as *mut _) {
        panic!("Call to r2_interfaces__action__ExecuteRegion_Goal__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ExecuteRegion_Goal {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__action__ExecuteRegion_Goal__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__action__ExecuteRegion_Goal__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__action__ExecuteRegion_Goal__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ExecuteRegion_Goal {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ExecuteRegion_Goal where Self: Sized {
  const TYPE_NAME: &'static str = "r2_interfaces/action/ExecuteRegion_Goal";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__r2_interfaces__action__ExecuteRegion_Goal() }
  }
}


#[link(name = "r2_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__r2_interfaces__action__ExecuteRegion_Result() -> *const std::ffi::c_void;
}

#[link(name = "r2_interfaces__rosidl_generator_c")]
extern "C" {
    fn r2_interfaces__action__ExecuteRegion_Result__init(msg: *mut ExecuteRegion_Result) -> bool;
    fn r2_interfaces__action__ExecuteRegion_Result__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ExecuteRegion_Result>, size: usize) -> bool;
    fn r2_interfaces__action__ExecuteRegion_Result__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ExecuteRegion_Result>);
    fn r2_interfaces__action__ExecuteRegion_Result__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ExecuteRegion_Result>, out_seq: *mut rosidl_runtime_rs::Sequence<ExecuteRegion_Result>) -> bool;
}

// Corresponds to r2_interfaces__action__ExecuteRegion_Result
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExecuteRegion_Result {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,

    /// Filled by meihua_forest region
    pub kfs_boxes_collected: u8,

}



impl Default for ExecuteRegion_Result {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !r2_interfaces__action__ExecuteRegion_Result__init(&mut msg as *mut _) {
        panic!("Call to r2_interfaces__action__ExecuteRegion_Result__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ExecuteRegion_Result {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__action__ExecuteRegion_Result__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__action__ExecuteRegion_Result__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__action__ExecuteRegion_Result__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ExecuteRegion_Result {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ExecuteRegion_Result where Self: Sized {
  const TYPE_NAME: &'static str = "r2_interfaces/action/ExecuteRegion_Result";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__r2_interfaces__action__ExecuteRegion_Result() }
  }
}


#[link(name = "r2_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__r2_interfaces__action__ExecuteRegion_Feedback() -> *const std::ffi::c_void;
}

#[link(name = "r2_interfaces__rosidl_generator_c")]
extern "C" {
    fn r2_interfaces__action__ExecuteRegion_Feedback__init(msg: *mut ExecuteRegion_Feedback) -> bool;
    fn r2_interfaces__action__ExecuteRegion_Feedback__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ExecuteRegion_Feedback>, size: usize) -> bool;
    fn r2_interfaces__action__ExecuteRegion_Feedback__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ExecuteRegion_Feedback>);
    fn r2_interfaces__action__ExecuteRegion_Feedback__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ExecuteRegion_Feedback>, out_seq: *mut rosidl_runtime_rs::Sequence<ExecuteRegion_Feedback>) -> bool;
}

// Corresponds to r2_interfaces__action__ExecuteRegion_Feedback
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExecuteRegion_Feedback {
    /// Human-readable step name
    pub current_step: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub steps_completed: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub total_steps: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub progress_percent: f32,

}



impl Default for ExecuteRegion_Feedback {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !r2_interfaces__action__ExecuteRegion_Feedback__init(&mut msg as *mut _) {
        panic!("Call to r2_interfaces__action__ExecuteRegion_Feedback__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ExecuteRegion_Feedback {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__action__ExecuteRegion_Feedback__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__action__ExecuteRegion_Feedback__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__action__ExecuteRegion_Feedback__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ExecuteRegion_Feedback {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ExecuteRegion_Feedback where Self: Sized {
  const TYPE_NAME: &'static str = "r2_interfaces/action/ExecuteRegion_Feedback";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__r2_interfaces__action__ExecuteRegion_Feedback() }
  }
}


#[link(name = "r2_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__r2_interfaces__action__ExecuteRegion_FeedbackMessage() -> *const std::ffi::c_void;
}

#[link(name = "r2_interfaces__rosidl_generator_c")]
extern "C" {
    fn r2_interfaces__action__ExecuteRegion_FeedbackMessage__init(msg: *mut ExecuteRegion_FeedbackMessage) -> bool;
    fn r2_interfaces__action__ExecuteRegion_FeedbackMessage__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ExecuteRegion_FeedbackMessage>, size: usize) -> bool;
    fn r2_interfaces__action__ExecuteRegion_FeedbackMessage__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ExecuteRegion_FeedbackMessage>);
    fn r2_interfaces__action__ExecuteRegion_FeedbackMessage__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ExecuteRegion_FeedbackMessage>, out_seq: *mut rosidl_runtime_rs::Sequence<ExecuteRegion_FeedbackMessage>) -> bool;
}

// Corresponds to r2_interfaces__action__ExecuteRegion_FeedbackMessage
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExecuteRegion_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::super::action::rmw::ExecuteRegion_Feedback,

}



impl Default for ExecuteRegion_FeedbackMessage {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !r2_interfaces__action__ExecuteRegion_FeedbackMessage__init(&mut msg as *mut _) {
        panic!("Call to r2_interfaces__action__ExecuteRegion_FeedbackMessage__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ExecuteRegion_FeedbackMessage {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__action__ExecuteRegion_FeedbackMessage__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__action__ExecuteRegion_FeedbackMessage__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__action__ExecuteRegion_FeedbackMessage__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ExecuteRegion_FeedbackMessage {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ExecuteRegion_FeedbackMessage where Self: Sized {
  const TYPE_NAME: &'static str = "r2_interfaces/action/ExecuteRegion_FeedbackMessage";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__r2_interfaces__action__ExecuteRegion_FeedbackMessage() }
  }
}




#[link(name = "r2_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__r2_interfaces__action__MoveToPosition_SendGoal_Request() -> *const std::ffi::c_void;
}

#[link(name = "r2_interfaces__rosidl_generator_c")]
extern "C" {
    fn r2_interfaces__action__MoveToPosition_SendGoal_Request__init(msg: *mut MoveToPosition_SendGoal_Request) -> bool;
    fn r2_interfaces__action__MoveToPosition_SendGoal_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MoveToPosition_SendGoal_Request>, size: usize) -> bool;
    fn r2_interfaces__action__MoveToPosition_SendGoal_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MoveToPosition_SendGoal_Request>);
    fn r2_interfaces__action__MoveToPosition_SendGoal_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MoveToPosition_SendGoal_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<MoveToPosition_SendGoal_Request>) -> bool;
}

// Corresponds to r2_interfaces__action__MoveToPosition_SendGoal_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MoveToPosition_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::super::action::rmw::MoveToPosition_Goal,

}



impl Default for MoveToPosition_SendGoal_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !r2_interfaces__action__MoveToPosition_SendGoal_Request__init(&mut msg as *mut _) {
        panic!("Call to r2_interfaces__action__MoveToPosition_SendGoal_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MoveToPosition_SendGoal_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__action__MoveToPosition_SendGoal_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__action__MoveToPosition_SendGoal_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__action__MoveToPosition_SendGoal_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MoveToPosition_SendGoal_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MoveToPosition_SendGoal_Request where Self: Sized {
  const TYPE_NAME: &'static str = "r2_interfaces/action/MoveToPosition_SendGoal_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__r2_interfaces__action__MoveToPosition_SendGoal_Request() }
  }
}


#[link(name = "r2_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__r2_interfaces__action__MoveToPosition_SendGoal_Response() -> *const std::ffi::c_void;
}

#[link(name = "r2_interfaces__rosidl_generator_c")]
extern "C" {
    fn r2_interfaces__action__MoveToPosition_SendGoal_Response__init(msg: *mut MoveToPosition_SendGoal_Response) -> bool;
    fn r2_interfaces__action__MoveToPosition_SendGoal_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MoveToPosition_SendGoal_Response>, size: usize) -> bool;
    fn r2_interfaces__action__MoveToPosition_SendGoal_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MoveToPosition_SendGoal_Response>);
    fn r2_interfaces__action__MoveToPosition_SendGoal_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MoveToPosition_SendGoal_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<MoveToPosition_SendGoal_Response>) -> bool;
}

// Corresponds to r2_interfaces__action__MoveToPosition_SendGoal_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MoveToPosition_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,

}



impl Default for MoveToPosition_SendGoal_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !r2_interfaces__action__MoveToPosition_SendGoal_Response__init(&mut msg as *mut _) {
        panic!("Call to r2_interfaces__action__MoveToPosition_SendGoal_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MoveToPosition_SendGoal_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__action__MoveToPosition_SendGoal_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__action__MoveToPosition_SendGoal_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__action__MoveToPosition_SendGoal_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MoveToPosition_SendGoal_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MoveToPosition_SendGoal_Response where Self: Sized {
  const TYPE_NAME: &'static str = "r2_interfaces/action/MoveToPosition_SendGoal_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__r2_interfaces__action__MoveToPosition_SendGoal_Response() }
  }
}


#[link(name = "r2_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__r2_interfaces__action__MoveToPosition_GetResult_Request() -> *const std::ffi::c_void;
}

#[link(name = "r2_interfaces__rosidl_generator_c")]
extern "C" {
    fn r2_interfaces__action__MoveToPosition_GetResult_Request__init(msg: *mut MoveToPosition_GetResult_Request) -> bool;
    fn r2_interfaces__action__MoveToPosition_GetResult_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MoveToPosition_GetResult_Request>, size: usize) -> bool;
    fn r2_interfaces__action__MoveToPosition_GetResult_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MoveToPosition_GetResult_Request>);
    fn r2_interfaces__action__MoveToPosition_GetResult_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MoveToPosition_GetResult_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<MoveToPosition_GetResult_Request>) -> bool;
}

// Corresponds to r2_interfaces__action__MoveToPosition_GetResult_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MoveToPosition_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,

}



impl Default for MoveToPosition_GetResult_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !r2_interfaces__action__MoveToPosition_GetResult_Request__init(&mut msg as *mut _) {
        panic!("Call to r2_interfaces__action__MoveToPosition_GetResult_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MoveToPosition_GetResult_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__action__MoveToPosition_GetResult_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__action__MoveToPosition_GetResult_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__action__MoveToPosition_GetResult_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MoveToPosition_GetResult_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MoveToPosition_GetResult_Request where Self: Sized {
  const TYPE_NAME: &'static str = "r2_interfaces/action/MoveToPosition_GetResult_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__r2_interfaces__action__MoveToPosition_GetResult_Request() }
  }
}


#[link(name = "r2_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__r2_interfaces__action__MoveToPosition_GetResult_Response() -> *const std::ffi::c_void;
}

#[link(name = "r2_interfaces__rosidl_generator_c")]
extern "C" {
    fn r2_interfaces__action__MoveToPosition_GetResult_Response__init(msg: *mut MoveToPosition_GetResult_Response) -> bool;
    fn r2_interfaces__action__MoveToPosition_GetResult_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MoveToPosition_GetResult_Response>, size: usize) -> bool;
    fn r2_interfaces__action__MoveToPosition_GetResult_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MoveToPosition_GetResult_Response>);
    fn r2_interfaces__action__MoveToPosition_GetResult_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MoveToPosition_GetResult_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<MoveToPosition_GetResult_Response>) -> bool;
}

// Corresponds to r2_interfaces__action__MoveToPosition_GetResult_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MoveToPosition_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::super::action::rmw::MoveToPosition_Result,

}



impl Default for MoveToPosition_GetResult_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !r2_interfaces__action__MoveToPosition_GetResult_Response__init(&mut msg as *mut _) {
        panic!("Call to r2_interfaces__action__MoveToPosition_GetResult_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MoveToPosition_GetResult_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__action__MoveToPosition_GetResult_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__action__MoveToPosition_GetResult_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__action__MoveToPosition_GetResult_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MoveToPosition_GetResult_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MoveToPosition_GetResult_Response where Self: Sized {
  const TYPE_NAME: &'static str = "r2_interfaces/action/MoveToPosition_GetResult_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__r2_interfaces__action__MoveToPosition_GetResult_Response() }
  }
}


#[link(name = "r2_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__r2_interfaces__action__ClimbStep_SendGoal_Request() -> *const std::ffi::c_void;
}

#[link(name = "r2_interfaces__rosidl_generator_c")]
extern "C" {
    fn r2_interfaces__action__ClimbStep_SendGoal_Request__init(msg: *mut ClimbStep_SendGoal_Request) -> bool;
    fn r2_interfaces__action__ClimbStep_SendGoal_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ClimbStep_SendGoal_Request>, size: usize) -> bool;
    fn r2_interfaces__action__ClimbStep_SendGoal_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ClimbStep_SendGoal_Request>);
    fn r2_interfaces__action__ClimbStep_SendGoal_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ClimbStep_SendGoal_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<ClimbStep_SendGoal_Request>) -> bool;
}

// Corresponds to r2_interfaces__action__ClimbStep_SendGoal_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ClimbStep_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::super::action::rmw::ClimbStep_Goal,

}



impl Default for ClimbStep_SendGoal_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !r2_interfaces__action__ClimbStep_SendGoal_Request__init(&mut msg as *mut _) {
        panic!("Call to r2_interfaces__action__ClimbStep_SendGoal_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ClimbStep_SendGoal_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__action__ClimbStep_SendGoal_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__action__ClimbStep_SendGoal_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__action__ClimbStep_SendGoal_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ClimbStep_SendGoal_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ClimbStep_SendGoal_Request where Self: Sized {
  const TYPE_NAME: &'static str = "r2_interfaces/action/ClimbStep_SendGoal_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__r2_interfaces__action__ClimbStep_SendGoal_Request() }
  }
}


#[link(name = "r2_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__r2_interfaces__action__ClimbStep_SendGoal_Response() -> *const std::ffi::c_void;
}

#[link(name = "r2_interfaces__rosidl_generator_c")]
extern "C" {
    fn r2_interfaces__action__ClimbStep_SendGoal_Response__init(msg: *mut ClimbStep_SendGoal_Response) -> bool;
    fn r2_interfaces__action__ClimbStep_SendGoal_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ClimbStep_SendGoal_Response>, size: usize) -> bool;
    fn r2_interfaces__action__ClimbStep_SendGoal_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ClimbStep_SendGoal_Response>);
    fn r2_interfaces__action__ClimbStep_SendGoal_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ClimbStep_SendGoal_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<ClimbStep_SendGoal_Response>) -> bool;
}

// Corresponds to r2_interfaces__action__ClimbStep_SendGoal_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ClimbStep_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,

}



impl Default for ClimbStep_SendGoal_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !r2_interfaces__action__ClimbStep_SendGoal_Response__init(&mut msg as *mut _) {
        panic!("Call to r2_interfaces__action__ClimbStep_SendGoal_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ClimbStep_SendGoal_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__action__ClimbStep_SendGoal_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__action__ClimbStep_SendGoal_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__action__ClimbStep_SendGoal_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ClimbStep_SendGoal_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ClimbStep_SendGoal_Response where Self: Sized {
  const TYPE_NAME: &'static str = "r2_interfaces/action/ClimbStep_SendGoal_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__r2_interfaces__action__ClimbStep_SendGoal_Response() }
  }
}


#[link(name = "r2_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__r2_interfaces__action__ClimbStep_GetResult_Request() -> *const std::ffi::c_void;
}

#[link(name = "r2_interfaces__rosidl_generator_c")]
extern "C" {
    fn r2_interfaces__action__ClimbStep_GetResult_Request__init(msg: *mut ClimbStep_GetResult_Request) -> bool;
    fn r2_interfaces__action__ClimbStep_GetResult_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ClimbStep_GetResult_Request>, size: usize) -> bool;
    fn r2_interfaces__action__ClimbStep_GetResult_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ClimbStep_GetResult_Request>);
    fn r2_interfaces__action__ClimbStep_GetResult_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ClimbStep_GetResult_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<ClimbStep_GetResult_Request>) -> bool;
}

// Corresponds to r2_interfaces__action__ClimbStep_GetResult_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ClimbStep_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,

}



impl Default for ClimbStep_GetResult_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !r2_interfaces__action__ClimbStep_GetResult_Request__init(&mut msg as *mut _) {
        panic!("Call to r2_interfaces__action__ClimbStep_GetResult_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ClimbStep_GetResult_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__action__ClimbStep_GetResult_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__action__ClimbStep_GetResult_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__action__ClimbStep_GetResult_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ClimbStep_GetResult_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ClimbStep_GetResult_Request where Self: Sized {
  const TYPE_NAME: &'static str = "r2_interfaces/action/ClimbStep_GetResult_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__r2_interfaces__action__ClimbStep_GetResult_Request() }
  }
}


#[link(name = "r2_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__r2_interfaces__action__ClimbStep_GetResult_Response() -> *const std::ffi::c_void;
}

#[link(name = "r2_interfaces__rosidl_generator_c")]
extern "C" {
    fn r2_interfaces__action__ClimbStep_GetResult_Response__init(msg: *mut ClimbStep_GetResult_Response) -> bool;
    fn r2_interfaces__action__ClimbStep_GetResult_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ClimbStep_GetResult_Response>, size: usize) -> bool;
    fn r2_interfaces__action__ClimbStep_GetResult_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ClimbStep_GetResult_Response>);
    fn r2_interfaces__action__ClimbStep_GetResult_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ClimbStep_GetResult_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<ClimbStep_GetResult_Response>) -> bool;
}

// Corresponds to r2_interfaces__action__ClimbStep_GetResult_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ClimbStep_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::super::action::rmw::ClimbStep_Result,

}



impl Default for ClimbStep_GetResult_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !r2_interfaces__action__ClimbStep_GetResult_Response__init(&mut msg as *mut _) {
        panic!("Call to r2_interfaces__action__ClimbStep_GetResult_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ClimbStep_GetResult_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__action__ClimbStep_GetResult_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__action__ClimbStep_GetResult_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__action__ClimbStep_GetResult_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ClimbStep_GetResult_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ClimbStep_GetResult_Response where Self: Sized {
  const TYPE_NAME: &'static str = "r2_interfaces/action/ClimbStep_GetResult_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__r2_interfaces__action__ClimbStep_GetResult_Response() }
  }
}


#[link(name = "r2_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__r2_interfaces__action__GripObject_SendGoal_Request() -> *const std::ffi::c_void;
}

#[link(name = "r2_interfaces__rosidl_generator_c")]
extern "C" {
    fn r2_interfaces__action__GripObject_SendGoal_Request__init(msg: *mut GripObject_SendGoal_Request) -> bool;
    fn r2_interfaces__action__GripObject_SendGoal_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GripObject_SendGoal_Request>, size: usize) -> bool;
    fn r2_interfaces__action__GripObject_SendGoal_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GripObject_SendGoal_Request>);
    fn r2_interfaces__action__GripObject_SendGoal_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GripObject_SendGoal_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GripObject_SendGoal_Request>) -> bool;
}

// Corresponds to r2_interfaces__action__GripObject_SendGoal_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GripObject_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::super::action::rmw::GripObject_Goal,

}



impl Default for GripObject_SendGoal_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !r2_interfaces__action__GripObject_SendGoal_Request__init(&mut msg as *mut _) {
        panic!("Call to r2_interfaces__action__GripObject_SendGoal_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GripObject_SendGoal_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__action__GripObject_SendGoal_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__action__GripObject_SendGoal_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__action__GripObject_SendGoal_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GripObject_SendGoal_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GripObject_SendGoal_Request where Self: Sized {
  const TYPE_NAME: &'static str = "r2_interfaces/action/GripObject_SendGoal_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__r2_interfaces__action__GripObject_SendGoal_Request() }
  }
}


#[link(name = "r2_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__r2_interfaces__action__GripObject_SendGoal_Response() -> *const std::ffi::c_void;
}

#[link(name = "r2_interfaces__rosidl_generator_c")]
extern "C" {
    fn r2_interfaces__action__GripObject_SendGoal_Response__init(msg: *mut GripObject_SendGoal_Response) -> bool;
    fn r2_interfaces__action__GripObject_SendGoal_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GripObject_SendGoal_Response>, size: usize) -> bool;
    fn r2_interfaces__action__GripObject_SendGoal_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GripObject_SendGoal_Response>);
    fn r2_interfaces__action__GripObject_SendGoal_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GripObject_SendGoal_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GripObject_SendGoal_Response>) -> bool;
}

// Corresponds to r2_interfaces__action__GripObject_SendGoal_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GripObject_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,

}



impl Default for GripObject_SendGoal_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !r2_interfaces__action__GripObject_SendGoal_Response__init(&mut msg as *mut _) {
        panic!("Call to r2_interfaces__action__GripObject_SendGoal_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GripObject_SendGoal_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__action__GripObject_SendGoal_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__action__GripObject_SendGoal_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__action__GripObject_SendGoal_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GripObject_SendGoal_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GripObject_SendGoal_Response where Self: Sized {
  const TYPE_NAME: &'static str = "r2_interfaces/action/GripObject_SendGoal_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__r2_interfaces__action__GripObject_SendGoal_Response() }
  }
}


#[link(name = "r2_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__r2_interfaces__action__GripObject_GetResult_Request() -> *const std::ffi::c_void;
}

#[link(name = "r2_interfaces__rosidl_generator_c")]
extern "C" {
    fn r2_interfaces__action__GripObject_GetResult_Request__init(msg: *mut GripObject_GetResult_Request) -> bool;
    fn r2_interfaces__action__GripObject_GetResult_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GripObject_GetResult_Request>, size: usize) -> bool;
    fn r2_interfaces__action__GripObject_GetResult_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GripObject_GetResult_Request>);
    fn r2_interfaces__action__GripObject_GetResult_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GripObject_GetResult_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GripObject_GetResult_Request>) -> bool;
}

// Corresponds to r2_interfaces__action__GripObject_GetResult_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GripObject_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,

}



impl Default for GripObject_GetResult_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !r2_interfaces__action__GripObject_GetResult_Request__init(&mut msg as *mut _) {
        panic!("Call to r2_interfaces__action__GripObject_GetResult_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GripObject_GetResult_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__action__GripObject_GetResult_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__action__GripObject_GetResult_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__action__GripObject_GetResult_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GripObject_GetResult_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GripObject_GetResult_Request where Self: Sized {
  const TYPE_NAME: &'static str = "r2_interfaces/action/GripObject_GetResult_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__r2_interfaces__action__GripObject_GetResult_Request() }
  }
}


#[link(name = "r2_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__r2_interfaces__action__GripObject_GetResult_Response() -> *const std::ffi::c_void;
}

#[link(name = "r2_interfaces__rosidl_generator_c")]
extern "C" {
    fn r2_interfaces__action__GripObject_GetResult_Response__init(msg: *mut GripObject_GetResult_Response) -> bool;
    fn r2_interfaces__action__GripObject_GetResult_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GripObject_GetResult_Response>, size: usize) -> bool;
    fn r2_interfaces__action__GripObject_GetResult_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GripObject_GetResult_Response>);
    fn r2_interfaces__action__GripObject_GetResult_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GripObject_GetResult_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GripObject_GetResult_Response>) -> bool;
}

// Corresponds to r2_interfaces__action__GripObject_GetResult_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GripObject_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::super::action::rmw::GripObject_Result,

}



impl Default for GripObject_GetResult_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !r2_interfaces__action__GripObject_GetResult_Response__init(&mut msg as *mut _) {
        panic!("Call to r2_interfaces__action__GripObject_GetResult_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GripObject_GetResult_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__action__GripObject_GetResult_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__action__GripObject_GetResult_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__action__GripObject_GetResult_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GripObject_GetResult_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GripObject_GetResult_Response where Self: Sized {
  const TYPE_NAME: &'static str = "r2_interfaces/action/GripObject_GetResult_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__r2_interfaces__action__GripObject_GetResult_Response() }
  }
}


#[link(name = "r2_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__r2_interfaces__action__ExpandMechanism_SendGoal_Request() -> *const std::ffi::c_void;
}

#[link(name = "r2_interfaces__rosidl_generator_c")]
extern "C" {
    fn r2_interfaces__action__ExpandMechanism_SendGoal_Request__init(msg: *mut ExpandMechanism_SendGoal_Request) -> bool;
    fn r2_interfaces__action__ExpandMechanism_SendGoal_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ExpandMechanism_SendGoal_Request>, size: usize) -> bool;
    fn r2_interfaces__action__ExpandMechanism_SendGoal_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ExpandMechanism_SendGoal_Request>);
    fn r2_interfaces__action__ExpandMechanism_SendGoal_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ExpandMechanism_SendGoal_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<ExpandMechanism_SendGoal_Request>) -> bool;
}

// Corresponds to r2_interfaces__action__ExpandMechanism_SendGoal_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExpandMechanism_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::super::action::rmw::ExpandMechanism_Goal,

}



impl Default for ExpandMechanism_SendGoal_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !r2_interfaces__action__ExpandMechanism_SendGoal_Request__init(&mut msg as *mut _) {
        panic!("Call to r2_interfaces__action__ExpandMechanism_SendGoal_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ExpandMechanism_SendGoal_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__action__ExpandMechanism_SendGoal_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__action__ExpandMechanism_SendGoal_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__action__ExpandMechanism_SendGoal_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ExpandMechanism_SendGoal_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ExpandMechanism_SendGoal_Request where Self: Sized {
  const TYPE_NAME: &'static str = "r2_interfaces/action/ExpandMechanism_SendGoal_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__r2_interfaces__action__ExpandMechanism_SendGoal_Request() }
  }
}


#[link(name = "r2_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__r2_interfaces__action__ExpandMechanism_SendGoal_Response() -> *const std::ffi::c_void;
}

#[link(name = "r2_interfaces__rosidl_generator_c")]
extern "C" {
    fn r2_interfaces__action__ExpandMechanism_SendGoal_Response__init(msg: *mut ExpandMechanism_SendGoal_Response) -> bool;
    fn r2_interfaces__action__ExpandMechanism_SendGoal_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ExpandMechanism_SendGoal_Response>, size: usize) -> bool;
    fn r2_interfaces__action__ExpandMechanism_SendGoal_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ExpandMechanism_SendGoal_Response>);
    fn r2_interfaces__action__ExpandMechanism_SendGoal_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ExpandMechanism_SendGoal_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<ExpandMechanism_SendGoal_Response>) -> bool;
}

// Corresponds to r2_interfaces__action__ExpandMechanism_SendGoal_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExpandMechanism_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,

}



impl Default for ExpandMechanism_SendGoal_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !r2_interfaces__action__ExpandMechanism_SendGoal_Response__init(&mut msg as *mut _) {
        panic!("Call to r2_interfaces__action__ExpandMechanism_SendGoal_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ExpandMechanism_SendGoal_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__action__ExpandMechanism_SendGoal_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__action__ExpandMechanism_SendGoal_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__action__ExpandMechanism_SendGoal_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ExpandMechanism_SendGoal_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ExpandMechanism_SendGoal_Response where Self: Sized {
  const TYPE_NAME: &'static str = "r2_interfaces/action/ExpandMechanism_SendGoal_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__r2_interfaces__action__ExpandMechanism_SendGoal_Response() }
  }
}


#[link(name = "r2_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__r2_interfaces__action__ExpandMechanism_GetResult_Request() -> *const std::ffi::c_void;
}

#[link(name = "r2_interfaces__rosidl_generator_c")]
extern "C" {
    fn r2_interfaces__action__ExpandMechanism_GetResult_Request__init(msg: *mut ExpandMechanism_GetResult_Request) -> bool;
    fn r2_interfaces__action__ExpandMechanism_GetResult_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ExpandMechanism_GetResult_Request>, size: usize) -> bool;
    fn r2_interfaces__action__ExpandMechanism_GetResult_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ExpandMechanism_GetResult_Request>);
    fn r2_interfaces__action__ExpandMechanism_GetResult_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ExpandMechanism_GetResult_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<ExpandMechanism_GetResult_Request>) -> bool;
}

// Corresponds to r2_interfaces__action__ExpandMechanism_GetResult_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExpandMechanism_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,

}



impl Default for ExpandMechanism_GetResult_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !r2_interfaces__action__ExpandMechanism_GetResult_Request__init(&mut msg as *mut _) {
        panic!("Call to r2_interfaces__action__ExpandMechanism_GetResult_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ExpandMechanism_GetResult_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__action__ExpandMechanism_GetResult_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__action__ExpandMechanism_GetResult_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__action__ExpandMechanism_GetResult_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ExpandMechanism_GetResult_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ExpandMechanism_GetResult_Request where Self: Sized {
  const TYPE_NAME: &'static str = "r2_interfaces/action/ExpandMechanism_GetResult_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__r2_interfaces__action__ExpandMechanism_GetResult_Request() }
  }
}


#[link(name = "r2_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__r2_interfaces__action__ExpandMechanism_GetResult_Response() -> *const std::ffi::c_void;
}

#[link(name = "r2_interfaces__rosidl_generator_c")]
extern "C" {
    fn r2_interfaces__action__ExpandMechanism_GetResult_Response__init(msg: *mut ExpandMechanism_GetResult_Response) -> bool;
    fn r2_interfaces__action__ExpandMechanism_GetResult_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ExpandMechanism_GetResult_Response>, size: usize) -> bool;
    fn r2_interfaces__action__ExpandMechanism_GetResult_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ExpandMechanism_GetResult_Response>);
    fn r2_interfaces__action__ExpandMechanism_GetResult_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ExpandMechanism_GetResult_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<ExpandMechanism_GetResult_Response>) -> bool;
}

// Corresponds to r2_interfaces__action__ExpandMechanism_GetResult_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExpandMechanism_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::super::action::rmw::ExpandMechanism_Result,

}



impl Default for ExpandMechanism_GetResult_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !r2_interfaces__action__ExpandMechanism_GetResult_Response__init(&mut msg as *mut _) {
        panic!("Call to r2_interfaces__action__ExpandMechanism_GetResult_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ExpandMechanism_GetResult_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__action__ExpandMechanism_GetResult_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__action__ExpandMechanism_GetResult_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__action__ExpandMechanism_GetResult_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ExpandMechanism_GetResult_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ExpandMechanism_GetResult_Response where Self: Sized {
  const TYPE_NAME: &'static str = "r2_interfaces/action/ExpandMechanism_GetResult_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__r2_interfaces__action__ExpandMechanism_GetResult_Response() }
  }
}


#[link(name = "r2_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__r2_interfaces__action__ExecuteRegion_SendGoal_Request() -> *const std::ffi::c_void;
}

#[link(name = "r2_interfaces__rosidl_generator_c")]
extern "C" {
    fn r2_interfaces__action__ExecuteRegion_SendGoal_Request__init(msg: *mut ExecuteRegion_SendGoal_Request) -> bool;
    fn r2_interfaces__action__ExecuteRegion_SendGoal_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ExecuteRegion_SendGoal_Request>, size: usize) -> bool;
    fn r2_interfaces__action__ExecuteRegion_SendGoal_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ExecuteRegion_SendGoal_Request>);
    fn r2_interfaces__action__ExecuteRegion_SendGoal_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ExecuteRegion_SendGoal_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<ExecuteRegion_SendGoal_Request>) -> bool;
}

// Corresponds to r2_interfaces__action__ExecuteRegion_SendGoal_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExecuteRegion_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::super::action::rmw::ExecuteRegion_Goal,

}



impl Default for ExecuteRegion_SendGoal_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !r2_interfaces__action__ExecuteRegion_SendGoal_Request__init(&mut msg as *mut _) {
        panic!("Call to r2_interfaces__action__ExecuteRegion_SendGoal_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ExecuteRegion_SendGoal_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__action__ExecuteRegion_SendGoal_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__action__ExecuteRegion_SendGoal_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__action__ExecuteRegion_SendGoal_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ExecuteRegion_SendGoal_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ExecuteRegion_SendGoal_Request where Self: Sized {
  const TYPE_NAME: &'static str = "r2_interfaces/action/ExecuteRegion_SendGoal_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__r2_interfaces__action__ExecuteRegion_SendGoal_Request() }
  }
}


#[link(name = "r2_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__r2_interfaces__action__ExecuteRegion_SendGoal_Response() -> *const std::ffi::c_void;
}

#[link(name = "r2_interfaces__rosidl_generator_c")]
extern "C" {
    fn r2_interfaces__action__ExecuteRegion_SendGoal_Response__init(msg: *mut ExecuteRegion_SendGoal_Response) -> bool;
    fn r2_interfaces__action__ExecuteRegion_SendGoal_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ExecuteRegion_SendGoal_Response>, size: usize) -> bool;
    fn r2_interfaces__action__ExecuteRegion_SendGoal_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ExecuteRegion_SendGoal_Response>);
    fn r2_interfaces__action__ExecuteRegion_SendGoal_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ExecuteRegion_SendGoal_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<ExecuteRegion_SendGoal_Response>) -> bool;
}

// Corresponds to r2_interfaces__action__ExecuteRegion_SendGoal_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExecuteRegion_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,

}



impl Default for ExecuteRegion_SendGoal_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !r2_interfaces__action__ExecuteRegion_SendGoal_Response__init(&mut msg as *mut _) {
        panic!("Call to r2_interfaces__action__ExecuteRegion_SendGoal_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ExecuteRegion_SendGoal_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__action__ExecuteRegion_SendGoal_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__action__ExecuteRegion_SendGoal_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__action__ExecuteRegion_SendGoal_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ExecuteRegion_SendGoal_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ExecuteRegion_SendGoal_Response where Self: Sized {
  const TYPE_NAME: &'static str = "r2_interfaces/action/ExecuteRegion_SendGoal_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__r2_interfaces__action__ExecuteRegion_SendGoal_Response() }
  }
}


#[link(name = "r2_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__r2_interfaces__action__ExecuteRegion_GetResult_Request() -> *const std::ffi::c_void;
}

#[link(name = "r2_interfaces__rosidl_generator_c")]
extern "C" {
    fn r2_interfaces__action__ExecuteRegion_GetResult_Request__init(msg: *mut ExecuteRegion_GetResult_Request) -> bool;
    fn r2_interfaces__action__ExecuteRegion_GetResult_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ExecuteRegion_GetResult_Request>, size: usize) -> bool;
    fn r2_interfaces__action__ExecuteRegion_GetResult_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ExecuteRegion_GetResult_Request>);
    fn r2_interfaces__action__ExecuteRegion_GetResult_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ExecuteRegion_GetResult_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<ExecuteRegion_GetResult_Request>) -> bool;
}

// Corresponds to r2_interfaces__action__ExecuteRegion_GetResult_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExecuteRegion_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,

}



impl Default for ExecuteRegion_GetResult_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !r2_interfaces__action__ExecuteRegion_GetResult_Request__init(&mut msg as *mut _) {
        panic!("Call to r2_interfaces__action__ExecuteRegion_GetResult_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ExecuteRegion_GetResult_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__action__ExecuteRegion_GetResult_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__action__ExecuteRegion_GetResult_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__action__ExecuteRegion_GetResult_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ExecuteRegion_GetResult_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ExecuteRegion_GetResult_Request where Self: Sized {
  const TYPE_NAME: &'static str = "r2_interfaces/action/ExecuteRegion_GetResult_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__r2_interfaces__action__ExecuteRegion_GetResult_Request() }
  }
}


#[link(name = "r2_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__r2_interfaces__action__ExecuteRegion_GetResult_Response() -> *const std::ffi::c_void;
}

#[link(name = "r2_interfaces__rosidl_generator_c")]
extern "C" {
    fn r2_interfaces__action__ExecuteRegion_GetResult_Response__init(msg: *mut ExecuteRegion_GetResult_Response) -> bool;
    fn r2_interfaces__action__ExecuteRegion_GetResult_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ExecuteRegion_GetResult_Response>, size: usize) -> bool;
    fn r2_interfaces__action__ExecuteRegion_GetResult_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ExecuteRegion_GetResult_Response>);
    fn r2_interfaces__action__ExecuteRegion_GetResult_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ExecuteRegion_GetResult_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<ExecuteRegion_GetResult_Response>) -> bool;
}

// Corresponds to r2_interfaces__action__ExecuteRegion_GetResult_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExecuteRegion_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::super::action::rmw::ExecuteRegion_Result,

}



impl Default for ExecuteRegion_GetResult_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !r2_interfaces__action__ExecuteRegion_GetResult_Response__init(&mut msg as *mut _) {
        panic!("Call to r2_interfaces__action__ExecuteRegion_GetResult_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ExecuteRegion_GetResult_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__action__ExecuteRegion_GetResult_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__action__ExecuteRegion_GetResult_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { r2_interfaces__action__ExecuteRegion_GetResult_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ExecuteRegion_GetResult_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ExecuteRegion_GetResult_Response where Self: Sized {
  const TYPE_NAME: &'static str = "r2_interfaces/action/ExecuteRegion_GetResult_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__r2_interfaces__action__ExecuteRegion_GetResult_Response() }
  }
}






#[link(name = "r2_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__r2_interfaces__action__MoveToPosition_SendGoal() -> *const std::ffi::c_void;
}

// Corresponds to r2_interfaces__action__MoveToPosition_SendGoal
#[allow(missing_docs, non_camel_case_types)]
pub struct MoveToPosition_SendGoal;

impl rosidl_runtime_rs::Service for MoveToPosition_SendGoal {
    type Request = MoveToPosition_SendGoal_Request;
    type Response = MoveToPosition_SendGoal_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__r2_interfaces__action__MoveToPosition_SendGoal() }
    }
}




#[link(name = "r2_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__r2_interfaces__action__MoveToPosition_GetResult() -> *const std::ffi::c_void;
}

// Corresponds to r2_interfaces__action__MoveToPosition_GetResult
#[allow(missing_docs, non_camel_case_types)]
pub struct MoveToPosition_GetResult;

impl rosidl_runtime_rs::Service for MoveToPosition_GetResult {
    type Request = MoveToPosition_GetResult_Request;
    type Response = MoveToPosition_GetResult_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__r2_interfaces__action__MoveToPosition_GetResult() }
    }
}




#[link(name = "r2_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__r2_interfaces__action__ClimbStep_SendGoal() -> *const std::ffi::c_void;
}

// Corresponds to r2_interfaces__action__ClimbStep_SendGoal
#[allow(missing_docs, non_camel_case_types)]
pub struct ClimbStep_SendGoal;

impl rosidl_runtime_rs::Service for ClimbStep_SendGoal {
    type Request = ClimbStep_SendGoal_Request;
    type Response = ClimbStep_SendGoal_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__r2_interfaces__action__ClimbStep_SendGoal() }
    }
}




#[link(name = "r2_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__r2_interfaces__action__ClimbStep_GetResult() -> *const std::ffi::c_void;
}

// Corresponds to r2_interfaces__action__ClimbStep_GetResult
#[allow(missing_docs, non_camel_case_types)]
pub struct ClimbStep_GetResult;

impl rosidl_runtime_rs::Service for ClimbStep_GetResult {
    type Request = ClimbStep_GetResult_Request;
    type Response = ClimbStep_GetResult_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__r2_interfaces__action__ClimbStep_GetResult() }
    }
}




#[link(name = "r2_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__r2_interfaces__action__GripObject_SendGoal() -> *const std::ffi::c_void;
}

// Corresponds to r2_interfaces__action__GripObject_SendGoal
#[allow(missing_docs, non_camel_case_types)]
pub struct GripObject_SendGoal;

impl rosidl_runtime_rs::Service for GripObject_SendGoal {
    type Request = GripObject_SendGoal_Request;
    type Response = GripObject_SendGoal_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__r2_interfaces__action__GripObject_SendGoal() }
    }
}




#[link(name = "r2_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__r2_interfaces__action__GripObject_GetResult() -> *const std::ffi::c_void;
}

// Corresponds to r2_interfaces__action__GripObject_GetResult
#[allow(missing_docs, non_camel_case_types)]
pub struct GripObject_GetResult;

impl rosidl_runtime_rs::Service for GripObject_GetResult {
    type Request = GripObject_GetResult_Request;
    type Response = GripObject_GetResult_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__r2_interfaces__action__GripObject_GetResult() }
    }
}




#[link(name = "r2_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__r2_interfaces__action__ExpandMechanism_SendGoal() -> *const std::ffi::c_void;
}

// Corresponds to r2_interfaces__action__ExpandMechanism_SendGoal
#[allow(missing_docs, non_camel_case_types)]
pub struct ExpandMechanism_SendGoal;

impl rosidl_runtime_rs::Service for ExpandMechanism_SendGoal {
    type Request = ExpandMechanism_SendGoal_Request;
    type Response = ExpandMechanism_SendGoal_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__r2_interfaces__action__ExpandMechanism_SendGoal() }
    }
}




#[link(name = "r2_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__r2_interfaces__action__ExpandMechanism_GetResult() -> *const std::ffi::c_void;
}

// Corresponds to r2_interfaces__action__ExpandMechanism_GetResult
#[allow(missing_docs, non_camel_case_types)]
pub struct ExpandMechanism_GetResult;

impl rosidl_runtime_rs::Service for ExpandMechanism_GetResult {
    type Request = ExpandMechanism_GetResult_Request;
    type Response = ExpandMechanism_GetResult_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__r2_interfaces__action__ExpandMechanism_GetResult() }
    }
}




#[link(name = "r2_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__r2_interfaces__action__ExecuteRegion_SendGoal() -> *const std::ffi::c_void;
}

// Corresponds to r2_interfaces__action__ExecuteRegion_SendGoal
#[allow(missing_docs, non_camel_case_types)]
pub struct ExecuteRegion_SendGoal;

impl rosidl_runtime_rs::Service for ExecuteRegion_SendGoal {
    type Request = ExecuteRegion_SendGoal_Request;
    type Response = ExecuteRegion_SendGoal_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__r2_interfaces__action__ExecuteRegion_SendGoal() }
    }
}




#[link(name = "r2_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__r2_interfaces__action__ExecuteRegion_GetResult() -> *const std::ffi::c_void;
}

// Corresponds to r2_interfaces__action__ExecuteRegion_GetResult
#[allow(missing_docs, non_camel_case_types)]
pub struct ExecuteRegion_GetResult;

impl rosidl_runtime_rs::Service for ExecuteRegion_GetResult {
    type Request = ExecuteRegion_GetResult_Request;
    type Response = ExecuteRegion_GetResult_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__r2_interfaces__action__ExecuteRegion_GetResult() }
    }
}


