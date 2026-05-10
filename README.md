# DD Robocon 2026 - ROS 2 Implementation

This branch contains my work on the Mecanum robot's navigation and control pipeline using ROS 2 Jazzy, micro-ROS, and ESP32.

I decided to split the work into two parts:
1. **Simulation**: A Turtlesim-based test environment where we can test the data flow and ensure our Odometry calculations are correct before we put it on the real hardware.
2. **Real Robot**: The actual ESP32 firmware that reads the encoders, runs the PID loops, calculates Odometry, and publishes it via micro-ROS over WiFi.

## Why this architecture?
I specifically designed the ESP32 to be a "Smart Node". Instead of sending raw encoder ticks to the Raspberry Pi and making the Pi do the heavy math, the ESP32 calculates its own Odometry (`x, y, theta`) internally using forward kinematics. It then publishes standard `nav_msgs/Odometry` messages over UDP to the ROS 2 network. This keeps the real-time constraints on the ESP32 and saves WiFi bandwidth.

Check out the `Media` folder for a demo video of the simulation working!
