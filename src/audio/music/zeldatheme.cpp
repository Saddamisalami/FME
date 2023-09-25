#include <Arduino.h>
#include "audio\scale.h"

void play_zeldatheme(int buzzer)
{
    // change this to make the song slower or faster
    const int tempo_zeldatheme = 88;

    const int melody_zeldatheme[] = {
        // Based on the arrangement at https://www.flutetunes.com/tunes.php?id=169

        NOTE_AS4, -2, NOTE_F4, 8, NOTE_F4, 8, NOTE_AS4, 8, // 1
        NOTE_GS4, 16, NOTE_FS4, 16, NOTE_GS4, -2,
        NOTE_AS4, -2, NOTE_FS4, 8, NOTE_FS4, 8, NOTE_AS4, 8,
        NOTE_A4, 16, NOTE_G4, 16, NOTE_A4, -2,
        REST, 1,

        NOTE_AS4, 4, NOTE_F4, -4, NOTE_AS4, 8, NOTE_AS4, 16, NOTE_C5, 16, NOTE_D5, 16, NOTE_DS5, 16, // 7
        NOTE_F5, 2, NOTE_F5, 8, NOTE_F5, 8, NOTE_F5, 8, NOTE_FS5, 16, NOTE_GS5, 16,
        NOTE_AS5, -2, NOTE_AS5, 8, NOTE_AS5, 8, NOTE_GS5, 8, NOTE_FS5, 16,
        NOTE_GS5, -8, NOTE_FS5, 16, NOTE_F5, 2, NOTE_F5, 4,

        NOTE_DS5, -8, NOTE_F5, 16, NOTE_FS5, 2, NOTE_F5, 8, NOTE_DS5, 8, // 11
        NOTE_CS5, -8, NOTE_DS5, 16, NOTE_F5, 2, NOTE_DS5, 8, NOTE_CS5, 8,
        NOTE_C5, -8, NOTE_D5, 16, NOTE_E5, 2, NOTE_G5, 8,
        NOTE_F5, 16, NOTE_F4, 16, NOTE_F4, 16, NOTE_F4, 16, NOTE_F4, 16, NOTE_F4, 16, NOTE_F4, 16, NOTE_F4, 16, NOTE_F4, 8, NOTE_F4, 16, NOTE_F4, 8,

        NOTE_AS4, 4, NOTE_F4, -4, NOTE_AS4, 8, NOTE_AS4, 16, NOTE_C5, 16, NOTE_D5, 16, NOTE_DS5, 16, // 15
        NOTE_F5, 2, NOTE_F5, 8, NOTE_F5, 8, NOTE_F5, 8, NOTE_FS5, 16, NOTE_GS5, 16,
        NOTE_AS5, -2, NOTE_CS6, 4,
        NOTE_C6, 4, NOTE_A5, 2, NOTE_F5, 4,
        NOTE_FS5, -2, NOTE_AS5, 4,
        NOTE_A5, 4, NOTE_F5, 2, NOTE_F5, 4,

        NOTE_FS5, -2, NOTE_AS5, 4,
        NOTE_A5, 4, NOTE_F5, 2, NOTE_D5, 4,
        NOTE_DS5, -2, NOTE_FS5, 4,
        NOTE_F5, 4, NOTE_CS5, 2, NOTE_AS4, 4,
        NOTE_C5, -8, NOTE_D5, 16, NOTE_E5, 2, NOTE_G5, 8,
        NOTE_F5, 16, NOTE_F4, 16, NOTE_F4, 16, NOTE_F4, 16, NOTE_F4, 16, NOTE_F4, 16, NOTE_F4, 16, NOTE_F4, 16, NOTE_F4, 8, NOTE_F4, 16, NOTE_F4, 8};

    // sizeof gives the number of bytes, each int value is composed of two bytes (16 bits)
    // there are two values per note (pitch and duration), so for each note there are four bytes
    const int notes = sizeof(melody_zeldatheme) / sizeof(melody_zeldatheme[0]) / 2;

    // this calculates the duration of a whole note in ms
    const int wholenote = (60000 * 4) / tempo_zeldatheme;

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
        divider = melody_zeldatheme[thisNote + 1];
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
        ledcWriteTone(soundChannel, melody_zeldatheme[thisNote]);
#else
        tone(buzzer, melody_zeldatheme[thisNote], noteDuration * 0.9);
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