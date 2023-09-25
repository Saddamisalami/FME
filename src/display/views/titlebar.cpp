#include <Arduino.h>
#include <TFT_eFEX.h>
#include <TFT_eSPI.h>

#include "display\views\titlebar_h.h"
#include "display\views\titlebar_v.h"

#include "variables.h"

void drawTitlebar(TFT_eSPI &tft, TFT_eSprite &sprTitlebar1, TFT_eSprite &sprTitlebar2, TFT_eSprite &sprTitlebar3)
{
  if (display_landscape == true)
  {
    drawTitlebar_h(tft, sprTitlebar1, sprTitlebar2, sprTitlebar3);
  }
  else
  {
    drawTitlebar_v(tft, sprTitlebar1, sprTitlebar2, sprTitlebar3);
  }
}