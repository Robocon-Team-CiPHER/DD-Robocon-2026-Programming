/**
 * wifi_manager.h
 * Handles WiFi connection for the ESP32 mecanum robot.
 */

#ifndef WIFI_MANAGER_H
#define WIFI_MANAGER_H

/**
 * Initialize and connect to WiFi.
 * Blocks until connected. Call this before starting micro-ROS.
 */
void wifi_init_sta(const char *ssid, const char *password);

#endif // WIFI_MANAGER_H
