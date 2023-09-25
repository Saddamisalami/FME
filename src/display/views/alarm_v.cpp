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

void scrollAlarmText_v(TFT_eSPI &tft, TFT_eSprite &sprScroll1, String text)
{
  unsigned int displayWidth = tft.getViewportWidth();
  unsigned int displayHeight = tft.getViewportHeight();
  unsigned int middleWidth = round(displayWidth / 2);
  unsigned int middleHeight = round(displayHeight / 2);
  scrollTextLength = getSmoothTextSize(text, 32);
  sprScroll1.createSprite(scrollTextLength, 36);
  sprScroll1.fillSprite(TFT_WHITE);
  if (giessen_mode == true)
  {
    sprScroll1.loadFont("GiessenFutura32");
  }
  else
  {
    sprScroll1.loadFont("JostMedium32");
  }
  sprScroll1.setTextDatum(ML_DATUM);
  sprScroll1.setColorDepth(16);
  sprScroll1.setTextColor(TFT_BLACK, TFT_WHITE);
  sprScroll1.setTextWrap(false);
  sprScroll1.setCursor(3, 2);
  sprScroll1.print(text);
  sprScroll1.pushSprite((-scrollTextLength + displayWidth), (middleHeight + 20));
}

void drawAlarmPageType_v(TFT_eSPI &tft, TFT_eSprite &sprAlarm1, int alarm)
{
  unsigned int displayWidth = tft.getViewportWidth();
  unsigned int displayHeight = tft.getViewportHeight();
  unsigned int middleWidth = round(displayWidth / 2);
  unsigned int middleHeight = round(displayHeight / 2);

  cleanSprite(sprAlarm1);

  unsigned int yposition = middleHeight - 64;
  tft.fillRect(0, 19, displayWidth, ((displayHeight - 19) - 19), TFT_WHITE);
  sprAlarm1.createSprite(displayWidth, (middleHeight - 19));
  sprAlarm1.fillSprite(TFT_WHITE);
  sprAlarm1.setTextDatum(MC_DATUM);
  sprAlarm1.setColorDepth(16);
  sprAlarm1.setTextColor(TFT_BLACK, TFT_WHITE);
  sprAlarm1.setTextWrap(false);
  if (giessen_mode == true)
  {
    sprAlarm1.loadFont("GiessenFutura24");
  }
  else
  {
    sprAlarm1.loadFont("JostMedium24");
  }
  sprAlarm1.drawString(getAlarmTypeText(getAlarmType(alarm)), displayWidth / 2, 10);
  String txtAlarmAdress = getAlarmAdress(alarm);
  sprAlarm1.pushSprite(0, middleHeight);
  sprAlarm1.unloadFont();
  switch (getAlarmType(alarm))
  {
  case 101:
  {
    pushImageFromFS("/Type_F001_48.jpg", middleWidth - 17, yposition, tft);
    break;
  }
  case 102:
  {
    pushImageFromFS("/Type_F002_48.jpg", middleWidth - 34, yposition, tft);
    break;
  }
  case 103:
  {
    pushImageFromFS("/Type_F003_48.jpg", middleWidth - 56, yposition, tft);
    break;
  }
  case 104:
  {
    pushImageFromFS("/Type_F004_48.jpg", middleWidth - 51, yposition, tft);
    break;
  }
  case 105:
  {
    pushImageFromFS("/Type_F005_48.jpg", middleWidth - 73, yposition, tft);
    break;
  }
  case 106:
  {
    pushImageFromFS("/Type_F006_48.jpg", middleWidth - 68, yposition, tft);
    break;
  }
  case 107:
  {
    pushImageFromFS("/Type_F007_48.jpg", middleWidth - 40, yposition, tft);
    break;
  }
  case 108:
  {
    pushImageFromFS("/Type_F008_48.jpg", middleWidth - 65, yposition, tft);
    break;
  }
  case 109:
  {
    pushImageFromFS("/Type_F009_48.jpg", middleWidth - 56, yposition, tft);
    break;
  }
  case 110:
  {
    pushImageFromFS("/Type_F010_48.jpg", middleWidth - 86, yposition, tft);
    break;
  }
  case 111:
  {
    pushImageFromFS("/Type_F011_48.jpg", middleWidth - 31, yposition, tft);
    break;
  }
  case 112:
  {
    pushImageFromFS("/Type_F012_48.jpg", middleWidth - 48, yposition, tft);
    break;
  }
  case 113:
  {
    pushImageFromFS("/Type_F013_48.jpg", middleWidth - 47, yposition, tft);
    break;
  }
  case 114:
  {
    pushImageFromFS("/Type_F014_48.jpg", middleWidth - 35, yposition, tft);
    break;
  }
  case 115:
  {
    pushImageFromFS("/Type_F015_48.jpg", middleWidth - 57, yposition, tft);
    break;
  }
  case 116:
  {
    pushImageFromFS("/Type_F016_48.jpg", middleWidth - 46, yposition, tft);
    break;
  }
  case 117:
  {
    pushImageFromFS("/Type_F017_48.jpg", middleWidth - 44, yposition, tft);
    break;
  }
  case 118:
  {
    pushImageFromFS("/Type_F018_48.jpg", middleWidth - 41, yposition, tft);
    break;
  }
  case 119:
  {
    pushImageFromFS("/Type_F019_48.jpg", middleWidth - 68, yposition, tft);
    break;
  }
  case 120:
  {
    pushImageFromFS("/Type_F020_48.jpg", middleWidth - 68, yposition, tft);
    break;
  }
  case 121:
  {
    pushImageFromFS("/Type_F021_48.jpg", middleWidth - 50, yposition, tft);
    break;
  }
  case 122:
  {
    pushImageFromFS("/Type_F021_48.jpg", middleWidth - 50, yposition, tft);
    // pushImageFromFS("/Type_F022_48.jpg", middleWidth - 50, yposition, tft);
    break;
  }
  case 201:
  {
    pushImageFromFS("/Type_H001_48.jpg", middleWidth - 30, yposition, tft);
    break;
  }
  case 202:
  {
    pushImageFromFS("/Type_H002_48.jpg", middleWidth - 52, yposition, tft);
    break;
  }
  case 203:
  {
    pushImageFromFS("/Type_H003_48.jpg", middleWidth - 38, yposition, tft);
    break;
  }
  case 204:
  {
    pushImageFromFS("/Type_H004_48.jpg", middleWidth - 38, yposition, tft);
    break;
  }
  case 205:
  {
    pushImageFromFS("/Type_H005_48.jpg", middleWidth - 25, yposition, tft);
    break;
  }
  case 206:
  {
    pushImageFromFS("/Type_H006_48.jpg", middleWidth - 38, yposition, tft);
    break;
  }
  case 207:
  {
    pushImageFromFS("/Type_H007_48.jpg", middleWidth - 36, yposition, tft);
    break;
  }
  case 208:
  {
    pushImageFromFS("/Type_H008_48.jpg", middleWidth - 36, yposition, tft);
    break;
  }
  case 209:
  {
    pushImageFromFS("/Type_H009_48.jpg", middleWidth - 36, yposition, tft);
    break;
  }
  case 210:
  {
    pushImageFromFS("/Type_H010_48.jpg", middleWidth - 26, yposition, tft);
    break;
  }
  case 211:
  {
    pushImageFromFS("/Type_H011_48.jpg", middleWidth - 42, yposition, tft);
    break;
  }
  case 212:
  {
    pushImageFromFS("/Type_H012_48.jpg", middleWidth - 36, yposition, tft);
    break;
  }
  case 213:
  {
    pushImageFromFS("/Type_H013_48.jpg", middleWidth - 63, yposition, tft);
    break;
  }
  case 214:
  {
    pushImageFromFS("/Type_H014_48.jpg", middleWidth - 58, yposition, tft);
    break;
  }
  case 215:
  {
    pushImageFromFS("/Type_H015_48.jpg", middleWidth - 58, yposition, tft);
    break;
  }
  case 216:
  {
    pushImageFromFS("/Type_H016_48.jpg", middleWidth - 58, yposition, tft);
    break;
  }
  case 217:
  {
    pushImageFromFS("/Type_H017_48.jpg", middleWidth - 57, yposition, tft);
    break;
  }
  case 218:
  {
    pushImageFromFS("/Type_H018_48.jpg", middleWidth - 38, yposition, tft);
    break;
  }
  case 219:
  {
    pushImageFromFS("/Type_H019_48.jpg", middleWidth - 48, yposition, tft);
    break;
  }
  case 220:
  {
    pushImageFromFS("/Type_H020_48.jpg", middleWidth - 63, yposition, tft);
    break;
  }
  case 221:
  {
    pushImageFromFS("/Type_H021_48.jpg", middleWidth - 53, yposition, tft);
    break;
  }
  case 222:
  {
    pushImageFromFS("/Type_H022_48.jpg", middleWidth - 53, yposition, tft);
    break;
  }
  case 301:
  {
    pushImageFromFS("/Type_U001_48.jpg", middleWidth - 33, yposition, tft);
    break;
  }
  case 302:
  {
    pushImageFromFS("/Type_U002_48.jpg", middleWidth - 33, yposition, tft);
    break;
  }
  case 401:
  {
    pushImageFromFS("/Type_R001_48.jpg", middleWidth - 25, yposition, tft);
    break;
  }
  case 402:
  {
    pushImageFromFS("/Type_R001_48.jpg", middleWidth - 25, yposition, tft);
    // pushImageFromFS("/Type_R002_48.jpg", middleWidth - 25, yposition, tft);
    break;
  }
  case 403:
  {
    pushImageFromFS("/Type_R003_48.jpg", middleWidth - 55, yposition, tft);
    break;
  }
  case 404:
  {
    pushImageFromFS("/Type_R003_48.jpg", middleWidth - 55, yposition, tft);
    // pushImageFromFS("/Type_R004_48.jpg", middleWidth - 55, yposition, tft);
    break;
  }
  case 405:
  {
    pushImageFromFS("/Type_R005_48.jpg", middleWidth - 60, yposition, tft);
    break;
  }
  case 406:
  {
    pushImageFromFS("/Type_R006_48.jpg", middleWidth - 45, yposition, tft);
    break;
  }
  case 407:
  {
    pushImageFromFS("/Type_R007_48.jpg", middleWidth - 45, yposition, tft);
    break;
  }
  case 408:
  {
    pushImageFromFS("/Type_R008_48.jpg", middleWidth - 50, yposition, tft);
    break;
  }
  case 501:
  {
    pushImageFromFS("/Type_T001_48.jpg", middleWidth - 24, yposition, tft);
    break;
  }
  case 502:
  {
    pushImageFromFS("/Type_T001_48.jpg", middleWidth - 24, yposition, tft);
    // pushImageFromFS("/Type_T002_48.jpg", middleWidth - 24, yposition, tft);
    break;
  }
  case 503:
  {
    pushImageFromFS("/Type_T003_48.jpg", middleWidth - 45, yposition, tft);
    break;
  }
  case 504:
  {
    pushImageFromFS("/Type_T004_48.jpg", middleWidth - 42, yposition, tft);
    break;
  }
  case 505:
  {
    pushImageFromFS("/Type_T005_48.jpg", middleWidth - 50, yposition, tft);
    break;
  }
  case 506:
  {
    pushImageFromFS("/Type_T006_48.jpg", middleWidth - 55, yposition, tft);
    break;
  }
  case 507:
  {
    pushImageFromFS("/Type_T007_48.jpg", middleWidth - 42, yposition, tft);
    break;
  }
  case 508:
  {
    pushImageFromFS("/Type_T008_48.jpg", middleWidth - 48, yposition, tft);
    break;
  }
  case 509:
  {
    pushImageFromFS("/Type_T009_48.jpg", middleWidth - 48, yposition, tft);
    break;
  }
  case 510:
  {
    pushImageFromFS("/Type_T010_48.jpg", middleWidth - 46, yposition, tft);
    break;
  }
  case 511:
  {
    pushImageFromFS("/Type_T011_48.jpg", middleWidth - 67, yposition, tft);
    break;
  }
  case 512:
  {
    pushImageFromFS("/Type_T012_48.jpg", middleWidth - 65, yposition, tft);
    break;
  }
  case 513:
  {
    pushImageFromFS("/Type_T013_48.jpg", middleWidth - 48, yposition, tft);
    break;
  }
  case 514:
  {
    pushImageFromFS("/Type_T014_48.jpg", middleWidth - 46, yposition, tft);
    break;
  }
  case 515:
  {
    pushImageFromFS("/Type_T015_48.jpg", middleWidth - 49, yposition, tft);
    break;
  }
  case 516:
  {
    pushImageFromFS("/Type_T016_48.jpg", middleWidth - 46, yposition, tft);
    break;
  }
  case 517:
  {
    pushImageFromFS("/Type_T017_48.jpg", middleWidth - 50, yposition, tft);
    break;
  }
  case 518:
  {
    pushImageFromFS("/Type_T018_48.jpg", middleWidth - 49, yposition, tft);
    break;
  }
  case 519:
  {
    pushImageFromFS("/Type_T019_48.jpg", middleWidth - 46, yposition, tft);
    break;
  }
  case 520:
  {
    pushImageFromFS("/Type_T020_48.jpg", middleWidth - 44, yposition, tft);
    break;
  }
  case 521:
  {
    pushImageFromFS("/Type_T021_48.jpg", middleWidth - 42, yposition, tft);
    break;
  }

  case 601:
  {
    pushImageFromFS("/Type_P001_48.jpg", middleWidth - 46, yposition, tft);
    break;
  }
  case 602:
  {
    pushImageFromFS("/Type_P002_48.jpg", middleWidth - 46, yposition, tft);
    break;
  }
  case 603:
  {
    pushImageFromFS("/Type_P003_48.jpg", middleWidth - 46, yposition, tft);
    break;
  }
  case 604:
  {
    pushImageFromFS("/Type_P004_48.jpg", middleWidth - 46, yposition, tft);
    break;
  }
  case 605:
  {
    pushImageFromFS("/Type_P005_48.jpg", middleWidth - 46, yposition, tft);
    break;
  }
  case 606:
  {
    pushImageFromFS("/Type_P006_48.jpg", middleWidth - 46, yposition, tft);
    break;
  }
  case 1:
  {
    pushImageFromFS("/Type_D001_48.jpg", middleWidth - 24, yposition, tft);
    break;
  }
  default:
  {
    pushImageFromFS("/Type_D000_48.jpg", middleWidth - 24, yposition, tft);
    break;
  }
  }
}

void drawAlarmPageDetail_v(TFT_eSPI &tft, TFT_eSprite &sprAlarm1, boolean showComment, int alarm)
{
  unsigned int displayWidth = tft.getViewportWidth();
  unsigned int displayHeight = tft.getViewportHeight();
  unsigned int middleWidth = round(displayWidth / 2);
  unsigned int middleHeight = round(displayHeight / 2);

  cleanSprite(sprAlarm1);

  unsigned int yposition = 20;
  tft.fillRect(0, 19, displayWidth, (displayHeight - 38), TFT_WHITE);
  sprAlarm1.createSprite(displayWidth, (displayHeight - 38));
  sprAlarm1.fillSprite(TFT_WHITE);
  sprAlarm1.setTextDatum(MC_DATUM);
  sprAlarm1.setColorDepth(16);
  sprAlarm1.setTextColor(TFT_BLACK, TFT_WHITE);
  sprAlarm1.setTextWrap(false);
  if (giessen_mode == true)
  {
    sprAlarm1.loadFont("GiessenFutura24");
  }
  else
  {
    sprAlarm1.loadFont("JostMedium24");
  }
  String alarmText = getAlarmTypeText(getAlarmType(alarm));
  sprAlarm1.drawString(alarmText, (displayWidth / 2), (yposition + 24));
  String alarmAdress = getAlarmAdress(alarm);
  if (giessen_mode == true)
  {
    sprAlarm1.loadFont("GiessenFutura16");
  }
  else
  {
    sprAlarm1.loadFont("JostMedium16");
  }

  sprAlarm1.setTextWrap(true);
  String textAdress = getI18n("alarm_address") + ":";
  if (showComment == true && !getAlarmComment(alarm).isEmpty())
  {
    alarmAdress = getAlarmComment(alarm);
    textAdress = getI18n("alarm_comment") + ":";
  }
  else
  {
    alarmAdress.replace(", ", "\n\n");
  }
  if (giessen_mode == true)
  {
    sprAlarm1.loadFont("GiessenFutura16");
  }
  else
  {
    sprAlarm1.loadFont("JostMedium16");
  }
  sprAlarm1.drawString(textAdress, (displayWidth / 2), (yposition + 48));
  if (giessen_mode == true)
  {
    sprAlarm1.loadFont("GiessenFutura24");
  }
  else
  {
    sprAlarm1.loadFont("JostMedium24");
  }
  sprAlarm1.setTextWrap(true);
  sprAlarm1.setTextDatum(ML_DATUM);
  sprAlarm1.drawString(alarmAdress, 0, (yposition + 66));
  sprAlarm1.pushSprite(0, 19);
  sprAlarm1.unloadFont();

  switch (getAlarmType(alarm))
  {
  case 101:
  {
    pushImageFromFS("/Type_F001_24.jpg", middleWidth - 9, yposition, tft);
    break;
  }
  case 102:
  {
    pushImageFromFS("/Type_F002_24.jpg", middleWidth - 18, yposition, tft);
    break;
  }
  case 103:
  {
    pushImageFromFS("/Type_F003_24.jpg", middleWidth - 28, yposition, tft);
    break;
  }
  case 104:
  {
    pushImageFromFS("/Type_F004_24.jpg", middleWidth - 26, yposition, tft);
    break;
  }
  case 105:
  {
    pushImageFromFS("/Type_F005_24.jpg", middleWidth - 36, yposition, tft);
    break;
  }
  case 106:
  {
    pushImageFromFS("/Type_F006_24.jpg", middleWidth - 35, yposition, tft);
    break;
  }
  case 107:
  {
    pushImageFromFS("/Type_F007_24.jpg", middleWidth - 20, yposition, tft);
    break;
  }
  case 108:
  {
    pushImageFromFS("/Type_F008_24.jpg", middleWidth - 33, yposition, tft);
    break;
  }
  case 109:
  {
    pushImageFromFS("/Type_F009_24.jpg", middleWidth - 28, yposition, tft);
    break;
  }
  case 110:
  {
    pushImageFromFS("/Type_F010_24.jpg", middleWidth - 43, yposition, tft);
    break;
  }
  case 111:
  {
    pushImageFromFS("/Type_F011_24.jpg", middleWidth - 16, yposition, tft);
    break;
  }
  case 112:
  {
    pushImageFromFS("/Type_F012_24.jpg", middleWidth - 24, yposition, tft);
    break;
  }
  case 113:
  {
    pushImageFromFS("/Type_F013_24.jpg", middleWidth - 24, yposition, tft);
    break;
  }
  case 114:
  {
    pushImageFromFS("/Type_F014_24.jpg", middleWidth - 17, yposition, tft);
    break;
  }
  case 115:
  {
    pushImageFromFS("/Type_F015_24.jpg", middleWidth - 28, yposition, tft);
    break;
  }
  case 116:
  {
    pushImageFromFS("/Type_F016_24.jpg", middleWidth - 23, yposition, tft);
    break;
  }
  case 117:
  {
    pushImageFromFS("/Type_F017_24.jpg", middleWidth - 23, yposition, tft);
    break;
  }
  case 118:
  {
    pushImageFromFS("/Type_F018_24.jpg", middleWidth - 20, yposition, tft);
    break;
  }
  case 119:
  {
    pushImageFromFS("/Type_F019_24.jpg", middleWidth - 35, yposition, tft);
    break;
  }
  case 120:
  {
    pushImageFromFS("/Type_F020_24.jpg", middleWidth - 34, yposition, tft);
    break;
  }
  case 121:
  {
    pushImageFromFS("/Type_F021_24.jpg", middleWidth - 25, yposition, tft);
    break;
  }
  case 122:
  {
    pushImageFromFS("/Type_F021_24.jpg", middleWidth - 25, yposition, tft);
    // pushImageFromFS("/Type_F022_24.jpg", middleWidth -25, yposition, tft);
    break;
  }
  case 201:
  {
    pushImageFromFS("/Type_H001_24.jpg", middleWidth - 15, yposition, tft);
    break;
  }
  case 202:
  {
    pushImageFromFS("/Type_H002_24.jpg", middleWidth - 26, yposition, tft);
    break;
  }
  case 203:
  {
    pushImageFromFS("/Type_H003_24.jpg", middleWidth - 19, yposition, tft);
    break;
  }
  case 204:
  {
    pushImageFromFS("/Type_H004_24.jpg", middleWidth - 19, yposition, tft);
    break;
  }
  case 205:
  {
    pushImageFromFS("/Type_H005_24.jpg", middleWidth - 12, yposition, tft);
    break;
  }
  case 206:
  {
    pushImageFromFS("/Type_H006_24.jpg", middleWidth - 20, yposition, tft);
    break;
  }
  case 207:
  {
    pushImageFromFS("/Type_H007_24.jpg", middleWidth - 18, yposition, tft);
    break;
  }
  case 208:
  {
    pushImageFromFS("/Type_H008_24.jpg", middleWidth - 18, yposition, tft);
    break;
  }
  case 209:
  {
    pushImageFromFS("/Type_H009_24.jpg", middleWidth - 18, yposition, tft);
    break;
  }
  case 210:
  {
    pushImageFromFS("/Type_H010_24.jpg", middleWidth - 13, yposition, tft);
    break;
  }
  case 211:
  {
    pushImageFromFS("/Type_H011_24.jpg", middleWidth - 21, yposition, tft);
    break;
  }
  case 212:
  {
    pushImageFromFS("/Type_H012_24.jpg", middleWidth - 19, yposition, tft);
    break;
  }
  case 213:
  {
    pushImageFromFS("/Type_H013_24.jpg", middleWidth - 32, yposition, tft);
    break;
  }
  case 214:
  {
    pushImageFromFS("/Type_H014_24.jpg", middleWidth - 30, yposition, tft);
    break;
  }
  case 215:
  {
    pushImageFromFS("/Type_H015_24.jpg", middleWidth - 30, yposition, tft);
    break;
  }
  case 216:
  {
    pushImageFromFS("/Type_H016_24.jpg", middleWidth - 29, yposition, tft);
    break;
  }
  case 217:
  {
    pushImageFromFS("/Type_H017_24.jpg", middleWidth - 28, yposition, tft);
    break;
  }
  case 218:
  {
    pushImageFromFS("/Type_H018_24.jpg", middleWidth - 20, yposition, tft);
    break;
  }
  case 219:
  {
    pushImageFromFS("/Type_H019_24.jpg", middleWidth - 25, yposition, tft);
    break;
  }
  case 220:
  {
    pushImageFromFS("/Type_H020_24.jpg", middleWidth - 31, yposition, tft);
    break;
  }
  case 221:
  {
    pushImageFromFS("/Type_H021_24.jpg", middleWidth - 27, yposition, tft);
    break;
  }
  case 222:
  {
    pushImageFromFS("/Type_H022_24.jpg", middleWidth - 27, yposition, tft);
    break;
  }
  case 301:
  {
    pushImageFromFS("/Type_U001_24.jpg", middleWidth - 17, yposition, tft);
    break;
  }
  case 302:
  {
    pushImageFromFS("/Type_U002_24.jpg", middleWidth - 17, yposition, tft);
    break;
  }
  case 401:
  {
    pushImageFromFS("/Type_R001_24.jpg", middleWidth - 12, yposition, tft);
    break;
  }
  case 402:
  {
    pushImageFromFS("/Type_R001_24.jpg", middleWidth - 12, yposition, tft);
    // pushImageFromFS("/Type_R002_24.jpg", middleWidth -12, yposition, tft);
    break;
  }
  case 403:
  {
    pushImageFromFS("/Type_R003_24.jpg", middleWidth - 27, yposition, tft);
    break;
  }
  case 404:
  {
    pushImageFromFS("/Type_R003_24.jpg", middleWidth - 27, yposition, tft);
    // pushImageFromFS("/Type_R004_24.jpg", middleWidth -27, yposition, tft);
    break;
  }
  case 405:
  {
    pushImageFromFS("/Type_R005_24.jpg", middleWidth - 30, yposition, tft);
    break;
  }
  case 406:
  {
    pushImageFromFS("/Type_R006_24.jpg", middleWidth - 22, yposition, tft);
    break;
  }
  case 407:
  {
    pushImageFromFS("/Type_R007_24.jpg", middleWidth - 22, yposition, tft);
    break;
  }
  case 408:
  {
    pushImageFromFS("/Type_R008_24.jpg", middleWidth - 25, yposition, tft);
    break;
  }

  case 501:
  {
    pushImageFromFS("/Type_T001_24.jpg", middleWidth - 12, yposition, tft);
    break;
  }
  case 502:
  {
    pushImageFromFS("/Type_T001_24.jpg", middleWidth - 12, yposition, tft);
    // pushImageFromFS("/Type_T002_24.jpg", middleWidth - 12, yposition, tft);
    break;
  }
  case 503:
  {
    pushImageFromFS("/Type_T003_24.jpg", middleWidth - 23, yposition, tft);
    break;
  }
  case 504:
  {
    pushImageFromFS("/Type_T004_24.jpg", middleWidth - 22, yposition, tft);
    break;
  }
  case 505:
  {
    pushImageFromFS("/Type_T005_24.jpg", middleWidth - 25, yposition, tft);
    break;
  }
  case 506:
  {
    pushImageFromFS("/Type_T006_24.jpg", middleWidth - 28, yposition, tft);
    break;
  }
  case 507:
  {
    pushImageFromFS("/Type_T007_24.jpg", middleWidth - 22, yposition, tft);
    break;
  }
  case 508:
  {
    pushImageFromFS("/Type_T008_24.jpg", middleWidth - 24, yposition, tft);
    break;
  }
  case 509:
  {
    pushImageFromFS("/Type_T009_24.jpg", middleWidth - 24, yposition, tft);
    break;
  }
  case 510:
  {
    pushImageFromFS("/Type_T010_24.jpg", middleWidth - 23, yposition, tft);
    break;
  }
  case 511:
  {
    pushImageFromFS("/Type_T011_24.jpg", middleWidth - 34, yposition, tft);
    break;
  }
  case 512:
  {
    pushImageFromFS("/Type_T012_24.jpg", middleWidth - 33, yposition, tft);
    break;
  }
  case 513:
  {
    pushImageFromFS("/Type_T013_24.jpg", middleWidth - 24, yposition, tft);
    break;
  }
  case 514:
  {
    pushImageFromFS("/Type_T014_24.jpg", middleWidth - 23, yposition, tft);
    break;
  }
  case 515:
  {
    pushImageFromFS("/Type_T015_24.jpg", middleWidth - 24, yposition, tft);
    break;
  }
  case 516:
  {
    pushImageFromFS("/Type_T016_24.jpg", middleWidth - 23, yposition, tft);
    break;
  }
  case 517:
  {
    pushImageFromFS("/Type_T017_24.jpg", middleWidth - 25, yposition, tft);
    break;
  }
  case 518:
  {
    pushImageFromFS("/Type_T018_24.jpg", middleWidth - 24, yposition, tft);
    break;
  }
  case 519:
  {
    pushImageFromFS("/Type_T019_24.jpg", middleWidth - 23, yposition, tft);
    break;
  }
  case 520:
  {
    pushImageFromFS("/Type_T020_24.jpg", middleWidth - 22, yposition, tft);
    break;
  }
  case 521:
  {
    pushImageFromFS("/Type_T021_24.jpg", middleWidth - 21, yposition, tft);
    break;
  }

  case 601:
  {
    pushImageFromFS("/Type_P001_24.jpg", middleWidth - 23, yposition, tft);
    break;
  }
  case 602:
  {
    pushImageFromFS("/Type_P002_24.jpg", middleWidth - 23, yposition, tft);
    break;
  }
  case 603:
  {
    pushImageFromFS("/Type_P003_24.jpg", middleWidth - 23, yposition, tft);
    break;
  }
  case 604:
  {
    pushImageFromFS("/Type_P004_24.jpg", middleWidth - 23, yposition, tft);
    break;
  }
  case 605:
  {
    pushImageFromFS("/Type_P005_24.jpg", middleWidth - 23, yposition, tft);
    break;
  }
  case 606:
  {
    pushImageFromFS("/Type_P006_24.jpg", middleWidth - 23, yposition, tft);
    break;
  }

  case 1:
  {
    pushImageFromFS("/Type_D001_24.jpg", middleWidth - 12, yposition, tft);
    break;
  }
  default:
  {
    pushImageFromFS("/Type_D000_24.jpg", middleWidth - 12, yposition, tft);
    break;
  }
  }
}