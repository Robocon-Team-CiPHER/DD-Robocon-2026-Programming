/**
 * main.c — Mecanum Robot ESP32 Firmware (COMPLETE)
 *
 * FLOW:
 *   app_main()
 *     → nvs_flash_init()
 *     → encoder_init()       (attach ISRs to 8 GPIO pins)
 *     → wifi_init_sta()      (connect to WiFi, block until connected)
 *     → xTaskCreate(micro_ros_task)
 *
 *   micro_ros_task()
 *     → set_microros_udp_transports()   (point to Raspberry Pi IP)
 *     → create ROS 2 node: /esp32_mecanum_node
 *     → create publisher:  /odom        (nav_msgs/Odometry)
 *     → create publisher:  /wheel_ticks (std_msgs/Int32MultiArray)
 *     → create subscriber: /cmd_vel     (geometry_msgs/Twist)
 *     → loop every 50ms:
 *         - read encoder deltas
 *         - update odometry (forward kinematics)
 *         - publish /odom
 *         - publish /wheel_ticks
 *         - spin executor (receive /cmd_vel)
 */

#include <stdio.h>
#include <math.h>
#include <string.h>

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_log.h"
#include "nvs_flash.h"

// micro-ROS
#include <rcl/rcl.h>
#include <rcl/error_handling.h>
#include <rclc/rclc.h>
#include <rclc/executor.h>
#include <nav_msgs/msg/odometry.h>
#include <std_msgs/msg/int32_multi_array.h>
#include <geometry_msgs/msg/twist.h>
#include "micro_ros_espidf.h"

// Our modules
#include "encoder.h"
#include "odometry.h"
#include "wifi_manager.h"

// ============================================================
// ⚙️  CONFIGURATION — CHANGE THESE TO MATCH YOUR SETUP
// ============================================================
#define ESP_WIFI_SSID      "YOUR_WIFI_SSID"
#define ESP_WIFI_PASS      "YOUR_WIFI_PASSWORD"
#define AGENT_IP           "192.168.1.100"   // Your PC/Pi IP
#define AGENT_PORT         "8888"

#define PUBLISH_RATE_MS    50                // Publish every 50ms = 20Hz
// ============================================================

#define TAG "Main"

// Macro to check micro-ROS return codes and abort task on error
#define RCCHECK(fn) { \
    rcl_ret_t rc = fn; \
    if (rc != RCL_RET_OK) { \
        ESP_LOGE(TAG, "micro-ROS error on line %d: %d", __LINE__, (int)rc); \
        vTaskDelete(NULL); \
    } \
}
#define RCSOFTCHECK(fn) { \
    rcl_ret_t rc = fn; \
    if (rc != RCL_RET_OK) { \
        ESP_LOGW(TAG, "micro-ROS soft error on line %d: %d", __LINE__, (int)rc); \
    } \
}

// ── Publishers & Subscribers ──
static rcl_publisher_t   odom_pub;
static rcl_publisher_t   ticks_pub;
static rcl_subscription_t cmd_vel_sub;

// ── Messages ──
static nav_msgs__msg__Odometry          odom_msg;
static std_msgs__msg__Int32MultiArray   ticks_msg;
static geometry_msgs__msg__Twist        cmd_vel_msg;

// ── Callback: received /cmd_vel from Raspberry Pi / Navigation ──
void cmd_vel_callback(const void *msgin)
{
    const geometry_msgs__msg__Twist *msg = (const geometry_msgs__msg__Twist *)msgin;
    // TODO: Convert cmd_vel to individual wheel speeds and send to PID/motor driver
    ESP_LOGI(TAG, "cmd_vel → vx:%.2f vy:%.2f ω:%.2f",
             (float)msg->linear.x,
             (float)msg->linear.y,
             (float)msg->angular.z);
}

// ── Helper: fill a quaternion from a yaw angle ──
static void yaw_to_quaternion(float yaw, float *qx, float *qy, float *qz, float *qw)
{
    *qx = 0.0f;
    *qy = 0.0f;
    *qz = sinf(yaw / 2.0f);
    *qw = cosf(yaw / 2.0f);
}

void micro_ros_task(void *arg)
{
    ESP_LOGI(TAG, "Starting micro-ROS task...");

    // Point micro-ROS to the Agent running on the Raspberry Pi / PC
    set_microros_udp_transports(AGENT_IP, AGENT_PORT);
    vTaskDelay(pdMS_TO_TICKS(2000)); // Give network time to settle

    rcl_allocator_t allocator = rcl_get_default_allocator();
    rclc_support_t  support;

    rcl_init_options_t init_options = rcl_get_zero_initialized_init_options();
    RCCHECK(rcl_init_options_init(&init_options, allocator));
    RCCHECK(rclc_support_init_with_options(&support, 0, NULL, &init_options, &allocator));

    // ── Create Node ──
    rcl_node_t node;
    RCCHECK(rclc_node_init_default(&node, "esp32_mecanum_node", "", &support));
    ESP_LOGI(TAG, "✅ ROS 2 Node created: /esp32_mecanum_node");

    // ── Publisher: /odom ──
    RCCHECK(rclc_publisher_init_default(
        &odom_pub, &node,
        ROSIDL_GET_MSG_TYPE_SUPPORT(nav_msgs, msg, Odometry),
        "/odom"));

    // ── Publisher: /wheel_ticks ──
    ticks_msg.data.capacity = 4;
    ticks_msg.data.size     = 4;
    ticks_msg.data.data     = (int32_t *)malloc(4 * sizeof(int32_t));

    RCCHECK(rclc_publisher_init_default(
        &ticks_pub, &node,
        ROSIDL_GET_MSG_TYPE_SUPPORT(std_msgs, msg, Int32MultiArray),
        "/wheel_ticks"));

    // ── Subscriber: /cmd_vel ──
    RCCHECK(rclc_subscription_init_default(
        &cmd_vel_sub, &node,
        ROSIDL_GET_MSG_TYPE_SUPPORT(geometry_msgs, msg, Twist),
        "/cmd_vel"));

    // ── Executor ──
    rclc_executor_t executor;
    RCCHECK(rclc_executor_init(&executor, &support.context, 1, &allocator));
    RCCHECK(rclc_executor_add_subscription(
        &executor, &cmd_vel_sub, &cmd_vel_msg, &cmd_vel_callback, ON_NEW_DATA));

    // Set static header fields
    odom_msg.header.frame_id.data    = "odom";
    odom_msg.header.frame_id.size    = strlen("odom");
    odom_msg.child_frame_id.data     = "base_link";
    odom_msg.child_frame_id.size     = strlen("base_link");

    // Snapshot of encoder ticks for delta calculation
    int32_t prev_fl = 0, prev_fr = 0, prev_rl = 0, prev_rr = 0;

    ESP_LOGI(TAG, "🚀 Publishing /odom and /wheel_ticks at %dHz!", 1000 / PUBLISH_RATE_MS);

    // ── Main Loop ──
    while (1) {
        // 1. Read current encoder counts
        int32_t cur_fl = encoder_get_ticks_fl();
        int32_t cur_fr = encoder_get_ticks_fr();
        int32_t cur_rl = encoder_get_ticks_rl();
        int32_t cur_rr = encoder_get_ticks_rr();

        // 2. Calculate deltas since last loop
        int32_t delta_fl = cur_fl - prev_fl;
        int32_t delta_fr = cur_fr - prev_fr;
        int32_t delta_rl = cur_rl - prev_rl;
        int32_t delta_rr = cur_rr - prev_rr;

        prev_fl = cur_fl;
        prev_fr = cur_fr;
        prev_rl = cur_rl;
        prev_rr = cur_rr;

        // 3. Update on-board odometry (mecanum forward kinematics)
        float dt = PUBLISH_RATE_MS / 1000.0f;
        odometry_update(delta_fl, delta_fr, delta_rl, delta_rr, dt);
        OdomState s = odometry_get_state();

        // 4. Build and publish /odom message
        int64_t now_ms = (int64_t)(xTaskGetTickCount() * portTICK_PERIOD_MS);
        odom_msg.header.stamp.sec     = (int32_t)(now_ms / 1000);
        odom_msg.header.stamp.nanosec = (uint32_t)((now_ms % 1000) * 1000000);

        odom_msg.pose.pose.position.x = s.x;
        odom_msg.pose.pose.position.y = s.y;
        odom_msg.pose.pose.position.z = 0.0;

        float qx, qy, qz, qw;
        yaw_to_quaternion(s.theta, &qx, &qy, &qz, &qw);
        odom_msg.pose.pose.orientation.x = qx;
        odom_msg.pose.pose.orientation.y = qy;
        odom_msg.pose.pose.orientation.z = qz;
        odom_msg.pose.pose.orientation.w = qw;

        odom_msg.twist.twist.linear.x  = s.vx;
        odom_msg.twist.twist.linear.y  = s.vy;
        odom_msg.twist.twist.angular.z = s.omega;

        RCSOFTCHECK(rcl_publish(&odom_pub, &odom_msg, NULL));

        // 5. Build and publish /wheel_ticks
        ticks_msg.data.data[0] = cur_fl;
        ticks_msg.data.data[1] = cur_fr;
        ticks_msg.data.data[2] = cur_rl;
        ticks_msg.data.data[3] = cur_rr;
        RCSOFTCHECK(rcl_publish(&ticks_pub, &ticks_msg, NULL));

        ESP_LOGI(TAG, "Odom → x:%.3f y:%.3f θ:%.1f°  ticks:[%ld,%ld,%ld,%ld]",
                 s.x, s.y, s.theta * 180.0f / M_PI,
                 (long)cur_fl, (long)cur_fr, (long)cur_rl, (long)cur_rr);

        // 6. Spin executor to process incoming /cmd_vel
        rclc_executor_spin_some(&executor, RCL_MS_TO_NS(10));

        vTaskDelay(pdMS_TO_TICKS(PUBLISH_RATE_MS));
    }

    // Cleanup (only reached if loop exits)
    RCCHECK(rcl_publisher_fini(&odom_pub,  &node));
    RCCHECK(rcl_publisher_fini(&ticks_pub, &node));
    RCCHECK(rcl_subscription_fini(&cmd_vel_sub, &node));
    RCCHECK(rcl_node_fini(&node));
    free(ticks_msg.data.data);
    vTaskDelete(NULL);
}

void app_main(void)
{
    ESP_LOGI(TAG, "========================================");
    ESP_LOGI(TAG, "  Mecanum Robot ESP32 Firmware Starting");
    ESP_LOGI(TAG, "========================================");

    // 1. Initialize NVS (required for WiFi)
    esp_err_t ret = nvs_flash_init();
    if (ret == ESP_ERR_NVS_NO_FREE_PAGES || ret == ESP_ERR_NVS_NEW_VERSION_FOUND) {
        ESP_ERROR_CHECK(nvs_flash_erase());
        ret = nvs_flash_init();
    }
    ESP_ERROR_CHECK(ret);

    // 2. Initialize encoders (attach interrupts to GPIO pins)
    encoder_init();
    ESP_LOGI(TAG, "✅ Encoders initialized");

    // 3. Initialize odometry (zero position)
    odometry_init();
    ESP_LOGI(TAG, "✅ Odometry initialized");

    // 4. Connect to WiFi (blocks until connected)
    wifi_init_sta(ESP_WIFI_SSID, ESP_WIFI_PASS);

    // 5. Start the micro-ROS task on Core 1
    //    We pin it to Core 1 so the encoder ISRs on Core 0 aren't interrupted
    xTaskCreatePinnedToCore(
        micro_ros_task,
        "micro_ros_task",
        CONFIG_MICROROS_APP_STACK,
        NULL,
        CONFIG_MICROROS_APP_TASK_PRIO,
        NULL,
        1  // Run on Core 1
    );
}
