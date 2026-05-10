/**
 * odometry.h
 *
 * On-board odometry calculation for the ESP32.
 * This is the "smart ESP32" part — the ESP32 calculates its own X, Y, Theta
 * and publishes the final nav_msgs/Odometry directly to the Raspberry Pi.
 */

#ifndef ODOMETRY_H
#define ODOMETRY_H

#include <stdint.h>

// ============ ROBOT DIMENSIONS ============
// Change these to match YOUR physical robot!
#define WHEEL_RADIUS       0.05f   // Wheel radius in meters (e.g. 50mm = 0.05m)
#define WHEEL_BASE_X       0.15f   // Half the distance between left & right wheels (meters)
#define WHEEL_BASE_Y       0.15f   // Half the distance between front & rear wheels (meters)
#define TICKS_PER_REV      1320    // Encoder ticks per full wheel revolution

typedef struct {
    float x;      // Position X in meters
    float y;      // Position Y in meters
    float theta;  // Rotation angle in radians
    float vx;     // Current linear velocity X (m/s)
    float vy;     // Current linear velocity Y (m/s)
    float omega;  // Current angular velocity (rad/s)
} OdomState;

/**
 * Initialize odometry (zero out position and state).
 */
void odometry_init(void);

/**
 * Update odometry from encoder tick deltas.
 * Call this at a fixed rate (e.g. every 50ms).
 *
 * @param delta_fl  Tick change for Front-Left wheel since last call
 * @param delta_fr  Tick change for Front-Right wheel since last call
 * @param delta_rl  Tick change for Rear-Left wheel since last call
 * @param delta_rr  Tick change for Rear-Right wheel since last call
 * @param dt        Time since last call in seconds (e.g. 0.05 for 50ms)
 */
void odometry_update(int32_t delta_fl, int32_t delta_fr,
                     int32_t delta_rl, int32_t delta_rr,
                     float dt);

/**
 * Get the current odometry state (position + velocity).
 */
OdomState odometry_get_state(void);

#endif // ODOMETRY_H
