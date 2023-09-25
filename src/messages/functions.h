#include <Arduino.h>
#include <ArduinoJson.h>

#include "alarm\functions.h"

#include "variables.h"

void messageDelete(unsigned int);

void messageRead(unsigned int);

void messageSet(unsigned int, unsigned int, String, boolean);

void messagesDelete();

void alarmDelete(unsigned int);

void alarmRead(unsigned int);

void alarmSet(unsigned int, unsigned int, boolean, unsigned int, unsigned int, unsigned int, String, unsigned int, unsigned int, unsigned int, unsigned int, String, String, boolean, boolean);

void setResponse(unsigned int, boolean);

void alarmsDelete();

//Message messageGet(unsigned int);

//Alarm alarmGet(unsigned int);

boolean getAlarmDigital(unsigned int);

unsigned int getAlarmId(unsigned int);

unsigned int getAlarmSound(unsigned int);

unsigned int getAlarmType(unsigned int);

unsigned int getAlarmSub(unsigned int);

String getAlarmAdress(unsigned int);

unsigned int getAlarmPLZ(unsigned int);

unsigned int getAlarmCity(unsigned int);

unsigned int getAlarmStreet(unsigned int);

unsigned int getAlarmNumber(unsigned int);

String getAlarmAddition(unsigned int);

String getAlarmComment(unsigned int);

boolean getAlarmResponded(unsigned int);

boolean getAlarmRead(unsigned int);

unsigned int getMessageId(unsigned int);

String getMessageText(unsigned int);

boolean getMessageRead(unsigned int);