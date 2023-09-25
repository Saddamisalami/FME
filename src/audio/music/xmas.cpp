#include <Arduino.h>
#include "audio\scale.h"

void play_xmas(int buzzer)
{
    // change this to make the song slower or faster
    const int tempo_xmas = 100;

    const int melody_xmas[] = {

        NOTE_E5, 8, NOTE_E5, 8, NOTE_E5, 4,
        NOTE_E5, 8, NOTE_E5, 8, NOTE_E5, 4,
        NOTE_E5, 8, NOTE_G5, 8, NOTE_C5, 8, NOTE_D5, 8,
        NOTE_E5, 2,
        NOTE_F5, 8, NOTE_F5, 8, NOTE_F5, 8, NOTE_F5, 8,
        NOTE_F5, 8, NOTE_E5, 8, NOTE_E5, 8, NOTE_E5, 16, NOTE_E5, 16,
        NOTE_E5, 8, NOTE_D5, 8, NOTE_D5, 8, NOTE_E5, 8,
        NOTE_D5, 4, NOTE_G5, 4};

    // sizeof gives the number of bytes, each int value is composed of two bytes (16 bits)
    // there are two values per note (pitch and duration), so for each note there are four bytes
    const int notes = sizeof(melody_xmas) / sizeof(melody_xmas[0]) / 2;

    // this calculates the duration of a whole note in ms
    const int wholenote = (60000 * 4) / tempo_xmas;

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
        divider = melody_xmas[thisNote + 1];
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
        ledcWriteTone(soundChannel, melody_xmas[thisNote]);
#else
        tone(buzzer, melody_xmas[thisNote], noteDuration * 0.9);
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