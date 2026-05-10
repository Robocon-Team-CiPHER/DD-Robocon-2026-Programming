# ESP32 Real Robot Firmware

This is the actual C firmware for our ESP32. I set this up using ESP-IDF and the `micro_ros_espidf_component`.

## Features I've implemented so far:
- **WiFi Connection:** `wifi_manager.c` handles connecting to our local network with retry logic.
- **Encoder Reading:** `encoder.c` uses GPIO hardware interrupts to accurately read all 4 mecanum wheels.
- **On-board Odometry:** `odometry.c` runs the forward kinematics math on the ESP32 itself to get our X, Y, and Theta.
- **micro-ROS Agent:** `main.c` connects to the Raspberry Pi, publishes the `/odom` and `/wheel_ticks` topics, and subscribes to `/cmd_vel`.

## How to flash
Update `main.c` with your WiFi SSID, Password, and the IP address of the laptop/Raspberry Pi running the micro-ROS Agent.

```bash
# Set target and build
idf.py set-target esp32
idf.py build

# Flash to the board (replace ttyUSB0 with your port)
idf.py -p /dev/ttyUSB0 flash monitor
```

## Running the Agent
On the Raspberry Pi / PC side, you need to run the micro-ROS bridge:
```bash
ros2 run micro_ros_agent micro_ros_agent udp4 --port 8888
```
Once the ESP32 boots and connects, you'll see the `/odom` topic appear on your ROS 2 network automatically!
