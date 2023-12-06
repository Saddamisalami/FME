#include <Arduino.h>

#include "variables.h"

String getGermanyStreetName91(unsigned int streetKey)
{
    String returnValue = "";
    switch (streetKey)
    {
    case 401:
    {
        returnValue = F("9");
        break;
    }
    case 402:
    {
        returnValue = F("9. Schneise");
        break;
    }
    case 403:
    {
        returnValue = F("90");
        break;
    }
    case 404:
    {
        returnValue = F("91er Str.");
        break;
    }
    case 405:
    {
        returnValue = F("97 - 106");
        break;
    }
    case 406:
    {
        returnValue = F("98-Stufen-Weg");
        break;
    }
    case 407:
    {
        returnValue = F("99 Steffelen");
        break;
    }
    case 408:
    {
        returnValue = F("9a Birnenweg");
        break;
    }
    }
    return returnValue;
}
