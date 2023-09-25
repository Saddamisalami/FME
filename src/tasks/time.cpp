#include <Arduino.h>

#include "time\functions.h"
#include "filesystem\functions.h"

#include "variables.h"

void checkTimeStatus()
{
  unsigned int hour = getHour();
  unsigned int minute = getMinute();
  if (wake_hour != 0 || wake_minute != 0)
  {
    if (hour == wake_hour && minute >= wake_minute)
    {
      wake_now = true;
      wake_hour = 0;
      wake_minute = 0;
    }
  }
  if (last_hour != hour)
  {
    last_hour = hour;
    writeTime();
  }
  updateTitlebar = true;
}