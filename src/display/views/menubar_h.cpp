#include <Arduino.h>
#include <TFT_eFEX.h>
#include <TFT_eSPI.h>

#include "display\functions.h"
#include "filesystem\functions.h"
#include "graphic\functions.h"
#include "i18n\functions.h"

#include "variables.h"

void drawMenubar_h(TFT_eSPI &tft, TFT_eSprite &sprMenubar1)
{
  unsigned int displayWidth = tft.getViewportWidth();
  unsigned int displayHeight = tft.getViewportHeight();
  unsigned int middleWidth = round(displayWidth / 2);
  unsigned int middleHeight = round(displayHeight / 2);

  if (currentMenu == 0)
  {
    currentMenubar = 0;
  }
  else if (currentMenu == 1 ||
           currentMenu == 2 ||
           currentMenu == 3 ||
           currentMenu == 4 || currentMenu == 41 || currentMenu == 42 || currentMenu == 43 || currentMenu == 431 || currentMenu == 432 || currentMenu == 433 || currentMenu == 44 || currentMenu == 45 || currentMenu == 46 || currentMenu == 47 ||
           currentMenu == 5 ||
           currentMenu == 6 || currentMenu == 61 || currentMenu == 62 || currentMenu == 63)
  {
    currentMenubar = 2;
  }
  else
  {
    currentMenubar = 1;
  }
  if (lastMenubar != currentMenubar)
  {
    cleanSprite(sprMenubar1);
    tft.drawLine(displayWidth - 19, 19, displayWidth - 19, displayWidth, TFT_BLACK);
    sprMenubar1.createSprite((displayHeight - 19), 18);
    sprMenubar1.setPivot(displayHeight, -displayWidth + 18);
    sprMenubar1.fillSprite(TFT_WHITE);
    sprMenubar1.pushRotated(270);
    if (running_Alarm == true)
    {
      pushImageFromFS(getIcon("NichtOk_12"), displayWidth - 15, 19 + 12, tft);
      pushImageFromFS(getIcon("Ok_12"), displayWidth - 15, displayHeight - 12 - 12, tft);
    }
    else
    {
      if (currentMenubar == 0)
      {
        pushImageFromFS(getIcon("Menu_12"), displayWidth - 15, ((displayHeight - 19) / 2) + 6, tft);
        lastMenubar = 0;
      }
      if (currentMenubar != 0)
      {
        pushImageFromFS(getIcon("Back_12"), displayWidth - 15, 19 + 12, tft);
        pushImageFromFS(getIcon("Up_12"), displayWidth - 15, 19, tft);
        pushImageFromFS(getIcon("Down_12"), displayWidth - 15, displayHeight - 12, tft);
        lastMenubar = 1;
      }
      if (currentMenubar == 2)
      {
        pushImageFromFS(getIcon("Forward_12"), displayWidth - 15, displayHeight - 12 - 12, tft);
        lastMenubar = 2;
      }
    }
  }
}