#include <Arduino.h>
#include "audio\scale.h"

void play_merrychristmas(int buzzer)
{
    // change this to make the song slower or faster
    const int tempo_merrychristmas = 140;

    const int melody_merrychristmas[] = {
        // We Wish You a Merry Christmas
        // Score available at https://musescore.com/user/6208766/scores/1497501

        NOTE_C5, 4, // 1
        NOTE_F5, 4, NOTE_F5, 8, NOTE_G5, 8, NOTE_F5, 8, NOTE_E5, 8,
        NOTE_D5, 4, NOTE_D5, 4, NOTE_D5, 4,
        NOTE_G5, 4, NOTE_G5, 8, NOTE_A5, 8, NOTE_G5, 8, NOTE_F5, 8,
        NOTE_E5, 4, NOTE_C5, 4, NOTE_C5, 4,
        NOTE_A5, 4, NOTE_A5, 8, NOTE_AS5, 8, NOTE_A5, 8, NOTE_G5, 8,
        NOTE_F5, 4, NOTE_D5, 4, NOTE_C5, 8, NOTE_C5, 8,
        NOTE_D5, 4, NOTE_G5, 4, NOTE_E5, 4,

        NOTE_F5, 2, NOTE_C5, 4, // 8
        NOTE_F5, 4, NOTE_F5, 8, NOTE_G5, 8, NOTE_F5, 8, NOTE_E5, 8,
        NOTE_D5, 4, NOTE_D5, 4, NOTE_D5, 4,
        NOTE_G5, 4, NOTE_G5, 8, NOTE_A5, 8, NOTE_G5, 8, NOTE_F5, 8,
        NOTE_E5, 4, NOTE_C5, 4, NOTE_C5, 4,
        NOTE_A5, 4, NOTE_A5, 8, NOTE_AS5, 8, NOTE_A5, 8, NOTE_G5, 8,
        NOTE_F5, 4, NOTE_D5, 4, NOTE_C5, 8, NOTE_C5, 8,
        NOTE_D5, 4, NOTE_G5, 4, NOTE_E5, 4,
        NOTE_F5, 2, NOTE_C5, 4,

        NOTE_F5, 4, NOTE_F5, 4, NOTE_F5, 4, // 17
        NOTE_E5, 2, NOTE_E5, 4,
        NOTE_F5, 4, NOTE_E5, 4, NOTE_D5, 4,
        NOTE_C5, 2, NOTE_A5, 4,
        NOTE_AS5, 4, NOTE_A5, 4, NOTE_G5, 4,
        NOTE_C6, 4, NOTE_C5, 4, NOTE_C5, 8, NOTE_C5, 8,
        NOTE_D5, 4, NOTE_G5, 4, NOTE_E5, 4,
        NOTE_F5, 2, NOTE_C5, 4,
        NOTE_F5, 4, NOTE_F5, 8, NOTE_G5, 8, NOTE_F5, 8, NOTE_E5, 8,
        NOTE_D5, 4, NOTE_D5, 4, NOTE_D5, 4,

        NOTE_G5, 4, NOTE_G5, 8, NOTE_A5, 8, NOTE_G5, 8, NOTE_F5, 8, // 27
        NOTE_E5, 4, NOTE_C5, 4, NOTE_C5, 4,
        NOTE_A5, 4, NOTE_A5, 8, NOTE_AS5, 8, NOTE_A5, 8, NOTE_G5, 8,
        NOTE_F5, 4, NOTE_D5, 4, NOTE_C5, 8, NOTE_C5, 8,
        NOTE_D5, 4, NOTE_G5, 4, NOTE_E5, 4,
        NOTE_F5, 2, NOTE_C5, 4,
        NOTE_F5, 4, NOTE_F5, 4, NOTE_F5, 4,
        NOTE_E5, 2, NOTE_E5, 4,
        NOTE_F5, 4, NOTE_E5, 4, NOTE_D5, 4,

        NOTE_C5, 2, NOTE_A5, 4, // 36
        NOTE_AS5, 4, NOTE_A5, 4, NOTE_G5, 4,
        NOTE_C6, 4, NOTE_C5, 4, NOTE_C5, 8, NOTE_C5, 8,
        NOTE_D5, 4, NOTE_G5, 4, NOTE_E5, 4,
        NOTE_F5, 2, NOTE_C5, 4,
        NOTE_F5, 4, NOTE_F5, 8, NOTE_G5, 8, NOTE_F5, 8, NOTE_E5, 8,
        NOTE_D5, 4, NOTE_D5, 4, NOTE_D5, 4,
        NOTE_G5, 4, NOTE_G5, 8, NOTE_A5, 8, NOTE_G5, 8, NOTE_F5, 8,
        NOTE_E5, 4, NOTE_C5, 4, NOTE_C5, 4,

        NOTE_A5, 4, NOTE_A5, 8, NOTE_AS5, 8, NOTE_A5, 8, NOTE_G5, 8, // 45
        NOTE_F5, 4, NOTE_D5, 4, NOTE_C5, 8, NOTE_C5, 8,
        NOTE_D5, 4, NOTE_G5, 4, NOTE_E5, 4,
        NOTE_F5, 2, NOTE_C5, 4,
        NOTE_F5, 4, NOTE_F5, 8, NOTE_G5, 8, NOTE_F5, 8, NOTE_E5, 8,
        NOTE_D5, 4, NOTE_D5, 4, NOTE_D5, 4,
        NOTE_G5, 4, NOTE_G5, 8, NOTE_A5, 8, NOTE_G5, 8, NOTE_F5, 8,
        NOTE_E5, 4, NOTE_C5, 4, NOTE_C5, 4,

        NOTE_A5, 4, NOTE_A5, 8, NOTE_AS5, 8, NOTE_A5, 8, NOTE_G5, 8, // 53
        NOTE_F5, 4, NOTE_D5, 4, NOTE_C5, 8, NOTE_C5, 8,
        NOTE_D5, 4, NOTE_G5, 4, NOTE_E5, 4,
        NOTE_F5, 2, REST, 4};

    // sizeof gives the number of bytes, each int value is composed of two bytes (16 bits)
    // there are two values per note (pitch and duration), so for each note there are four bytes
    const int notes = sizeof(melody_merrychristmas) / sizeof(melody_merrychristmas[0]) / 2;

    // this calculates the duration of a whole note in ms
    const int wholenote = (60000 * 4) / tempo_merrychristmas;

    int divider = 0, noteDuration = 0;
#if defined(ESP32)
    const unsigned int soundChannel = 0;
    ledcAttachPin(buzzer, soundChannel);
#endif

    // iterate over the notes of the melody.
    // Remember, the array is twice the number of notes (notes + durations)
    for (int thisNote = 0; thisNote < notes * 2; thisNote = thisNote + 2)
    {

        // calculates the duration of each note
        divider = melody_merrychristmas[thisNote + 1];
        if (divider > 0)
        {
            // regular note, just proceed
            noteDuration = (wholenote) / divider;
        }
        else if (divider < 0)
        {
            // dotted notes are represented with negative durations!!
            noteDuration = (wholenote) / abs(divider);
            noteDuration *= 1.5; // increases the duration in half for dotted notes
        }

        // we only play the note for 90% of the duration, leaving 10% as a pause
#if defined(ESP32)
        ledcWriteTone(soundChannel, melody_merrychristmas[thisNote]);
#else
        tone(buzzer, melody_merrychristmas[thisNote], noteDuration * 0.9);
#endif

        // Wait for the specief duration before playing the next note.
        delay(noteDuration);

        // stop the waveform generation before the next note.
#if defined(ESP32)
        ledcWriteTone(soundChannel, 0);
#else
        noTone(buzzer);
#endif
    }
#if defined(ESP32)
    ledcDetachPin(buzzer);
#endif
}