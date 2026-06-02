#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};




// Corresponds to r2_interfaces__srv__SetMechanismState_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetMechanismState_Request {
    /// Target mechanism ID (see MechanismStatus)
    pub mechanism_id: std::string::String,

    /// 0=IDLE, 1=EXTEND, 2=RETRACT, 3=GRIP, 4=RELEASE, 5=HOME
    pub command: u8,

    /// Optional target position (0 if unused)
    pub target_position_mm: f32,

    /// Motor speed 0–100 %
    pub speed_percent: f32,

}



impl Default for SetMechanismState_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetMechanismState_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SetMechanismState_Request {
  type RmwMsg = super::srv::rmw::SetMechanismState_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        mechanism_id: msg.mechanism_id.as_str().into(),
        command: msg.command,
        target_position_mm: msg.target_position_mm,
        speed_percent: msg.speed_percent,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        mechanism_id: msg.mechanism_id.as_str().into(),
      command: msg.command,
      target_position_mm: msg.target_position_mm,
      speed_percent: msg.speed_percent,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      mechanism_id: msg.mechanism_id.to_string(),
      command: msg.command,
      target_position_mm: msg.target_position_mm,
      speed_percent: msg.speed_percent,
    }
  }
}


// Corresponds to r2_interfaces__srv__SetMechanismState_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetMechanismState_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,

    /// Human-readable result / error
    pub message: std::string::String,

    /// Position after command
    pub actual_position_mm: f32,

}



impl Default for SetMechanismState_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetMechanismState_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SetMechanismState_Response {
  type RmwMsg = super::srv::rmw::SetMechanismState_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
        actual_position_mm: msg.actual_position_mm,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
      actual_position_mm: msg.actual_position_mm,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
      actual_position_mm: msg.actual_position_mm,
    }
  }
}


// Corresponds to r2_interfaces__srv__SystemHandshake_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SystemHandshake_Request {
    /// 0x01 = ESP32, 0x02 = Arduino Mega
    pub device_id: u8,

    /// Max wait for ACK
    pub timeout_ms: u32,

}



impl Default for SystemHandshake_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SystemHandshake_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SystemHandshake_Request {
  type RmwMsg = super::srv::rmw::SystemHandshake_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        device_id: msg.device_id,
        timeout_ms: msg.timeout_ms,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      device_id: msg.device_id,
      timeout_ms: msg.timeout_ms,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      device_id: msg.device_id,
      timeout_ms: msg.timeout_ms,
    }
  }
}


// Corresponds to r2_interfaces__srv__SystemHandshake_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SystemHandshake_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub firmware_version: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub device_status: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub error_msg: std::string::String,

}



impl Default for SystemHandshake_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SystemHandshake_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SystemHandshake_Response {
  type RmwMsg = super::srv::rmw::SystemHandshake_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        firmware_version: msg.firmware_version.as_str().into(),
        device_status: msg.device_status.as_str().into(),
        error_msg: msg.error_msg.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        firmware_version: msg.firmware_version.as_str().into(),
        device_status: msg.device_status.as_str().into(),
        error_msg: msg.error_msg.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      firmware_version: msg.firmware_version.to_string(),
      device_status: msg.device_status.to_string(),
      error_msg: msg.error_msg.to_string(),
    }
  }
}


// Corresponds to r2_interfaces__srv__TriggerDetection_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TriggerDetection_Request {
    /// "spearhead" | "kfs_box" | "ttt_rack"
    pub target_type: std::string::String,

    /// Maximum time to wait for a confident detection
    pub timeout_ms: u32,

}



impl Default for TriggerDetection_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::TriggerDetection_Request::default())
  }
}

impl rosidl_runtime_rs::Message for TriggerDetection_Request {
  type RmwMsg = super::srv::rmw::TriggerDetection_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        target_type: msg.target_type.as_str().into(),
        timeout_ms: msg.timeout_ms,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        target_type: msg.target_type.as_str().into(),
      timeout_ms: msg.timeout_ms,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      target_type: msg.target_type.to_string(),
      timeout_ms: msg.timeout_ms,
    }
  }
}


// Corresponds to r2_interfaces__srv__TriggerDetection_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TriggerDetection_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::msg::DetectionResult,

}



impl Default for TriggerDetection_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::TriggerDetection_Response::default())
  }
}

impl rosidl_runtime_rs::Message for TriggerDetection_Response {
  type RmwMsg = super::srv::rmw::TriggerDetection_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        result: super::msg::DetectionResult::into_rmw_message(std::borrow::Cow::Owned(msg.result)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        result: super::msg::DetectionResult::into_rmw_message(std::borrow::Cow::Borrowed(&msg.result)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      result: super::msg::DetectionResult::from_rmw_message(msg.result),
    }
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


