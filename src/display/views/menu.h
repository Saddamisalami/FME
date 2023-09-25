#include <Arduino.h>
#include <TFT_eFEX.h>
#include <TFT_eSPI.h>

#include "display\views\menu_h.h"
#include "display\views\menu_v.h"

#include "variables.h"

void drawMenu(TFT_eSPI &, TFT_eSprite &, TFT_eSprite &);