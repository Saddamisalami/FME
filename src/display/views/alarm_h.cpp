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

void scrollAlarmText_h(TFT_eSPI &tft, TFT_eSprite &sprScroll1, String text)
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
  sprScroll1.pushSprite((-scrollTextLength + (displayWidth - 19)), (middleHeight + 20));
}

void drawAlarmPageType_h(TFT_eSPI &tft, TFT_eSprite &sprAlarm1, int alarm)
{
  unsigned int displayWidth = tft.getViewportWidth();
  unsigned int displayHeight = tft.getViewportHeight();
  unsigned int middleWidth = round(displayWidth / 2);
  unsigned int middleHeight = round(displayHeight / 2);

  cleanSprite(sprAlarm1);

  unsigned int xposition = displayWidth - 19;
  unsigned int yposition = middleHeight - 64;
  tft.fillRect(0, 19, (displayWidth - 19), displayHeight, TFT_WHITE);
  sprAlarm1.createSprite(xposition, middleHeight);
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
    pushImageFromFS(getIcon("Type_F001_64"), middleWidth - 23, yposition, tft);
    break;
  }
  case 102:
  {
    pushImageFromFS(getIcon("Type_F002_64"), middleWidth - 46, yposition, tft);
    break;
  }
  case 103:
  {
    pushImageFromFS(getIcon("Type_F003_64"), middleWidth - 75, yposition, tft);
    break;
  }
  case 104:
  {
    pushImageFromFS(getIcon("Type_F004_64"), middleWidth - 68, yposition, tft);
    break;
  }
  case 105:
  {
    pushImageFromFS(getIcon("Type_F005_64"), middleWidth - 98, yposition, tft);
    break;
  }
  case 106:
  {
    pushImageFromFS(getIcon("Type_F006_64"), middleWidth - 92, yposition, tft);
    break;
  }
  case 107:
  {
    pushImageFromFS(getIcon("Type_F007_64"), middleWidth - 54, yposition, tft);
    break;
  }
  case 108:
  {
    pushImageFromFS(getIcon("Type_F008_64"), middleWidth - 88, yposition, tft);
    break;
  }
  case 109:
  {
    pushImageFromFS(getIcon("Type_F009_64"), middleWidth - 75, yposition, tft);
    break;
  }
  case 110:
  {
    pushImageFromFS(getIcon("Type_F010_64"), middleWidth - 115, yposition, tft);
    break;
  }
  case 111:
  {
    pushImageFromFS(getIcon("Type_F011_64"), middleWidth - 42, yposition, tft);
    break;
  }
  case 112:
  {
    pushImageFromFS(getIcon("Type_F012_64"), middleWidth - 65, yposition, tft);
    break;
  }
  case 113:
  {
    pushImageFromFS(getIcon("Type_F013_64"), middleWidth - 63, yposition, tft);
    break;
  }
  case 114:
  {
    pushImageFromFS(getIcon("Type_F014_64"), middleWidth - 47, yposition, tft);
    break;
  }
  case 115:
  {
    pushImageFromFS(getIcon("Type_F015_64"), middleWidth - 76, yposition, tft);
    break;
  }
  case 116:
  {
    pushImageFromFS(getIcon("Type_F016_64"), middleWidth - 61, yposition, tft);
    break;
  }
  case 117:
  {
    pushImageFromFS(getIcon("Type_F017_64"), middleWidth - 60, yposition, tft);
    break;
  }
  case 118:
  {
    pushImageFromFS(getIcon("Type_F018_64"), middleWidth - 55, yposition, tft);
    break;
  }
  case 119:
  {
    pushImageFromFS(getIcon("Type_F019_64"), middleWidth - 92, yposition, tft);
    break;
  }
  case 120:
  {
    pushImageFromFS(getIcon("Type_F020_64"), middleWidth - 91, yposition, tft);
    break;
  }
  case 121:
  {
    pushImageFromFS(getIcon("Type_F021_64"), middleWidth - 116, yposition, tft);
    break;
  }
  case 122:
  {
    pushImageFromFS(getIcon("Type_F021_64"), middleWidth - 116, yposition, tft);
    // pushImageFromFS(getIcon("Type_F022_64"), middleWidth - 116, yposition, tft);
    break;
  }
  case 201:
  {
    pushImageFromFS(getIcon("Type_H001_64"), middleWidth - 40, yposition, tft);
    break;
  }
  case 202:
  {
    pushImageFromFS(getIcon("Type_H002_64"), middleWidth - 70, yposition, tft);
    break;
  }
  case 203:
  {
    pushImageFromFS(getIcon("Type_H003_64"), middleWidth - 51, yposition, tft);
    break;
  }
  case 204:
  {
    pushImageFromFS(getIcon("Type_H004_64"), middleWidth - 51, yposition, tft);
    break;
  }
  case 205:
  {
    pushImageFromFS(getIcon("Type_H005_64"), middleWidth - 34, yposition, tft);
    break;
  }
  case 206:
  {
    pushImageFromFS(getIcon("Type_H006_64"), middleWidth - 52, yposition, tft);
    break;
  }
  case 207:
  {
    pushImageFromFS(getIcon("Type_H007_64"), middleWidth - 48, yposition, tft);
    break;
  }
  case 208:
  {
    pushImageFromFS(getIcon("Type_H008_64"), middleWidth - 48, yposition, tft);
    break;
  }
  case 209:
  {
    pushImageFromFS(getIcon("Type_H009_64"), middleWidth - 48, yposition, tft);
    break;
  }
  case 210:
  {
    pushImageFromFS(getIcon("Type_H010_64"), middleWidth - 35, yposition, tft);
    break;
  }
  case 211:
  {
    pushImageFromFS(getIcon("Type_H011_64"), middleWidth - 57, yposition, tft);
    break;
  }
  case 212:
  {
    pushImageFromFS(getIcon("Type_H012_64"), middleWidth - 51, yposition, tft);
    break;
  }
  case 213:
  {
    pushImageFromFS(getIcon("Type_H013_64"), middleWidth - 85, yposition, tft);
    break;
  }
  case 214:
  {
    pushImageFromFS(getIcon("Type_H014_64"), middleWidth - 78, yposition, tft);
    break;
  }
  case 215:
  {
    pushImageFromFS(getIcon("Type_H015_64"), middleWidth - 78, yposition, tft);
    break;
  }
  case 216:
  {
    pushImageFromFS(getIcon("Type_H016_64"), middleWidth - 78, yposition, tft);
    break;
  }
  case 217:
  {
    pushImageFromFS(getIcon("Type_H017_64"), middleWidth - 76, yposition, tft);
    break;
  }
  case 218:
  {
    pushImageFromFS(getIcon("Type_H018_64"), middleWidth - 52, yposition, tft);
    break;
  }
  case 219:
  {
    pushImageFromFS(getIcon("Type_H019_64"), middleWidth - 65, yposition, tft);
    break;
  }
  case 220:
  {
    pushImageFromFS(getIcon("Type_H020_64"), middleWidth - 84, yposition, tft);
    break;
  }
  case 221:
  {
    pushImageFromFS(getIcon("Type_H021_64"), middleWidth - 72, yposition, tft);
    break;
  }
  case 222:
  {
    pushImageFromFS(getIcon("Type_H022_64"), middleWidth - 72, yposition, tft);
    break;
  }
  case 301:
  {
    pushImageFromFS(getIcon("Type_U001_64"), middleWidth - 45, yposition, tft);
    break;
  }
  case 302:
  {
    pushImageFromFS(getIcon("Type_U002_64"), middleWidth - 45, yposition, tft);
    break;
  }
  case 401:
  {
    pushImageFromFS(getIcon("Type_R001_64"), middleWidth - 33, yposition, tft);
    break;
  }
  case 402:
  {
    pushImageFromFS(getIcon("Type_R001_64"), middleWidth - 33, yposition, tft);
    // pushImageFromFS(getIcon("Type_R002_64"), middleWidth - 33, yposition, tft);
    break;
  }
  case 403:
  {
    pushImageFromFS(getIcon("Type_R003_64"), middleWidth - 73, yposition, tft);
    break;
  }
  case 404:
  {
    pushImageFromFS(getIcon("Type_R003_64"), middleWidth - 73, yposition, tft);
    // pushImageFromFS(getIcon("Type_R004_64"), middleWidth - 73, yposition, tft);
    break;
  }
  case 405:
  {
    pushImageFromFS(getIcon("Type_R005_64"), middleWidth - 80, yposition, tft);
    break;
  }
  case 406:
  {
    pushImageFromFS(getIcon("Type_R006_64"), middleWidth - 60, yposition, tft);
    break;
  }
  case 407:
  {
    pushImageFromFS(getIcon("Type_R007_64"), middleWidth - 60, yposition, tft);
    break;
  }
  case 408:
  {
    pushImageFromFS(getIcon("Type_R008_64"), middleWidth - 66, yposition, tft);
    break;
  }

  case 501:
  {
    pushImageFromFS(getIcon("Type_T001_64"), middleWidth - 32, yposition, tft);
    break;
  }
  case 502:
  {
    pushImageFromFS(getIcon("Type_T001_64"), middleWidth - 32, yposition, tft);
    // pushImageFromFS(getIcon("Type_T002_64"), middleWidth - 32, yposition, tft);
    break;
  }
  case 503:
  {
    pushImageFromFS(getIcon("Type_T003_64"), middleWidth - 60, yposition, tft);
    break;
  }
  case 504:
  {
    pushImageFromFS(getIcon("Type_T004_64"), middleWidth - 56, yposition, tft);
    break;
  }
  case 505:
  {
    pushImageFromFS(getIcon("Type_T005_64"), middleWidth - 66, yposition, tft);
    break;
  }
  case 506:
  {
    pushImageFromFS(getIcon("Type_T006_64"), middleWidth - 74, yposition, tft);
    break;
  }
  case 507:
  {
    pushImageFromFS(getIcon("Type_T007_64"), middleWidth - 56, yposition, tft);
    break;
  }
  case 508:
  {
    pushImageFromFS(getIcon("Type_T008_64"), middleWidth - 64, yposition, tft);
    break;
  }
  case 509:
  {
    pushImageFromFS(getIcon("Type_T009_64"), middleWidth - 64, yposition, tft);
    break;
  }
  case 510:
  {
    pushImageFromFS(getIcon("Type_T010_64"), middleWidth - 62, yposition, tft);
    break;
  }
  case 511:
  {
    pushImageFromFS(getIcon("Type_T011_64"), middleWidth - 90, yposition, tft);
    break;
  }
  case 512:
  {
    pushImageFromFS(getIcon("Type_T012_64"), middleWidth - 86, yposition, tft);
    break;
  }
  case 513:
  {
    pushImageFromFS(getIcon("Type_T013_64"), middleWidth - 65, yposition, tft);
    break;
  }
  case 514:
  {
    pushImageFromFS(getIcon("Type_T014_64"), middleWidth - 62, yposition, tft);
    break;
  }
  case 515:
  {
    pushImageFromFS(getIcon("Type_T015_64"), middleWidth - 65, yposition, tft);
    break;
  }
  case 516:
  {
    pushImageFromFS(getIcon("Type_T016_64"), middleWidth - 62, yposition, tft);
    break;
  }
  case 517:
  {
    pushImageFromFS(getIcon("Type_T017_64"), middleWidth - 66, yposition, tft);
    break;
  }
  case 518:
  {
    pushImageFromFS(getIcon("Type_T018_64"), middleWidth - 65, yposition, tft);
    break;
  }
  case 519:
  {
    pushImageFromFS(getIcon("Type_T019_64"), middleWidth - 62, yposition, tft);
    break;
  }
  case 520:
  {
    pushImageFromFS(getIcon("Type_T020_64"), middleWidth - 59, yposition, tft);
    break;
  }
  case 521:
  {
    pushImageFromFS(getIcon("Type_T021_64"), middleWidth - 55, yposition, tft);
    break;
  }

  case 601:
  {
    pushImageFromFS(getIcon("Type_P001_64"), middleWidth - 62, yposition, tft);
    break;
  }
  case 602:
  {
    pushImageFromFS(getIcon("Type_P002_64"), middleWidth - 62, yposition, tft);
    break;
  }
  case 603:
  {
    pushImageFromFS(getIcon("Type_P003_64"), middleWidth - 62, yposition, tft);
    break;
  }
  case 604:
  {
    pushImageFromFS(getIcon("Type_P004_64"), middleWidth - 62, yposition, tft);
    break;
  }
  case 605:
  {
    pushImageFromFS(getIcon("Type_P005_64"), middleWidth - 62, yposition, tft);
    break;
  }
  case 606:
  {
    pushImageFromFS(getIcon("Type_P006_64"), middleWidth - 62, yposition, tft);
    break;
  }

  case 1:
  {
    pushImageFromFS(getIcon("Type_D001_64"), middleWidth - 32, yposition, tft);
    break;
  }
  default:
  {
    pushImageFromFS(getIcon("Type_D000_64"), middleWidth - 32, yposition, tft);
    break;
  }
  }
}

void drawAlarmPageDetail_h(TFT_eSPI &tft, TFT_eSprite &sprAlarm1, boolean showComment, int alarm)
{
  unsigned int displayWidth = tft.getViewportWidth();
  unsigned int displayHeight = tft.getViewportHeight();
  unsigned int middleWidth = round(displayWidth / 2);
  unsigned int middleHeight = round(displayHeight / 2);

  cleanSprite(sprAlarm1);

  unsigned int yposition = middleHeight - 64;
  tft.fillRect(0, 19, (displayWidth - 19), displayHeight, TFT_WHITE);
  sprAlarm1.createSprite(displayWidth - 19, displayHeight - 19);
  sprAlarm1.fillSprite(TFT_WHITE);
  sprAlarm1.setTextDatum(TL_DATUM);
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
  sprAlarm1.drawString(alarmText, displayWidth - (getSmoothTextSize(alarmText, 24) + 25), 2);
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
    alarmAdress.replace(", ", "\n");
  }
  sprAlarm1.drawString(textAdress, 1, 28);
  if (giessen_mode == true)
  {
    sprAlarm1.loadFont("GiessenFutura24");
  }
  else
  {
    sprAlarm1.loadFont("JostMedium24");
  }
  sprAlarm1.drawString(alarmAdress, 1, 44);
  sprAlarm1.pushSprite(0, 19);
  sprAlarm1.unloadFont();
  unsigned int pictureOffset = 2;
  switch (getAlarmType(alarm))
  {
  case 101:
  {
    pushImageFromFS(getIcon("Type_F001_24"), pictureOffset, yposition, tft);
    break;
  }
  case 102:
  {
    pushImageFromFS(getIcon("Type_F002_24"), pictureOffset, yposition, tft);
    break;
  }
  case 103:
  {
    pushImageFromFS(getIcon("Type_F003_24"), pictureOffset, yposition, tft);
    break;
  }
  case 104:
  {
    pushImageFromFS(getIcon("Type_F004_24"), pictureOffset, yposition, tft);
    break;
  }
  case 105:
  {
    pushImageFromFS(getIcon("Type_F005_24"), pictureOffset, yposition, tft);
    break;
  }
  case 106:
  {
    pushImageFromFS(getIcon("Type_F006_24"), pictureOffset, yposition, tft);
    break;
  }
  case 107:
  {
    pushImageFromFS(getIcon("Type_F007_24"), pictureOffset, yposition, tft);
    break;
  }
  case 108:
  {
    pushImageFromFS(getIcon("Type_F008_24"), pictureOffset, yposition, tft);
    break;
  }
  case 109:
  {
    pushImageFromFS(getIcon("Type_F009_24"), pictureOffset, yposition, tft);
    break;
  }
  case 110:
  {
    pushImageFromFS(getIcon("Type_F010_24"), pictureOffset, yposition, tft);
    break;
  }
  case 111:
  {
    pushImageFromFS(getIcon("Type_F011_24"), pictureOffset, yposition, tft);
    break;
  }
  case 112:
  {
    pushImageFromFS(getIcon("Type_F012_24"), pictureOffset, yposition, tft);
    break;
  }
  case 113:
  {
    pushImageFromFS(getIcon("Type_F013_24"), pictureOffset, yposition, tft);
    break;
  }
  case 114:
  {
    pushImageFromFS(getIcon("Type_F014_24"), pictureOffset, yposition, tft);
    break;
  }
  case 115:
  {
    pushImageFromFS(getIcon("Type_F015_24"), pictureOffset, yposition, tft);
    break;
  }
  case 116:
  {
    pushImageFromFS(getIcon("Type_F016_24"), pictureOffset, yposition, tft);
    break;
  }
  case 117:
  {
    pushImageFromFS(getIcon("Type_F017_24"), pictureOffset, yposition, tft);
    break;
  }
  case 118:
  {
    pushImageFromFS(getIcon("Type_F018_24"), pictureOffset, yposition, tft);
    break;
  }
  case 119:
  {
    pushImageFromFS(getIcon("Type_F019_24"), pictureOffset, yposition, tft);
    break;
  }
  case 120:
  {
    pushImageFromFS(getIcon("Type_F020_24"), pictureOffset, yposition, tft);
    break;
  }
  case 121:
  {
    pushImageFromFS(getIcon("Type_F021_24"), pictureOffset, yposition, tft);
    break;
  }
  case 122:
  {
    pushImageFromFS(getIcon("Type_F021_24"), pictureOffset, yposition, tft);
    // pushImageFromFS(getIcon("Type_F022_24"), pictureOffset, yposition, tft);
    break;
  }
  case 201:
  {
    pushImageFromFS(getIcon("Type_H001_24"), pictureOffset, yposition, tft);
    break;
  }
  case 202:
  {
    pushImageFromFS(getIcon("Type_H002_24"), pictureOffset, yposition, tft);
    break;
  }
  case 203:
  {
    pushImageFromFS(getIcon("Type_H003_24"), pictureOffset, yposition, tft);
    break;
  }
  case 204:
  {
    pushImageFromFS(getIcon("Type_H004_24"), pictureOffset, yposition, tft);
    break;
  }
  case 205:
  {
    pushImageFromFS(getIcon("Type_H005_24"), pictureOffset, yposition, tft);
    break;
  }
  case 206:
  {
    pushImageFromFS(getIcon("Type_H006_24"), pictureOffset, yposition, tft);
    break;
  }
  case 207:
  {
    pushImageFromFS(getIcon("Type_H007_24"), pictureOffset, yposition, tft);
    break;
  }
  case 208:
  {
    pushImageFromFS(getIcon("Type_H008_24"), pictureOffset, yposition, tft);
    break;
  }
  case 209:
  {
    pushImageFromFS(getIcon("Type_H009_24"), pictureOffset, yposition, tft);
    break;
  }
  case 210:
  {
    pushImageFromFS(getIcon("Type_H010_24"), pictureOffset, yposition, tft);
    break;
  }
  case 211:
  {
    pushImageFromFS(getIcon("Type_H011_24"), pictureOffset, yposition, tft);
    break;
  }
  case 212:
  {
    pushImageFromFS(getIcon("Type_H012_24"), pictureOffset, yposition, tft);
    break;
  }
  case 213:
  {
    pushImageFromFS(getIcon("Type_H013_24"), pictureOffset, yposition, tft);
    break;
  }
  case 214:
  {
    pushImageFromFS(getIcon("Type_H014_24"), pictureOffset, yposition, tft);
    break;
  }
  case 215:
  {
    pushImageFromFS(getIcon("Type_H015_24"), pictureOffset, yposition, tft);
    break;
  }
  case 216:
  {
    pushImageFromFS(getIcon("Type_H016_24"), pictureOffset, yposition, tft);
    break;
  }
  case 217:
  {
    pushImageFromFS(getIcon("Type_H017_24"), pictureOffset, yposition, tft);
    break;
  }
  case 218:
  {
    pushImageFromFS(getIcon("Type_H018_24"), pictureOffset, yposition, tft);
    break;
  }
  case 219:
  {
    pushImageFromFS(getIcon("Type_H019_24"), pictureOffset, yposition, tft);
    break;
  }
  case 220:
  {
    pushImageFromFS(getIcon("Type_H020_24"), pictureOffset, yposition, tft);
    break;
  }
  case 221:
  {
    pushImageFromFS(getIcon("Type_H021_24"), pictureOffset, yposition, tft);
    break;
  }
  case 222:
  {
    pushImageFromFS(getIcon("Type_H022_24"), pictureOffset, yposition, tft);
    break;
  }
  case 301:
  {
    pushImageFromFS(getIcon("Type_U001_24"), pictureOffset, yposition, tft);
    break;
  }
  case 302:
  {
    pushImageFromFS(getIcon("Type_U002_24"), pictureOffset, yposition, tft);
    break;
  }
  case 401:
  {
    pushImageFromFS(getIcon("Type_R001_24"), pictureOffset, yposition, tft);
    break;
  }
  case 402:
  {
    pushImageFromFS(getIcon("Type_R001_24"), pictureOffset, yposition, tft);
    // pushImageFromFS(getIcon("Type_R002_24"), pictureOffset, yposition, tft);
    break;
  }
  case 403:
  {
    pushImageFromFS(getIcon("Type_R003_24"), pictureOffset, yposition, tft);
    break;
  }
  case 404:
  {
    pushImageFromFS(getIcon("Type_R003_24"), pictureOffset, yposition, tft);
    // pushImageFromFS(getIcon("Type_R004_24"), pictureOffset, yposition, tft);
    break;
  }
  case 405:
  {
    pushImageFromFS(getIcon("Type_R005_24"), pictureOffset, yposition, tft);
    break;
  }
  case 406:
  {
    pushImageFromFS(getIcon("Type_R006_24"), pictureOffset, yposition, tft);
    break;
  }
  case 407:
  {
    pushImageFromFS(getIcon("Type_R007_24"), pictureOffset, yposition, tft);
    break;
  }
  case 408:
  {
    pushImageFromFS(getIcon("Type_R008_24"), pictureOffset, yposition, tft);
    break;
  }
  case 501:
  {
    pushImageFromFS(getIcon("Type_T001_24"), pictureOffset, yposition, tft);
    break;
  }
  case 502:
  {
    pushImageFromFS(getIcon("Type_T001_24"), pictureOffset, yposition, tft);
    // pushImageFromFS(getIcon("Type_T002_24"), pictureOffset, yposition, tft);
    break;
  }
  case 503:
  {
    pushImageFromFS(getIcon("Type_T003_24"), pictureOffset, yposition, tft);
    break;
  }
  case 504:
  {
    pushImageFromFS(getIcon("Type_T004_24"), pictureOffset, yposition, tft);
    break;
  }
  case 505:
  {
    pushImageFromFS(getIcon("Type_T005_24"), pictureOffset, yposition, tft);
    break;
  }
  case 506:
  {
    pushImageFromFS(getIcon("Type_T006_24"), pictureOffset, yposition, tft);
    break;
  }
  case 507:
  {
    pushImageFromFS(getIcon("Type_T007_24"), pictureOffset, yposition, tft);
    break;
  }
  case 508:
  {
    pushImageFromFS(getIcon("Type_T008_24"), pictureOffset, yposition, tft);
    break;
  }
  case 509:
  {
    pushImageFromFS(getIcon("Type_T009_24"), pictureOffset, yposition, tft);
    break;
  }
  case 510:
  {
    pushImageFromFS(getIcon("Type_T010_24"), pictureOffset, yposition, tft);
    break;
  }
  case 511:
  {
    pushImageFromFS(getIcon("Type_T011_24"), pictureOffset, yposition, tft);
    break;
  }
  case 512:
  {
    pushImageFromFS(getIcon("Type_T012_24"), pictureOffset, yposition, tft);
    break;
  }
  case 513:
  {
    pushImageFromFS(getIcon("Type_T013_24"), pictureOffset, yposition, tft);
    break;
  }
  case 514:
  {
    pushImageFromFS(getIcon("Type_T014_24"), pictureOffset, yposition, tft);
    break;
  }
  case 515:
  {
    pushImageFromFS(getIcon("Type_T015_24"), pictureOffset, yposition, tft);
    break;
  }
  case 516:
  {
    pushImageFromFS(getIcon("Type_T016_24"), pictureOffset, yposition, tft);
    break;
  }
  case 517:
  {
    pushImageFromFS(getIcon("Type_T017_24"), pictureOffset, yposition, tft);
    break;
  }
  case 518:
  {
    pushImageFromFS(getIcon("Type_T018_24"), pictureOffset, yposition, tft);
    break;
  }
  case 519:
  {
    pushImageFromFS(getIcon("Type_T019_24"), pictureOffset, yposition, tft);
    break;
  }
  case 520:
  {
    pushImageFromFS(getIcon("Type_T020_24"), pictureOffset, yposition, tft);
    break;
  }
  case 521:
  {
    pushImageFromFS(getIcon("Type_T021_24"), pictureOffset, yposition, tft);
    break;
  }

  case 601:
  {
    pushImageFromFS(getIcon("Type_P001_24"), pictureOffset, yposition, tft);
    break;
  }
  case 602:
  {
    pushImageFromFS(getIcon("Type_P002_24"), pictureOffset, yposition, tft);
    break;
  }
  case 603:
  {
    pushImageFromFS(getIcon("Type_P003_24"), pictureOffset, yposition, tft);
    break;
  }
  case 604:
  {
    pushImageFromFS(getIcon("Type_P004_24"), pictureOffset, yposition, tft);
    break;
  }
  case 605:
  {
    pushImageFromFS(getIcon("Type_P005_24"), pictureOffset, yposition, tft);
    break;
  }
  case 606:
  {
    pushImageFromFS(getIcon("Type_P006_24"), pictureOffset, yposition, tft);
    break;
  }
  case 1:
  {
    pushImageFromFS(getIcon("Type_D001_24"), pictureOffset, yposition, tft);
    break;
  }
  default:
  {
    pushImageFromFS(getIcon("Type_D000_24"), pictureOffset, yposition, tft);
    break;
  }
  }
}