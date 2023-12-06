#include <Arduino.h>

#include "variables.h"

String getGermanyStreetName51(unsigned int streetKey)
{
    String returnValue = "";
    switch (streetKey)
    {
    case 303:
    {
        returnValue = F("5");
        break;
    }
    case 304:
    {
        returnValue = F("5 Holunderweg");
        break;
    }
    case 305:
    {
        returnValue = F("5 Minuten-Weg");
        break;
    }
    case 306:
    {
        returnValue = F("5 Minutenweg");
        break;
    }
    case 307:
    {
        returnValue = F("5-Männer-Weg");
        break;
    }
    case 308:
    {
        returnValue = F("5. Querstr.");
        break;
    }
    case 309:
    {
        returnValue = F("5. Schneise");
        break;
    }
    case 310:
    {
        returnValue = F("5. Weg");
        break;
    }
    case 311:
    {
        returnValue = F("5.Ringstr.");
        break;
    }
    case 312:
    {
        returnValue = F("5.Wallstr.");
        break;
    }
    case 313:
    {
        returnValue = F("50");
        break;
    }
    case 314:
    {
        returnValue = F("500er Weg");
        break;
    }
    case 315:
    {
        returnValue = F("51");
        break;
    }
    case 316:
    {
        returnValue = F("510");
        break;
    }
    case 317:
    {
        returnValue = F("52");
        break;
    }
    case 318:
    {
        returnValue = F("520");
        break;
    }
    case 319:
    {
        returnValue = F("53");
        break;
    }
    case 320:
    {
        returnValue = F("5383 Rohrbach (Ilm) - Mainburg - ehemalige Bahnstrecke Hallertauer Bockerl");
        break;
    }
    case 321:
    {
        returnValue = F("54");
        break;
    }
    case 322:
    {
        returnValue = F("55");
        break;
    }
    case 323:
    {
        returnValue = F("55 Sonnenloipe");
        break;
    }
    case 324:
    {
        returnValue = F("55er Str.");
        break;
    }
    case 325:
    {
        returnValue = F("57");
        break;
    }
    case 326:
    {
        returnValue = F("58");
        break;
    }
    case 327:
    {
        returnValue = F("5th Avenue");
        break;
    }
    }
    return returnValue;
}
