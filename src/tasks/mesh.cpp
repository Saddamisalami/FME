#include <Arduino.h>
#include <painlessMesh.h>

#include "messages\functions.h"

#include "variables.h"

void sendStatusFME()
{
  StaticJsonDocument<256> doc;
  String msg;
  doc["voltage"] = analogRead(A0);
  doc["from"] = chip_id;
  serializeJson(doc, msg);
  mesh.sendBroadcast(msg);
}

void sendAlarmResponse()
{
  StaticJsonDocument<256> doc;
  String msg;
  doc["voltage"] = analogRead(A0);
  doc["id"] = getAlarmId(currentAlarm);
  doc["response"] = getAlarmResponded(currentAlarm);
  doc["from"] = chip_id;
  serializeJson(doc, msg);
  mesh.sendBroadcast(msg);
}