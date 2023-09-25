#include <Arduino.h>
#include <TFT_eFEX.h>
#include <TFT_eSPI.h>

#include "display\functions.h"
#include "filesystem\functions.h"
#include "graphic\functions.h"
#include "i18n\functions.h"

#include "variables.h"

void drawMenubar_h(TFT_eSPI &, TFT_eSprite &);