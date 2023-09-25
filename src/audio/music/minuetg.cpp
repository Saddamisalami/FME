#include <Arduino.h>
#include "audio\scale.h"

void play_minuetg(int buzzer)
{
    // change this to make the song slower or faster
    const int tempo_minuetg = 140;

    const int melody_minuetg[] = {
        // Minuet in G - Petzold
        // Score available at https://musescore.com/user/3402766/scores/1456391
        NOTE_D5, 4, NOTE_G4, 8, NOTE_A4, 8, NOTE_B4, 8, NOTE_C5, 8, // 1
        NOTE_D5, 4, NOTE_G4, 4, NOTE_G4, 4,
        NOTE_E5, 4, NOTE_C5, 8, NOTE_D5, 8, NOTE_E5, 8, NOTE_FS5, 8,
        NOTE_G5, 4, NOTE_G4, 4, NOTE_G4, 4,
        NOTE_C5, 4, NOTE_D5, 8, NOTE_C5, 8, NOTE_B4, 8, NOTE_A4, 8,

        NOTE_B4, 4, NOTE_C5, 8, NOTE_B4, 8, NOTE_A4, 8, NOTE_G4, 8, // 6
        NOTE_FS4, 4, NOTE_G4, 8, NOTE_A4, 8, NOTE_B4, 8, NOTE_G4, 8,
        NOTE_A4, -2,
        NOTE_D5, 4, NOTE_G4, 8, NOTE_A4, 8, NOTE_B4, 8, NOTE_C5, 8,
        NOTE_D5, 4, NOTE_G4, 4, NOTE_G4, 4,
        NOTE_E5, 4, NOTE_C5, 8, NOTE_D5, 8, NOTE_E5, 8, NOTE_FS5, 8,

        NOTE_G5, 4, NOTE_G4, 4, NOTE_G4, 4,
        NOTE_C5, 4, NOTE_D5, 8, NOTE_C5, 8, NOTE_B4, 8, NOTE_A4, 8, // 12
        NOTE_B4, 4, NOTE_C5, 8, NOTE_B4, 8, NOTE_A4, 8, NOTE_G4, 8,
        NOTE_A4, 4, NOTE_B4, 8, NOTE_A4, 8, NOTE_G4, 8, NOTE_FS4, 8,
        NOTE_G4, -2,

        // repeats from 1

        NOTE_D5, 4, NOTE_G4, 8, NOTE_A4, 8, NOTE_B4, 8, NOTE_C5, 8, // 1
        NOTE_D5, 4, NOTE_G4, 4, NOTE_G4, 4,
        NOTE_E5, 4, NOTE_C5, 8, NOTE_D5, 8, NOTE_E5, 8, NOTE_FS5, 8,
        NOTE_G5, 4, NOTE_G4, 4, NOTE_G4, 4,
        NOTE_C5, 4, NOTE_D5, 8, NOTE_C5, 8, NOTE_B4, 8, NOTE_A4, 8,

        NOTE_B4, 4, NOTE_C5, 8, NOTE_B4, 8, NOTE_A4, 8, NOTE_G4, 8, // 6
        NOTE_FS4, 4, NOTE_G4, 8, NOTE_A4, 8, NOTE_B4, 8, NOTE_G4, 8,
        NOTE_A4, -2,
        NOTE_D5, 4, NOTE_G4, 8, NOTE_A4, 8, NOTE_B4, 8, NOTE_C5, 8,
        NOTE_D5, 4, NOTE_G4, 4, NOTE_G4, 4,
        NOTE_E5, 4, NOTE_C5, 8, NOTE_D5, 8, NOTE_E5, 8, NOTE_FS5, 8,

        NOTE_G5, 4, NOTE_G4, 4, NOTE_G4, 4,
        NOTE_C5, 4, NOTE_D5, 8, NOTE_C5, 8, NOTE_B4, 8, NOTE_A4, 8, // 12
        NOTE_B4, 4, NOTE_C5, 8, NOTE_B4, 8, NOTE_A4, 8, NOTE_G4, 8,
        NOTE_A4, 4, NOTE_B4, 8, NOTE_A4, 8, NOTE_G4, 8, NOTE_FS4, 8,
        NOTE_G4, -2,

        // continues from 17

        NOTE_B5, 4, NOTE_G5, 8, NOTE_A5, 8, NOTE_B5, 8, NOTE_G5, 8, // 17
        NOTE_A5, 4, NOTE_D5, 8, NOTE_E5, 8, NOTE_FS5, 8, NOTE_D5, 8,
        NOTE_G5, 4, NOTE_E5, 8, NOTE_FS5, 8, NOTE_G5, 8, NOTE_D5, 8,
        NOTE_CS5, 4, NOTE_B4, 8, NOTE_CS5, 8, NOTE_A4, 4,
        NOTE_A4, 8, NOTE_B4, 8, NOTE_CS5, 8, NOTE_D5, 8, NOTE_E5, 8, NOTE_FS5, 8,

        NOTE_G5, 4, NOTE_FS5, 4, NOTE_E5, 4, // 22
        NOTE_FS5, 4, NOTE_A4, 4, NOTE_CS5, 4,
        NOTE_D5, -2,
        NOTE_D5, 4, NOTE_G4, 8, NOTE_FS5, 8, NOTE_G4, 4,
        NOTE_E5, 4, NOTE_G4, 8, NOTE_FS4, 8, NOTE_G4, 4,
        NOTE_D5, 4, NOTE_C5, 4, NOTE_B4, 4,

        NOTE_A4, 8, NOTE_G4, 8, NOTE_FS4, 8, NOTE_G4, 8, NOTE_A4, 4, // 28
        NOTE_D4, 8, NOTE_E4, 8, NOTE_FS4, 8, NOTE_G4, 8, NOTE_A4, 8, NOTE_B4, 8,
        NOTE_C5, 4, NOTE_B4, 4, NOTE_A4, 4,
        NOTE_B4, 8, NOTE_D5, 8, NOTE_G4, 4, NOTE_FS4, 4,
        NOTE_G4, -2};

    // sizeof gives the number of bytes, each int value is composed of two bytes (16 bits)
    // there are two values per note (pitch and duration), so for each note there are four bytes
    const int notes = sizeof(melody_minuetg) / sizeof(melody_minuetg[0]) / 2;

    // this calculates the duration of a whole note in ms
    const int wholenote = (60000 * 4) / tempo_minuetg;

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
        divider = melody_minuetg[thisNote + 1];
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
        ledcWriteTone(soundChannel, melody_minuetg[thisNote]);
#else
        tone(buzzer, melody_minuetg[thisNote], noteDuration * 0.9);
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