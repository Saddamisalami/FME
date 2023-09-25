#include <Arduino.h>
#include <ArduinoJson.h>
#include <painlessMesh.h>

#if (INCLUDE_MUSIC)
#include "audio\music.h"
#endif
#include "messages\functions.h"
#include "system\functions.h"
#include "time\functions.h"

#include "variables.h"

void changedConnectionCallback();

void newConnectionCallback(uint32_t);

void nodeTimeAdjustedCallback(int32_t);

void receivedAlarmCallback(uint32_t, String &);