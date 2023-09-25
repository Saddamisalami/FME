#include <Arduino.h>
#include <TFT_eFEX.h>
#include <TFT_eSPI.h>

#include "alarm\functions.h"
#include "date\functions.h"
#include "display\functions.h"
#include "filesystem\functions.h"
#include "graphic\functions.h"
#include "i18n\functions.h"
#include "messages\functions.h"
#include "system\info.h"
#include "text\functions.h"
#include "time\functions.h"

#include "variables.h"

void drawMenu_v(TFT_eSPI &tft, TFT_eSprite &sprMenu1, TFT_eSprite &sprMenu2)
{
  unsigned int displayWidth = tft.getViewportWidth();
  unsigned int displayHeight = tft.getViewportHeight();
  unsigned int middleWidth = round(displayWidth / 2);
  unsigned int middleHeight = round(displayHeight / 2);
  unsigned int currentMenuGroup = currentMenu;

  cleanSprite(sprMenu1);
  cleanSprite(sprMenu2);

  if (currentMenu >= 10)
  {
    currentMenuGroup = nth_digit(currentMenu, 2);
    if (currentMenu >= 100)
    {
      currentMenuGroup = nth_digit(currentMenu, 3);
      if (currentMenu >= 1000)
      {
        currentMenuGroup = nth_digit(currentMenu, 4);
        if (currentMenu >= 10000)
        {
          currentMenuGroup = nth_digit(currentMenu, 5);
        }
      }
    }
  }

  sprMenu1.createSprite(displayWidth, 48);
  sprMenu1.fillSprite(TFT_WHITE);
  unsigned int yposition = middleHeight - 24;
  unsigned int yposition1 = yposition - 48;
  tft.fillRect(0, 19, displayWidth, displayHeight - 38, TFT_WHITE);
  boolean showSubSprite = false;
  if (currentMenu != 0)
  {
    const unsigned int textPositionTop = 8;
    const unsigned int textPositionBottom = 27;
    sprMenu1.setTextDatum(MC_DATUM);
    sprMenu1.setColorDepth(16);
    sprMenu1.setTextColor(TFT_BLACK, TFT_WHITE);
    if (giessen_mode == true)
    {
      sprMenu1.loadFont("GiessenFutura12");
    }
    else
    {
      sprMenu1.loadFont("JostMedium12");
    }
    sprMenu1.drawNumber(currentMenuGroup, displayWidth - 6, textPositionTop);
    if (giessen_mode == true)
    {
      sprMenu1.loadFont("GiessenFutura16");
    }
    else
    {
      sprMenu1.loadFont("JostMedium16");
    }
    if (currentMenu == 1)
    {
      sprMenu1.drawString(getI18n("menu_menu"), displayWidth / 2, textPositionTop);
      if (giessen_mode == true)
      {
        sprMenu1.loadFont("GiessenFutura24");
      }
      else
      {
        sprMenu1.loadFont("JostMedium24");
      }
      sprMenu1.drawString(getI18n("menu_alarmmessages"), displayWidth / 2, textPositionBottom);
      pushImageFromFS(getIcon("Alarm_48"), middleWidth - 31, yposition, tft);
    }
    else if (currentMenu == 11)
    {
      sprMenu1.drawString(getI18n("menu_alarmmessages"), displayWidth / 2, textPositionTop);
      sprMenu2.createSprite(displayWidth, 140);
      sprMenu2.fillSprite(TFT_WHITE);
      sprMenu2.setTextDatum(MC_DATUM);
      sprMenu2.setColorDepth(16);
      sprMenu2.setTextColor(TFT_BLACK, TFT_WHITE);
      if (giessen_mode == true)
      {
        sprMenu2.loadFont("GiessenFutura16");
      }
      else
      {
        sprMenu2.loadFont("JostMedium16");
      }
      sprMenu2.drawString(getAlarmTypeText(getAlarmType(displayAlarm)), displayWidth / 2, 10);

      unsigned int alarmLength = getAlarmAdress(displayAlarm).length();
      unsigned int maxTextSize = 23;
      if (alarmLength > maxTextSize)
      {
        unsigned int splitPos = getIndexOfBeforeLastString(getAlarmAdress(displayAlarm), ',', maxTextSize);
        sprMenu2.drawString(getAlarmAdress(displayAlarm).substring(0, splitPos), displayWidth / 2, 24);
        sprMenu2.drawString(getAlarmAdress(displayAlarm).substring(splitPos + 2, alarmLength), displayWidth / 2, 38);
      }
      else
      {
        sprMenu2.drawString(getAlarmAdress(displayAlarm), displayWidth / 2, 23);
      }

      unsigned int commentLength = getAlarmComment(displayAlarm).length();
      if (commentLength > maxTextSize)
      {
        unsigned int splitPos = getIndexOfBeforeLastString(getAlarmComment(displayAlarm), ' ', maxTextSize);
        sprMenu2.drawString(getAlarmComment(displayAlarm).substring(0, splitPos), displayWidth / 2, 52);
        sprMenu2.drawString(getAlarmComment(displayAlarm).substring(splitPos, commentLength), displayWidth / 2, 66);
      }
      else
      {
        sprMenu2.drawString(getAlarmComment(displayAlarm), displayWidth / 2, 49);
      }
      unsigned int yposition2 = yposition;
      yposition = yposition + 36;
      switch (getAlarmType(displayAlarm))
      {
      case 101:
      {
        pushImageFromFS(getIcon("Type_F001_24"), (displayWidth / 2) - 9, yposition2, tft);
        break;
      }
      case 102:
      {
        pushImageFromFS(getIcon("Type_F002_24"), (displayWidth / 2) - 18, yposition2, tft);
        break;
      }
      case 103:
      {
        pushImageFromFS(getIcon("Type_F003_24"), (displayWidth / 2) - 28, yposition2, tft);
        break;
      }
      case 104:
      {
        pushImageFromFS(getIcon("Type_F004_24"), (displayWidth / 2) - 26, yposition2, tft);
        break;
      }
      case 105:
      {
        pushImageFromFS(getIcon("Type_F005_24"), (displayWidth / 2) - 37, yposition2, tft);
        break;
      }
      case 106:
      {
        pushImageFromFS(getIcon("Type_F006_24"), (displayWidth / 2) - 35, yposition2, tft);
        break;
      }
      case 107:
      {
        pushImageFromFS(getIcon("Type_F007_24"), (displayWidth / 2) - 20, yposition2, tft);
        break;
      }
      case 108:
      {
        pushImageFromFS(getIcon("Type_F008_24"), (displayWidth / 2) - 33, yposition2, tft);
        break;
      }
      case 109:
      {
        pushImageFromFS(getIcon("Type_F009_24"), (displayWidth / 2) - 28, yposition2, tft);
        break;
      }
      case 110:
      {
        pushImageFromFS(getIcon("Type_F010_24"), (displayWidth / 2) - 43, yposition2, tft);
        break;
      }
      case 111:
      {
        pushImageFromFS(getIcon("Type_F011_24"), (displayWidth / 2) - 16, yposition2, tft);
        break;
      }
      case 112:
      {
        pushImageFromFS(getIcon("Type_F012_24"), (displayWidth / 2) - 24, yposition2, tft);
        break;
      }
      case 113:
      {
        pushImageFromFS(getIcon("Type_F013_24"), (displayWidth / 2) - 24, yposition2, tft);
        break;
      }
      case 114:
      {
        pushImageFromFS(getIcon("Type_F014_24"), (displayWidth / 2) - 18, yposition2, tft);
        break;
      }
      case 115:
      {
        pushImageFromFS(getIcon("Type_F015_24"), (displayWidth / 2) - 29, yposition2, tft);
        break;
      }
      case 116:
      {
        pushImageFromFS(getIcon("Type_F016_24"), (displayWidth / 2) - 23, yposition2, tft);
        break;
      }
      case 117:
      {
        pushImageFromFS(getIcon("Type_F017_24"), (displayWidth / 2) - 23, yposition2, tft);
        break;
      }
      case 118:
      {
        pushImageFromFS(getIcon("Type_F018_24"), (displayWidth / 2) - 21, yposition2, tft);
        break;
      }
      case 119:
      {
        pushImageFromFS(getIcon("Type_F019_24"), (displayWidth / 2) - 35, yposition2, tft);
        break;
      }
      case 120:
      {
        pushImageFromFS(getIcon("Type_F020_24"), (displayWidth / 2) - 34, yposition2, tft);
        break;
      }
      case 121:
      {
        pushImageFromFS(getIcon("Type_F021_24"), (displayWidth / 2) - 25, yposition2, tft);
        break;
      }
      case 122:
      {
        pushImageFromFS(getIcon("Type_F021_24"), (displayWidth / 2) - 25, yposition2, tft);
        // pushImageFromFS(getIcon("Type_F022_24"), (displayWidth / 2) - 25, yposition2, tft);
        break;
      }
      case 201:
      {
        pushImageFromFS(getIcon("Type_H001_24"), (displayWidth / 2) - 15, yposition2, tft);
        break;
      }
      case 202:
      {
        pushImageFromFS(getIcon("Type_H002_24"), (displayWidth / 2) - 27, yposition2, tft);
        break;
      }
      case 203:
      {
        pushImageFromFS(getIcon("Type_H003_24"), (displayWidth / 2) - 19, yposition2, tft);
        break;
      }
      case 204:
      {
        pushImageFromFS(getIcon("Type_H004_24"), (displayWidth / 2) - 19, yposition2, tft);
        break;
      }
      case 205:
      {
        pushImageFromFS(getIcon("Type_H005_24"), (displayWidth / 2) - 13, yposition2, tft);
        break;
      }
      case 206:
      {
        pushImageFromFS(getIcon("Type_H006_24"), (displayWidth / 2) - 20, yposition2, tft);
        break;
      }
      case 207:
      {
        pushImageFromFS(getIcon("Type_H007_24"), (displayWidth / 2) - 18, yposition2, tft);
        break;
      }
      case 208:
      {
        pushImageFromFS(getIcon("Type_H008_24"), (displayWidth / 2) - 18, yposition2, tft);
        break;
      }
      case 209:
      {
        pushImageFromFS(getIcon("Type_H009_24"), (displayWidth / 2) - 18, yposition2, tft);
        break;
      }
      case 210:
      {
        pushImageFromFS(getIcon("Type_H010_24"), (displayWidth / 2) - 13, yposition2, tft);
        break;
      }
      case 211:
      {
        pushImageFromFS(getIcon("Type_H011_24"), (displayWidth / 2) - 22, yposition2, tft);
        break;
      }
      case 212:
      {
        pushImageFromFS(getIcon("Type_H012_24"), (displayWidth / 2) - 19, yposition2, tft);
        break;
      }
      case 213:
      {
        pushImageFromFS(getIcon("Type_H013_24"), (displayWidth / 2) - 32, yposition2, tft);
        break;
      }
      case 214:
      {
        pushImageFromFS(getIcon("Type_H014_24"), (displayWidth / 2) - 30, yposition2, tft);
        break;
      }
      case 215:
      {
        pushImageFromFS(getIcon("Type_H015_24"), (displayWidth / 2) - 30, yposition2, tft);
        break;
      }
      case 216:
      {
        pushImageFromFS(getIcon("Type_H016_24"), (displayWidth / 2) - 29, yposition2, tft);
        break;
      }
      case 217:
      {
        pushImageFromFS(getIcon("Type_H017_24"), (displayWidth / 2) - 29, yposition2, tft);
        break;
      }
      case 218:
      {
        pushImageFromFS(getIcon("Type_H018_24"), (displayWidth / 2) - 20, yposition2, tft);
        break;
      }
      case 219:
      {
        pushImageFromFS(getIcon("Type_H019_24"), (displayWidth / 2) - 25, yposition2, tft);
        break;
      }
      case 220:
      {
        pushImageFromFS(getIcon("Type_H020_24"), (displayWidth / 2) - 32, yposition2, tft);
        break;
      }
      case 221:
      {
        pushImageFromFS(getIcon("Type_H021_24"), (displayWidth / 2) - 27, yposition2, tft);
        break;
      }
      case 222:
      {
        pushImageFromFS(getIcon("Type_H022_24"), (displayWidth / 2) - 27, yposition2, tft);
        break;
      }
      case 301:
      {
        pushImageFromFS(getIcon("Type_U001_24"), (displayWidth / 2) - 17, yposition2, tft);
        break;
      }
      case 302:
      {
        pushImageFromFS(getIcon("Type_U002_24"), (displayWidth / 2) - 17, yposition2, tft);
        break;
      }
      case 401:
      {
        pushImageFromFS(getIcon("Type_R001_24"), (displayWidth / 2) - 13, yposition2, tft);
        break;
      }
      case 402:
      {
        pushImageFromFS(getIcon("Type_R001_24"), (displayWidth / 2) - 13, yposition2, tft);
        // pushImageFromFS(getIcon("Type_R002_24"), (displayWidth / 2) - 13, yposition2, tft);
        break;
      }
      case 403:
      {
        pushImageFromFS(getIcon("Type_R003_24"), (displayWidth / 2) - 27, yposition2, tft);
        break;
      }
      case 404:
      {
        pushImageFromFS(getIcon("Type_R003_24"), (displayWidth / 2) - 27, yposition2, tft);
        // pushImageFromFS(getIcon("Type_R004_24"), (displayWidth / 2) - 27, yposition2, tft);
        break;
      }
      case 405:
      {
        pushImageFromFS(getIcon("Type_R005_24"), (displayWidth / 2) - 30, yposition2, tft);
        break;
      }
      case 406:
      {
        pushImageFromFS(getIcon("Type_R006_24"), (displayWidth / 2) - 23, yposition2, tft);
        break;
      }
      case 407:
      {
        pushImageFromFS(getIcon("Type_R007_24"), (displayWidth / 2) - 23, yposition2, tft);
        break;
      }
      case 408:
      {
        pushImageFromFS(getIcon("Type_R008_24"), (displayWidth / 2) - 25, yposition2, tft);
        break;
      }
      case 501:
      {
        pushImageFromFS(getIcon("Type_T001_24"), (displayWidth / 2) - 12, yposition2, tft);
        break;
      }
      case 502:
      {
        pushImageFromFS(getIcon("Type_T001_24"), (displayWidth / 2) - 12, yposition2, tft);
        // pushImageFromFS(getIcon("Type_T002_24"), (displayWidth / 2) - 12, yposition2, tft);
        break;
      }
      case 503:
      {
        pushImageFromFS(getIcon("Type_T003_24"), (displayWidth / 2) - 23, yposition2, tft);
        break;
      }
      case 504:
      {
        pushImageFromFS(getIcon("Type_T004_24"), (displayWidth / 2) - 22, yposition2, tft);
        break;
      }
      case 505:
      {
        pushImageFromFS(getIcon("Type_T005_24"), (displayWidth / 2) - 25, yposition2, tft);
        break;
      }
      case 506:
      {
        pushImageFromFS(getIcon("Type_T006_24"), (displayWidth / 2) - 28, yposition2, tft);
        break;
      }
      case 507:
      {
        pushImageFromFS(getIcon("Type_T007_24"), (displayWidth / 2) - 22, yposition2, tft);
        break;
      }
      case 508:
      {
        pushImageFromFS(getIcon("Type_T008_24"), (displayWidth / 2) - 24, yposition2, tft);
        break;
      }
      case 509:
      {
        pushImageFromFS(getIcon("Type_T009_24"), (displayWidth / 2) - 24, yposition2, tft);
        break;
      }
      case 510:
      {
        pushImageFromFS(getIcon("Type_T010_24"), (displayWidth / 2) - 23, yposition2, tft);
        break;
      }
      case 511:
      {
        pushImageFromFS(getIcon("Type_T011_24"), (displayWidth / 2) - 34, yposition2, tft);
        break;
      }
      case 512:
      {
        pushImageFromFS(getIcon("Type_T012_24"), (displayWidth / 2) - 33, yposition2, tft);
        break;
      }
      case 513:
      {
        pushImageFromFS(getIcon("Type_T013_24"), (displayWidth / 2) -24, yposition2, tft);
        break;
      }
      case 514:
      {
        pushImageFromFS(getIcon("Type_T014_24"), (displayWidth / 2) - 23, yposition2, tft);
        break;
      }
      case 515:
      {
        pushImageFromFS(getIcon("Type_T015_24"), (displayWidth / 2) - 24, yposition2, tft);
        break;
      }
      case 516:
      {
        pushImageFromFS(getIcon("Type_T016_24"), (displayWidth / 2) - 26, yposition2, tft);
        break;
      }
      case 517:
      {
        pushImageFromFS(getIcon("Type_T017_24"), (displayWidth / 2) - 25, yposition2, tft);
        break;
      }
      case 518:
      {
        pushImageFromFS(getIcon("Type_T018_24"), (displayWidth / 2) - 24, yposition2, tft);
        break;
      }
      case 519:
      {
        pushImageFromFS(getIcon("Type_T019_24"), (displayWidth / 2) - 23, yposition2, tft);
        break;
      }
      case 520:
      {
        pushImageFromFS(getIcon("Type_T020_24"), (displayWidth / 2) - 22, yposition2, tft);
        break;
      }
      case 521:
      {
        pushImageFromFS(getIcon("Type_T021_24"), (displayWidth / 2) - 21, yposition2, tft);
        break;
      }

      case 601:
      {
        pushImageFromFS(getIcon("Type_P001_24"), (displayWidth / 2) - 24, yposition2, tft);
        break;
      }
      case 602:
      {
        pushImageFromFS(getIcon("Type_P002_24"), (displayWidth / 2) - 24, yposition2, tft);
        break;
      }
      case 603:
      {
        pushImageFromFS(getIcon("Type_P003_24"), (displayWidth / 2) - 23, yposition2, tft);
        break;
      }
      case 604:
      {
        pushImageFromFS(getIcon("Type_P004_24"), (displayWidth / 2) - 24, yposition2, tft);
        break;
      }
      case 605:
      {
        pushImageFromFS(getIcon("Type_P005_24"), (displayWidth / 2) - 24, yposition2, tft);
        break;
      }
      case 606:
      {
        pushImageFromFS(getIcon("Type_P006_24"), (displayWidth / 2) - 24, yposition2, tft);
        break;
      }
      case 1:
      {
        pushImageFromFS(getIcon("Type_D001_24"), (displayWidth / 2) - 12, yposition2, tft);
        break;
      }
      default:
      {
        pushImageFromFS(getIcon("Type_D000_24"), (displayWidth / 2) - 12, yposition2, tft);
        break;
      }
      }
      showSubSprite = true;
    }
    else if (currentMenu == 2)
    {
      sprMenu1.drawString(getI18n("menu_menu"), displayWidth / 2, textPositionTop);
      if (giessen_mode == true)
      {
        sprMenu1.loadFont("GiessenFutura24");
      }
      else
      {
        sprMenu1.loadFont("JostMedium24");
      }
      sprMenu1.drawString(getI18n("menu_textmessages"), displayWidth / 2, textPositionBottom);
      pushImageFromFS(getIcon("Text_48"), middleWidth - 31, yposition, tft);
    }
    else if (currentMenu == 21)
    {
      sprMenu1.drawString(getI18n("menu_textmessages"), displayWidth / 2, textPositionTop);
      sprMenu2.createSprite(displayWidth, 140);
      sprMenu2.fillSprite(TFT_WHITE);
      sprMenu2.setTextDatum(MC_DATUM);
      sprMenu2.setColorDepth(16);
      sprMenu2.setTextColor(TFT_BLACK, TFT_WHITE);
      if (giessen_mode == true)
      {
        sprMenu2.loadFont("GiessenFutura16");
      }
      else
      {
        sprMenu2.loadFont("JostMedium16");
      }
      sprMenu2.drawString(String(getMessageRead(displayMessage)), displayWidth / 2, 10);
      sprMenu2.drawString(getMessageText(displayMessage), displayWidth / 2, 23);
      showSubSprite = true;
    }
    else if (currentMenu == 3)
    {
      sprMenu1.drawString(getI18n("menu_menu"), displayWidth / 2, textPositionTop);
      if (giessen_mode == true)
      {
        sprMenu1.loadFont("GiessenFutura24");
      }
      else
      {
        sprMenu1.loadFont("JostMedium24");
      }
      sprMenu1.drawString(getI18n("menu_audioprofiles"), displayWidth / 2, textPositionBottom);
      pushImageFromFS(getIcon("Sound100_48"), middleWidth - 24, yposition, tft);
    }
    else if (currentMenu == 31)
    {
      sprMenu1.drawString(getI18n("menu_audioprofiles"), displayWidth / 2, textPositionTop);
      if (giessen_mode == true)
      {
        sprMenu1.loadFont("GiessenFutura24");
      }
      else
      {
        sprMenu1.loadFont("JostMedium24");
      }
      sprMenu1.drawString(getI18n("menu_audio_silent"), displayWidth / 2, textPositionBottom);
      pushImageFromFS(getIcon("Sound000_48"), middleWidth - 24, yposition, tft);
    }
    else if (currentMenu == 32)
    {
      sprMenu1.drawString(getI18n("menu_audioprofiles"), displayWidth / 2, textPositionTop);
      if (giessen_mode == true)
      {
        sprMenu1.loadFont("GiessenFutura24");
      }
      else
      {
        sprMenu1.loadFont("JostMedium24");
      }
      sprMenu1.drawString(getI18n("menu_audio_25"), displayWidth / 2, textPositionBottom);
      pushImageFromFS(getIcon("Sound025_48"), middleWidth - 24, yposition, tft);
    }
    else if (currentMenu == 33)
    {
      sprMenu1.drawString(getI18n("menu_audioprofiles"), displayWidth / 2, textPositionTop);
      if (giessen_mode == true)
      {
        sprMenu1.loadFont("GiessenFutura24");
      }
      else
      {
        sprMenu1.loadFont("JostMedium24");
      }
      sprMenu1.drawString(getI18n("menu_audio_50"), displayWidth / 2, textPositionBottom);
      pushImageFromFS(getIcon("Sound050_48"), middleWidth - 24, yposition, tft);
    }
    else if (currentMenu == 34)
    {
      sprMenu1.drawString(getI18n("menu_audioprofiles"), displayWidth / 2, textPositionTop);
      if (giessen_mode == true)
      {
        sprMenu1.loadFont("GiessenFutura24");
      }
      else
      {
        sprMenu1.loadFont("JostMedium24");
      }
      sprMenu1.drawString(getI18n("menu_audio_75"), displayWidth / 2, textPositionBottom);
      pushImageFromFS(getIcon("Sound075_48"), middleWidth - 24, yposition, tft);
    }
    else if (currentMenu == 35)
    {
      sprMenu1.drawString(getI18n("menu_audioprofiles"), displayWidth / 2, textPositionTop);
      if (giessen_mode == true)
      {
        sprMenu1.loadFont("GiessenFutura24");
      }
      else
      {
        sprMenu1.loadFont("JostMedium24");
      }
      sprMenu1.drawString(getI18n("menu_audio_normal"), displayWidth / 2, textPositionBottom);
      pushImageFromFS(getIcon("Sound100_48"), middleWidth - 24, yposition, tft);
    }
    else if (currentMenu == 4)
    {
      sprMenu1.drawString(getI18n("menu_menu"), displayWidth / 2, textPositionTop);
      if (giessen_mode == true)
      {
        sprMenu1.loadFont("GiessenFutura24");
      }
      else
      {
        sprMenu1.loadFont("JostMedium24");
      }
      sprMenu1.drawString(getI18n("menu_settings"), displayWidth / 2, textPositionBottom);
      pushImageFromFS(getIcon("Setting_48"), middleWidth - 24, yposition, tft);
    }
    else if (currentMenu == 41)
    {
      sprMenu1.drawString(getI18n("menu_settings"), displayWidth / 2, textPositionTop);
      if (giessen_mode == true)
      {
        sprMenu1.loadFont("GiessenFutura24");
      }
      else
      {
        sprMenu1.loadFont("JostMedium24");
      }
      sprMenu1.drawString(getI18n("menu_brightness"), displayWidth / 2, textPositionBottom);
      pushImageFromFS(getIcon("Brightness_48"), middleWidth - 24, yposition, tft);
    }
    else if (currentMenu == 411)
    {
      sprMenu1.drawString(getI18n("menu_brightness"), displayWidth / 2, textPositionTop);
      if (giessen_mode == true)
      {
        sprMenu1.loadFont("GiessenFutura24");
      }
      else
      {
        sprMenu1.loadFont("JostMedium24");
      }
      sprMenu1.drawString(getI18n("menu_brightness_set"), displayWidth / 2, textPositionBottom);
      if (display_level <= 100 && display_level > 90)
      {
        pushImageFromFS(getIcon("Brightness100_48"), middleWidth - 24, yposition, tft);
      }
      else if (display_level <= 90 && display_level > 80)
      {
        pushImageFromFS(getIcon("Brightness090_48"), middleWidth - 24, yposition, tft);
      }
      else if (display_level <= 80 && display_level > 70)
      {
        pushImageFromFS(getIcon("Brightness080_48"), middleWidth - 24, yposition, tft);
      }
      else if (display_level <= 70 && display_level > 60)
      {
        pushImageFromFS(getIcon("Brightness070_48"), middleWidth - 24, yposition, tft);
      }
      else if (display_level <= 60 && display_level > 50)
      {
        pushImageFromFS(getIcon("Brightness060_48"), middleWidth - 24, yposition, tft);
      }
      else if (display_level <= 50 && display_level > 40)
      {
        pushImageFromFS(getIcon("Brightness050_48"), middleWidth - 24, yposition, tft);
      }
      else if (display_level <= 40 && display_level > 30)
      {
        pushImageFromFS(getIcon("Brightness040_48"), middleWidth - 24, yposition, tft);
      }
      else if (display_level <= 30 && display_level > 20)
      {
        pushImageFromFS(getIcon("Brightness030_48"), middleWidth - 24, yposition, tft);
      }
      else if (display_level <= 20 && display_level > 10)
      {
        pushImageFromFS(getIcon("Brightness020_48"), middleWidth - 24, yposition, tft);
      }
      else if (display_level <= 10 && display_level > 0)
      {
        pushImageFromFS(getIcon("Brightness010_48"), middleWidth - 24, yposition, tft);
      }
      else
      {
        pushImageFromFS(getIcon("Brightness000_48"), middleWidth - 24, yposition, tft);
      }
    }
    else if (currentMenu == 42)
    {
      sprMenu1.drawString(getI18n("menu_settings"), displayWidth / 2, textPositionTop);
      if (giessen_mode == true)
      {
        sprMenu1.loadFont("GiessenFutura24");
      }
      else
      {
        sprMenu1.loadFont("JostMedium24");
      }
      sprMenu1.drawString(getI18n("menu_time"), displayWidth / 2, textPositionBottom);
      pushImageFromFS(getIcon("Clock_48"), middleWidth - 24, yposition, tft);
    }
    else if (currentMenu == 421)
    {
      sprMenu1.drawString(getI18n("menu_time"), displayWidth / 2, textPositionTop);
      if (giessen_mode == true)
      {
        sprMenu1.loadFont("GiessenFutura24");
      }
      else
      {
        sprMenu1.loadFont("JostMedium24");
      }
      sprMenu1.drawString(getI18n("menu_time_set"), displayWidth / 2, textPositionBottom);
      sprMenu2.createSprite(displayWidth, 140);
      sprMenu2.fillSprite(TFT_WHITE);
      sprMenu2.setTextDatum(MC_DATUM);
      sprMenu2.setColorDepth(16);
      sprMenu2.setTextColor(TFT_BLACK, TFT_WHITE);
      if (giessen_mode == true)
      {
        sprMenu2.loadFont("GiessenFutura32");
      }
      else
      {
        sprMenu2.loadFont("JostMedium32");
      }
      sprMenu2.drawString(getLeftPaddingString(String(getHour()), '0', 2) + ":" + getLeftPaddingString(String(getMinute()), '0', 2), displayWidth / 2, 20);
      showSubSprite = true;
    }
    else if (currentMenu == 43)
    {
      sprMenu1.drawString(getI18n("menu_settings"), displayWidth / 2, textPositionTop);
      if (giessen_mode == true)
      {
        sprMenu1.loadFont("GiessenFutura24");
      }
      else
      {
        sprMenu1.loadFont("JostMedium24");
      }
      sprMenu1.drawString(getI18n("menu_date"), displayWidth / 2, textPositionBottom);
      pushImageFromFS(getIcon("Calendar_48"), middleWidth - 24, yposition, tft);
    }
    else if (currentMenu == 431)
    {
      sprMenu1.drawString(getI18n("menu_date"), displayWidth / 2, textPositionTop);
      if (giessen_mode == true)
      {
        sprMenu1.loadFont("GiessenFutura24");
      }
      else
      {
        sprMenu1.loadFont("JostMedium24");
      }
      sprMenu1.drawString(getI18n("menu_date_year"), displayWidth / 2, textPositionBottom);
      pushImageFromFS(getIcon("Calendar_48"), middleWidth - 24, yposition, tft);
    }
    else if (currentMenu == 4311)
    {
      sprMenu1.drawString(getI18n("menu_date_year"), displayWidth / 2, textPositionTop);
      if (giessen_mode == true)
      {
        sprMenu1.loadFont("GiessenFutura24");
      }
      else
      {
        sprMenu1.loadFont("JostMedium24");
      }
      sprMenu1.drawString(getI18n("menu_date_year_set"), displayWidth / 2, textPositionBottom);
      sprMenu2.createSprite(displayWidth, 140);
      sprMenu2.fillSprite(TFT_WHITE);
      sprMenu2.setTextDatum(MC_DATUM);
      sprMenu2.setColorDepth(16);
      sprMenu2.setTextColor(TFT_BLACK, TFT_WHITE);
      if (giessen_mode == true)
      {
        sprMenu2.loadFont("GiessenFutura32");
      }
      else
      {
        sprMenu2.loadFont("JostMedium32");
      }
      sprMenu2.drawString(String(getYear()), displayWidth / 2, 20);
      showSubSprite = true;
    }
    else if (currentMenu == 432)
    {
      sprMenu1.drawString(getI18n("menu_date"), displayWidth / 2, textPositionTop);
      if (giessen_mode == true)
      {
        sprMenu1.loadFont("GiessenFutura24");
      }
      else
      {
        sprMenu1.loadFont("JostMedium24");
      }
      sprMenu1.drawString(getI18n("menu_date_month"), displayWidth / 2, textPositionBottom);
      if (getMonth() == 1)
      {
        pushImageFromFS(getIcon("Month_Jan_48"), middleWidth - 24, yposition, tft);
      }
      else if (getMonth() == 2)
      {
        pushImageFromFS(getIcon("Month_Feb_48"), middleWidth - 24, yposition, tft);
      }
      else if (getMonth() == 3)
      {
        pushImageFromFS(getIcon("Month_Mar_48"), middleWidth - 24, yposition, tft);
      }
      else if (getMonth() == 4)
      {
        pushImageFromFS(getIcon("Month_Apr_48"), middleWidth - 24, yposition, tft);
      }
      else if (getMonth() == 5)
      {
        pushImageFromFS(getIcon("Month_May_48"), middleWidth - 24, yposition, tft);
      }
      else if (getMonth() == 6)
      {
        pushImageFromFS(getIcon("Month_Jun_48"), middleWidth - 24, yposition, tft);
      }
      else if (getMonth() == 7)
      {
        pushImageFromFS(getIcon("Month_Jul_48"), middleWidth - 24, yposition, tft);
      }
      else if (getMonth() == 8)
      {
        pushImageFromFS(getIcon("Month_Aug_48"), middleWidth - 24, yposition, tft);
      }
      else if (getMonth() == 9)
      {
        pushImageFromFS(getIcon("Month_Sep_48"), middleWidth - 24, yposition, tft);
      }
      else if (getMonth() == 10)
      {
        pushImageFromFS(getIcon("Month_Oct_48"), middleWidth - 24, yposition, tft);
      }
      else if (getMonth() == 11)
      {
        pushImageFromFS(getIcon("Month_Nov_48"), middleWidth - 24, yposition, tft);
      }
      else if (getMonth() == 12)
      {
        pushImageFromFS(getIcon("Month_Dec_48"), middleWidth - 24, yposition, tft);
      }
      else
      {
        pushImageFromFS(getIcon("Calendar_48"), middleWidth - 24, yposition, tft);
      }
    }
    else if (currentMenu == 4321)
    {
      sprMenu1.drawString(getI18n("menu_date_month"), displayWidth / 2, textPositionTop);
      if (giessen_mode == true)
      {
        sprMenu1.loadFont("GiessenFutura24");
      }
      else
      {
        sprMenu1.loadFont("JostMedium24");
      }
      sprMenu1.drawString(getI18n("menu_date_month_set"), displayWidth / 2, textPositionBottom);
      if (getMonth() == 1)
      {
        pushImageFromFS(getIcon("Month_Jan_48"), middleWidth - 24, yposition, tft);
      }
      else if (getMonth() == 2)
      {
        pushImageFromFS(getIcon("Month_Feb_48"), middleWidth - 24, yposition, tft);
      }
      else if (getMonth() == 3)
      {
        pushImageFromFS(getIcon("Month_Mar_48"), middleWidth - 24, yposition, tft);
      }
      else if (getMonth() == 4)
      {
        pushImageFromFS(getIcon("Month_Apr_48"), middleWidth - 24, yposition, tft);
      }
      else if (getMonth() == 5)
      {
        pushImageFromFS(getIcon("Month_May_48"), middleWidth - 24, yposition, tft);
      }
      else if (getMonth() == 6)
      {
        pushImageFromFS(getIcon("Month_Jun_48"), middleWidth - 24, yposition, tft);
      }
      else if (getMonth() == 7)
      {
        pushImageFromFS(getIcon("Month_Jul_48"), middleWidth - 24, yposition, tft);
      }
      else if (getMonth() == 8)
      {
        pushImageFromFS(getIcon("Month_Aug_48"), middleWidth - 24, yposition, tft);
      }
      else if (getMonth() == 9)
      {
        pushImageFromFS(getIcon("Month_Sep_48"), middleWidth - 24, yposition, tft);
      }
      else if (getMonth() == 10)
      {
        pushImageFromFS(getIcon("Month_Oct_48"), middleWidth - 24, yposition, tft);
      }
      else if (getMonth() == 11)
      {
        pushImageFromFS(getIcon("Month_Nov_48"), middleWidth - 24, yposition, tft);
      }
      else if (getMonth() == 12)
      {
        pushImageFromFS(getIcon("Month_Dec_48"), middleWidth - 24, yposition, tft);
      }
      else
      {
        pushImageFromFS(getIcon("Calendar_48"), middleWidth - 24, yposition, tft);
      }
    }
    else if (currentMenu == 433)
    {
      sprMenu1.drawString(getI18n("menu_date"), displayWidth / 2, textPositionTop);
      if (giessen_mode == true)
      {
        sprMenu1.loadFont("GiessenFutura24");
      }
      else
      {
        sprMenu1.loadFont("JostMedium24");
      }
      sprMenu1.drawString(getI18n("menu_date_day"), displayWidth / 2, textPositionBottom);
      if (getDay() == 1)
      {
        pushImageFromFS(getIcon("Day_01_48"), middleWidth - 24, yposition, tft);
      }
      else if (getDay() == 2)
      {
        pushImageFromFS(getIcon("Day_02_48"), middleWidth - 24, yposition, tft);
      }
      else if (getDay() == 3)
      {
        pushImageFromFS(getIcon("Day_03_48"), middleWidth - 24, yposition, tft);
      }
      else if (getDay() == 4)
      {
        pushImageFromFS(getIcon("Day_04_48"), middleWidth - 24, yposition, tft);
      }
      else if (getDay() == 5)
      {
        pushImageFromFS(getIcon("Day_05_48"), middleWidth - 24, yposition, tft);
      }
      else if (getDay() == 6)
      {
        pushImageFromFS(getIcon("Day_06_48"), middleWidth - 24, yposition, tft);
      }
      else if (getDay() == 7)
      {
        pushImageFromFS(getIcon("Day_07_48"), middleWidth - 24, yposition, tft);
      }
      else if (getDay() == 8)
      {
        pushImageFromFS(getIcon("Day_08_48"), middleWidth - 24, yposition, tft);
      }
      else if (getDay() == 9)
      {
        pushImageFromFS(getIcon("Day_09_48"), middleWidth - 24, yposition, tft);
      }
      else if (getDay() == 10)
      {
        pushImageFromFS(getIcon("Day_10_48"), middleWidth - 24, yposition, tft);
      }
      else if (getDay() == 11)
      {
        pushImageFromFS(getIcon("Day_11_48"), middleWidth - 24, yposition, tft);
      }
      else if (getDay() == 12)
      {
        pushImageFromFS(getIcon("Day_12_48"), middleWidth - 24, yposition, tft);
      }
      else if (getDay() == 13)
      {
        pushImageFromFS(getIcon("Day_13_48"), middleWidth - 24, yposition, tft);
      }
      else if (getDay() == 14)
      {
        pushImageFromFS(getIcon("Day_14_48"), middleWidth - 24, yposition, tft);
      }
      else if (getDay() == 15)
      {
        pushImageFromFS(getIcon("Day_15_48"), middleWidth - 24, yposition, tft);
      }
      else if (getDay() == 16)
      {
        pushImageFromFS(getIcon("Day_16_48"), middleWidth - 24, yposition, tft);
      }
      else if (getDay() == 17)
      {
        pushImageFromFS(getIcon("Day_17_48"), middleWidth - 24, yposition, tft);
      }
      else if (getDay() == 18)
      {
        pushImageFromFS(getIcon("Day_18_48"), middleWidth - 24, yposition, tft);
      }
      else if (getDay() == 19)
      {
        pushImageFromFS(getIcon("Day_19_48"), middleWidth - 24, yposition, tft);
      }
      else if (getDay() == 20)
      {
        pushImageFromFS(getIcon("Day_20_48"), middleWidth - 24, yposition, tft);
      }
      else if (getDay() == 21)
      {
        pushImageFromFS(getIcon("Day_21_48"), middleWidth - 24, yposition, tft);
      }
      else if (getDay() == 22)
      {
        pushImageFromFS(getIcon("Day_22_48"), middleWidth - 24, yposition, tft);
      }
      else if (getDay() == 23)
      {
        pushImageFromFS(getIcon("Day_23_48"), middleWidth - 24, yposition, tft);
      }
      else if (getDay() == 24)
      {
        pushImageFromFS(getIcon("Day_24_48"), middleWidth - 24, yposition, tft);
      }
      else if (getDay() == 25)
      {
        pushImageFromFS(getIcon("Day_25_48"), middleWidth - 24, yposition, tft);
      }
      else if (getDay() == 26)
      {
        pushImageFromFS(getIcon("Day_26_48"), middleWidth - 24, yposition, tft);
      }
      else if (getDay() == 27)
      {
        pushImageFromFS(getIcon("Day_27_48"), middleWidth - 24, yposition, tft);
      }
      else if (getDay() == 28)
      {
        pushImageFromFS(getIcon("Day_28_48"), middleWidth - 24, yposition, tft);
      }
      else if (getDay() == 29)
      {
        pushImageFromFS(getIcon("Day_29_48"), middleWidth - 24, yposition, tft);
      }
      else if (getDay() == 30)
      {
        pushImageFromFS(getIcon("Day_30_48"), middleWidth - 24, yposition, tft);
      }
      else if (getDay() == 31)
      {
        pushImageFromFS(getIcon("Day_31_48"), middleWidth - 24, yposition, tft);
      }
      else
      {
        pushImageFromFS(getIcon("Calendar_48"), middleWidth - 24, yposition, tft);
      }
    }
    else if (currentMenu == 4331)
    {
      sprMenu1.drawString(getI18n("menu_date_day"), displayWidth / 2, textPositionTop);
      if (giessen_mode == true)
      {
        sprMenu1.loadFont("GiessenFutura24");
      }
      else
      {
        sprMenu1.loadFont("JostMedium24");
      }
      sprMenu1.drawString(getI18n("menu_date_day_set"), displayWidth / 2, textPositionBottom);
      if (getDay() == 1)
      {
        pushImageFromFS(getIcon("Day_01_48"), middleWidth - 24, yposition, tft);
      }
      else if (getDay() == 2)
      {
        pushImageFromFS(getIcon("Day_02_48"), middleWidth - 24, yposition, tft);
      }
      else if (getDay() == 3)
      {
        pushImageFromFS(getIcon("Day_03_48"), middleWidth - 24, yposition, tft);
      }
      else if (getDay() == 4)
      {
        pushImageFromFS(getIcon("Day_04_48"), middleWidth - 24, yposition, tft);
      }
      else if (getDay() == 5)
      {
        pushImageFromFS(getIcon("Day_05_48"), middleWidth - 24, yposition, tft);
      }
      else if (getDay() == 6)
      {
        pushImageFromFS(getIcon("Day_06_48"), middleWidth - 24, yposition, tft);
      }
      else if (getDay() == 7)
      {
        pushImageFromFS(getIcon("Day_07_48"), middleWidth - 24, yposition, tft);
      }
      else if (getDay() == 8)
      {
        pushImageFromFS(getIcon("Day_08_48"), middleWidth - 24, yposition, tft);
      }
      else if (getDay() == 9)
      {
        pushImageFromFS(getIcon("Day_09_48"), middleWidth - 24, yposition, tft);
      }
      else if (getDay() == 10)
      {
        pushImageFromFS(getIcon("Day_10_48"), middleWidth - 24, yposition, tft);
      }
      else if (getDay() == 11)
      {
        pushImageFromFS(getIcon("Day_11_48"), middleWidth - 24, yposition, tft);
      }
      else if (getDay() == 12)
      {
        pushImageFromFS(getIcon("Day_12_48"), middleWidth - 24, yposition, tft);
      }
      else if (getDay() == 13)
      {
        pushImageFromFS(getIcon("Day_13_48"), middleWidth - 24, yposition, tft);
      }
      else if (getDay() == 14)
      {
        pushImageFromFS(getIcon("Day_14_48"), middleWidth - 24, yposition, tft);
      }
      else if (getDay() == 15)
      {
        pushImageFromFS(getIcon("Day_15_48"), middleWidth - 24, yposition, tft);
      }
      else if (getDay() == 16)
      {
        pushImageFromFS(getIcon("Day_16_48"), middleWidth - 24, yposition, tft);
      }
      else if (getDay() == 17)
      {
        pushImageFromFS(getIcon("Day_17_48"), middleWidth - 24, yposition, tft);
      }
      else if (getDay() == 18)
      {
        pushImageFromFS(getIcon("Day_18_48"), middleWidth - 24, yposition, tft);
      }
      else if (getDay() == 19)
      {
        pushImageFromFS(getIcon("Day_19_48"), middleWidth - 24, yposition, tft);
      }
      else if (getDay() == 20)
      {
        pushImageFromFS(getIcon("Day_20_48"), middleWidth - 24, yposition, tft);
      }
      else if (getDay() == 21)
      {
        pushImageFromFS(getIcon("Day_21_48"), middleWidth - 24, yposition, tft);
      }
      else if (getDay() == 22)
      {
        pushImageFromFS(getIcon("Day_22_48"), middleWidth - 24, yposition, tft);
      }
      else if (getDay() == 23)
      {
        pushImageFromFS(getIcon("Day_23_48"), middleWidth - 24, yposition, tft);
      }
      else if (getDay() == 24)
      {
        pushImageFromFS(getIcon("Day_24_48"), middleWidth - 24, yposition, tft);
      }
      else if (getDay() == 25)
      {
        pushImageFromFS(getIcon("Day_25_48"), middleWidth - 24, yposition, tft);
      }
      else if (getDay() == 26)
      {
        pushImageFromFS(getIcon("Day_26_48"), middleWidth - 24, yposition, tft);
      }
      else if (getDay() == 27)
      {
        pushImageFromFS(getIcon("Day_27_48"), middleWidth - 24, yposition, tft);
      }
      else if (getDay() == 28)
      {
        pushImageFromFS(getIcon("Day_28_48"), middleWidth - 24, yposition, tft);
      }
      else if (getDay() == 29)
      {
        pushImageFromFS(getIcon("Day_29_48"), middleWidth - 24, yposition, tft);
      }
      else if (getDay() == 30)
      {
        pushImageFromFS(getIcon("Day_30_48"), middleWidth - 24, yposition, tft);
      }
      else if (getDay() == 31)
      {
        pushImageFromFS(getIcon("Day_31_48"), middleWidth - 24, yposition, tft);
      }
      else
      {
        pushImageFromFS(getIcon("Calendar_48"), middleWidth - 24, yposition, tft);
      }
    }
    else if (currentMenu == 44)
    {
      sprMenu1.drawString(getI18n("menu_settings"), displayWidth / 2, textPositionTop);
      if (giessen_mode == true)
      {
        sprMenu1.loadFont("GiessenFutura24");
      }
      else
      {
        sprMenu1.loadFont("JostMedium24");
      }
      sprMenu1.drawString(getI18n("menu_buttonsound"), displayWidth / 2, textPositionBottom);
      pushImageFromFS(getIcon("Sound025_48"), middleWidth - 24, yposition, tft);
    }
    else if (currentMenu == 441)
    {
      sprMenu1.drawString(getI18n("menu_buttonsound"), displayWidth / 2, textPositionTop);
      if (giessen_mode == true)
      {
        sprMenu1.loadFont("GiessenFutura24");
      }
      else
      {
        sprMenu1.loadFont("JostMedium24");
      }
      sprMenu1.drawString(getI18n("menu_on"), displayWidth / 2, textPositionBottom);
      pushImageFromFS(getIcon("Sound025_48"), middleWidth - 24, yposition, tft);
    }
    else if (currentMenu == 442)
    {
      sprMenu1.drawString(getI18n("menu_buttonsound"), displayWidth / 2, textPositionTop);
      if (giessen_mode == true)
      {
        sprMenu1.loadFont("GiessenFutura24");
      }
      else
      {
        sprMenu1.loadFont("JostMedium24");
      }
      sprMenu1.drawString(getI18n("menu_off"), displayWidth / 2, textPositionBottom);
      pushImageFromFS(getIcon("Sound000_48"), middleWidth - 24, yposition, tft);
    }
    else if (currentMenu == 45)
    {
      sprMenu1.drawString(getI18n("menu_settings"), displayWidth / 2, textPositionTop);
      if (giessen_mode == true)
      {
        sprMenu1.loadFont("GiessenFutura24");
      }
      else
      {
        sprMenu1.loadFont("JostMedium24");
      }
      sprMenu1.drawString(getI18n("menu_language"), displayWidth / 2, textPositionBottom);
      if (i18n.equalsIgnoreCase("de"))
      {
        pushImageFromFS(getIcon("LangDE_48"), middleWidth - 24, yposition, tft);
      }
      else
      {
        pushImageFromFS(getIcon("LangEN_48"), middleWidth - 24, yposition, tft);
      }
    }
    else if (currentMenu == 451)
    {
      sprMenu1.drawString(getI18n("menu_language"), displayWidth / 2, textPositionTop);
      if (giessen_mode == true)
      {
        sprMenu1.loadFont("GiessenFutura24");
      }
      else
      {
        sprMenu1.loadFont("JostMedium24");
      }
      sprMenu1.drawString(getI18n("language"), displayWidth / 2, textPositionBottom);
      if (i18n.equalsIgnoreCase("de"))
      {
        pushImageFromFS(getIcon("LangDE_48"), middleWidth - 24, yposition, tft);
      }
      else
      {
        pushImageFromFS(getIcon("LangEN_48"), middleWidth - 24, yposition, tft);
      }
    }
    else if (currentMenu == 46)
    {
      sprMenu1.drawString(getI18n("menu_settings"), displayWidth / 2, textPositionTop);
      if (giessen_mode == true)
      {
        sprMenu1.loadFont("GiessenFutura24");
      }
      else
      {
        sprMenu1.loadFont("JostMedium24");
      }
      sprMenu1.drawString(getI18n("menu_orientation"), displayWidth / 2, textPositionBottom);
      pushImageFromFS(getIcon("OriChange_48"), middleWidth - 24, yposition, tft);
    }
    else if (currentMenu == 461)
    {
      sprMenu1.drawString(getI18n("menu_orientation"), displayWidth / 2, textPositionTop);
      if (giessen_mode == true)
      {
        sprMenu1.loadFont("GiessenFutura24");
      }
      else
      {
        sprMenu1.loadFont("JostMedium24");
      }
      if (display_landscape == true)
      {
        sprMenu1.drawString(getI18n("horizontal"), displayWidth / 2, textPositionBottom);
        pushImageFromFS(getIcon("OriHor_48"), middleWidth - 24, yposition, tft);
      }
      else
      {
        sprMenu1.drawString(getI18n("vertical"), displayWidth / 2, textPositionBottom);
        pushImageFromFS(getIcon("OriVert_48"), middleWidth - 24, yposition, tft);
      }
    }
    else if (currentMenu == 47)
    {
      sprMenu1.drawString(getI18n("menu_settings"), displayWidth / 2, textPositionTop);
      if (giessen_mode == true)
      {
        sprMenu1.loadFont("GiessenFutura24");
      }
      else
      {
        sprMenu1.loadFont("JostMedium24");
      }
      sprMenu1.drawString(getI18n("menu_theme"), displayWidth / 2, textPositionBottom);
      if (display_theme.equalsIgnoreCase("color"))
      {
        pushImageFromFS(getIcon("Theme_48"), middleWidth - 24, yposition, tft);
      }
      else if (display_theme.equalsIgnoreCase("outline"))
      {
        pushImageFromFS(getIcon("ThemeOutline_48"), middleWidth - 24, yposition, tft);
      }
      else
      {
        pushImageFromFS(getIcon("ThemeBW_48"), middleWidth - 24, yposition, tft);
      }
    }
    else if (currentMenu == 471)
    {
      sprMenu1.drawString(getI18n("menu_theme"), displayWidth / 2, textPositionTop);
      if (giessen_mode == true)
      {
        sprMenu1.loadFont("GiessenFutura24");
      }
      else
      {
        sprMenu1.loadFont("JostMedium24");
      }
      if (display_theme.equalsIgnoreCase("color"))
      {
        sprMenu1.drawString(getI18n("color_color"), displayWidth / 2, textPositionBottom);
        pushImageFromFS(getIcon("Theme_48"), middleWidth - 24, yposition, tft);
      }
      else if (display_theme.equalsIgnoreCase("outline"))
      {
         sprMenu1.drawString(getI18n("color_outline"), displayWidth / 2, textPositionBottom);
        pushImageFromFS(getIcon("ThemeOutline_48"), middleWidth - 24, yposition, tft);
      }
      else
      {
        sprMenu1.drawString(getI18n("color_blackwhite"), displayWidth / 2, textPositionBottom);
        pushImageFromFS(getIcon("ThemeBW_48"), middleWidth - 24, yposition, tft);
      }
    }
    else if (currentMenu == 5)
    {
      sprMenu1.drawString(getI18n("menu_menu"), displayWidth / 2, textPositionTop);
      if (giessen_mode == true)
      {
        sprMenu1.loadFont("GiessenFutura24");
      }
      else
      {
        sprMenu1.loadFont("JostMedium24");
      }
      sprMenu1.drawString(getI18n("menu_alarmclock"), displayWidth / 2, textPositionBottom);
      pushImageFromFS(getIcon("AlarmClock_48"), middleWidth - 24, yposition, tft);
    }
    else if (currentMenu == 51)
    {
      sprMenu1.drawString(getI18n("menu_alarmclock"), displayWidth / 2, textPositionTop);
      if (giessen_mode == true)
      {
        sprMenu1.loadFont("GiessenFutura24");
      }
      else
      {
        sprMenu1.loadFont("JostMedium24");
      }
      sprMenu1.drawString(getI18n("menu_alarmclock_set"), displayWidth / 2, textPositionBottom);
      sprMenu2.createSprite(displayWidth, 140);
      sprMenu2.fillSprite(TFT_WHITE);
      sprMenu2.setTextDatum(MC_DATUM);
      sprMenu2.setColorDepth(16);
      sprMenu2.setTextColor(TFT_BLACK, TFT_WHITE);
      if (giessen_mode == true)
      {
        sprMenu2.loadFont("GiessenFutura32");
      }
      else
      {
        sprMenu2.loadFont("JostMedium32");
      }
      sprMenu2.drawString(getLeftPaddingString(String(wake_hour_tmp), '0', 2) + ":" + getLeftPaddingString(String(wake_minute_tmp), '0', 2), displayWidth / 2, 20);
      showSubSprite = true;
    }
    else if (currentMenu == 6)
    {
      sprMenu1.drawString(getI18n("menu_menu"), displayWidth / 2, textPositionTop);
      if (giessen_mode == true)
      {
        sprMenu1.loadFont("GiessenFutura24");
      }
      else
      {
        sprMenu1.loadFont("JostMedium24");
      }
      sprMenu1.drawString(getI18n("menu_service"), displayWidth / 2, textPositionBottom);
      pushImageFromFS(getIcon("Info_48"), middleWidth - 24, yposition, tft);
    }
    else if (currentMenu == 61)
    {
      sprMenu1.drawString(getI18n("menu_service"), displayWidth / 2, textPositionTop);
      if (giessen_mode == true)
      {
        sprMenu1.loadFont("GiessenFutura24");
      }
      else
      {
        sprMenu1.loadFont("JostMedium24");
      }
      sprMenu1.drawString(getI18n("menu_service_hardware"), displayWidth / 2, textPositionBottom);
      pushImageFromFS(getIcon("Info_48"), middleWidth - 24, yposition, tft);
    }
    else if (currentMenu == 611)
    {
      sprMenu1.drawString(getI18n("menu_service_hardware"), displayWidth / 2, textPositionTop);
      if (giessen_mode == true)
      {
        sprMenu1.loadFont("GiessenFutura24");
      }
      else
      {
        sprMenu1.loadFont("JostMedium24");
      }
      sprMenu1.drawString(getI18n("menu_service_info"), displayWidth / 2, textPositionBottom);
      sprMenu2.createSprite(displayWidth, 140);
      sprMenu2.fillSprite(TFT_WHITE);
      sprMenu2.setTextDatum(MC_DATUM);
      sprMenu2.setColorDepth(16);
      sprMenu2.setTextColor(TFT_BLACK, TFT_WHITE);
      if (giessen_mode == true)
      {
        sprMenu2.loadFont("GiessenFutura12");
      }
      else
      {
        sprMenu2.loadFont("JostMedium12");
      }
      sprMenu2.drawString(getHardwareInfo(1) + " / " + getHardwareInfo(2), displayWidth / 2, 10);
      sprMenu2.drawString(getHardwareInfo(3) + " / " + getHardwareInfo(4), displayWidth / 2, 23);
      sprMenu2.drawString(getHardwareInfo(5), displayWidth / 2, 36);
      sprMenu2.drawString(getHardwareInfo(6), displayWidth / 2, 49);
      sprMenu2.drawString(getHardwareInfo(7) + " / " + getHardwareInfo(8), displayWidth / 2, 62);
      sprMenu2.drawString(getHardwareInfo(9), displayWidth / 2, 75);
      showSubSprite = true;
    }
    else if (currentMenu == 62)
    {
      sprMenu1.drawString(getI18n("menu_service"), displayWidth / 2, textPositionTop);
      if (giessen_mode == true)
      {
        sprMenu1.loadFont("GiessenFutura24");
      }
      else
      {
        sprMenu1.loadFont("JostMedium24");
      }
      sprMenu1.drawString(getI18n("menu_service_software"), displayWidth / 2, textPositionBottom);
      pushImageFromFS(getIcon("Info_48"), middleWidth - 24, yposition, tft);
    }
    else if (currentMenu == 621)
    {
      sprMenu1.drawString(getI18n("menu_service_software"), displayWidth / 2, textPositionTop);
      if (giessen_mode == true)
      {
        sprMenu1.loadFont("GiessenFutura24");
      }
      else
      {
        sprMenu1.loadFont("JostMedium24");
      }
      sprMenu1.drawString(getI18n("menu_service_info"), displayWidth / 2, textPositionBottom);
      sprMenu2.createSprite(displayWidth, 140);
      sprMenu2.fillSprite(TFT_WHITE);
      sprMenu2.setTextDatum(MC_DATUM);
      sprMenu2.setColorDepth(16);
      sprMenu2.setTextColor(TFT_BLACK, TFT_WHITE);
      if (giessen_mode == true)
      {
        sprMenu2.loadFont("GiessenFutura12");
      }
      else
      {
        sprMenu2.loadFont("JostMedium12");
      }
      sprMenu2.drawString(getSoftwareInfo(1), displayWidth / 2, 10);
      sprMenu2.drawString(getSoftwareInfo(2), displayWidth / 2, 23);
      sprMenu2.drawString(getSoftwareInfo(3), displayWidth / 2, 36);
      sprMenu2.drawString(getSoftwareInfo(4), displayWidth / 2, 49);
      sprMenu2.drawString(getSoftwareInfo(5), displayWidth / 2, 62);
      showSubSprite = true;
    }
    else if (currentMenu == 63)
    {
      sprMenu1.drawString(getI18n("menu_service"), displayWidth / 2, textPositionTop);
      if (giessen_mode == true)
      {
        sprMenu1.loadFont("GiessenFutura24");
      }
      else
      {
        sprMenu1.loadFont("JostMedium24");
      }
      sprMenu1.drawString(getI18n("menu_service_subscriber"), displayWidth / 2, textPositionBottom);
      pushImageFromFS(getIcon("Info_48"), middleWidth - 24, yposition, tft);
    }
    else if (currentMenu == 631)
    {
      sprMenu1.drawString(getI18n("menu_service_subscriber"), displayWidth / 2, textPositionTop);
      if (giessen_mode == true)
      {
        sprMenu1.loadFont("GiessenFutura24");
      }
      else
      {
        sprMenu1.loadFont("JostMedium24");
      }
      sprMenu1.drawString(getI18n("menu_service_info"), displayWidth / 2, textPositionBottom);
      sprMenu2.createSprite(displayWidth, 140);
      sprMenu2.fillSprite(TFT_WHITE);
      sprMenu2.setTextDatum(MC_DATUM);
      sprMenu2.setColorDepth(16);
      sprMenu2.setTextColor(TFT_BLACK, TFT_WHITE);
      if (giessen_mode == true)
      {
        sprMenu2.loadFont("GiessenFutura12");
      }
      else
      {
        sprMenu2.loadFont("JostMedium12");
      }
      sprMenu2.drawString(getI18n("menu_service_info_issi") + ": " + String(chip_id), displayWidth / 2, 10);
      showSubSprite = true;
    }
  }
  sprMenu1.pushSprite(0, yposition1);
  sprMenu1.unloadFont();
  if (showSubSprite == true)
  {
    sprMenu2.pushSprite(0, yposition);
    sprMenu2.unloadFont();
  }
}