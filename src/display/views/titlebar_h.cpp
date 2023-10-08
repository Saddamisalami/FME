#include <Arduino.h>
#include <TFT_eFEX.h>
#include <TFT_eSPI.h>

#include "display\functions.h"
#include "filesystem\functions.h"
#include "graphic\functions.h"
#include "messages\functions.h"
#include "time\functions.h"

#include "variables.h"

void drawTitlebar_h(TFT_eSPI &tft, TFT_eSprite &sprTitlebar1, TFT_eSprite &sprTitlebar2, TFT_eSprite &sprTitlebar3)
{
  unsigned int displayWidth = tft.getViewportWidth();
  unsigned int displayHeight = tft.getViewportHeight();
  unsigned int middleWidth = round(displayWidth / 2);
  unsigned int middleHeight = round(displayHeight / 2);
  cleanSprite(sprTitlebar1);
  cleanSprite(sprTitlebar2);
  cleanSprite(sprTitlebar3);
  displayWidth = tft.getViewportHeight();
  displayHeight = tft.getViewportWidth();
  middleWidth = round(displayWidth / 2);
  middleHeight = round(displayHeight / 2);

  tft.drawLine(0, 18, displayHeight, 18, TFT_BLACK);
  if (button_locked == true)
  {
    pushImageFromFS(getIcon("LockC_16"), 1, 1, tft);
  }
  else
  {
    pushImageFromFS(getIcon("LockO_16"), 1, 1, tft);
  }
  unsigned int soundPosition = 18;
  if (volume_1 == 100)
  {
    pushImageFromFS(getIcon("Sound100_16"), soundPosition, 1, tft);
  }
  else if (volume_1 > 75)
  {
    pushImageFromFS(getIcon("Sound075_16"), soundPosition, 1, tft);
  }
  else if (volume_1 > 50)
  {
    pushImageFromFS(getIcon("Sound050_16"), soundPosition, 1, tft);
  }
  else if (volume_1 > 25)
  {
    pushImageFromFS(getIcon("Sound025_16"), soundPosition, 1, tft);
  }
  else if (volume_1 > 0)
  {
    pushImageFromFS(getIcon("Sound025_16"), soundPosition, 1, tft);
  }
  else
  {
    pushImageFromFS(getIcon("Sound000_16"), soundPosition, 1, tft);
  }

  unsigned int batteryPosition = displayHeight - 13;
  unsigned int signalPosition = batteryPosition - 19;
  unsigned int wlanPosition = signalPosition - 25;
  unsigned int messagePosition = middleHeight + 1;
  unsigned int messageCounterPosition = messagePosition + 22;
  unsigned int alarmCounterPosition = middleHeight - 11;
  unsigned int alarmPosition = alarmCounterPosition - 22;
  unsigned int timePosition = alarmPosition - 48;
  sprTitlebar1.createSprite(45, 16);
  sprTitlebar1.fillSprite(TFT_WHITE);
    sprTitlebar1.loadFont("JostMedium16");
  sprTitlebar1.setColorDepth(16);
  sprTitlebar1.setTextColor(TFT_BLACK, TFT_WHITE);
  sprTitlebar1.setCursor(0, 0);
  sprTitlebar1.println(getTime("%H:%M"));
  sprTitlebar1.pushSprite(timePosition, 1);
  sprTitlebar1.unloadFont();
  pushImageFromFS(getIcon("Alarm_16"), alarmPosition, 1, tft);
  sprTitlebar2.createSprite(12, 16);
  sprTitlebar2.fillSprite(TFT_WHITE);
    sprTitlebar2.loadFont("JostMedium16");
  sprTitlebar2.setColorDepth(16);
  sprTitlebar2.setTextColor(TFT_BLACK, TFT_WHITE);
  sprTitlebar2.setCursor(0, 0);
  sprTitlebar2.println(String(currentAlarms_unread));
  sprTitlebar2.pushSprite(alarmCounterPosition, 1);
  sprTitlebar2.unloadFont();
  pushImageFromFS(getIcon("Text_16"), messagePosition, 1, tft);
  sprTitlebar3.createSprite(12, 16);
  sprTitlebar3.fillSprite(TFT_WHITE);
    sprTitlebar3.loadFont("JostMedium16");
  sprTitlebar3.setColorDepth(16);
  sprTitlebar3.setTextColor(TFT_BLACK, TFT_WHITE);
  sprTitlebar3.setCursor(0, 0);
  sprTitlebar3.println(String(currentMessages_unread));
  sprTitlebar3.pushSprite(messageCounterPosition, 1);
  sprTitlebar3.unloadFont();
  if (mesh_isRoot == true)
  {
    if (wlan_connected == true)
    {
      pushImageFromFS(getIcon("WlanC_16"), wlanPosition, 1, tft);
    }
    else
    {
      pushImageFromFS(getIcon("Wlan_16"), wlanPosition, 1, tft);
    }
  }
  else
  {
    pushImageFromFS(getIcon("WlanD_16"), wlanPosition, 1, tft);
  }
  if (wlan_connected == true)
  {
    if (wlan_strength < -90)
    {
      pushImageFromFS(getIcon("Sig000_16"), signalPosition, 1, tft);
    }
    else if (wlan_strength < -75)
    {
      pushImageFromFS(getIcon("Sig025_16"), signalPosition, 1, tft);
    }
    else if (wlan_strength < -60)
    {
      pushImageFromFS(getIcon("Sig050_16"), signalPosition, 1, tft);
    }
    else if (wlan_strength < -45)
    {
      pushImageFromFS(getIcon("Sig075_16"), signalPosition, 1, tft);
    }
    else
    {
      pushImageFromFS(getIcon("Sig100_16"), signalPosition, 1, tft);
    }
  }
  else
  {
    pushImageFromFS(getIcon("Sig100_16"), signalPosition, 1, tft);
  }
  if (connected_usb == true)
  {
    pushImageFromFS(getIcon("BatCharge_16"), batteryPosition, 1, tft);
  }
  else
  {
    if (battery_status < 10)
    {
      pushImageFromFS(getIcon("Bat000_16"), batteryPosition, 1, tft);
    }
    else if (battery_status < 25)
    {
      pushImageFromFS(getIcon("Bat010_16"), batteryPosition, 1, tft);
    }
    else if (battery_status < 50)
    {
      pushImageFromFS(getIcon("Bat025_16"), batteryPosition, 1, tft);
    }
    else if (battery_status < 75)
    {
      pushImageFromFS(getIcon("Bat050_16"), batteryPosition, 1, tft);
    }
    else if (battery_status < 90)
    {
      pushImageFromFS(getIcon("Bat075_16"), batteryPosition, 1, tft);
    }
    else
    {
      pushImageFromFS(getIcon("Bat100_16"), batteryPosition, 1, tft);
    }
  }
  updateTitlebar = false;
}