#include <Arduino.h>
#include <TFT_eFEX.h>
#include <TFT_eSPI.h>

#include "display\views\menubar_h.h"
#include "display\views\menubar_v.h"

#include "variables.h"

void drawMenubar(TFT_eSPI &tft, TFT_eSprite &sprMenubar1)
{
  if (display_landscape == true)
  {
    drawMenubar_h(tft, sprMenubar1);
  }
  else
  {
    drawMenubar_v(tft, sprMenubar1);
  }
}