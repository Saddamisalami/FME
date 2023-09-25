#include <Arduino.h>
#include <ESP32Time.h>

#include "variables.h"

ESP32Time rtc(0);

void setTime(unsigned long epoch)
{
  rtc.setTime(epoch);
}

void setTime(int year, int month, int day, int hour, int minute, int second)
{
  rtc.setTime(second, minute, hour, day, month, year);
}

void setYear(int year)
{
  rtc.setTime(rtc.getSecond(), rtc.getMinute(), rtc.getHour(true), rtc.getDay(), rtc.getMonth() + 1, year);
}

void setMonth(int month)
{
  rtc.setTime(rtc.getSecond(), rtc.getMinute(), rtc.getHour(true), rtc.getDay(), month, rtc.getYear());
}

void setDay(int day)
{
  rtc.setTime(rtc.getSecond(), rtc.getMinute(), rtc.getHour(true), day, rtc.getMonth() + 1, rtc.getYear());
}

void setHour(int hour)
{
  rtc.setTime(rtc.getSecond(), rtc.getMinute(), hour, rtc.getDay(), rtc.getMonth() + 1, rtc.getYear());
}

void setMinute(int minute)
{
  rtc.setTime(rtc.getSecond(), minute, rtc.getHour(true), rtc.getDay(), rtc.getMonth() + 1, rtc.getYear());
}

void setSecond(int second)
{
  rtc.setTime(second, rtc.getMinute(), rtc.getHour(true), rtc.getDay(), rtc.getMonth() + 1, rtc.getYear());
}

String getTime(String format)
{
  return rtc.getTime(format);
}

int getYear()
{
  return rtc.getYear();
}

int getMonth()
{
  return rtc.getMonth() + 1;
}

int getDay()
{
  return rtc.getDay();
}

int getHour()
{
  return rtc.getHour(true);
}

int getMinute()
{
  return rtc.getMinute();
}

int getSecond()
{
  return rtc.getSecond();
}

unsigned long getMillis()
{
  return rtc.getMillis();
}

unsigned long getMicros()
{
  return rtc.getMicros();
}

unsigned long getEpoch()
{
  return rtc.getEpoch();
}