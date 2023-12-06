#include <Arduino.h>

#include "variables.h"

String getGermanyStreetName61(unsigned int streetKey)
{
    String returnValue = "";
    switch (streetKey)
    {
    case 328:
    {
        returnValue = F("6");
        break;
    }
    case 329:
    {
        returnValue = F("6 (Roter Kreis)");
        break;
    }
    case 330:
    {
        returnValue = F("6 Erholungsstrand");
        break;
    }
    case 331:
    {
        returnValue = F("6 Fliederweg");
        break;
    }
    case 332:
    {
        returnValue = F("6. Querstr.");
        break;
    }
    case 333:
    {
        returnValue = F("6. Schneise");
        break;
    }
    case 334:
    {
        returnValue = F("6.Wallstr.");
        break;
    }
    case 335:
    {
        returnValue = F("604");
        break;
    }
    case 336:
    {
        returnValue = F("61");
        break;
    }
    case 337:
    {
        returnValue = F("626b");
        break;
    }
    case 338:
    {
        returnValue = F("64-er Weg");
        break;
    }
    case 339:
    {
        returnValue = F("65");
        break;
    }
    case 340:
    {
        returnValue = F("65+81");
        break;
    }
    case 341:
    {
        returnValue = F("67 - 76");
        break;
    }
    case 342:
    {
        returnValue = F("681a");
        break;
    }
    case 343:
    {
        returnValue = F("682");
        break;
    }
    case 344:
    {
        returnValue = F("682a");
        break;
    }
    case 345:
    {
        returnValue = F("683a");
        break;
    }
    case 346:
    {
        returnValue = F("684");
        break;
    }
    case 347:
    {
        returnValue = F("685");
        break;
    }
    case 348:
    {
        returnValue = F("686b");
        break;
    }
    case 349:
    {
        returnValue = F("6H");
        break;
    }
    case 350:
    {
        returnValue = F("6I");
        break;
    }
    case 351:
    {
        returnValue = F("6J");
        break;
    }
    case 352:
    {
        returnValue = F("6K");
        break;
    }
    case 353:
    {
        returnValue = F("6L");
        break;
    }
    case 354:
    {
        returnValue = F("6th Avenue");
        break;
    }
    }
    return returnValue;
}
