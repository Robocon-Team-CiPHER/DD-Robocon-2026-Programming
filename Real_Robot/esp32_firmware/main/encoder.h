/**
 * encoder.h
 *
 * Interrupt-based quadrature encoder reading for 4 mecanum wheels.
 * Uses ISR with IRAM_ATTR for fast response.
 * Variables are volatile because they're shared between ISR and main code.
 */

#ifndef ENCODER_H
#define ENCODER_H

#include <stdint.h>

// ============ PIN CONFIGURATION ============
// Change these to match YOUR wiring
#define ENCODER_FL_A  34   // Front-Left encoder channel A
#define ENCODER_FL_B  35   // Front-Left encoder channel B
#define ENCODER_FR_A  32   // Front-Right encoder channel A
#define ENCODER_FR_B  33   // Front-Right encoder channel B
#define ENCODER_RL_A  25   // Rear-Left encoder channel A
#define ENCODER_RL_B  26   // Rear-Left encoder channel B
#define ENCODER_RR_A  27   // Rear-Right encoder channel A
#define ENCODER_RR_B  14   // Rear-Right encoder channel B

// Encoder ticks per revolution (depends on your encoder)
#define ENCODER_TICKS_PER_REV  1320

// ============ FUNCTIONS ============

/**
 * Initialize all 4 encoder GPIO pins and attach interrupts.
 * Call this once in app_main().
 */
void encoder_init(void);

/**
 * Get the current tick count for each wheel.
 * These are cumulative — they keep counting up/down.
 */
int32_t encoder_get_ticks_fl(void);
int32_t encoder_get_ticks_fr(void);
int32_t encoder_get_ticks_rl(void);
int32_t encoder_get_ticks_rr(void);

/**
 * Reset all encoder tick counts to zero.
 */
void encoder_reset_all(void);

#endif // ENCODER_H
