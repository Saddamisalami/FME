#include <Arduino.h>
#include <TFT_eFEX.h>
#include <TFT_eSPI.h>

#include "display\views\menu_h.h"
#include "display\views\menu_v.h"

#include "variables.h"

void drawMenu(TFT_eSPI &tft, TFT_eSprite &sprMenu1, TFT_eSprite &sprMenu2)
{
 if (display_landscape == true)
  {
    drawMenu_h(tft, sprMenu1, sprMenu2);
  }
  else
  {
    drawMenu_v(tft, sprMenu1, sprMenu2);
  }
}