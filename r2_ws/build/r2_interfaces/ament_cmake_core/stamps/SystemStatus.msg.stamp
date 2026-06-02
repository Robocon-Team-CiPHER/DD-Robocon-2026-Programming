# SystemStatus.msg
# Published by initialization nodes; aggregates hardware readiness

std_msgs/Header header

bool rpi_ok               # Raspberry Pi self-check passed
bool esp32_ok             # ESP32 handshake ACK received
bool arduino_ok           # Arduino Mega handshake ACK received
bool cameras_ok           # All cameras streaming
bool encoders_ok          # Encoder feedback nominal
string mission_state      # Current high-level mission state name
string[] warnings         # Non-fatal warning strings
