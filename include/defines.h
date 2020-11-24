#ifndef DEFINES_H
#define DEFINES_H

#define MQTT_CUSTOMER "viktak"
#define MQTT_PROJECT  "spiti"

#define HARDWARE_ID "Fws"
#define HARDWARE_VERSION "2.1"
#define SOFTWARE_ID "Fws_v2"
//#define FIRMWARE_VERSION "2.2"


#define ADMIN_USERNAME "admin"
#define ADMIN_PASSWORD "admin"

//  Home coordinates
#define LATITUDE 37.9908997
#define LONGITUDE 23.70332

//#define DEBUG_WIFI_SSID "Gunther"
//#define DEBUG_WIFI_PASSWORD "Mad@rtej4095!"
#define DEBUG_WIFI_SSID "Trabant"
#define DEBUG_WIFI_PASSWORD "Tal@lm@ny8191!"

#define DEBUG_MQTT_SERVER "192.168.1.99"


#define WIFI_CONNECTION_TIMEOUT 60
#define ACCESS_POINT_TIMEOUT 300000

#define OTA_BLINKING_RATE 3

#define DEFAULT_PASSWORD "esp12345678"
#define DEFAULT_MQTT_SERVER "test.mosquitto.org"
#define DEFAULT_MQTT_PORT 1883
#define DEFAULT_MQTT_TOPIC  "vnode"
#define DEFAULT_HEARTBEAT_INTERVAL 300
#define NODE_DEFAULT_FRIENDLY_NAME "vNode"

#define NTP_REFRESH_INTERVAL 2592000

#define BUTTON_DEBOUNCE_DELAY  500         //  ms delay for button press
#define BUTTON_LONG_PRESS_TRESHOLD 2000   //  ms after which button press is considered LONG_PRESS

#define DST_TIMEZONE_OFFSET 3    // Day Light Saving Time offset
#define  ST_TIMEZONE_OFFSET 2    // Standard Time offset


#define JSON_SETTINGS_SIZE (JSON_OBJECT_SIZE(11) + 220)
#define JSON_MQTT_COMMAND_SIZE 300

#define DEFAULT_PWM_ADJUSTMENT_SPEED 4
#define DEFAULT_PWM_CHANGE_SPEED 10

#define CONNECTION_STATUS_LED_GPIO 0

#define IR_RECEIVE_GPIO 5
#define IR_SEND_GPIO -1

#define ACTIVITY_LED_GPIO 4

#endif