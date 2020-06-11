#ifndef DEFINES_H
#define DEFINES_H

#define MQTT_CUSTOMER "viktak"
#define MQTT_PROJECT  "spiti"

#define HARDWARE_ID "Fws"
#define HARDWARE_VERSION "2.1"
#define SOFTWARE_ID "Fws_v2"
#define FIRMWARE_VERSION "2.2"

#define JSON_SETTINGS_SIZE (JSON_OBJECT_SIZE(11) + 220)
#define JSON_MQTT_COMMAND_SIZE 300

#define DEFAULT_PWM_ADJUSTMENT_SPEED 4
#define DEFAULT_PWM_CHANGE_SPEED 10

#define CONNECTION_STATUS_LED_GPIO 0

#define IR_RECEIVE_GPIO 5
#define IR_SEND_GPIO -1

#define ACTIVITY_LED_GPIO 4

#endif