
#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to r2_interfaces__action__MoveToPosition_Goal

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::MoveToPosition_Goal::default())
  }
}

impl rosidl_runtime_rs::Message for MoveToPosition_Goal {
  type RmwMsg = super::action::rmw::MoveToPosition_Goal;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        x_m: msg.x_m,
        y_m: msg.y_m,
        theta_rad: msg.theta_rad,
        tolerance_m: msg.tolerance_m,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      x_m: msg.x_m,
      y_m: msg.y_m,
      theta_rad: msg.theta_rad,
      tolerance_m: msg.tolerance_m,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      x_m: msg.x_m,
      y_m: msg.y_m,
      theta_rad: msg.theta_rad,
      tolerance_m: msg.tolerance_m,
    }
  }
}


// Corresponds to r2_interfaces__action__MoveToPosition_Result

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    pub message: std::string::String,

}



impl Default for MoveToPosition_Result {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::MoveToPosition_Result::default())
  }
}

impl rosidl_runtime_rs::Message for MoveToPosition_Result {
  type RmwMsg = super::action::rmw::MoveToPosition_Result;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        final_x_m: msg.final_x_m,
        final_y_m: msg.final_y_m,
        final_theta_rad: msg.final_theta_rad,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
      final_x_m: msg.final_x_m,
      final_y_m: msg.final_y_m,
      final_theta_rad: msg.final_theta_rad,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      final_x_m: msg.final_x_m,
      final_y_m: msg.final_y_m,
      final_theta_rad: msg.final_theta_rad,
      message: msg.message.to_string(),
    }
  }
}


// Corresponds to r2_interfaces__action__MoveToPosition_Feedback

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::MoveToPosition_Feedback::default())
  }
}

impl rosidl_runtime_rs::Message for MoveToPosition_Feedback {
  type RmwMsg = super::action::rmw::MoveToPosition_Feedback;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        distance_remaining_m: msg.distance_remaining_m,
        current_x_m: msg.current_x_m,
        current_y_m: msg.current_y_m,
        current_theta_rad: msg.current_theta_rad,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      distance_remaining_m: msg.distance_remaining_m,
      current_x_m: msg.current_x_m,
      current_y_m: msg.current_y_m,
      current_theta_rad: msg.current_theta_rad,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      distance_remaining_m: msg.distance_remaining_m,
      current_x_m: msg.current_x_m,
      current_y_m: msg.current_y_m,
      current_theta_rad: msg.current_theta_rad,
    }
  }
}


// Corresponds to r2_interfaces__action__MoveToPosition_FeedbackMessage

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MoveToPosition_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::action::MoveToPosition_Feedback,

}



impl Default for MoveToPosition_FeedbackMessage {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::MoveToPosition_FeedbackMessage::default())
  }
}

impl rosidl_runtime_rs::Message for MoveToPosition_FeedbackMessage {
  type RmwMsg = super::action::rmw::MoveToPosition_FeedbackMessage;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
        feedback: super::action::MoveToPosition_Feedback::into_rmw_message(std::borrow::Cow::Owned(msg.feedback)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
        feedback: super::action::MoveToPosition_Feedback::into_rmw_message(std::borrow::Cow::Borrowed(&msg.feedback)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
      feedback: super::action::MoveToPosition_Feedback::from_rmw_message(msg.feedback),
    }
  }
}


// Corresponds to r2_interfaces__action__ClimbStep_Goal

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::ClimbStep_Goal::default())
  }
}

impl rosidl_runtime_rs::Message for ClimbStep_Goal {
  type RmwMsg = super::action::rmw::ClimbStep_Goal;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        target_height_mm: msg.target_height_mm,
        speed_percent: msg.speed_percent,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      target_height_mm: msg.target_height_mm,
      speed_percent: msg.speed_percent,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      target_height_mm: msg.target_height_mm,
      speed_percent: msg.speed_percent,
    }
  }
}


// Corresponds to r2_interfaces__action__ClimbStep_Result

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    pub message: std::string::String,

}



impl Default for ClimbStep_Result {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::ClimbStep_Result::default())
  }
}

impl rosidl_runtime_rs::Message for ClimbStep_Result {
  type RmwMsg = super::action::rmw::ClimbStep_Result;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        achieved_height_mm: msg.achieved_height_mm,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
      achieved_height_mm: msg.achieved_height_mm,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      achieved_height_mm: msg.achieved_height_mm,
      message: msg.message.to_string(),
    }
  }
}


// Corresponds to r2_interfaces__action__ClimbStep_Feedback

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ClimbStep_Feedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub current_height_mm: f32,

    /// "LIFTING_FRONT" | "DRIVING" | "LIFTING_BACK" | "DONE"
    pub phase: std::string::String,

}



impl Default for ClimbStep_Feedback {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::ClimbStep_Feedback::default())
  }
}

impl rosidl_runtime_rs::Message for ClimbStep_Feedback {
  type RmwMsg = super::action::rmw::ClimbStep_Feedback;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        current_height_mm: msg.current_height_mm,
        phase: msg.phase.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      current_height_mm: msg.current_height_mm,
        phase: msg.phase.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      current_height_mm: msg.current_height_mm,
      phase: msg.phase.to_string(),
    }
  }
}


// Corresponds to r2_interfaces__action__ClimbStep_FeedbackMessage

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ClimbStep_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::action::ClimbStep_Feedback,

}



impl Default for ClimbStep_FeedbackMessage {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::ClimbStep_FeedbackMessage::default())
  }
}

impl rosidl_runtime_rs::Message for ClimbStep_FeedbackMessage {
  type RmwMsg = super::action::rmw::ClimbStep_FeedbackMessage;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
        feedback: super::action::ClimbStep_Feedback::into_rmw_message(std::borrow::Cow::Owned(msg.feedback)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
        feedback: super::action::ClimbStep_Feedback::into_rmw_message(std::borrow::Cow::Borrowed(&msg.feedback)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
      feedback: super::action::ClimbStep_Feedback::from_rmw_message(msg.feedback),
    }
  }
}


// Corresponds to r2_interfaces__action__GripObject_Goal

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GripObject_Goal {
    /// GOAL
    /// "spearhead" | "kfs"
    pub gripper_id: std::string::String,

    /// 0=RELEASE, 1=GRIP, 2=ROTATE_AND_DOCK
    pub command: u8,

    /// For spearhead servo rotation (0 if unused)
    pub target_angle_deg: f32,

}



impl Default for GripObject_Goal {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::GripObject_Goal::default())
  }
}

impl rosidl_runtime_rs::Message for GripObject_Goal {
  type RmwMsg = super::action::rmw::GripObject_Goal;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        gripper_id: msg.gripper_id.as_str().into(),
        command: msg.command,
        target_angle_deg: msg.target_angle_deg,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        gripper_id: msg.gripper_id.as_str().into(),
      command: msg.command,
      target_angle_deg: msg.target_angle_deg,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      gripper_id: msg.gripper_id.to_string(),
      command: msg.command,
      target_angle_deg: msg.target_angle_deg,
    }
  }
}


// Corresponds to r2_interfaces__action__GripObject_Result

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GripObject_Result {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,

    /// Estimated (0–100), 0 if unavailable
    pub grip_force_estimate: f32,

}



impl Default for GripObject_Result {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::GripObject_Result::default())
  }
}

impl rosidl_runtime_rs::Message for GripObject_Result {
  type RmwMsg = super::action::rmw::GripObject_Result;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
        grip_force_estimate: msg.grip_force_estimate,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
      grip_force_estimate: msg.grip_force_estimate,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
      grip_force_estimate: msg.grip_force_estimate,
    }
  }
}


// Corresponds to r2_interfaces__action__GripObject_Feedback

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GripObject_Feedback {
    /// Current gripper phase description
    pub phase: std::string::String,

    /// 0–100
    pub progress_percent: f32,

}



impl Default for GripObject_Feedback {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::GripObject_Feedback::default())
  }
}

impl rosidl_runtime_rs::Message for GripObject_Feedback {
  type RmwMsg = super::action::rmw::GripObject_Feedback;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        phase: msg.phase.as_str().into(),
        progress_percent: msg.progress_percent,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        phase: msg.phase.as_str().into(),
      progress_percent: msg.progress_percent,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      phase: msg.phase.to_string(),
      progress_percent: msg.progress_percent,
    }
  }
}


// Corresponds to r2_interfaces__action__GripObject_FeedbackMessage

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GripObject_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::action::GripObject_Feedback,

}



impl Default for GripObject_FeedbackMessage {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::GripObject_FeedbackMessage::default())
  }
}

impl rosidl_runtime_rs::Message for GripObject_FeedbackMessage {
  type RmwMsg = super::action::rmw::GripObject_FeedbackMessage;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
        feedback: super::action::GripObject_Feedback::into_rmw_message(std::borrow::Cow::Owned(msg.feedback)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
        feedback: super::action::GripObject_Feedback::into_rmw_message(std::borrow::Cow::Borrowed(&msg.feedback)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
      feedback: super::action::GripObject_Feedback::from_rmw_message(msg.feedback),
    }
  }
}


// Corresponds to r2_interfaces__action__ExpandMechanism_Goal

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExpandMechanism_Goal {
    /// GOAL
    /// "horizontal_expansion" | "vertical_expansion"
    pub mechanism_id: std::string::String,

    /// 0=RETRACT, 1=EXTEND
    pub direction: u8,

    /// Desired final position
    pub target_position_mm: f32,

    /// Motor duty cycle 0–100
    pub speed_percent: f32,

}



impl Default for ExpandMechanism_Goal {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::ExpandMechanism_Goal::default())
  }
}

impl rosidl_runtime_rs::Message for ExpandMechanism_Goal {
  type RmwMsg = super::action::rmw::ExpandMechanism_Goal;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        mechanism_id: msg.mechanism_id.as_str().into(),
        direction: msg.direction,
        target_position_mm: msg.target_position_mm,
        speed_percent: msg.speed_percent,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        mechanism_id: msg.mechanism_id.as_str().into(),
      direction: msg.direction,
      target_position_mm: msg.target_position_mm,
      speed_percent: msg.speed_percent,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      mechanism_id: msg.mechanism_id.to_string(),
      direction: msg.direction,
      target_position_mm: msg.target_position_mm,
      speed_percent: msg.speed_percent,
    }
  }
}


// Corresponds to r2_interfaces__action__ExpandMechanism_Result

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    pub message: std::string::String,

}



impl Default for ExpandMechanism_Result {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::ExpandMechanism_Result::default())
  }
}

impl rosidl_runtime_rs::Message for ExpandMechanism_Result {
  type RmwMsg = super::action::rmw::ExpandMechanism_Result;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        actual_position_mm: msg.actual_position_mm,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
      actual_position_mm: msg.actual_position_mm,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      actual_position_mm: msg.actual_position_mm,
      message: msg.message.to_string(),
    }
  }
}


// Corresponds to r2_interfaces__action__ExpandMechanism_Feedback

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::ExpandMechanism_Feedback::default())
  }
}

impl rosidl_runtime_rs::Message for ExpandMechanism_Feedback {
  type RmwMsg = super::action::rmw::ExpandMechanism_Feedback;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        current_position_mm: msg.current_position_mm,
        limit_min_active: msg.limit_min_active,
        limit_max_active: msg.limit_max_active,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      current_position_mm: msg.current_position_mm,
      limit_min_active: msg.limit_min_active,
      limit_max_active: msg.limit_max_active,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      current_position_mm: msg.current_position_mm,
      limit_min_active: msg.limit_min_active,
      limit_max_active: msg.limit_max_active,
    }
  }
}


// Corresponds to r2_interfaces__action__ExpandMechanism_FeedbackMessage

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExpandMechanism_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::action::ExpandMechanism_Feedback,

}



impl Default for ExpandMechanism_FeedbackMessage {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::ExpandMechanism_FeedbackMessage::default())
  }
}

impl rosidl_runtime_rs::Message for ExpandMechanism_FeedbackMessage {
  type RmwMsg = super::action::rmw::ExpandMechanism_FeedbackMessage;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
        feedback: super::action::ExpandMechanism_Feedback::into_rmw_message(std::borrow::Cow::Owned(msg.feedback)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
        feedback: super::action::ExpandMechanism_Feedback::into_rmw_message(std::borrow::Cow::Borrowed(&msg.feedback)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
      feedback: super::action::ExpandMechanism_Feedback::from_rmw_message(msg.feedback),
    }
  }
}


// Corresponds to r2_interfaces__action__ExecuteRegion_Goal

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExecuteRegion_Goal {
    /// GOAL
    /// "martial_club" | "meihua_forest" | "martial_arena"
    pub region_name: std::string::String,

}



impl Default for ExecuteRegion_Goal {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::ExecuteRegion_Goal::default())
  }
}

impl rosidl_runtime_rs::Message for ExecuteRegion_Goal {
  type RmwMsg = super::action::rmw::ExecuteRegion_Goal;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        region_name: msg.region_name.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        region_name: msg.region_name.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      region_name: msg.region_name.to_string(),
    }
  }
}


// Corresponds to r2_interfaces__action__ExecuteRegion_Result

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExecuteRegion_Result {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,

    /// Filled by meihua_forest region
    pub kfs_boxes_collected: u8,

}



impl Default for ExecuteRegion_Result {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::ExecuteRegion_Result::default())
  }
}

impl rosidl_runtime_rs::Message for ExecuteRegion_Result {
  type RmwMsg = super::action::rmw::ExecuteRegion_Result;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
        kfs_boxes_collected: msg.kfs_boxes_collected,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
      kfs_boxes_collected: msg.kfs_boxes_collected,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
      kfs_boxes_collected: msg.kfs_boxes_collected,
    }
  }
}


// Corresponds to r2_interfaces__action__ExecuteRegion_Feedback

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExecuteRegion_Feedback {
    /// Human-readable step name
    pub current_step: std::string::String,


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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::ExecuteRegion_Feedback::default())
  }
}

impl rosidl_runtime_rs::Message for ExecuteRegion_Feedback {
  type RmwMsg = super::action::rmw::ExecuteRegion_Feedback;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        current_step: msg.current_step.as_str().into(),
        steps_completed: msg.steps_completed,
        total_steps: msg.total_steps,
        progress_percent: msg.progress_percent,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        current_step: msg.current_step.as_str().into(),
      steps_completed: msg.steps_completed,
      total_steps: msg.total_steps,
      progress_percent: msg.progress_percent,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      current_step: msg.current_step.to_string(),
      steps_completed: msg.steps_completed,
      total_steps: msg.total_steps,
      progress_percent: msg.progress_percent,
    }
  }
}


// Corresponds to r2_interfaces__action__ExecuteRegion_FeedbackMessage

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExecuteRegion_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::action::ExecuteRegion_Feedback,

}



impl Default for ExecuteRegion_FeedbackMessage {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::ExecuteRegion_FeedbackMessage::default())
  }
}

impl rosidl_runtime_rs::Message for ExecuteRegion_FeedbackMessage {
  type RmwMsg = super::action::rmw::ExecuteRegion_FeedbackMessage;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
        feedback: super::action::ExecuteRegion_Feedback::into_rmw_message(std::borrow::Cow::Owned(msg.feedback)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
        feedback: super::action::ExecuteRegion_Feedback::into_rmw_message(std::borrow::Cow::Borrowed(&msg.feedback)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
      feedback: super::action::ExecuteRegion_Feedback::from_rmw_message(msg.feedback),
    }
  }
}






// Corresponds to r2_interfaces__action__MoveToPosition_SendGoal_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MoveToPosition_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::action::MoveToPosition_Goal,

}



impl Default for MoveToPosition_SendGoal_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::MoveToPosition_SendGoal_Request::default())
  }
}

impl rosidl_runtime_rs::Message for MoveToPosition_SendGoal_Request {
  type RmwMsg = super::action::rmw::MoveToPosition_SendGoal_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
        goal: super::action::MoveToPosition_Goal::into_rmw_message(std::borrow::Cow::Owned(msg.goal)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
        goal: super::action::MoveToPosition_Goal::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
      goal: super::action::MoveToPosition_Goal::from_rmw_message(msg.goal),
    }
  }
}


// Corresponds to r2_interfaces__action__MoveToPosition_SendGoal_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MoveToPosition_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::Time,

}



impl Default for MoveToPosition_SendGoal_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::MoveToPosition_SendGoal_Response::default())
  }
}

impl rosidl_runtime_rs::Message for MoveToPosition_SendGoal_Response {
  type RmwMsg = super::action::rmw::MoveToPosition_SendGoal_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        accepted: msg.accepted,
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.stamp)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      accepted: msg.accepted,
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.stamp)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      accepted: msg.accepted,
      stamp: builtin_interfaces::msg::Time::from_rmw_message(msg.stamp),
    }
  }
}


// Corresponds to r2_interfaces__action__MoveToPosition_GetResult_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MoveToPosition_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,

}



impl Default for MoveToPosition_GetResult_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::MoveToPosition_GetResult_Request::default())
  }
}

impl rosidl_runtime_rs::Message for MoveToPosition_GetResult_Request {
  type RmwMsg = super::action::rmw::MoveToPosition_GetResult_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
    }
  }
}


// Corresponds to r2_interfaces__action__MoveToPosition_GetResult_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MoveToPosition_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::action::MoveToPosition_Result,

}



impl Default for MoveToPosition_GetResult_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::MoveToPosition_GetResult_Response::default())
  }
}

impl rosidl_runtime_rs::Message for MoveToPosition_GetResult_Response {
  type RmwMsg = super::action::rmw::MoveToPosition_GetResult_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        status: msg.status,
        result: super::action::MoveToPosition_Result::into_rmw_message(std::borrow::Cow::Owned(msg.result)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      status: msg.status,
        result: super::action::MoveToPosition_Result::into_rmw_message(std::borrow::Cow::Borrowed(&msg.result)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      status: msg.status,
      result: super::action::MoveToPosition_Result::from_rmw_message(msg.result),
    }
  }
}


// Corresponds to r2_interfaces__action__ClimbStep_SendGoal_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ClimbStep_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::action::ClimbStep_Goal,

}



impl Default for ClimbStep_SendGoal_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::ClimbStep_SendGoal_Request::default())
  }
}

impl rosidl_runtime_rs::Message for ClimbStep_SendGoal_Request {
  type RmwMsg = super::action::rmw::ClimbStep_SendGoal_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
        goal: super::action::ClimbStep_Goal::into_rmw_message(std::borrow::Cow::Owned(msg.goal)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
        goal: super::action::ClimbStep_Goal::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
      goal: super::action::ClimbStep_Goal::from_rmw_message(msg.goal),
    }
  }
}


// Corresponds to r2_interfaces__action__ClimbStep_SendGoal_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ClimbStep_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::Time,

}



impl Default for ClimbStep_SendGoal_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::ClimbStep_SendGoal_Response::default())
  }
}

impl rosidl_runtime_rs::Message for ClimbStep_SendGoal_Response {
  type RmwMsg = super::action::rmw::ClimbStep_SendGoal_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        accepted: msg.accepted,
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.stamp)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      accepted: msg.accepted,
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.stamp)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      accepted: msg.accepted,
      stamp: builtin_interfaces::msg::Time::from_rmw_message(msg.stamp),
    }
  }
}


// Corresponds to r2_interfaces__action__ClimbStep_GetResult_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ClimbStep_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,

}



impl Default for ClimbStep_GetResult_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::ClimbStep_GetResult_Request::default())
  }
}

impl rosidl_runtime_rs::Message for ClimbStep_GetResult_Request {
  type RmwMsg = super::action::rmw::ClimbStep_GetResult_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
    }
  }
}


// Corresponds to r2_interfaces__action__ClimbStep_GetResult_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ClimbStep_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::action::ClimbStep_Result,

}



impl Default for ClimbStep_GetResult_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::ClimbStep_GetResult_Response::default())
  }
}

impl rosidl_runtime_rs::Message for ClimbStep_GetResult_Response {
  type RmwMsg = super::action::rmw::ClimbStep_GetResult_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        status: msg.status,
        result: super::action::ClimbStep_Result::into_rmw_message(std::borrow::Cow::Owned(msg.result)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      status: msg.status,
        result: super::action::ClimbStep_Result::into_rmw_message(std::borrow::Cow::Borrowed(&msg.result)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      status: msg.status,
      result: super::action::ClimbStep_Result::from_rmw_message(msg.result),
    }
  }
}


// Corresponds to r2_interfaces__action__GripObject_SendGoal_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GripObject_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::action::GripObject_Goal,

}



impl Default for GripObject_SendGoal_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::GripObject_SendGoal_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GripObject_SendGoal_Request {
  type RmwMsg = super::action::rmw::GripObject_SendGoal_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
        goal: super::action::GripObject_Goal::into_rmw_message(std::borrow::Cow::Owned(msg.goal)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
        goal: super::action::GripObject_Goal::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
      goal: super::action::GripObject_Goal::from_rmw_message(msg.goal),
    }
  }
}


// Corresponds to r2_interfaces__action__GripObject_SendGoal_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GripObject_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::Time,

}



impl Default for GripObject_SendGoal_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::GripObject_SendGoal_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GripObject_SendGoal_Response {
  type RmwMsg = super::action::rmw::GripObject_SendGoal_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        accepted: msg.accepted,
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.stamp)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      accepted: msg.accepted,
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.stamp)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      accepted: msg.accepted,
      stamp: builtin_interfaces::msg::Time::from_rmw_message(msg.stamp),
    }
  }
}


// Corresponds to r2_interfaces__action__GripObject_GetResult_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GripObject_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,

}



impl Default for GripObject_GetResult_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::GripObject_GetResult_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GripObject_GetResult_Request {
  type RmwMsg = super::action::rmw::GripObject_GetResult_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
    }
  }
}


// Corresponds to r2_interfaces__action__GripObject_GetResult_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GripObject_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::action::GripObject_Result,

}



impl Default for GripObject_GetResult_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::GripObject_GetResult_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GripObject_GetResult_Response {
  type RmwMsg = super::action::rmw::GripObject_GetResult_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        status: msg.status,
        result: super::action::GripObject_Result::into_rmw_message(std::borrow::Cow::Owned(msg.result)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      status: msg.status,
        result: super::action::GripObject_Result::into_rmw_message(std::borrow::Cow::Borrowed(&msg.result)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      status: msg.status,
      result: super::action::GripObject_Result::from_rmw_message(msg.result),
    }
  }
}


// Corresponds to r2_interfaces__action__ExpandMechanism_SendGoal_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExpandMechanism_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::action::ExpandMechanism_Goal,

}



impl Default for ExpandMechanism_SendGoal_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::ExpandMechanism_SendGoal_Request::default())
  }
}

impl rosidl_runtime_rs::Message for ExpandMechanism_SendGoal_Request {
  type RmwMsg = super::action::rmw::ExpandMechanism_SendGoal_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
        goal: super::action::ExpandMechanism_Goal::into_rmw_message(std::borrow::Cow::Owned(msg.goal)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
        goal: super::action::ExpandMechanism_Goal::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
      goal: super::action::ExpandMechanism_Goal::from_rmw_message(msg.goal),
    }
  }
}


// Corresponds to r2_interfaces__action__ExpandMechanism_SendGoal_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExpandMechanism_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::Time,

}



impl Default for ExpandMechanism_SendGoal_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::ExpandMechanism_SendGoal_Response::default())
  }
}

impl rosidl_runtime_rs::Message for ExpandMechanism_SendGoal_Response {
  type RmwMsg = super::action::rmw::ExpandMechanism_SendGoal_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        accepted: msg.accepted,
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.stamp)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      accepted: msg.accepted,
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.stamp)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      accepted: msg.accepted,
      stamp: builtin_interfaces::msg::Time::from_rmw_message(msg.stamp),
    }
  }
}


// Corresponds to r2_interfaces__action__ExpandMechanism_GetResult_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExpandMechanism_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,

}



impl Default for ExpandMechanism_GetResult_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::ExpandMechanism_GetResult_Request::default())
  }
}

impl rosidl_runtime_rs::Message for ExpandMechanism_GetResult_Request {
  type RmwMsg = super::action::rmw::ExpandMechanism_GetResult_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
    }
  }
}


// Corresponds to r2_interfaces__action__ExpandMechanism_GetResult_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExpandMechanism_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::action::ExpandMechanism_Result,

}



impl Default for ExpandMechanism_GetResult_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::ExpandMechanism_GetResult_Response::default())
  }
}

impl rosidl_runtime_rs::Message for ExpandMechanism_GetResult_Response {
  type RmwMsg = super::action::rmw::ExpandMechanism_GetResult_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        status: msg.status,
        result: super::action::ExpandMechanism_Result::into_rmw_message(std::borrow::Cow::Owned(msg.result)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      status: msg.status,
        result: super::action::ExpandMechanism_Result::into_rmw_message(std::borrow::Cow::Borrowed(&msg.result)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      status: msg.status,
      result: super::action::ExpandMechanism_Result::from_rmw_message(msg.result),
    }
  }
}


// Corresponds to r2_interfaces__action__ExecuteRegion_SendGoal_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExecuteRegion_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::action::ExecuteRegion_Goal,

}



impl Default for ExecuteRegion_SendGoal_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::ExecuteRegion_SendGoal_Request::default())
  }
}

impl rosidl_runtime_rs::Message for ExecuteRegion_SendGoal_Request {
  type RmwMsg = super::action::rmw::ExecuteRegion_SendGoal_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
        goal: super::action::ExecuteRegion_Goal::into_rmw_message(std::borrow::Cow::Owned(msg.goal)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
        goal: super::action::ExecuteRegion_Goal::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
      goal: super::action::ExecuteRegion_Goal::from_rmw_message(msg.goal),
    }
  }
}


// Corresponds to r2_interfaces__action__ExecuteRegion_SendGoal_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExecuteRegion_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::Time,

}



impl Default for ExecuteRegion_SendGoal_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::ExecuteRegion_SendGoal_Response::default())
  }
}

impl rosidl_runtime_rs::Message for ExecuteRegion_SendGoal_Response {
  type RmwMsg = super::action::rmw::ExecuteRegion_SendGoal_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        accepted: msg.accepted,
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.stamp)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      accepted: msg.accepted,
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.stamp)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      accepted: msg.accepted,
      stamp: builtin_interfaces::msg::Time::from_rmw_message(msg.stamp),
    }
  }
}


// Corresponds to r2_interfaces__action__ExecuteRegion_GetResult_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExecuteRegion_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,

}



impl Default for ExecuteRegion_GetResult_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::ExecuteRegion_GetResult_Request::default())
  }
}

impl rosidl_runtime_rs::Message for ExecuteRegion_GetResult_Request {
  type RmwMsg = super::action::rmw::ExecuteRegion_GetResult_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
    }
  }
}


// Corresponds to r2_interfaces__action__ExecuteRegion_GetResult_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExecuteRegion_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::action::ExecuteRegion_Result,

}



impl Default for ExecuteRegion_GetResult_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::ExecuteRegion_GetResult_Response::default())
  }
}

impl rosidl_runtime_rs::Message for ExecuteRegion_GetResult_Response {
  type RmwMsg = super::action::rmw::ExecuteRegion_GetResult_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        status: msg.status,
        result: super::action::ExecuteRegion_Result::into_rmw_message(std::borrow::Cow::Owned(msg.result)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      status: msg.status,
        result: super::action::ExecuteRegion_Result::into_rmw_message(std::borrow::Cow::Borrowed(&msg.result)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      status: msg.status,
      result: super::action::ExecuteRegion_Result::from_rmw_message(msg.result),
    }
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






#[link(name = "r2_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_action_type_support_handle__r2_interfaces__action__MoveToPosition() -> *const std::ffi::c_void;
}

// Corresponds to r2_interfaces__action__MoveToPosition
#[allow(missing_docs, non_camel_case_types)]
pub struct MoveToPosition;

impl rosidl_runtime_rs::Action for MoveToPosition {
  // --- Associated types for client library users ---
  /// The goal message defined in the action definition.
  type Goal = MoveToPosition_Goal;

  /// The result message defined in the action definition.
  type Result = MoveToPosition_Result;

  /// The feedback message defined in the action definition.
  type Feedback = MoveToPosition_Feedback;

  // --- Associated types for client library implementation ---
  /// The feedback message with generic fields which wraps the feedback message.
  type FeedbackMessage = super::action::MoveToPosition_FeedbackMessage;

  /// The send_goal service using a wrapped version of the goal message as a request.
  type SendGoalService = super::action::MoveToPosition_SendGoal;

  /// The generic service to cancel a goal.
  type CancelGoalService = action_msgs::srv::rmw::CancelGoal;

  /// The get_result service using a wrapped version of the result message as a response.
  type GetResultService = super::action::MoveToPosition_GetResult;

  // --- Methods for client library implementation ---
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_action_type_support_handle__r2_interfaces__action__MoveToPosition() }
  }

  fn create_goal_request(
    goal_id: &[u8; 16],
    goal: super::action::rmw::MoveToPosition_Goal,
  ) -> super::action::rmw::MoveToPosition_SendGoal_Request {
   super::action::rmw::MoveToPosition_SendGoal_Request {
      goal_id: unique_identifier_msgs::msg::rmw::UUID { uuid: *goal_id },
      goal,
    }
  }

  fn split_goal_request(
    request: super::action::rmw::MoveToPosition_SendGoal_Request,
  ) -> (
    [u8; 16],
   super::action::rmw::MoveToPosition_Goal,
  ) {
    (request.goal_id.uuid, request.goal)
  }

  fn create_goal_response(
    accepted: bool,
    stamp: (i32, u32),
  ) -> super::action::rmw::MoveToPosition_SendGoal_Response {
   super::action::rmw::MoveToPosition_SendGoal_Response {
      accepted,
      stamp: builtin_interfaces::msg::rmw::Time {
        sec: stamp.0,
        nanosec: stamp.1,
      },
    }
  }

  fn get_goal_response_accepted(
    response: &super::action::rmw::MoveToPosition_SendGoal_Response,
  ) -> bool {
    response.accepted
  }

  fn get_goal_response_stamp(
    response: &super::action::rmw::MoveToPosition_SendGoal_Response,
  ) -> (i32, u32) {
    (response.stamp.sec, response.stamp.nanosec)
  }

  fn create_feedback_message(
    goal_id: &[u8; 16],
    feedback: super::action::rmw::MoveToPosition_Feedback,
  ) -> super::action::rmw::MoveToPosition_FeedbackMessage {
    let mut message = super::action::rmw::MoveToPosition_FeedbackMessage::default();
    message.goal_id.uuid = *goal_id;
    message.feedback = feedback;
    message
  }

  fn split_feedback_message(
    feedback: super::action::rmw::MoveToPosition_FeedbackMessage,
  ) -> (
    [u8; 16],
   super::action::rmw::MoveToPosition_Feedback,
  ) {
    (feedback.goal_id.uuid, feedback.feedback)
  }

  fn create_result_request(
    goal_id: &[u8; 16],
  ) -> super::action::rmw::MoveToPosition_GetResult_Request {
   super::action::rmw::MoveToPosition_GetResult_Request {
      goal_id: unique_identifier_msgs::msg::rmw::UUID { uuid: *goal_id },
    }
  }

  fn get_result_request_uuid(
    request: &super::action::rmw::MoveToPosition_GetResult_Request,
  ) -> &[u8; 16] {
    &request.goal_id.uuid
  }

  fn create_result_response(
    status: i8,
    result: super::action::rmw::MoveToPosition_Result,
  ) -> super::action::rmw::MoveToPosition_GetResult_Response {
   super::action::rmw::MoveToPosition_GetResult_Response {
      status,
      result,
    }
  }

  fn split_result_response(
    response: super::action::rmw::MoveToPosition_GetResult_Response
  ) -> (
    i8,
   super::action::rmw::MoveToPosition_Result,
  ) {
    (response.status, response.result)
  }
}




#[link(name = "r2_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_action_type_support_handle__r2_interfaces__action__ClimbStep() -> *const std::ffi::c_void;
}

// Corresponds to r2_interfaces__action__ClimbStep
#[allow(missing_docs, non_camel_case_types)]
pub struct ClimbStep;

impl rosidl_runtime_rs::Action for ClimbStep {
  // --- Associated types for client library users ---
  /// The goal message defined in the action definition.
  type Goal = ClimbStep_Goal;

  /// The result message defined in the action definition.
  type Result = ClimbStep_Result;

  /// The feedback message defined in the action definition.
  type Feedback = ClimbStep_Feedback;

  // --- Associated types for client library implementation ---
  /// The feedback message with generic fields which wraps the feedback message.
  type FeedbackMessage = super::action::ClimbStep_FeedbackMessage;

  /// The send_goal service using a wrapped version of the goal message as a request.
  type SendGoalService = super::action::ClimbStep_SendGoal;

  /// The generic service to cancel a goal.
  type CancelGoalService = action_msgs::srv::rmw::CancelGoal;

  /// The get_result service using a wrapped version of the result message as a response.
  type GetResultService = super::action::ClimbStep_GetResult;

  // --- Methods for client library implementation ---
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_action_type_support_handle__r2_interfaces__action__ClimbStep() }
  }

  fn create_goal_request(
    goal_id: &[u8; 16],
    goal: super::action::rmw::ClimbStep_Goal,
  ) -> super::action::rmw::ClimbStep_SendGoal_Request {
   super::action::rmw::ClimbStep_SendGoal_Request {
      goal_id: unique_identifier_msgs::msg::rmw::UUID { uuid: *goal_id },
      goal,
    }
  }

  fn split_goal_request(
    request: super::action::rmw::ClimbStep_SendGoal_Request,
  ) -> (
    [u8; 16],
   super::action::rmw::ClimbStep_Goal,
  ) {
    (request.goal_id.uuid, request.goal)
  }

  fn create_goal_response(
    accepted: bool,
    stamp: (i32, u32),
  ) -> super::action::rmw::ClimbStep_SendGoal_Response {
   super::action::rmw::ClimbStep_SendGoal_Response {
      accepted,
      stamp: builtin_interfaces::msg::rmw::Time {
        sec: stamp.0,
        nanosec: stamp.1,
      },
    }
  }

  fn get_goal_response_accepted(
    response: &super::action::rmw::ClimbStep_SendGoal_Response,
  ) -> bool {
    response.accepted
  }

  fn get_goal_response_stamp(
    response: &super::action::rmw::ClimbStep_SendGoal_Response,
  ) -> (i32, u32) {
    (response.stamp.sec, response.stamp.nanosec)
  }

  fn create_feedback_message(
    goal_id: &[u8; 16],
    feedback: super::action::rmw::ClimbStep_Feedback,
  ) -> super::action::rmw::ClimbStep_FeedbackMessage {
    let mut message = super::action::rmw::ClimbStep_FeedbackMessage::default();
    message.goal_id.uuid = *goal_id;
    message.feedback = feedback;
    message
  }

  fn split_feedback_message(
    feedback: super::action::rmw::ClimbStep_FeedbackMessage,
  ) -> (
    [u8; 16],
   super::action::rmw::ClimbStep_Feedback,
  ) {
    (feedback.goal_id.uuid, feedback.feedback)
  }

  fn create_result_request(
    goal_id: &[u8; 16],
  ) -> super::action::rmw::ClimbStep_GetResult_Request {
   super::action::rmw::ClimbStep_GetResult_Request {
      goal_id: unique_identifier_msgs::msg::rmw::UUID { uuid: *goal_id },
    }
  }

  fn get_result_request_uuid(
    request: &super::action::rmw::ClimbStep_GetResult_Request,
  ) -> &[u8; 16] {
    &request.goal_id.uuid
  }

  fn create_result_response(
    status: i8,
    result: super::action::rmw::ClimbStep_Result,
  ) -> super::action::rmw::ClimbStep_GetResult_Response {
   super::action::rmw::ClimbStep_GetResult_Response {
      status,
      result,
    }
  }

  fn split_result_response(
    response: super::action::rmw::ClimbStep_GetResult_Response
  ) -> (
    i8,
   super::action::rmw::ClimbStep_Result,
  ) {
    (response.status, response.result)
  }
}




#[link(name = "r2_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_action_type_support_handle__r2_interfaces__action__GripObject() -> *const std::ffi::c_void;
}

// Corresponds to r2_interfaces__action__GripObject
#[allow(missing_docs, non_camel_case_types)]
pub struct GripObject;

impl rosidl_runtime_rs::Action for GripObject {
  // --- Associated types for client library users ---
  /// The goal message defined in the action definition.
  type Goal = GripObject_Goal;

  /// The result message defined in the action definition.
  type Result = GripObject_Result;

  /// The feedback message defined in the action definition.
  type Feedback = GripObject_Feedback;

  // --- Associated types for client library implementation ---
  /// The feedback message with generic fields which wraps the feedback message.
  type FeedbackMessage = super::action::GripObject_FeedbackMessage;

  /// The send_goal service using a wrapped version of the goal message as a request.
  type SendGoalService = super::action::GripObject_SendGoal;

  /// The generic service to cancel a goal.
  type CancelGoalService = action_msgs::srv::rmw::CancelGoal;

  /// The get_result service using a wrapped version of the result message as a response.
  type GetResultService = super::action::GripObject_GetResult;

  // --- Methods for client library implementation ---
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_action_type_support_handle__r2_interfaces__action__GripObject() }
  }

  fn create_goal_request(
    goal_id: &[u8; 16],
    goal: super::action::rmw::GripObject_Goal,
  ) -> super::action::rmw::GripObject_SendGoal_Request {
   super::action::rmw::GripObject_SendGoal_Request {
      goal_id: unique_identifier_msgs::msg::rmw::UUID { uuid: *goal_id },
      goal,
    }
  }

  fn split_goal_request(
    request: super::action::rmw::GripObject_SendGoal_Request,
  ) -> (
    [u8; 16],
   super::action::rmw::GripObject_Goal,
  ) {
    (request.goal_id.uuid, request.goal)
  }

  fn create_goal_response(
    accepted: bool,
    stamp: (i32, u32),
  ) -> super::action::rmw::GripObject_SendGoal_Response {
   super::action::rmw::GripObject_SendGoal_Response {
      accepted,
      stamp: builtin_interfaces::msg::rmw::Time {
        sec: stamp.0,
        nanosec: stamp.1,
      },
    }
  }

  fn get_goal_response_accepted(
    response: &super::action::rmw::GripObject_SendGoal_Response,
  ) -> bool {
    response.accepted
  }

  fn get_goal_response_stamp(
    response: &super::action::rmw::GripObject_SendGoal_Response,
  ) -> (i32, u32) {
    (response.stamp.sec, response.stamp.nanosec)
  }

  fn create_feedback_message(
    goal_id: &[u8; 16],
    feedback: super::action::rmw::GripObject_Feedback,
  ) -> super::action::rmw::GripObject_FeedbackMessage {
    let mut message = super::action::rmw::GripObject_FeedbackMessage::default();
    message.goal_id.uuid = *goal_id;
    message.feedback = feedback;
    message
  }

  fn split_feedback_message(
    feedback: super::action::rmw::GripObject_FeedbackMessage,
  ) -> (
    [u8; 16],
   super::action::rmw::GripObject_Feedback,
  ) {
    (feedback.goal_id.uuid, feedback.feedback)
  }

  fn create_result_request(
    goal_id: &[u8; 16],
  ) -> super::action::rmw::GripObject_GetResult_Request {
   super::action::rmw::GripObject_GetResult_Request {
      goal_id: unique_identifier_msgs::msg::rmw::UUID { uuid: *goal_id },
    }
  }

  fn get_result_request_uuid(
    request: &super::action::rmw::GripObject_GetResult_Request,
  ) -> &[u8; 16] {
    &request.goal_id.uuid
  }

  fn create_result_response(
    status: i8,
    result: super::action::rmw::GripObject_Result,
  ) -> super::action::rmw::GripObject_GetResult_Response {
   super::action::rmw::GripObject_GetResult_Response {
      status,
      result,
    }
  }

  fn split_result_response(
    response: super::action::rmw::GripObject_GetResult_Response
  ) -> (
    i8,
   super::action::rmw::GripObject_Result,
  ) {
    (response.status, response.result)
  }
}




#[link(name = "r2_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_action_type_support_handle__r2_interfaces__action__ExpandMechanism() -> *const std::ffi::c_void;
}

// Corresponds to r2_interfaces__action__ExpandMechanism
#[allow(missing_docs, non_camel_case_types)]
pub struct ExpandMechanism;

impl rosidl_runtime_rs::Action for ExpandMechanism {
  // --- Associated types for client library users ---
  /// The goal message defined in the action definition.
  type Goal = ExpandMechanism_Goal;

  /// The result message defined in the action definition.
  type Result = ExpandMechanism_Result;

  /// The feedback message defined in the action definition.
  type Feedback = ExpandMechanism_Feedback;

  // --- Associated types for client library implementation ---
  /// The feedback message with generic fields which wraps the feedback message.
  type FeedbackMessage = super::action::ExpandMechanism_FeedbackMessage;

  /// The send_goal service using a wrapped version of the goal message as a request.
  type SendGoalService = super::action::ExpandMechanism_SendGoal;

  /// The generic service to cancel a goal.
  type CancelGoalService = action_msgs::srv::rmw::CancelGoal;

  /// The get_result service using a wrapped version of the result message as a response.
  type GetResultService = super::action::ExpandMechanism_GetResult;

  // --- Methods for client library implementation ---
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_action_type_support_handle__r2_interfaces__action__ExpandMechanism() }
  }

  fn create_goal_request(
    goal_id: &[u8; 16],
    goal: super::action::rmw::ExpandMechanism_Goal,
  ) -> super::action::rmw::ExpandMechanism_SendGoal_Request {
   super::action::rmw::ExpandMechanism_SendGoal_Request {
      goal_id: unique_identifier_msgs::msg::rmw::UUID { uuid: *goal_id },
      goal,
    }
  }

  fn split_goal_request(
    request: super::action::rmw::ExpandMechanism_SendGoal_Request,
  ) -> (
    [u8; 16],
   super::action::rmw::ExpandMechanism_Goal,
  ) {
    (request.goal_id.uuid, request.goal)
  }

  fn create_goal_response(
    accepted: bool,
    stamp: (i32, u32),
  ) -> super::action::rmw::ExpandMechanism_SendGoal_Response {
   super::action::rmw::ExpandMechanism_SendGoal_Response {
      accepted,
      stamp: builtin_interfaces::msg::rmw::Time {
        sec: stamp.0,
        nanosec: stamp.1,
      },
    }
  }

  fn get_goal_response_accepted(
    response: &super::action::rmw::ExpandMechanism_SendGoal_Response,
  ) -> bool {
    response.accepted
  }

  fn get_goal_response_stamp(
    response: &super::action::rmw::ExpandMechanism_SendGoal_Response,
  ) -> (i32, u32) {
    (response.stamp.sec, response.stamp.nanosec)
  }

  fn create_feedback_message(
    goal_id: &[u8; 16],
    feedback: super::action::rmw::ExpandMechanism_Feedback,
  ) -> super::action::rmw::ExpandMechanism_FeedbackMessage {
    let mut message = super::action::rmw::ExpandMechanism_FeedbackMessage::default();
    message.goal_id.uuid = *goal_id;
    message.feedback = feedback;
    message
  }

  fn split_feedback_message(
    feedback: super::action::rmw::ExpandMechanism_FeedbackMessage,
  ) -> (
    [u8; 16],
   super::action::rmw::ExpandMechanism_Feedback,
  ) {
    (feedback.goal_id.uuid, feedback.feedback)
  }

  fn create_result_request(
    goal_id: &[u8; 16],
  ) -> super::action::rmw::ExpandMechanism_GetResult_Request {
   super::action::rmw::ExpandMechanism_GetResult_Request {
      goal_id: unique_identifier_msgs::msg::rmw::UUID { uuid: *goal_id },
    }
  }

  fn get_result_request_uuid(
    request: &super::action::rmw::ExpandMechanism_GetResult_Request,
  ) -> &[u8; 16] {
    &request.goal_id.uuid
  }

  fn create_result_response(
    status: i8,
    result: super::action::rmw::ExpandMechanism_Result,
  ) -> super::action::rmw::ExpandMechanism_GetResult_Response {
   super::action::rmw::ExpandMechanism_GetResult_Response {
      status,
      result,
    }
  }

  fn split_result_response(
    response: super::action::rmw::ExpandMechanism_GetResult_Response
  ) -> (
    i8,
   super::action::rmw::ExpandMechanism_Result,
  ) {
    (response.status, response.result)
  }
}




#[link(name = "r2_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_action_type_support_handle__r2_interfaces__action__ExecuteRegion() -> *const std::ffi::c_void;
}

// Corresponds to r2_interfaces__action__ExecuteRegion
#[allow(missing_docs, non_camel_case_types)]
pub struct ExecuteRegion;

impl rosidl_runtime_rs::Action for ExecuteRegion {
  // --- Associated types for client library users ---
  /// The goal message defined in the action definition.
  type Goal = ExecuteRegion_Goal;

  /// The result message defined in the action definition.
  type Result = ExecuteRegion_Result;

  /// The feedback message defined in the action definition.
  type Feedback = ExecuteRegion_Feedback;

  // --- Associated types for client library implementation ---
  /// The feedback message with generic fields which wraps the feedback message.
  type FeedbackMessage = super::action::ExecuteRegion_FeedbackMessage;

  /// The send_goal service using a wrapped version of the goal message as a request.
  type SendGoalService = super::action::ExecuteRegion_SendGoal;

  /// The generic service to cancel a goal.
  type CancelGoalService = action_msgs::srv::rmw::CancelGoal;

  /// The get_result service using a wrapped version of the result message as a response.
  type GetResultService = super::action::ExecuteRegion_GetResult;

  // --- Methods for client library implementation ---
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_action_type_support_handle__r2_interfaces__action__ExecuteRegion() }
  }

  fn create_goal_request(
    goal_id: &[u8; 16],
    goal: super::action::rmw::ExecuteRegion_Goal,
  ) -> super::action::rmw::ExecuteRegion_SendGoal_Request {
   super::action::rmw::ExecuteRegion_SendGoal_Request {
      goal_id: unique_identifier_msgs::msg::rmw::UUID { uuid: *goal_id },
      goal,
    }
  }

  fn split_goal_request(
    request: super::action::rmw::ExecuteRegion_SendGoal_Request,
  ) -> (
    [u8; 16],
   super::action::rmw::ExecuteRegion_Goal,
  ) {
    (request.goal_id.uuid, request.goal)
  }

  fn create_goal_response(
    accepted: bool,
    stamp: (i32, u32),
  ) -> super::action::rmw::ExecuteRegion_SendGoal_Response {
   super::action::rmw::ExecuteRegion_SendGoal_Response {
      accepted,
      stamp: builtin_interfaces::msg::rmw::Time {
        sec: stamp.0,
        nanosec: stamp.1,
      },
    }
  }

  fn get_goal_response_accepted(
    response: &super::action::rmw::ExecuteRegion_SendGoal_Response,
  ) -> bool {
    response.accepted
  }

  fn get_goal_response_stamp(
    response: &super::action::rmw::ExecuteRegion_SendGoal_Response,
  ) -> (i32, u32) {
    (response.stamp.sec, response.stamp.nanosec)
  }

  fn create_feedback_message(
    goal_id: &[u8; 16],
    feedback: super::action::rmw::ExecuteRegion_Feedback,
  ) -> super::action::rmw::ExecuteRegion_FeedbackMessage {
    let mut message = super::action::rmw::ExecuteRegion_FeedbackMessage::default();
    message.goal_id.uuid = *goal_id;
    message.feedback = feedback;
    message
  }

  fn split_feedback_message(
    feedback: super::action::rmw::ExecuteRegion_FeedbackMessage,
  ) -> (
    [u8; 16],
   super::action::rmw::ExecuteRegion_Feedback,
  ) {
    (feedback.goal_id.uuid, feedback.feedback)
  }

  fn create_result_request(
    goal_id: &[u8; 16],
  ) -> super::action::rmw::ExecuteRegion_GetResult_Request {
   super::action::rmw::ExecuteRegion_GetResult_Request {
      goal_id: unique_identifier_msgs::msg::rmw::UUID { uuid: *goal_id },
    }
  }

  fn get_result_request_uuid(
    request: &super::action::rmw::ExecuteRegion_GetResult_Request,
  ) -> &[u8; 16] {
    &request.goal_id.uuid
  }

  fn create_result_response(
    status: i8,
    result: super::action::rmw::ExecuteRegion_Result,
  ) -> super::action::rmw::ExecuteRegion_GetResult_Response {
   super::action::rmw::ExecuteRegion_GetResult_Response {
      status,
      result,
    }
  }

  fn split_result_response(
    response: super::action::rmw::ExecuteRegion_GetResult_Response
  ) -> (
    i8,
   super::action::rmw::ExecuteRegion_Result,
  ) {
    (response.status, response.result)
  }
}


