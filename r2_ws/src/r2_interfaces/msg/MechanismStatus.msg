# MechanismStatus.msg
# Generic status feedback from any actuated mechanism on Arduino Mega

std_msgs/Header header

string mechanism_id          # e.g. "spearhead_gripper", "kfs_gripper", "step_climber"
uint8  state                 # 0=IDLE, 1=MOVING, 2=DONE, 3=ERROR
float32 position_mm          # Current position in mm (encoder-derived)
bool    limit_switch_min     # Lower / retracted limit triggered
bool    limit_switch_max     # Upper / extended limit triggered
string  error_msg            # Non-empty when state == ERROR
