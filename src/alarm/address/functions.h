#include <Arduino.h>

#include "alarm\address\austria\austriaFederalProvinces.h"
#include "alarm\address\german\germanFederalStates.h"
#include "alarm\address\switzerland\switzerlandFederalStates.h"

String getAlarmPLZText(unsigned int);
String getAlarmCityText(unsigned int);
String getAlarmStreetText(unsigned int);
String getAlarmCategoryText(unsigned int);
String getCombinedAdress(int, int, int, int, String);