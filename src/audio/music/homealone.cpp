#include <Arduino.h>
#include "audio\scale.h"

void play_homealone(int buzzer)
{
    const int melody_homealone[] = {
        NOTE_E4, NOTE_C5, NOTE_B4, NOTE_B4,
        NOTE_C5, NOTE_B4, NOTE_F4, NOTE_G4,
        NOTE_G4, NOTE_E4, NOTE_G4, NOTE_E4,
        NOTE_C5, NOTE_G4,
        NOTE_D4, NOTE_A4, NOTE_G4, NOTE_C4, NOTE_F4,
        NOTE_E4, NOTE_D4,
        NOTE_G4, NOTE_E4, NOTE_G4, NOTE_E4,
        NOTE_C5, NOTE_G4,
        NOTE_A4, NOTE_C5, NOTE_F4, NOTE_E4, NOTE_G4, NOTE_C4,
        NOTE_E4, NOTE_D4,
        REST, NOTE_E4, NOTE_C4, NOTE_F4, NOTE_D4,
        REST, NOTE_FS4, NOTE_D4, NOTE_A4, NOTE_G4,
        REST, NOTE_GS5, NOTE_E4, NOTE_B4, NOTE_A4,
        NOTE_F4, NOTE_C5, NOTE_A4, NOTE_B4,
        NOTE_G4, NOTE_E4, NOTE_G4, NOTE_E4,
        NOTE_C5, NOTE_G4,
        NOTE_D4, NOTE_A4, NOTE_G4, NOTE_C4, NOTE_F4,
        NOTE_E4, NOTE_D4,
        NOTE_G4, NOTE_E4, NOTE_G4, NOTE_E4,
        NOTE_C5, NOTE_G4,
        REST, NOTE_A4, NOTE_B4, NOTE_C5, NOTE_G4, NOTE_E4,
        REST, NOTE_A4, NOTE_B4, NOTE_C5, NOTE_G4, NOTE_E4,
        REST, NOTE_A4, NOTE_B4, NOTE_C5, NOTE_G4, NOTE_E4,
        NOTE_C4, NOTE_C5, NOTE_B4,
        NOTE_D5, NOTE_E4, NOTE_G4, NOTE_E4,
        NOTE_C5, NOTE_G4,
        NOTE_C5};

    int durations_homealone[] = {
        4, 8, 8, 2,
        8, 8, 4, 4,
        4, 4, 4, 4,
        2, 2,
        4, 4, 4, 8, 8,
        2, 2,
        4, 4, 4, 4,
        2, 2,
        8, 8, 4, 8, 8, 4,
        2, 2,
        4, 8, 8, 4, 4,
        4, 8, 8, 4, 4,
        4, 8, 8, 4, 4,
        4, 8, 8, 2,
        4, 4, 4, 4,
        2, 2,
        4, 4, 4, 8, 8,
        2, 2,
        4, 4, 4, 4,
        2, 2,
        4, 16, 16, 8, 4, 4,
        4, 16, 16, 8, 4, 4,
        4, 16, 16, 8, 4, 4,
        4, 2, 4,
        4, 4, 4, 4,
        2, 2,
        1};

#if defined(ESP32)
    const unsigned int soundChannel = 0;
    ledcAttachPin(buzzer, soundChannel);
#endif

    int size = sizeof(durations_homealone) / sizeof(int);
    // iterate over the notes of the melody.
    // Remember, the array is twice the number of notes (notes + durations)
    for (int thisNote = 0; thisNote < size; thisNote = thisNote + 2)
    {

        int duration = 1000 / durations_homealone[thisNote];
        int pauseBetweenNotes = duration * 1.30;
        // we only play the note for 90% of the duration, leaving 10% as a pause
#if defined(ESP32)
        ledcWriteTone(soundChannel, melody_homealone[thisNote]);
#else
        tone(buzzer, melody_homealone[thisNote], duration * 0.9);
#endif

        // Wait for the specief duration before playing the next note.
        delay(pauseBetweenNotes);

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