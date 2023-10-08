#include <Arduino.h>
#include <TFT_eFEX.h>
#include <TFT_eSPI.h>

#include "display\functions.h"
#include "filesystem\functions.h"
#include "graphic\functions.h"

#include "variables.h"

void drawBootscreen(TFT_eSPI &tft)
{
  unsigned int displayWidth = tft.getViewportWidth();
  unsigned int displayHeight = tft.getViewportHeight();
  unsigned int middleWidth = round(displayWidth / 2);
  unsigned int middleHeight = round(displayHeight / 2);
  pushImageFromFS(getIcon("LogoO_170"), 0, 0, tft);
  if (cityId == 3 || cityId == 18 || cityId == 76)
  {
    pushImageFromFS(getIcon("Coat_001_48"), displayWidth - 60, displayHeight - 120, tft);
  }
  else if (cityId == 25 || cityId == 27 || cityId == 51 || cityId == 53 || cityId == 89 || cityId == 107)
  {
    pushImageFromFS(getIcon("Coat_002_48"), displayWidth - 60, displayHeight - 120, tft);
  }
  else if (cityId == 5 || cityId == 12 || cityId == 34 || cityId == 82 || cityId == 106)
  {
    pushImageFromFS(getIcon("Coat_003_48"), displayWidth - 60, displayHeight - 120, tft);
  }
  else if (cityId == 1 || cityId == 7 || cityId == 101)
  {
    pushImageFromFS(getIcon("Coat_004_48"), displayWidth - 60, displayHeight - 120, tft);
  }
  else if (cityId == 2 || cityId == 31 || cityId == 49 || cityId == 68 || cityId == 91 || cityId == 113)
  {
    pushImageFromFS(getIcon("Coat_005_48"), displayWidth - 60, displayHeight - 120, tft);
  }
  else if (cityId == 9 || cityId == 32 || cityId == 36 || cityId == 38 || cityId == 48 || cityId == 57 || cityId == 61 || cityId == 69 || cityId == 84 || cityId == 87 || cityId == 98 || cityId == 99 || cityId == 103 || cityId == 109 || cityId == 110)
  {
    pushImageFromFS(getIcon("Coat_006_48"), displayWidth - 60, displayHeight - 120, tft);
  }
  else if (cityId == 42 || cityId == 47)
  {
    pushImageFromFS(getIcon("Coat_007_48"), displayWidth - 60, displayHeight - 120, tft);
  }
  else if (cityId == 8 || cityId == 44 || cityId == 45 || cityId == 54 || cityId == 75 || cityId == 77 || cityId == 86 || cityId == 90 || cityId == 102 || cityId == 104)
  {
    pushImageFromFS(getIcon("Coat_008_48"), displayWidth - 60, displayHeight - 120, tft);
  }
  else if (cityId == 17 || cityId == 21 || cityId == 23 || cityId == 55 || cityId == 74 || cityId == 79)
  {
    pushImageFromFS(getIcon("Coat_009_48"), displayWidth - 60, displayHeight - 120, tft);
  }
  else if (cityId == 6 || cityId == 28 || cityId == 33 || cityId == 58 || cityId == 60 || cityId == 71 || cityId == 92 || cityId == 94 || cityId == 112)
  {
    pushImageFromFS(getIcon("Coat_010_48"), displayWidth - 60, displayHeight - 120, tft);
  }
  else if (cityId == 11 || cityId == 14 || cityId == 22 || cityId == 50 || cityId == 56 || cityId == 63 || cityId == 72 || cityId == 73 || cityId == 78)
  {
    pushImageFromFS(getIcon("Coat_011_48"), displayWidth - 60, displayHeight - 120, tft);
  }
  else if (cityId == 35 || cityId == 62)
  {
    pushImageFromFS(getIcon("Coat_012_48"), displayWidth - 60, displayHeight - 120, tft);
  }
  else if (cityId == 66 || cityId == 80 || cityId == 95 || cityId == 97)
  {
    pushImageFromFS(getIcon("Coat_013_48"), displayWidth - 60, displayHeight - 120, tft);
  }
  else if (cityId == 20 || cityId == 29 || cityId == 37 || cityId == 40 || cityId == 43 || cityId == 108)
  {
    pushImageFromFS(getIcon("Coat_014_48"), displayWidth - 60, displayHeight - 120, tft);
  }
  else if (cityId == 4 || cityId == 30 || cityId == 46 || cityId == 67 || cityId == 81 || cityId == 93)
  {
    pushImageFromFS(getIcon("Coat_015_48"), displayWidth - 60, displayHeight - 120, tft);
  }
  else if (cityId == 10 || cityId == 15 || cityId == 24 || cityId == 39 || cityId == 65 || cityId == 88 || cityId == 96 || cityId == 114)
  {
    pushImageFromFS(getIcon("Coat_016_48"), displayWidth - 60, displayHeight - 120, tft);
  }
  else if (cityId == 19 || cityId == 70 || cityId == 100 || cityId == 105)
  {
    pushImageFromFS(getIcon("Coat_017_48"), displayWidth - 60, displayHeight - 120, tft);
  }
  else if (cityId == 52 || cityId == 59 || cityId == 115)
  {
    pushImageFromFS(getIcon("Coat_018_48"), displayWidth - 60, displayHeight - 120, tft);
  }
  else
  {
    pushImageFromFS(getIcon("Coat_000_48"), displayWidth - 60, displayHeight - 120, tft);
  }
  pushImageFromFS(getIcon("WiFi_24"), displayWidth - 54, displayHeight - 54, tft);
  pushImageFromFS(getIcon("Icons8_24"), displayWidth - 30, displayHeight - 54, tft);
  pushImageFromFS(getIcon("Arduino_24"), displayWidth - 54, displayHeight - 30, tft);
  pushImageFromFS(getIcon("Arm_24"), displayWidth - 78, displayHeight - 30, tft);
  pushImageFromFS(getIcon("Bluetooth_24"), displayWidth - 30, displayHeight - 30, tft);
  tft.drawCentreString("icons8.com", displayWidth - 30, displayHeight - 64, 1);
}