#include <Arduino.h>

#include "variables.h"

String getGermanyStreetName71(unsigned int streetKey)
{
    String returnValue = "";
    switch (streetKey)
    {
    case 355:
    {
        returnValue = F("7");
        break;
    }
    case 356:
    {
        returnValue = F("7 Jasminweg");
        break;
    }
    case 357:
    {
        returnValue = F("7% Weg");
        break;
    }
    case 358:
    {
        returnValue = F("7-Moore-Weg");
        break;
    }
    case 359:
    {
        returnValue = F("7-Moore-Weg / Brunnmattenmoosweg");
        break;
    }
    case 360:
    {
        returnValue = F("7-Moore-Weg / Sonnenmattenweg");
        break;
    }
    case 361:
    {
        returnValue = F("7-er Weg");
        break;
    }
    case 362:
    {
        returnValue = F("7. Schneise");
        break;
    }
    case 363:
    {
        returnValue = F("700er Reihe");
        break;
    }
    case 364:
    {
        returnValue = F("702a");
        break;
    }
    case 365:
    {
        returnValue = F("72 Stunden Park");
        break;
    }
    case 366:
    {
        returnValue = F("72-Stunden-Barfußpark");
        break;
    }
    case 367:
    {
        returnValue = F("72-Stunden-Platz");
        break;
    }
    case 368:
    {
        returnValue = F("74");
        break;
    }
    case 369:
    {
        returnValue = F("77 - 86");
        break;
    }
    case 370:
    {
        returnValue = F("77er Str.");
        break;
    }
    case 371:
    {
        returnValue = F("78-96");
        break;
    }
    case 372:
    {
        returnValue = F("7B");
        break;
    }
    }
    return returnValue;
}
