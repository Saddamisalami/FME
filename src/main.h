#include <Arduino.h>
#include <ArduinoJson.h>
#include <FastLED.h>
#include <painlessMesh.h>
#include <TFT_eFEX.h>
#include <TFT_eSPI.h>

#include "audio\functions.h"
#include "button\functions.h"
#include "display\functions.h"
#include "display\views\alarm.h"
#include "display\views\bootscreen.h"
#include "display\views\menu.h"
#include "display\views\menubar.h"
#include "display\views\titlebar.h"
#include "filesystem\functions.h"
#include "graphic\functions.h"
#include "i18n\functions.h"
#include "mesh\functions.h"
#include "messages\functions.h"
#include "tasks\battery.h"
#include "tasks\mesh.h"
#include "tasks\time.h"
#include "tasks\wlan.h"
#include "time\functions.h"

#include "variables.h"

void colorLED(int);

#if (INCLUDE_BASESTATION)
void colorBaseStationLED(int);
#endif

void setup();

void loop();