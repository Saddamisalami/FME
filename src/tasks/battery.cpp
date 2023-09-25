#include <Arduino.h>
#include <Battery18650Stats.h>

#include "variables.h"

Battery18650Stats battery(battery_1_pin);

void checkBatteryStatus()
{
  battery_status = battery.getBatteryChargeLevel(true);
  updateTitlebar = true;
}