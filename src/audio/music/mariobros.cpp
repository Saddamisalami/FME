#include <Arduino.h>
#include "audio\scale.h"

void play_mariobros(int buzzer)
{
    // change this to make the song slower or faster
    const int tempo_mariobros = 100;

    const int melody_mariobros[] = {

        NOTE_E5, 8, NOTE_E5, 8, REST, 8, NOTE_E5, 8, REST, 8, NOTE_C5, 8, NOTE_E5, 8,
        NOTE_G5, 4, REST, 4, NOTE_G4, 8, REST, 4,
        NOTE_C5, 4, NOTE_G4, 8, REST, 4, NOTE_E4, 4,
        NOTE_A4, 4, NOTE_B4, 4, NOTE_AS4, 8, NOTE_A4, 4,
        NOTE_G4, 8, NOTE_E5, 8, NOTE_G5, 8, NOTE_A5, 4, NOTE_F5, 8, NOTE_G5, 8,
        REST, 8, NOTE_E5, 4, NOTE_C5, 8, NOTE_D5, 8, NOTE_B4, 4,
        NOTE_C5, 4, NOTE_G4, 8, REST, 4, NOTE_E4, 4,
        NOTE_A4, 4, NOTE_B4, 4, NOTE_AS4, 8, NOTE_A4, 4,
        NOTE_G4, 8, NOTE_E5, 8, NOTE_G5, 8, NOTE_A5, 4, NOTE_F5, 8, NOTE_G5, 8,
        REST, 8, NOTE_E5, 4, NOTE_C5, 8, NOTE_D5, 8, NOTE_B4, 4,

        REST, 4, NOTE_G5, 8, NOTE_FS5, 8, NOTE_F5, 8, NOTE_DS5, 4, NOTE_E5, 8,
        REST, 8, NOTE_GS4, 8, NOTE_A4, 8, NOTE_C4, 8, REST, 8, NOTE_A4, 8, NOTE_C5, 8, NOTE_D5, 8,
        REST, 4, NOTE_DS5, 4, REST, 8, NOTE_D5, 4,
        NOTE_C5, 2, REST, 2,

        REST, 4, NOTE_G5, 8, NOTE_FS5, 8, NOTE_F5, 8, NOTE_DS5, 4, NOTE_E5, 8,
        REST, 8, NOTE_GS4, 8, NOTE_A4, 8, NOTE_C4, 8, REST, 8, NOTE_A4, 8, NOTE_C5, 8, NOTE_D5, 8,
        REST, 4, NOTE_DS5, 4, REST, 8, NOTE_D5, 4,
        NOTE_C5, 2, REST, 2,

        NOTE_C5, 8, NOTE_C5, 4, NOTE_C5, 8, REST, 8, NOTE_C5, 8, NOTE_D5, 4,
        NOTE_E5, 8, NOTE_C5, 4, NOTE_A4, 8, NOTE_G4, 2,

        NOTE_C5, 8, NOTE_C5, 4, NOTE_C5, 8, REST, 8, NOTE_C5, 8, NOTE_D5, 8, NOTE_E5, 8,
        REST, 1,
        NOTE_C5, 8, NOTE_C5, 4, NOTE_C5, 8, REST, 8, NOTE_C5, 8, NOTE_D5, 4,
        NOTE_E5, 8, NOTE_C5, 4, NOTE_A4, 8, NOTE_G4, 2,
        NOTE_E5, 8, NOTE_E5, 8, REST, 8, NOTE_E5, 8, REST, 8, NOTE_C5, 8, NOTE_E5, 4,
        NOTE_G5, 4, REST, 4, NOTE_G4, 4, REST, 4,
        NOTE_C5, 4, NOTE_G4, 8, REST, 4, NOTE_E4, 4,

        NOTE_A4, 4, NOTE_B4, 4, NOTE_AS4, 8, NOTE_A4, 4,
        NOTE_G4, 8, NOTE_E5, 8, NOTE_G5, 8, NOTE_A5, 4, NOTE_F5, 8, NOTE_G5, 8,
        REST, 8, NOTE_E5, 4, NOTE_C5, 8, NOTE_D5, 8, NOTE_B4, 4,

        NOTE_C5, 4, NOTE_G4, 8, REST, 4, NOTE_E4, 4,
        NOTE_A4, 4, NOTE_B4, 4, NOTE_AS4, 8, NOTE_A4, 4,
        NOTE_G4, 8, NOTE_E5, 8, NOTE_G5, 8, NOTE_A5, 4, NOTE_F5, 8, NOTE_G5, 8,
        REST, 8, NOTE_E5, 4, NOTE_C5, 8, NOTE_D5, 8, NOTE_B4, 4,

        NOTE_E5, 8, NOTE_C5, 4, NOTE_G4, 8, REST, 4, NOTE_GS4, 4,
        NOTE_A4, 8, NOTE_F5, 4, NOTE_F5, 8, NOTE_A4, 2,
        NOTE_D5, 8, NOTE_A5, 8, NOTE_A5, 8, NOTE_A5, 8, NOTE_G5, 8, NOTE_F5, 8,

        NOTE_E5, 8, NOTE_C5, 4, NOTE_A4, 8, NOTE_G4, 2,
        NOTE_E5, 8, NOTE_C5, 4, NOTE_G4, 8, REST, 4, NOTE_GS4, 4,
        NOTE_A4, 8, NOTE_F5, 4, NOTE_F5, 8, NOTE_A4, 2,
        NOTE_B4, 8, NOTE_F5, 4, NOTE_F5, 8, NOTE_F5, 8, NOTE_E5, 8, NOTE_D5, 8,
        NOTE_C5, 8, NOTE_E4, 4, NOTE_E4, 8, NOTE_C4, 2,

        NOTE_E5, 8, NOTE_C5, 4, NOTE_G4, 8, REST, 4, NOTE_GS4, 4,
        NOTE_A4, 8, NOTE_F5, 4, NOTE_F5, 8, NOTE_A4, 2,
        NOTE_D5, 8, NOTE_A5, 8, NOTE_A5, 8, NOTE_A5, 8, NOTE_G5, 8, NOTE_F5, 8,

        NOTE_E5, 8, NOTE_C5, 4, NOTE_A4, 8, NOTE_G4, 2,
        NOTE_E5, 8, NOTE_C5, 4, NOTE_G4, 8, REST, 4, NOTE_GS4, 4,
        NOTE_A4, 8, NOTE_F5, 4, NOTE_F5, 8, NOTE_A4, 2,
        NOTE_B4, 8, NOTE_F5, 4, NOTE_F5, 8, NOTE_F5, 8, NOTE_E5, 8, NOTE_D5, 8,
        NOTE_C5, 8, NOTE_E4, 4, NOTE_E4, 8, NOTE_C4, 2,
        NOTE_C5, 8, NOTE_C5, 4, NOTE_C5, 8, REST, 8, NOTE_C5, 8, NOTE_D5, 8, NOTE_E5, 8,
        REST, 1,

        NOTE_C5, 8, NOTE_C5, 4, NOTE_C5, 8, REST, 8, NOTE_C5, 8, NOTE_D5, 4,
        NOTE_E5, 8, NOTE_C5, 4, NOTE_A4, 8, NOTE_G4, 2,
        NOTE_E5, 8, NOTE_E5, 8, REST, 8, NOTE_E5, 8, REST, 8, NOTE_C5, 8, NOTE_E5, 4,
        NOTE_G5, 4, REST, 4, NOTE_G4, 4, REST, 4,
        NOTE_E5, 8, NOTE_C5, 4, NOTE_G4, 8, REST, 4, NOTE_GS4, 4,
        NOTE_A4, 8, NOTE_F5, 4, NOTE_F5, 8, NOTE_A4, 2,
        NOTE_D5, 8, NOTE_A5, 8, NOTE_A5, 8, NOTE_A5, 8, NOTE_G5, 8, NOTE_F5, 8,

        NOTE_E5, 8, NOTE_C5, 4, NOTE_A4, 8, NOTE_G4, 2,
        NOTE_E5, 8, NOTE_C5, 4, NOTE_G4, 8, REST, 4, NOTE_GS4, 4,
        NOTE_A4, 8, NOTE_F5, 4, NOTE_F5, 8, NOTE_A4, 2,
        NOTE_B4, 8, NOTE_F5, 4, NOTE_F5, 8, NOTE_F5, 8, NOTE_E5, 8, NOTE_D5, 8,
        NOTE_C5, 8, NOTE_E4, 4, NOTE_E4, 8, NOTE_C4, 2,

        // Game over sound
        NOTE_C5, 4, NOTE_G4, 4, NOTE_E4, 4,
        NOTE_A4, 8, NOTE_B4, 8, NOTE_A4, 8, NOTE_GS4, 8, NOTE_AS4, 8, NOTE_GS4, 8,
        NOTE_G4, 8, NOTE_D4, 8, NOTE_E4, 2};

    // sizeof gives the number of bytes, each int value is composed of two bytes (16 bits)
    // there are two values per note (pitch and duration), so for each note there are four bytes
    const int notes = sizeof(melody_mariobros) / sizeof(melody_mariobros[0]) / 2;

    // this calculates the duration of a whole note in ms
    const int wholenote = (60000 * 4) / tempo_mariobros;

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
        divider = melody_mariobros[thisNote + 1];
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
        ledcWriteTone(soundChannel, melody_mariobros[thisNote]);
#else
        tone(buzzer, melody_mariobros[thisNote], noteDuration * 0.9);
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