#include <Arduino.h>
#include <TFT_eFEX.h>
#include <TFT_eSPI.h>

#include "display\functions.h"
#include "filesystem\functions.h"
#include "graphic\functions.h"
#include "i18n\functions.h"

#include "variables.h"

void drawMenubar_v(TFT_eSPI &tft, TFT_eSprite &sprMenubar1)
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
    tft.drawLine(0, displayHeight - 19, displayWidth, displayHeight - 19, TFT_BLACK);
    sprMenubar1.createSprite(displayWidth, 18);
    sprMenubar1.setPivot(0, 0);
    sprMenubar1.fillSprite(TFT_WHITE);
    sprMenubar1.pushSprite(0, displayHeight - 18);
    if (running_Alarm == true)
    {
      pushImageFromFS(getIcon("NichtOk_12"), 0, displayHeight - 15, tft);
      pushImageFromFS(getIcon("Ok_12"), displayWidth - 24, displayHeight - 15, tft);
    }
    else
    {
      if (currentMenubar == 0)
      {
        pushImageFromFS(getIcon("Menu_12"), (displayWidth / 2) - 6, displayHeight - 15, tft);
        lastMenubar = 0;
      }
      if (currentMenubar != 0)
      {
        // Ander Icons, da diese um 90° gedreht sein müssen
        pushImageFromFS(getIcon("Back_12"), 0, displayHeight - 15, tft);                    // Up_12
        pushImageFromFS(getIcon("Up_12"), 12, displayHeight - 15, tft);                     // Back_12
        pushImageFromFS(getIcon("Forward_12"), displayWidth - 12, displayHeight - 15, tft); // Down_12
        lastMenubar = 1;
      }
      if (currentMenubar == 2)
      {
        pushImageFromFS(getIcon("Down_12"), displayWidth - 24, displayHeight - 15, tft); // Forward_12
        lastMenubar = 2;
      }
    }
  }
}