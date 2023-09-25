#include <Arduino.h>
#include <TFT_eFEX.h>
#include <TFT_eSPI.h>

#include "display\views\titlebar_h.h"
#include "display\views\titlebar_v.h"

#include "variables.h"

void drawTitlebar(TFT_eSPI &, TFT_eSprite &, TFT_eSprite &, TFT_eSprite &);