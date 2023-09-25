#include <Arduino.h>
#include <TFT_eFEX.h>
#include <TFT_eSPI.h>

#include "display\views\alarm_h.h"
#include "display\views\alarm_v.h"

#include "variables.h"

void scrollAlarmText(TFT_eSPI &tft, TFT_eSprite &sprScroll1, String text)
{
  if (display_landscape == true)
  {
    scrollAlarmText_h(tft, sprScroll1, text);
  }
  else
  {
    scrollAlarmText_v(tft, sprScroll1, text);
  }
}

void drawAlarmPageType(TFT_eSPI &tft, TFT_eSprite &sprAlarm1, int alarm)
{
  if (display_landscape == true)
  {
    drawAlarmPageType_h(tft, sprAlarm1, alarm);
  }
  else
  {
    drawAlarmPageType_v(tft, sprAlarm1, alarm);
  }
}

void drawAlarmPageDetail(TFT_eSPI &tft, TFT_eSprite &sprAlarm1, boolean showComment, int alarm)
{
  if (display_landscape == true)
  {
    drawAlarmPageDetail_h(tft, sprAlarm1, showComment, alarm);
  }
  else
  {
    drawAlarmPageDetail_v(tft, sprAlarm1, showComment, alarm);
  }
}