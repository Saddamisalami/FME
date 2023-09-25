#include <Arduino.h>
#include <TFT_eFEX.h>
#include <TFT_eSPI.h>

#include "alarm\functions.h"
#include "display\functions.h"
#include "filesystem\functions.h"
#include "graphic\functions.h"
#include "i18n\functions.h"
#include "messages\functions.h"
#include "text\functions.h"

#include "variables.h"

void drawAlarmPageType_h(TFT_eSPI &, TFT_eSprite &, int);

void drawAlarmPageDetail_h(TFT_eSPI &, TFT_eSprite &, boolean, int);

void scrollAlarmText_h(TFT_eSPI &, TFT_eSprite &, String);