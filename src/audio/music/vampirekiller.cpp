#include <Arduino.h>
#include "audio\scale.h"

void play_vampirekiller(int buzzer)
{
    // change this to make the song slower or faster
    const int tempo_vampirekiller = 130;

    const int melody_vampirekiller[] = {
        // Vamire Killer, from castlevania
        // Score available at https://musescore.com/user/28972071/scores/5425616
        // Theme starts at measure 6

        NOTE_E5, 16, NOTE_E5, 8, NOTE_D5, 16, REST, 16, NOTE_CS5, -4, NOTE_E4, 8, NOTE_FS4, 16, NOTE_G4, 16, NOTE_A4, 16,

        NOTE_B4, -8, NOTE_E4, -8, NOTE_B4, 8, NOTE_A4, 16, NOTE_D5, -4, // 7
        NOTE_E5, 16, NOTE_E5, 8, NOTE_D5, 16, REST, 16, NOTE_CS5, -4, NOTE_E4, 8, NOTE_FS4, 16, NOTE_G4, 16, NOTE_A4, 16,
        NOTE_B4, -8, NOTE_E4, -8, NOTE_B4, 8, NOTE_A4, 16, NOTE_D4, -4,
        REST, 8, NOTE_E5, 8, REST, 16, NOTE_B5, 16, REST, 8, NOTE_AS5, 16, NOTE_B5, 16, NOTE_AS5, 16, NOTE_G5, 16, REST, 4,

        NOTE_B5, 8, NOTE_B5, 16, NOTE_AS5, 16, REST, 16, NOTE_AS5, 16, NOTE_A5, 16, REST, 16, NOTE_B5, 16, NOTE_G5, 16, NOTE_B5, 16, NOTE_AS5, 16, REST, 16, NOTE_B5, 16, NOTE_A5, 16, NOTE_G5, 16, // 11
        REST, 8, NOTE_E5, 8, REST, 16, NOTE_B5, 16, REST, 8, NOTE_AS5, 16, NOTE_B5, 16, NOTE_AS5, 16, NOTE_G5, 16, REST, 4,
        NOTE_B5, 8, NOTE_B5, 16, NOTE_AS5, 16, REST, 16, NOTE_AS5, 16, NOTE_A5, 16, REST, 16, NOTE_B5, 16, NOTE_G5, 16, NOTE_B5, 16, NOTE_AS5, 16, REST, 16, NOTE_B5, 16, NOTE_A5, 16, NOTE_G5, 16,

        NOTE_DS4, -8, NOTE_FS4, -8, NOTE_C5, 8, NOTE_B4, -8, NOTE_G4, -8, NOTE_E4, 8, // 14
        NOTE_DS4, -8, NOTE_FS4, -8, NOTE_C5, 8, NOTE_B4, -8, NOTE_G4, -8, REST, 8,
        NOTE_DS4, -8, NOTE_FS4, -8, NOTE_C5, 8, NOTE_B4, -8, NOTE_G4, -8, NOTE_E4, 8,
        NOTE_DS4, -8, NOTE_FS4, -8, NOTE_C5, 8, NOTE_B4, -8, NOTE_CS5, -8, NOTE_DS5, 8,

        NOTE_E5, 16, NOTE_E5, 16, NOTE_E4, 16, NOTE_E4, -2, // 18
        NOTE_C4, 8, NOTE_C4, 8, NOTE_E4, 16, NOTE_G4, -8, NOTE_D4, 8, NOTE_D4, 8, NOTE_FS4, 16, NOTE_A4, -8,
        NOTE_E5, 16, NOTE_E5, 16, NOTE_E4, 16, NOTE_E4, -2,
        NOTE_C4, 8, NOTE_C4, 8, NOTE_E4, 16, NOTE_G4, -8, NOTE_D4, 8, NOTE_D4, 8, NOTE_B3, 16, NOTE_D4, -8,

        // repeats a second time

        NOTE_E5, 16, NOTE_E5, 8, NOTE_D5, 16, REST, 16, NOTE_CS5, -4, NOTE_E4, 8, NOTE_FS4, 16, NOTE_G4, 16, NOTE_A4, 16,

        NOTE_B4, -8, NOTE_E4, -8, NOTE_B4, 8, NOTE_A4, 16, NOTE_D5, -4, // 7
        NOTE_E5, 16, NOTE_E5, 8, NOTE_D5, 16, REST, 16, NOTE_CS5, -4, NOTE_E4, 8, NOTE_FS4, 16, NOTE_G4, 16, NOTE_A4, 16,
        NOTE_B4, -8, NOTE_E4, -8, NOTE_B4, 8, NOTE_A4, 16, NOTE_D4, -4,
        REST, 8, NOTE_E5, 8, REST, 16, NOTE_B5, 16, REST, 8, NOTE_AS5, 16, NOTE_B5, 16, NOTE_AS5, 16, NOTE_G5, 16, REST, 4,

        NOTE_B5, 8, NOTE_B5, 16, NOTE_AS5, 16, REST, 16, NOTE_AS5, 16, NOTE_A5, 16, REST, 16, NOTE_B5, 16, NOTE_G5, 16, NOTE_B5, 16, NOTE_AS5, 16, REST, 16, NOTE_B5, 16, NOTE_A5, 16, NOTE_G5, 16, // 11
        REST, 8, NOTE_E5, 8, REST, 16, NOTE_B5, 16, REST, 8, NOTE_AS5, 16, NOTE_B5, 16, NOTE_AS5, 16, NOTE_G5, 16, REST, 4,
        NOTE_B5, 8, NOTE_B5, 16, NOTE_AS5, 16, REST, 16, NOTE_AS5, 16, NOTE_A5, 16, REST, 16, NOTE_B5, 16, NOTE_G5, 16, NOTE_B5, 16, NOTE_AS5, 16, REST, 16, NOTE_B5, 16, NOTE_A5, 16, NOTE_G5, 16,

        NOTE_DS4, -8, NOTE_FS4, -8, NOTE_C5, 8, NOTE_B4, -8, NOTE_G4, -8, NOTE_E4, 8, // 14
        NOTE_DS4, -8, NOTE_FS4, -8, NOTE_C5, 8, NOTE_B4, -8, NOTE_G4, -8, REST, 8,
        NOTE_DS4, -8, NOTE_FS4, -8, NOTE_C5, 8, NOTE_B4, -8, NOTE_G4, -8, NOTE_E4, 8,
        NOTE_DS4, -8, NOTE_FS4, -8, NOTE_C5, 8, NOTE_B4, -8, NOTE_CS5, -8, NOTE_DS5, 8,

        NOTE_E5, 16, NOTE_E5, 16, NOTE_E4, 16, NOTE_E4, -2, // 18
        NOTE_C4, 8, NOTE_C4, 8, NOTE_E4, 16, NOTE_G4, -8, NOTE_D4, 8, NOTE_D4, 8, NOTE_FS4, 16, NOTE_A4, -8,
        NOTE_E5, 16, NOTE_E5, 16, NOTE_E4, 16, NOTE_E4, -2,
        NOTE_C4, 8, NOTE_C4, 8, NOTE_E4, 16, NOTE_G4, -8, NOTE_D4, 8, NOTE_D4, 8, NOTE_B3, 16, NOTE_D4, -8};

    // sizeof gives the number of bytes, each int value is composed of two bytes (16 bits)
    // there are two values per note (pitch and duration), so for each note there are four bytes
    const int notes = sizeof(melody_vampirekiller) / sizeof(melody_vampirekiller[0]) / 2;

    // this calculates the duration of a whole note in ms
    const int wholenote = (60000 * 4) / tempo_vampirekiller;

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
        divider = melody_vampirekiller[thisNote + 1];
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
        ledcWriteTone(soundChannel, melody_vampirekiller[thisNote]);
#else
        tone(buzzer, melody_vampirekiller[thisNote], noteDuration * 0.9);
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