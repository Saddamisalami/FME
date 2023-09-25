#include <Arduino.h>

void cleanAlarm();

String getAlarmPLZText(unsigned int);
String getAlarmCityText(unsigned int);
String getAlarmStreetText(unsigned int);
String getAlarmSubText(unsigned int);
String getAlarmTypeText(unsigned int);
String getAlarmCategoryText(unsigned int);
String getCombinedAdress(int, int, int, int, String);
int getAlarmCategory(unsigned int);