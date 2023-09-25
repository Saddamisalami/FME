#include <Arduino.h>
#include "audio\scale.h"

void play_theredsong(int buzzer)
{
    // change this to make the song slower or faster
    const int tempo_theredsong = 122;

    const int melody_theredsong[] = {
        NOTE_DB3, 4, NOTE_EB3, 16, NOTE_DB3, 8, REST, 16, NOTE_E3, 4, NOTE_FS3, 16, NOTE_E3, 8, REST, 16,
        NOTE_DB3, 4, NOTE_EB3, 16, NOTE_DB3, 8, REST, 16, NOTE_A2, 4, REST, 16, NOTE_A2, 8, REST, 16,
        NOTE_DB3, 4, NOTE_EB3, 16, NOTE_DB3, 16, REST, 8, NOTE_E3, 4, NOTE_FS3, 16, NOTE_E3, 8, REST, 16,
        NOTE_DB3, 4, NOTE_EB3, 16, NOTE_DB3, 16, REST, 8, NOTE_A2, 2,
        NOTE_DB3, 8, NOTE_DB3, 8, NOTE_EB3, 16, NOTE_DB3, 16, REST, 8, NOTE_E3, 8, NOTE_E3, 16, NOTE_FS3, 16, NOTE_E3, 8,
        NOTE_DB3, 16, REST, 16, NOTE_DB3, 8, NOTE_EB3, 16, NOTE_DB3, 16, REST, 8, NOTE_A2, 4, NOTE_A2, 8, REST, 8,
        NOTE_DB3, 16, REST, 16, NOTE_DB3, 8, NOTE_EB3, 16, NOTE_DB3, 16, REST, 8, NOTE_E3, 16, REST, 16, NOTE_E3, 16, NOTE_FS3, 16, NOTE_E3, 8, REST, 8,
        NOTE_DB3, 16, REST, 16, NOTE_DB3, 8, NOTE_EB3, 16, NOTE_DB3, 16, REST, 8, NOTE_A2, 4, REST, 4,
        NOTE_DB3, 16, REST, 16, NOTE_DB3, 8, NOTE_EB3, 16, NOTE_DB3, 16, REST, 8, NOTE_E3, 16, REST, 16, NOTE_E3, 16, NOTE_FS3, 16, NOTE_E3, 8, REST, 8,
        NOTE_DB3, 16, REST, 16, NOTE_DB3, 8, NOTE_EB3, 16, NOTE_DB3, 16, REST, 8, NOTE_A2, 4, REST, 4,
        NOTE_DB3, 16, REST, 16, NOTE_DB3, 8, NOTE_EB3, 16, NOTE_DB3, 16, REST, 8, NOTE_E3, 16, REST, 16, NOTE_E3, 16, NOTE_FS3, 16, NOTE_E3, 8, REST, 8,
        NOTE_DB3, 16, REST, 16, NOTE_DB3, 8, NOTE_EB3, 16, NOTE_DB3, 16, REST, 8, NOTE_A2, 4, REST, 4,
        NOTE_DB3, 8, REST, 16, NOTE_DB3, 16, REST, 16, NOTE_DB3, 16, REST, 8, NOTE_DB3, 8, REST, 16, NOTE_DB3, 16, REST, 16, NOTE_DB3, 16, REST, 8,
        NOTE_EB3, 8, REST, 16, NOTE_EB3, 16, REST, 16, NOTE_EB3, 16, REST, 8, NOTE_EB3, 8, REST, 16, NOTE_EB3, 16, REST, 16, NOTE_EB3, 16, REST, 8,
        NOTE_B2, 8, REST, 16, NOTE_B2, 16, REST, 16, NOTE_B2, 16, REST, 8, NOTE_B2, 8, REST, 16, NOTE_B2, 16, REST, 16, NOTE_B2, 16, REST, 8,
        NOTE_B2, 8, REST, 16, NOTE_B2, 16, REST, 16, NOTE_B2, 16, REST, 8, NOTE_B2, 8, REST, 16, NOTE_B2, 16, REST, 16, NOTE_B2, 16, REST, 8};

    // sizeof gives the number of bytes, each int value is composed of two bytes (16 bits)
    // there are two values per note (pitch and duration), so for each note there are four bytes
    const int notes = sizeof(melody_theredsong) / sizeof(melody_theredsong[0]) / 2;

    // this calculates the duration of a whole note in ms
    const int wholenote = (60000 * 4) / tempo_theredsong;

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
        divider = melody_theredsong[thisNote + 1];
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
        ledcWriteTone(soundChannel, melody_theredsong[thisNote]);
#else
        tone(buzzer, melody_theredsong[thisNote], noteDuration * 0.9);
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