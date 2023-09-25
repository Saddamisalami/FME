#include <Arduino.h>
#include <TFT_eFEX.h>
#include <TFT_eSPI.h>

#include "display\functions.h"
#include "filesystem\functions.h"
#include "graphic\functions.h"
#include "messages\functions.h"
#include "time\functions.h"

#include "variables.h"


void drawTitlebar_h(TFT_eSPI &, TFT_eSprite &, TFT_eSprite &, TFT_eSprite &);