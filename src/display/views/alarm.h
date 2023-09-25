#include <Arduino.h>
#include <TFT_eFEX.h>
#include <TFT_eSPI.h>

#include "display\views\alarm_h.h"
#include "display\views\alarm_v.h"

#include "variables.h"

void drawAlarmPageType(TFT_eSPI &, TFT_eSprite &, int);

void drawAlarmPageDetail(TFT_eSPI &, TFT_eSprite &, boolean, int);

void scrollAlarmText(TFT_eSPI &, TFT_eSprite &, String);