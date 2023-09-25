#include <Arduino.h>
#include <ArduinoJson.h>

#include "alarm\functions.h"

#include "variables.h"

unsigned int currentAlarms_unread = 0;
unsigned int currentMessages_unread = 0;
unsigned int currentAlarm = 0;
unsigned int nextAlarm = 0;
unsigned int currentMessage = 0;
unsigned int nextMessage = 0;

unsigned int displayAlarm = 0;
unsigned int displayMessage = 0;
unsigned int lastDisplayAlarm = 0;
unsigned int lastDisplayMessage = 0;

const unsigned int arraySize = 10;

typedef struct
{
  unsigned int id;
  String text;
  boolean checked;
} Message;

Message messages[arraySize];

typedef struct
{
  unsigned int id;
  boolean digital;
  unsigned int sound;
  unsigned int type;
  unsigned int sub;
  String adress;
  unsigned int plz;
  unsigned int city;
  unsigned int street;
  unsigned int number;
  String addition;
  String comment;
  boolean checked;
  boolean responded;
} Alarm;

Alarm alarms[arraySize];

void messageDelete(unsigned int position)
{
  messages[position].id = 0;
  messages[position].text = "";
  messages[position].checked = true;
}

Message messageGet(unsigned int position)
{
  return messages[position];
}

void messageRead(unsigned int position)
{
  messages[position].checked = true;
}

void messageSet(unsigned int position, unsigned int id, String text, boolean checked)
{
  messages[position].id = id;
  messages[position].text = text;
  messages[position].checked = checked;
}

void messagesDelete()
{
  for (int counter = 0; counter < arraySize; counter++)
  {
    messageDelete(counter);
  }
}

unsigned int getMessageId(unsigned int position)
{
  return messages[position].id;
}

String getMessageText(unsigned int position)
{
  return messages[position].text;
}

boolean getMessageRead(unsigned int position)
{
  return messages[position].checked;
}

void alarmDelete(unsigned int position)
{
  alarms[position].id = 0;
  alarms[position].digital = true;
  alarms[position].sound = 0;
  alarms[position].type = 0;
  alarms[position].sub = 0;
  alarms[position].adress = "";
  alarms[position].plz = 0;
  alarms[position].city = 0;
  alarms[position].street = 0;
  alarms[position].number = 0;
  alarms[position].addition = "";
  alarms[position].comment = "";
  alarms[position].checked = false;
  alarms[position].responded = false;
}

void alarmRead(unsigned int position)
{
  alarms[position].checked = true;
}

void alarmSet(unsigned int position, unsigned int id, boolean digital, unsigned int sound, unsigned int type, unsigned int sub, String adress, unsigned int plz, unsigned int city, unsigned int street, unsigned int number, String addition, String comment, boolean checked, boolean responded)
{

  alarms[position].id = id;
  alarms[position].digital = digital;
  alarms[position].sound = sound;
  alarms[position].type = type;
  alarms[position].sub = sub;
  if (adress.isEmpty())
  {
    alarms[position].adress = getCombinedAdress(plz, city, street, number, addition);
  }
  else
  {
    alarms[position].adress = adress;
  }
  alarms[position].plz = plz;
  alarms[position].city = city;
  alarms[position].street = street;
  alarms[position].number = number;
  alarms[position].addition = addition;
  alarms[position].comment = comment;
  alarms[position].checked = checked;
  alarms[position].responded = responded;
}

void setResponse(unsigned int position, boolean responded)
{
  alarms[position].responded = responded;
}

void alarmsDelete()
{
  for (int counter = 0; counter < arraySize; counter++)
  {
    alarmDelete(counter);
  }
}

Alarm alarmGet(unsigned int position)
{
  return alarms[position];
}

boolean getAlarmDigital(unsigned int position)
{
  return alarms[position].digital;
}

unsigned int getAlarmId(unsigned int position)
{
  return alarms[position].id;
}

unsigned int getAlarmSound(unsigned int position)
{
  return alarms[position].sound;
}

unsigned int getAlarmType(unsigned int position)
{
  return alarms[position].type;
}

unsigned int getAlarmSub(unsigned int position)
{
  return alarms[position].sub;
}

String getAlarmAdress(unsigned int position)
{
  return alarms[position].adress;
}

unsigned int getAlarmPLZ(unsigned int position)
{
  return alarms[position].plz;
}

unsigned int getAlarmCity(unsigned int position)
{
  return alarms[position].city;
}

unsigned int getAlarmStreet(unsigned int position)
{
  return alarms[position].street;
}

unsigned int getAlarmNumber(unsigned int position)
{
  return alarms[position].number;
}

String getAlarmAddition(unsigned int position)
{
  return alarms[position].addition;
}

String getAlarmComment(unsigned int position)
{
  return alarms[position].comment;
}

boolean getAlarmResponded(unsigned int position)
{
  return alarms[position].responded;
}

boolean getAlarmRead(unsigned int position)
{
  return alarms[position].checked;
}
