struct config{
  char ssid[32];
  char password[32];

  char friendlyName[30];
  uint heartbeatInterval;

  signed char timeZone;

  char mqttServer[64];
  int mqttPort;
  char mqttTopic[32];

  int selectedProgram;

  int pwmAdjustmentSpeed;
  int pwmChangeSpeed;

  int activationOnHours;
  int activationOnMinutes;
  int activationOnTimerHours;
  int activationOnTimerMinutes;

  int activationOffHours;
  int activationOffMinutes;
  int activationOffTimerHours;
  int activationOffTimerMinutes;
};

struct sunData_t{
  time_t Sunrise;
  time_t Sunset;
};
