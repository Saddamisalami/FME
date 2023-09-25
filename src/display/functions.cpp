#include <Arduino.h>
#include <TFT_eFEX.h>
#include <TFT_eSPI.h>

#include "filesystem\functions.h"
#include "messages\functions.h"

#include "variables.h"

void brightnessDisplay(TFT_eSPI &, int);

void cleanDisplay(TFT_eSPI &tft)
{
  tft.fillScreen(TFT_WHITE);
}

void cleanSprite(TFT_eSprite &spr)
{
  spr.deleteSprite();
}

void setLandscape(TFT_eSPI &tft, boolean landscape)
{
  if (landscape == true)
  {
    tft.setRotation(3);
  }
  else
  {
    tft.setRotation(2);
  }
}

void initDisplay(TFT_eSPI &tft, boolean landscape)
{
  pinMode(TFT_POWER, OUTPUT);
  digitalWrite(TFT_POWER, HIGH);
  tft.begin();
  if (landscape == true)
  {
    setLandscape(tft, true);
  }
  else
  {
    setLandscape(tft, false);
  }
  tft.setSwapBytes(true);
  tft.setTextColor(TFT_BLACK);
  tft.setTextWrap(false);
  brightnessDisplay(tft, 100);
  cleanDisplay(tft);
}

void initDisplay(TFT_eSPI &tft)
{
  if (display_landscape == true)
  {
    initDisplay(tft, true);
  }
  else
  {
    initDisplay(tft, false);
  }
}

void sleepDisplay(TFT_eSPI &tft)
{
  display_on = false;
  tft.fillScreen(TFT_BLACK);
  tft.writecommand(ST7789_DISPOFF);
  tft.writecommand(ST7789_SLPIN);
  digitalWrite(TFT_BL, LOW);
  digitalWrite(TFT_POWER, LOW);
}

void wakeDisplay(TFT_eSPI &tft)
{
  digitalWrite(TFT_POWER, HIGH);
  digitalWrite(TFT_BL, HIGH);
  tft.writecommand(ST7789_SLPOUT);
  tft.writecommand(ST7789_DISPON);
  cleanDisplay(tft);
  display_on = true;
}

void brightnessDisplay(TFT_eSPI &tft, int percentage)
{
  if (display_on == true)
  {
    if (percentage == 0)
    {
      sleepDisplay(tft);
    }
    else if (percentage == 100)
    {
      digitalWrite(TFT_BL, HIGH);
    }
    else if (percentage < 100 && percentage > 0)
    {
      analogWrite(TFT_BL, map(percentage, 0, 100, 0, 255));
    }
  }
  else
  {
    wakeDisplay(tft);
    digitalWrite(TFT_BL, HIGH);
    analogWrite(TFT_BL, map(percentage, 0, 100, 0, 255));
    display_light = percentage;
  }
}

void drawX(int x, int y, TFT_eSPI &tft)
{
  tft.drawLine(x - 5, y - 5, x + 5, y + 5, TFT_BLACK);
  tft.drawLine(x - 5, y + 5, x + 5, y - 5, TFT_BLACK);
}