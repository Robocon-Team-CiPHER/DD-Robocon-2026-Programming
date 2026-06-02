#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to r2_interfaces__msg__ChassisCmd
/// ChassisCmd.msg
/// Mecanum wheel chassis velocity command sent to ESP32

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ChassisCmd {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ChassisCmd::default())
  }
}

impl rosidl_runtime_rs::Message for ChassisCmd {
  type RmwMsg = super::msg::rmw::ChassisCmd;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        vx: msg.vx,
        vy: msg.vy,
        omega: msg.omega,
        estop: msg.estop,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      vx: msg.vx,
      vy: msg.vy,
      omega: msg.omega,
      estop: msg.estop,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      vx: msg.vx,
      vy: msg.vy,
      omega: msg.omega,
      estop: msg.estop,
    }
  }
}


// Corresponds to r2_interfaces__msg__MechanismStatus
/// MechanismStatus.msg
/// Generic status feedback from any actuated mechanism on Arduino Mega

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MechanismStatus {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// e.g. "spearhead_gripper", "kfs_gripper", "step_climber"
    pub mechanism_id: std::string::String,

    /// 0=IDLE, 1=MOVING, 2=DONE, 3=ERROR
    pub state: u8,

    /// Current position in mm (encoder-derived)
    pub position_mm: f32,

    /// Lower / retracted limit triggered
    pub limit_switch_min: bool,

    /// Upper / extended limit triggered
    pub limit_switch_max: bool,

    /// Non-empty when state == ERROR
    pub error_msg: std::string::String,

}



impl Default for MechanismStatus {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MechanismStatus::default())
  }
}

impl rosidl_runtime_rs::Message for MechanismStatus {
  type RmwMsg = super::msg::rmw::MechanismStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        mechanism_id: msg.mechanism_id.as_str().into(),
        state: msg.state,
        position_mm: msg.position_mm,
        limit_switch_min: msg.limit_switch_min,
        limit_switch_max: msg.limit_switch_max,
        error_msg: msg.error_msg.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        mechanism_id: msg.mechanism_id.as_str().into(),
      state: msg.state,
      position_mm: msg.position_mm,
      limit_switch_min: msg.limit_switch_min,
      limit_switch_max: msg.limit_switch_max,
        error_msg: msg.error_msg.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      mechanism_id: msg.mechanism_id.to_string(),
      state: msg.state,
      position_mm: msg.position_mm,
      limit_switch_min: msg.limit_switch_min,
      limit_switch_max: msg.limit_switch_max,
      error_msg: msg.error_msg.to_string(),
    }
  }
}


// Corresponds to r2_interfaces__msg__DetectionResult
/// DetectionResult.msg
/// Published by detection nodes (spearhead, KFS, TicTacToe rack)

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DetectionResult {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// "spearhead" | "kfs_box" | "ttt_rack"
    pub target_type: std::string::String,

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
    pub bounding_box: sensor_msgs::msg::RegionOfInterest,

}



impl Default for DetectionResult {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::DetectionResult::default())
  }
}

impl rosidl_runtime_rs::Message for DetectionResult {
  type RmwMsg = super::msg::rmw::DetectionResult;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        target_type: msg.target_type.as_str().into(),
        detected: msg.detected,
        distance_mm: msg.distance_mm,
        offset_x_mm: msg.offset_x_mm,
        offset_y_mm: msg.offset_y_mm,
        confidence: msg.confidence,
        bounding_box: sensor_msgs::msg::RegionOfInterest::into_rmw_message(std::borrow::Cow::Owned(msg.bounding_box)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        target_type: msg.target_type.as_str().into(),
      detected: msg.detected,
      distance_mm: msg.distance_mm,
      offset_x_mm: msg.offset_x_mm,
      offset_y_mm: msg.offset_y_mm,
      confidence: msg.confidence,
        bounding_box: sensor_msgs::msg::RegionOfInterest::into_rmw_message(std::borrow::Cow::Borrowed(&msg.bounding_box)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      target_type: msg.target_type.to_string(),
      detected: msg.detected,
      distance_mm: msg.distance_mm,
      offset_x_mm: msg.offset_x_mm,
      offset_y_mm: msg.offset_y_mm,
      confidence: msg.confidence,
      bounding_box: sensor_msgs::msg::RegionOfInterest::from_rmw_message(msg.bounding_box),
    }
  }
}


// Corresponds to r2_interfaces__msg__SystemStatus
/// SystemStatus.msg
/// Published by initialization nodes; aggregates hardware readiness

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SystemStatus {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

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
    pub mission_state: std::string::String,

    /// Non-fatal warning strings
    pub warnings: Vec<std::string::String>,

}



impl Default for SystemStatus {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::SystemStatus::default())
  }
}

impl rosidl_runtime_rs::Message for SystemStatus {
  type RmwMsg = super::msg::rmw::SystemStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        rpi_ok: msg.rpi_ok,
        esp32_ok: msg.esp32_ok,
        arduino_ok: msg.arduino_ok,
        cameras_ok: msg.cameras_ok,
        encoders_ok: msg.encoders_ok,
        mission_state: msg.mission_state.as_str().into(),
        warnings: msg.warnings
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      rpi_ok: msg.rpi_ok,
      esp32_ok: msg.esp32_ok,
      arduino_ok: msg.arduino_ok,
      cameras_ok: msg.cameras_ok,
      encoders_ok: msg.encoders_ok,
        mission_state: msg.mission_state.as_str().into(),
        warnings: msg.warnings
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      rpi_ok: msg.rpi_ok,
      esp32_ok: msg.esp32_ok,
      arduino_ok: msg.arduino_ok,
      cameras_ok: msg.cameras_ok,
      encoders_ok: msg.encoders_ok,
      mission_state: msg.mission_state.to_string(),
      warnings: msg.warnings
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
    }
  }
}


// Corresponds to r2_interfaces__msg__SerialFrame
/// SerialFrame.msg
/// Low-level serial frame relayed by the communication bridge nodes.
/// The frame follows a simple protocol: [START][CMD][LEN][DATA...][CRC]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SerialFrame {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// 0x01 = ESP32, 0x02 = Arduino Mega
    pub device_id: u8,

    /// Command identifier (see comm_bridge/config/protocol.yaml)
    pub cmd_id: u8,

    /// Raw data bytes
    pub payload: Vec<u8>,

    /// CRC-8 checksum of (cmd_id + payload)
    pub crc8: u8,

}



impl Default for SerialFrame {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::SerialFrame::default())
  }
}

impl rosidl_runtime_rs::Message for SerialFrame {
  type RmwMsg = super::msg::rmw::SerialFrame;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        device_id: msg.device_id,
        cmd_id: msg.cmd_id,
        payload: msg.payload.into(),
        crc8: msg.crc8,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      device_id: msg.device_id,
      cmd_id: msg.cmd_id,
        payload: msg.payload.as_slice().into(),
      crc8: msg.crc8,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      device_id: msg.device_id,
      cmd_id: msg.cmd_id,
      payload: msg.payload
          .into_iter()
          .collect(),
      crc8: msg.crc8,
    }
  }
}


