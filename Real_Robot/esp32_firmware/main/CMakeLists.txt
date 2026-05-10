idf_component_register(SRCS "main.c" "encoder.c" "odometry.c" "wifi_manager.c"
                       INCLUDE_DIRS "."
                       REQUIRES micro_ros_espidf_component driver esp_wifi nvs_flash esp_netif esp_event)
