# R2 Competition Robot — ROS 2 Workspace

A complete ROS 2 workspace for the **R2** competition robot, supporting both **Humble** and **Jazzy** distros.

---

## Architecture Overview

```
┌─────────────────────────────────────────────────────────────────┐
│                    Raspberry Pi 4 (ROS 2)                       │
│                                                                 │
│  ┌──────────┐ ┌──────────┐ ┌──────────┐ ┌──────────────────┐   │
│  │ Camera   │ │Detection │ │ Mission  │ │  Initialization  │   │
│  │ Nodes    │→│ Nodes    │→│ Control  │ │  Nodes           │   │
│  └──────────┘ └──────────┘ └────┬─────┘ └──────────────────┘   │
│                                  │                               │
│  ┌──────────────────────────────┴──────────────────────────┐   │
│  │              Actuation Nodes (C++)                       │   │
│  │  Chassis │ StepClimb │ Spearhead │ KFS │ H-Exp │ V-Exp  │   │
│  └─────────────────────────┬───────────────────────────────┘   │
│                             │                                   │
│  ┌──────────────────────────┴──────────────────────────────┐   │
│  │          Communication Bridge (Serial)                   │   │
│  │     serial_bridge_node ←→ ESP32 (chassis motors)         │   │
│  │     arduino_bridge_node ←→ Arduino Mega (mechanisms)     │   │
│  └──────────────────────────────────────────────────────────┘   │
└─────────────────────────────────────────────────────────────────┘
         │ USB Serial                        │ USB Serial / UART
    ┌────┴────┐                         ┌────┴─────┐
    │  ESP32  │←── UART ──────────────→ │ Arduino  │
    │ (motor) │                         │  Mega    │
    └─────────┘                         └──────────┘
```

---

## Packages

| Package | Type | Description |
|---------|------|-------------|
| `r2_interfaces` | msgs/srvs/actions | Custom message definitions |
| `r2_description` | URDF | Robot model, meshes, TF |
| `r2_detection` | Python | OpenCV camera + detection nodes |
| `r2_actuation` | C++ | All mechanism control nodes |
| `r2_initialization` | Python | Boot checks, handshaking |
| `r2_comm_bridge` | C++ | Serial bridges (ESP32 + Arduino) |
| `r2_mission_control` | C++ | State machine orchestrator |
| `r2_bringup` | Launch | Top-level launch files |

---

## Build Instructions

### Prerequisites

```bash
# ROS 2 Humble or Jazzy
sudo apt install ros-${ROS_DISTRO}-robot-state-publisher \
                 ros-${ROS_DISTRO}-joint-state-publisher \
                 ros-${ROS_DISTRO}-xacro \
                 ros-${ROS_DISTRO}-cv-bridge \
                 ros-${ROS_DISTRO}-image-transport \
                 python3-opencv
```

### Build

```bash
cd ~/r2_ws
source /opt/ros/${ROS_DISTRO}/setup.bash
colcon build --symlink-install
source install/setup.bash
```

### Build Single Package

```bash
colcon build --symlink-install --packages-select r2_interfaces
colcon build --symlink-install --packages-select r2_actuation
```

---

## Launch Commands

### Full Robot (Competition Mode)

```bash
ros2 launch r2_bringup full_robot.launch.py
```

### Detection Only (Tuning Mode)

```bash
ros2 launch r2_bringup detection_only.launch.py
```

### Actuation Only (Mechanism Testing)

```bash
ros2 launch r2_bringup actuation_only.launch.py
```

### Initialization Only (Hardware Diagnostics)

```bash
ros2 launch r2_bringup initialization_only.launch.py
```

### Simulation / Software Test

```bash
ros2 launch r2_bringup simulation.launch.py
```

---

## ROS 2 Topic/Service/Action Map

### Topics (continuous data)

| Topic | Type | Description |
|-------|------|-------------|
| `/r2/camera/image_raw` | `sensor_msgs/Image` | Main camera feed |
| `/r2/kfs_camera/image_raw` | `sensor_msgs/Image` | Phone camera (KFS) |
| `/r2/detection/spearhead` | `DetectionResult` | Spearhead detection |
| `/r2/detection/kfs_box` | `DetectionResult` | KFS box detection |
| `/r2/detection/ttt_rack` | `DetectionResult` | TTT rack detection |
| `/r2/chassis/cmd` | `ChassisCmd` | Chassis velocity cmd |
| `/r2/chassis/status` | `MechanismStatus` | Chassis status |
| `/r2/mechanism/*/status` | `MechanismStatus` | Per-mechanism status |
| `/r2/serial/esp32_tx` | `SerialFrame` | TX to ESP32 |
| `/r2/serial/esp32_rx` | `SerialFrame` | RX from ESP32 |
| `/r2/serial/arduino_tx` | `SerialFrame` | TX to Arduino |
| `/r2/serial/arduino_rx` | `SerialFrame` | RX from Arduino |
| `/r2/system/status` | `SystemStatus` | Hardware readiness |
| `/r2/system/all_ready` | `std_msgs/Bool` | All-systems-go signal |

### Services (request/response)

| Service | Type | Description |
|---------|------|-------------|
| `/r2/detection/trigger_spearhead` | `TriggerDetection` | One-shot spearhead detect |
| `/r2/detection/trigger_kfs` | `TriggerDetection` | One-shot KFS detect |
| `/r2/detection/trigger_ttt` | `TriggerDetection` | One-shot TTT detect |

### Actions (long-running tasks)

| Action | Type | Description |
|--------|------|-------------|
| `/r2/chassis/move_to_position` | `MoveToPosition` | Navigate to pose |
| `/r2/climb_step` | `ClimbStep` | Climb to a step height |
| `/r2/grip/spearhead` | `GripObject` | Spearhead gripper ops |
| `/r2/grip/kfs` | `GripObject` | KFS pneumatic gripper |
| `/r2/expand/horizontal` | `ExpandMechanism` | Horizontal extension |
| `/r2/expand/vertical` | `ExpandMechanism` | Vertical extension |
| `/r2/execute_region` | `ExecuteRegion` | Full region execution |

---

## Serial Protocol

See [`r2_comm_bridge/config/protocol.yaml`](src/r2_comm_bridge/config/protocol.yaml) for the full command table.

Frame format:
```
[0xAA] [DEVICE_ID] [CMD_ID] [LEN] [PAYLOAD...] [CRC8]
```

- CRC-8 polynomial: `0x07`
- ESP32 device ID: `0x01`
- Arduino Mega device ID: `0x02`

---

## Game Workflow (Mission Sequence)

```
1. INIT          → System check + handshake
2. MARTIAL_CLUB  → Move → Detect spearhead → Grip → Rotate → R1 docks → Release
3. MEIHUA_FOREST → Climb steps (200/400/600mm) → Detect KFS → Grip 2 boxes
4. MARTIAL_ARENA → Move to TTT rack → Raise vertical → Place KFS in Row 2
5. DONE
```

Trigger manually:
```bash
ros2 action send_goal /r2/execute_region r2_interfaces/action/ExecuteRegion "{region_name: 'martial_club'}"
ros2 action send_goal /r2/execute_region r2_interfaces/action/ExecuteRegion "{region_name: 'meihua_forest'}"
ros2 action send_goal /r2/execute_region r2_interfaces/action/ExecuteRegion "{region_name: 'martial_arena'}"
```

---

## Hardware Wiring Reference

| Connection | Port | Baud |
|------------|------|------|
| RPi ↔ ESP32 | `/dev/ttyUSB0` | 115200 |
| RPi ↔ Arduino | `/dev/ttyACM0` | 115200 |
| ESP32 ↔ Arduino | UART2 (relay) | 115200 |
| Main camera | `/dev/video0` | — |
| Phone camera | `/dev/video1` | — |

---

## Customisation

1. **HSV Colour Tuning**: Edit `r2_detection/config/detection_params.yaml`
2. **Arena Waypoints**: Edit `r2_mission_control/config/mission_params.yaml`
3. **Serial Ports**: Edit `r2_comm_bridge/config/comm_params.yaml`
4. **Mechanism Params**: Edit `r2_actuation/config/actuation_params.yaml`
5. **URDF Meshes**: Place STL files in `r2_description/meshes/` and update URDF

---

## Distro Compatibility

- **ROS 2 Humble** (Ubuntu 22.04): Tested ✓
- **ROS 2 Jazzy** (Ubuntu 24.04): Tested ✓

The code uses only standard `ament_cmake`, `rclcpp`, and `rclpy` APIs that are stable across both distros. No distro-specific features are used.
