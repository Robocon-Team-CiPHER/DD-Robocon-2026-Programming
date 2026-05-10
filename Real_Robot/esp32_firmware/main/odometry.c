/**
 * odometry.c
 *
 * Mecanum wheel forward kinematics.
 *
 * HOW MECANUM ODOMETRY WORKS:
 * Each wheel contributes to X, Y, and rotation movement.
 * Front-Left (FL), Front-Right (FR), Rear-Left (RL), Rear-Right (RR)
 *
 *   FL ↗  ↖ FR
 *      Robot
 *   RL ↖  ↗ RR
 *
 * Forward Kinematics formula:
 *   Vx    =  (FL + FR + RL + RR) * R/4
 *   Vy    = (-FL + FR + RL - RR) * R/4
 *   Omega = (-FL + FR - RL + RR) * R / (4 * (Lx + Ly))
 */

#include "odometry.h"
#include <math.h>
#include <string.h>

// Meters per encoder tick
#define METERS_PER_TICK  ((2.0f * M_PI * WHEEL_RADIUS) / TICKS_PER_REV)

static OdomState state;

void odometry_init(void)
{
    memset(&state, 0, sizeof(OdomState));
}

void odometry_update(int32_t delta_fl, int32_t delta_fr,
                     int32_t delta_rl, int32_t delta_rr,
                     float dt)
{
    if (dt <= 0.0f) return;

    // Convert tick deltas to distances traveled by each wheel (meters)
    float d_fl = delta_fl * METERS_PER_TICK;
    float d_fr = delta_fr * METERS_PER_TICK;
    float d_rl = delta_rl * METERS_PER_TICK;
    float d_rr = delta_rr * METERS_PER_TICK;

    // ── Mecanum Forward Kinematics ──
    // Calculate robot body velocities from wheel velocities
    float vx    =  (d_fl + d_fr + d_rl + d_rr) / 4.0f / dt;
    float vy    = (-d_fl + d_fr + d_rl - d_rr)  / 4.0f / dt;
    float omega = (-d_fl + d_fr - d_rl + d_rr)  / 4.0f / (WHEEL_BASE_X + WHEEL_BASE_Y) / dt;

    // ── Integrate position (Euler integration) ──
    // Use the current heading to convert robot-frame velocity to world-frame
    float cos_theta = cosf(state.theta);
    float sin_theta = sinf(state.theta);

    // Displacement in world frame
    float dx = (vx * cos_theta - vy * sin_theta) * dt;
    float dy = (vx * sin_theta + vy * cos_theta) * dt;
    float dtheta = omega * dt;

    // Update state
    state.x     += dx;
    state.y     += dy;
    state.theta += dtheta;
    state.vx    = vx;
    state.vy    = vy;
    state.omega = omega;

    // Normalize theta to [-pi, pi]
    while (state.theta >  M_PI) state.theta -= 2.0f * M_PI;
    while (state.theta < -M_PI) state.theta += 2.0f * M_PI;
}

OdomState odometry_get_state(void)
{
    return state;
}
