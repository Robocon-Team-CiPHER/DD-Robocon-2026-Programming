# SerialFrame.msg
# Low-level serial frame relayed by the communication bridge nodes.
# The frame follows a simple protocol: [START][CMD][LEN][DATA...][CRC]

std_msgs/Header header

uint8   device_id     # 0x01 = ESP32, 0x02 = Arduino Mega
uint8   cmd_id        # Command identifier (see comm_bridge/config/protocol.yaml)
uint8[] payload       # Raw data bytes
uint8   crc8          # CRC-8 checksum of (cmd_id + payload)
