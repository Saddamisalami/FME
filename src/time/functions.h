#include <Arduino.h>
#include <ESP32Time.h>

#include "variables.h"

//ESP32Time rtc(0);

void setTime(unsigned long);

void setTime(int, int, int, int, int, int);

void setYear(int);

void setMonth(int);

void setDay(int);

void setHour(int);

void setMinute(int);

void setSecond(int);

String getTime(String);

int getYear();

int getMonth();

int getDay();

int getHour();

int getMinute();

int getSecond();

unsigned long getMillis();

unsigned long getMicros();

unsigned long getEpoch();