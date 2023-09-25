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

void drawMenu_v(TFT_eSPI &, TFT_eSprite &, TFT_eSprite &);