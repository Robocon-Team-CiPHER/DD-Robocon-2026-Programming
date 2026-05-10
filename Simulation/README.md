# Turtlesim Pipeline Simulation

I built this simulation to test our ROS 2 communication pipeline without needing the physical robot assembled. 

## How it works
- The `turtlesim_node` acts as the physical hardware moving around.
- The `esp32_simulator_node` is a Python script I wrote that acts EXACTLY like our real ESP32 will. It reads the "hardware" movement, calculates Odometry, and publishes it to `/odom`.

## How to run it

First, make sure you build the package in your ROS 2 workspace (`colcon build`).

1. **Launch the pipeline:**
   ```bash
   ros2 launch mecanum_pipeline test_pipeline.launch.py
   ```
   *This starts both the turtlesim window and the ESP32 simulator node.*

2. **Drive the robot:**
   ```bash
   ros2 run turtlesim turtle_teleop_key
   ```
   *(Use your arrow keys to move)*

3. **Check the Odometry data:**
   ```bash
   ros2 topic echo --field pose.pose.position /odom
   ```
   You'll see the X and Y coordinates update live as you drive!
