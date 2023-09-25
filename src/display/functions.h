#include <Arduino.h>
#include <TFT_eFEX.h>
#include <TFT_eSPI.h>

#include "filesystem\functions.h"
#include "messages\functions.h"

#include "variables.h"

void brightnessDisplay(TFT_eSPI &, int);

void cleanDisplay(TFT_eSPI &);

void cleanSprite(TFT_eSprite &);

void setLandscape(TFT_eSPI &, boolean);

void initDisplay(TFT_eSPI &, boolean);

void initDisplay(TFT_eSPI &);

void sleepDisplay(TFT_eSPI &);

void wakeDisplay(TFT_eSPI &);

void brightnessDisplay(TFT_eSPI &, int);

void drawX(int, int, TFT_eSPI &);