#include <Arduino.h>

#include "audio\analog\frequencies.h"

int getAnalogFrequency(int note)
{
    int frequency = 0;
    switch (note)
    {
    case 1:
    {
        frequency = NOTE_1;
        break;
    }
    case 2:
    {
        frequency = NOTE_2;
        break;
    }
    case 3:
    {
        frequency = NOTE_3;
        break;
    }
    case 4:
    {
        frequency = NOTE_4;
        break;
    }
    case 5:
    {
        frequency = NOTE_5;
        break;
    }
    case 6:
    {
        frequency = NOTE_6;
        break;
    }
    case 7:
    {
        frequency = NOTE_7;
        break;
    }
    case 8:
    {
        frequency = NOTE_8;
        break;
    }
    case 9:
    {
        frequency = NOTE_9;
        break;
    }
    default:
    {
        frequency = NOTE_0;
        break;
    }
    }
    return frequency;
}

int getAnalogReplacementFrequency()
{
    return NOTE_R;
}