#include <Arduino.h>
#include <Joystick.h>
#include <AxisJoystick.h>

#include "graphic\functions.h"
#include "i18n\functions.h"
#include "messages\functions.h"
#include "time\functions.h"

#include "variables.h"

void checkJoystick()
{
  boolean isPress = joystick->isPress();
  boolean isUp = joystick->isUp();
  boolean isDown = joystick->isDown();
  boolean isLeft = joystick->isLeft();
  boolean isRight = joystick->isRight();

  if (button_1_rotation == 90)
  {
    isUp = joystick->isLeft();
    isDown = joystick->isRight();
    isLeft = joystick->isDown();
    isRight = joystick->isUp();
  }
  else if (button_1_rotation == 180)
  {
    isUp = joystick->isDown();
    isDown = joystick->isUp();
    isLeft = joystick->isRight();
    isRight = joystick->isLeft();
  }
  else if (button_1_rotation == 270)
  {
    isUp = joystick->isRight();
    isDown = joystick->isLeft();
    isLeft = joystick->isUp();
    isRight = joystick->isDown();
  }

  if (isPress || isUp || isDown || isLeft || isRight)
  {
    button_pressed = true;
  }

  if (isPress)
  {
    if (running_Alarm == true)
    {
    }
    else
    {
      display_action = true;
      lastMenu = currentMenu;
      if (currentMenu == 0)
      {
        currentMenu = 1;
      }
      else if (currentMenu == 31)
      {
        currentMenu = 3;
        volume_1 = 0;
        prefChanged = true;
      }
      else if (currentMenu == 32)
      {
        currentMenu = 3;
        volume_1 = 25;
        prefChanged = true;
      }
      else if (currentMenu == 33)
      {
        currentMenu = 3;
        volume_1 = 50;
        prefChanged = true;
      }
      else if (currentMenu == 34)
      {
        currentMenu = 3;
        volume_1 = 75;
        prefChanged = true;
      }
      else if (currentMenu == 35)
      {
        currentMenu = 3;
        volume_1 = 100;
        prefChanged = true;
      }
      else if (currentMenu == 411)
      {
        currentMenu = 41;
        prefChanged = true;
      }
      else if (currentMenu == 441)
      {
        currentMenu = 44;
        menu_sound_active = true;
        prefChanged = true;
      }
      else if (currentMenu == 442)
      {
        currentMenu = 44;
        menu_sound_active = false;
        prefChanged = true;
      }
      else if (currentMenu == 51)
      {
        wake_hour = wake_hour_tmp;
        wake_minute = wake_minute_tmp;
        currentMenu = 5;
      }
    }
  }
  else if (isUp)
  {
    if (running_Alarm == true)
    {
      setResponse(currentAlarm, false);
    }
    else
    {
      display_action = true;
      lastMenu = currentMenu;
      if (currentMenu == 6)
      {
        currentMenu = 1;
      }
      else if (currentMenu < 6)
      {
        currentMenu = currentMenu + 1;
      }
      else if (currentMenu == 11)
      {
        lastMenu = 9999;
        lastDisplayAlarm = displayAlarm;
        if (displayAlarm < arraySize - 1)
        {
          displayAlarm = displayAlarm + 1;
        }
        else
        {
          displayAlarm = 0;
        }
      }
      else if (currentMenu == 21)
      {
        lastMenu = 9999;
        lastDisplayMessage = displayMessage;
        if (displayMessage < arraySize - 1)
        {
          displayMessage = displayMessage + 1;
        }
        else
        {
          displayMessage = 0;
        }
      }
      else if (currentMenu == 35)
      {
        currentMenu = 31;
      }
      else if (currentMenu >= 31 && currentMenu < 35)
      {
        currentMenu = currentMenu + 1;
      }
      else if (currentMenu == 47)
      {
        currentMenu = 41;
      }
      else if (currentMenu >= 41 && currentMenu < 47)
      {
        currentMenu = currentMenu + 1;
      }
      else if (currentMenu == 411)
      {
        lastMenu = 9999;
        int display_level_tmp = display_level;
        if (display_level_tmp < 100)
        {
          display_level_tmp = display_level_tmp + 5;
        }
        if (display_level_tmp > 100)
        {
          display_level_tmp = 100;
        }
        display_level = display_level_tmp;
      }
      else if (currentMenu == 421)
      {
        lastMenu = 9999;
        int hour_tmp = getHour();
        int minute_tmp = getMinute();
        if (hour_tmp == 23 && minute_tmp == 55)
        {
          setHour(0);
          setMinute(0);
        }
        else if (minute_tmp == 55)
        {
          setHour(hour_tmp + 1);
          setMinute(0);
        }
        else
        {
          setMinute(minute_tmp + 5);
        }
      }
      else if (currentMenu == 4311)
      {
        lastMenu = 9999;
        setYear(getYear() + 1);
      }
      else if (currentMenu == 4321)
      {
        lastMenu = 9999;
        int month_tmp = getMonth();
        if (month_tmp == 12)
        {
          setMonth(1);
        }
        else
        {
          setMonth(month_tmp + 1);
        }
      }
      else if (currentMenu == 4331)
      {
        lastMenu = 9999;
        setDay(getDay() + 1);
      }
      else if (currentMenu == 433)
      {
        currentMenu = 431;
      }
      else if (currentMenu >= 431 && currentMenu < 433)
      {
        currentMenu = currentMenu + 1;
      }
      else if (currentMenu == 442)
      {
        currentMenu = 441;
      }
      else if (currentMenu == 441)
      {
        currentMenu = 442;
      }
      else if (currentMenu == 451)
      {
        lastMenu = 9999;
        if (i18n.equalsIgnoreCase("de"))
        {
          setLanguage("en");
        }
        else
        {
          setLanguage("de");
        }
      }
      else if (currentMenu == 461)
      {
        lastMenu = 9999;
        display_landscape = !display_landscape;
        prefChanged = true;
      }
      else if (currentMenu == 471)
      {
        lastMenu = 9999;
        lastMenubar = 9999;
        if (display_theme.equalsIgnoreCase("color"))
        {
          setTheme("blackwhite");
        }
        else if (display_theme.equalsIgnoreCase("outline"))
        {
          setTheme("outline");
        }
        else
        {
          setTheme("color");
        }
      }
      else if (currentMenu == 51)
      {
        lastMenu = 9999;
        if (wake_hour_tmp == 23 && wake_minute_tmp == 55)
        {
          wake_hour_tmp = 0;
          wake_minute_tmp = 0;
        }
        else if (wake_minute_tmp == 55)
        {
          wake_hour_tmp = wake_hour_tmp + 1;
          wake_minute_tmp = 0;
        }
        else
        {
          wake_minute_tmp = wake_minute_tmp + 5;
        }
      }
      else if (currentMenu == 63)
      {
        currentMenu = 61;
      }
      else if (currentMenu >= 61 && currentMenu < 63)
      {
        currentMenu = currentMenu + 1;
      }
    }
  }
  else if (isDown)
  {
    if (running_Alarm == true)
    {
      setResponse(currentAlarm, true);
    }
    else
    {
      display_action = true;
      lastMenu = currentMenu;
      if (currentMenu == 1)
      {
        currentMenu = 6;
      }
      else if (currentMenu > 0 && currentMenu < 10)
      {
        currentMenu = currentMenu - 1;
      }
      else if (currentMenu == 11)
      {
        lastMenu = 9999;
        lastDisplayAlarm = displayAlarm;
        if (displayAlarm == 0)
        {
          displayAlarm = arraySize - 1;
        }
        else
        {
          displayAlarm = displayAlarm - 1;
        }
      }
      else if (currentMenu == 21)
      {
        lastMenu = 9999;
        lastDisplayMessage = displayMessage;
        if (displayMessage == 0)
        {
          displayMessage = arraySize - 1;
        }
        else
        {
          displayMessage = displayMessage - 1;
        }
      }
      else if (currentMenu == 31)
      {
        currentMenu = 35;
      }
      else if (currentMenu <= 35 && currentMenu > 31)
      {
        currentMenu = currentMenu - 1;
      }
      else if (currentMenu == 41)
      {
        currentMenu = 47;
      }
      else if (currentMenu <= 47 && currentMenu > 41)
      {
        currentMenu = currentMenu - 1;
      }
      else if (currentMenu == 411)
      {
        lastMenu = 9999;
        int display_level_tmp = display_level;
        if (display_level_tmp > 0)
        {
          display_level_tmp = display_level_tmp - 5;
        }
        if (display_level_tmp < 0)
        {
          display_level_tmp = 0;
        }
        display_level = display_level_tmp;
      }
      else if (currentMenu == 421)
      {
        lastMenu = 9999;
        int hour_tmp = getHour();
        int minute_tmp = getMinute();
        if (hour_tmp == 0 && minute_tmp == 0)
        {
          setHour(23);
          setMinute(55);
        }
        else if (minute_tmp == 0)
        {
          setHour(hour_tmp - 1);
          setMinute(55);
        }
        else
        {
          setMinute(minute_tmp - 5);
        }
      }
      else if (currentMenu == 4311)
      {
        lastMenu = 9999;
        setYear(getYear() - 1);
      }
      else if (currentMenu == 4321)
      {
        lastMenu = 9999;
        int month_tmp = getMonth();
        if (month_tmp == 1)
        {
          setMonth(12);
        }
        else
        {
          setMonth(month_tmp - 1);
        }
      }
      else if (currentMenu == 4331)
      {
        lastMenu = 9999;
        setDay(getDay() - 1);
      }
      else if (currentMenu == 431)
      {
        currentMenu = 433;
      }
      else if (currentMenu <= 433 && currentMenu > 431)
      {
        currentMenu = currentMenu - 1;
      }
      else if (currentMenu == 442)
      {
        currentMenu = 441;
      }
      else if (currentMenu == 441)
      {
        currentMenu = 442;
      }
      else if (currentMenu == 451)
      {
        lastMenu = 9999;
        if (i18n.equalsIgnoreCase("de"))
        {
          setLanguage("en");
        }
        else
        {
          setLanguage("de");
        }
      }
      else if (currentMenu == 461)
      {
        lastMenu = 9999;
        display_landscape = !display_landscape;
        prefChanged = true;
      }
      else if (currentMenu == 471)
      {
        lastMenu = 9999;
        lastMenubar = 9999;
        if (display_theme.equalsIgnoreCase("color"))
        {
          setTheme("blackwhite");
        }
        else if (display_theme.equalsIgnoreCase("outline"))
        {
          setTheme("outline");
        }
        else
        {
          setTheme("color");
        }
      }
      else if (currentMenu == 51)
      {
        lastMenu = 9999;
        if (wake_hour_tmp == 0 && wake_minute_tmp == 0)
        {
          wake_hour_tmp = 23;
          wake_minute_tmp = 55;
        }
        else if (wake_minute_tmp == 0)
        {
          wake_hour_tmp = wake_hour_tmp - 1;
          wake_minute_tmp = 55;
        }
        else
        {
          wake_minute_tmp = wake_minute_tmp - 5;
        }
      }
      else if (currentMenu == 61)
      {
        currentMenu = 63;
      }
      else if (currentMenu <= 63 && currentMenu > 61)
      {
        currentMenu = currentMenu - 1;
      }
    }
  }
  else if (isLeft)
  {
    if (running_Alarm == true)
    {
    }
    else
    {
      display_action = true;
      lastMenu = currentMenu;
      if (currentMenu == 11)
      {
        currentMenu = 1;
      }
      else if (currentMenu == 1 || currentMenu == 2 || currentMenu == 3 || currentMenu == 4 || currentMenu == 5 || currentMenu == 6)
      {
        currentMenu = 0;
      }
      else if (currentMenu == 21)
      {
        currentMenu = 2;
      }
      else if (currentMenu == 31 || currentMenu == 32 || currentMenu == 33 || currentMenu == 34 || currentMenu == 35)
      {
        currentMenu = 3;
      }
      else if (currentMenu == 41 || currentMenu == 42 || currentMenu == 43 || currentMenu == 44 || currentMenu == 45 || currentMenu == 46 || currentMenu == 47)
      {
        currentMenu = 4;
      }
      else if (currentMenu == 411)
      {
        currentMenu = 41;
      }
      else if (currentMenu == 421)
      {
        currentMenu = 42;
      }
      else if (currentMenu == 431 || currentMenu == 432 || currentMenu == 433)
      {
        currentMenu = 43;
      }
      else if (currentMenu == 4311)
      {
        currentMenu = 431;
      }
      else if (currentMenu == 4321)
      {
        currentMenu = 432;
      }
      else if (currentMenu == 4331)
      {
        currentMenu = 433;
      }
      else if (currentMenu == 441)
      {
        currentMenu = 44;
      }
      else if (currentMenu == 451)
      {
        currentMenu = 45;
      }
      else if (currentMenu == 461)
      {
        currentMenu = 46;
      }
      else if (currentMenu == 471)
      {
        currentMenu = 47;
      }
      else if (currentMenu == 51)
      {
        currentMenu = 5;
      }
      else if (currentMenu == 61 || currentMenu == 62 || currentMenu == 63)
      {
        currentMenu = 6;
      }
      else if (currentMenu == 611)
      {
        currentMenu = 61;
      }
      else if (currentMenu == 621)
      {
        currentMenu = 62;
      }
      else if (currentMenu == 631)
      {
        currentMenu = 63;
      }
    }
  }
  else if (isRight)
  {
    if (running_Alarm == true)
    {
    }
    else
    {
      display_action = true;
      lastMenu = currentMenu;
      if (currentMenu == 1)
      {
        currentMenu = 11;
      }
      else if (currentMenu == 2)
      {
        currentMenu = 21;
      }
      else if (currentMenu == 3)
      {
        currentMenu = 31;
      }
      else if (currentMenu == 4)
      {
        currentMenu = 41;
      }
      else if (currentMenu == 41)
      {
        currentMenu = 411;
      }
      else if (currentMenu == 42)
      {
        currentMenu = 421;
      }
      else if (currentMenu == 431)
      {
        currentMenu = 4311;
      }
      else if (currentMenu == 432)
      {
        currentMenu = 4321;
      }
      else if (currentMenu == 433)
      {
        currentMenu = 4331;
      }
      else if (currentMenu == 43)
      {
        currentMenu = 431;
      }
      else if (currentMenu == 44)
      {
        currentMenu = 441;
      }
      else if (currentMenu == 45)
      {
        currentMenu = 451;
      }
      else if (currentMenu == 46)
      {
        currentMenu = 461;
      }
      else if (currentMenu == 47)
      {
        currentMenu = 471;
      }
      else if (currentMenu == 5)
      {
        currentMenu = 51;
      }
      else if (currentMenu == 6)
      {
        currentMenu = 61;
      }
      else if (currentMenu == 61)
      {
        currentMenu = 611;
      }
      else if (currentMenu == 62)
      {
        currentMenu = 621;
      }
      else if (currentMenu == 63)
      {
        currentMenu = 631;
      }
    }
  }
  else
  {
  }
}