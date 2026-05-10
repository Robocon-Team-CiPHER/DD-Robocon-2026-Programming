/**
 * encoder.c
 *
 * Interrupt-based quadrature encoder reading.
 *
 * HOW IT WORKS:
 * - Each encoder has 2 channels (A and B) that pulse as the wheel turns
 * - We attach an interrupt to channel A
 * - When channel A fires, we read channel B to determine direction
 * - If B is HIGH → forward, if B is LOW → backward
 * - The ISR only increments/decrements a counter (minimal work!)
 * - volatile ensures the compiler doesn't optimize away our shared variables
 */

#include "encoder.h"
#include "driver/gpio.h"
#include "esp_attr.h"

// ============ VOLATILE TICK COUNTERS ============
// These are shared between ISR (interrupt) and main code
// MUST be volatile so compiler doesn't cache them in a register
static volatile int32_t ticks_fl = 0;
static volatile int32_t ticks_fr = 0;
static volatile int32_t ticks_rl = 0;
static volatile int32_t ticks_rr = 0;

// ============ ISR HANDLERS ============
// IRAM_ATTR = keep this function in fast internal RAM
// ISR = Interrupt Service Routine — called automatically when pin changes
// RULE: Keep ISR as short as possible! No printf, no delays, no malloc.

static void IRAM_ATTR encoder_isr_fl(void *arg)
{
    // Read channel B to determine direction
    if (gpio_get_level(ENCODER_FL_B)) {
        ticks_fl++;
    } else {
        ticks_fl--;
    }
}

static void IRAM_ATTR encoder_isr_fr(void *arg)
{
    if (gpio_get_level(ENCODER_FR_B)) {
        ticks_fr++;
    } else {
        ticks_fr--;
    }
}

static void IRAM_ATTR encoder_isr_rl(void *arg)
{
    if (gpio_get_level(ENCODER_RL_B)) {
        ticks_rl++;
    } else {
        ticks_rl--;
    }
}

static void IRAM_ATTR encoder_isr_rr(void *arg)
{
    if (gpio_get_level(ENCODER_RR_B)) {
        ticks_rr++;
    } else {
        ticks_rr--;
    }
}

// ============ HELPER: Configure one encoder ============
static void encoder_setup_one(int pin_a, int pin_b, gpio_isr_t isr_handler)
{
    // Channel A: input with interrupt on rising edge
    gpio_config_t cfg_a = {
        .pin_bit_mask = (1ULL << pin_a),
        .mode = GPIO_MODE_INPUT,
        .pull_up_en = GPIO_PULLUP_ENABLE,
        .pull_down_en = GPIO_PULLDOWN_DISABLE,
        .intr_type = GPIO_INTR_POSEDGE,  // trigger on rising edge
    };
    gpio_config(&cfg_a);

    // Channel B: input only (no interrupt, just read for direction)
    gpio_config_t cfg_b = {
        .pin_bit_mask = (1ULL << pin_b),
        .mode = GPIO_MODE_INPUT,
        .pull_up_en = GPIO_PULLUP_ENABLE,
        .pull_down_en = GPIO_PULLDOWN_DISABLE,
        .intr_type = GPIO_INTR_DISABLE,
    };
    gpio_config(&cfg_b);

    // Attach the ISR to channel A
    gpio_isr_handler_add(pin_a, isr_handler, NULL);
}

// ============ PUBLIC FUNCTIONS ============

void encoder_init(void)
{
    // Install the GPIO ISR service (shared for all encoders)
    gpio_install_isr_service(0);

    // Set up all 4 encoders
    encoder_setup_one(ENCODER_FL_A, ENCODER_FL_B, encoder_isr_fl);
    encoder_setup_one(ENCODER_FR_A, ENCODER_FR_B, encoder_isr_fr);
    encoder_setup_one(ENCODER_RL_A, ENCODER_RL_B, encoder_isr_rl);
    encoder_setup_one(ENCODER_RR_A, ENCODER_RR_B, encoder_isr_rr);
}

int32_t encoder_get_ticks_fl(void) { return ticks_fl; }
int32_t encoder_get_ticks_fr(void) { return ticks_fr; }
int32_t encoder_get_ticks_rl(void) { return ticks_rl; }
int32_t encoder_get_ticks_rr(void) { return ticks_rr; }

void encoder_reset_all(void)
{
    ticks_fl = 0;
    ticks_fr = 0;
    ticks_rl = 0;
    ticks_rr = 0;
}
