# DetectionResult.msg
# Published by detection nodes (spearhead, KFS, TicTacToe rack)

std_msgs/Header header

string  target_type          # "spearhead" | "kfs_box" | "ttt_rack"
bool    detected             # True when target is visible
float32 distance_mm          # Estimated distance to target (mm)
float32 offset_x_mm          # Horizontal offset from robot centre (mm)
float32 offset_y_mm          # Vertical   offset from robot centre (mm)
float32 confidence           # Detection confidence 0.0–1.0
sensor_msgs/RegionOfInterest bounding_box   # Pixel bounding box
