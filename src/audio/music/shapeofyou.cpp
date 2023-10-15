#include <Arduino.h>
#include "audio\scale.h"

void play_shapeofyou(int buzzer)
{
    const int melody_shapeofyou[] = {
        NOTE_CS4, NOTE_E4, NOTE_CS4, NOTE_CS4, NOTE_E4,
        NOTE_CS4, NOTE_CS4, NOTE_E4, NOTE_CS4, NOTE_DS4,
        NOTE_CS4, NOTE_CS4, NOTE_E4, NOTE_CS4,
        NOTE_B3,
        NOTE_CS4, NOTE_E4, NOTE_CS4, NOTE_CS4, NOTE_E4,
        NOTE_CS4, NOTE_DS4, NOTE_CS4, NOTE_E4,
        NOTE_B3,
        NOTE_E4, NOTE_E4, NOTE_E4, NOTE_E4, NOTE_E4, NOTE_E4, NOTE_E4, NOTE_E4, NOTE_E4,
        NOTE_E4, NOTE_E4, NOTE_E4, NOTE_E4, NOTE_FS4, NOTE_GS4, NOTE_GS4,
        NOTE_GS4, NOTE_E4, NOTE_FS4, NOTE_B4, NOTE_GS4, NOTE_GS4, NOTE_GS4, NOTE_GS4, NOTE_GS4,
        NOTE_FS4, NOTE_FS4, NOTE_FS4, NOTE_GS4, NOTE_FS4, NOTE_FS4, NOTE_FS4, NOTE_FS4, NOTE_FS4, NOTE_GS4, NOTE_FS4,
        NOTE_E4, NOTE_CS4, NOTE_CS4, NOTE_GS4, NOTE_GS4,
        NOTE_GS4, NOTE_GS4, NOTE_GS4, NOTE_GS4, NOTE_GS4, NOTE_GS4, NOTE_GS4, NOTE_GS4, NOTE_GS4,
        NOTE_GS4, NOTE_B4, NOTE_GS4, NOTE_GS4, NOTE_FS4, NOTE_FS4, NOTE_E4, NOTE_GS4,
        NOTE_FS4, NOTE_E4, NOTE_E4, NOTE_E4, NOTE_B4, NOTE_GS4, NOTE_GS4, NOTE_GS4, NOTE_FS4,
        NOTE_FS4, NOTE_FS4, NOTE_FS4, NOTE_FS4, NOTE_FS4, NOTE_FS4, NOTE_FS4, NOTE_FS4,
        NOTE_E4, NOTE_CS4, NOTE_CS4, NOTE_CS4, NOTE_CS4, NOTE_CS4,
        NOTE_GS3, NOTE_B3,
        NOTE_CS4, NOTE_CS4, NOTE_FS4, NOTE_GS4, NOTE_E4, NOTE_FS4,
        NOTE_B3,
        NOTE_E4, NOTE_FS4, NOTE_GS4, NOTE_FS4, NOTE_E4, NOTE_CS4, NOTE_E4, NOTE_GS4,
        NOTE_FS4, NOTE_E4, NOTE_FS4, NOTE_CS4, NOTE_B4, NOTE_GS4, NOTE_GS4, NOTE_FS4, NOTE_FS4,
        NOTE_E4, NOTE_CS4, NOTE_E4, NOTE_FS4, NOTE_GS4, NOTE_FS4, NOTE_E4,
        NOTE_FS4, NOTE_E4, NOTE_CS4, NOTE_CS4,
        NOTE_B3,
        NOTE_CS4, NOTE_CS4, NOTE_FS4, NOTE_GS4, NOTE_E4, NOTE_FS4, NOTE_FS4,
        NOTE_B3,
        NOTE_FS4, NOTE_GS4, NOTE_FS4, NOTE_E4, NOTE_CS4, NOTE_E4, NOTE_GS4, NOTE_FS4,
        NOTE_E4, NOTE_FS4, NOTE_CS4, NOTE_B4, NOTE_GS4, NOTE_GS4, NOTE_FS4, NOTE_FS4, NOTE_E4,
        NOTE_CS4, NOTE_B4, NOTE_GS4, NOTE_GS4, NOTE_FS4, NOTE_FS4, NOTE_E4,
        NOTE_CS4, NOTE_CS4,
        NOTE_GS3, NOTE_B3,
        NOTE_E4, NOTE_FS4, NOTE_GS4, NOTE_FS4, NOTE_E4, NOTE_E4, NOTE_E4, NOTE_FS4, NOTE_FS4,
        NOTE_E4, NOTE_FS4, NOTE_GS4, NOTE_FS4, NOTE_E4, NOTE_E4, NOTE_E4, NOTE_FS4 | NOTE_CS4, NOTE_E4, NOTE_FS4, NOTE_GS4, NOTE_CS4,
        NOTE_E4, NOTE_E4, NOTE_FS4, NOTE_FS4, NOTE_E4, NOTE_FS4, NOTE_GS4,
        NOTE_FS4, NOTE_E4, NOTE_E4, NOTE_FS4, NOTE_CS4, NOTE_CS4,
        NOTE_FS4, NOTE_GS4, NOTE_B4, NOTE_GS4, NOTE_FS4, NOTE_E4, NOTE_E4, NOTE_FS4,
        NOTE_E4, NOTE_FS4, NOTE_GS4, NOTE_FS4, NOTE_E4, NOTE_E4, NOTE_FS4,
        NOTE_CS4, NOTE_CS4, NOTE_CS4, NOTE_CS4, NOTE_CS4, NOTE_E4, NOTE_FS4, NOTE_GS4, NOTE_CS4, NOTE_E4,
        NOTE_FS4, NOTE_E4, NOTE_FS4, NOTE_E4, NOTE_FS4, NOTE_GS4,
        NOTE_FS4, NOTE_E4, NOTE_E4, NOTE_FS4, NOTE_CS4, NOTE_CS4, NOTE_CS4, NOTE_E4, NOTE_E4,
        NOTE_FS4, NOTE_FS4, NOTE_GS4, NOTE_GS4,
        NOTE_E4, NOTE_FS4, NOTE_GS4, NOTE_FS4, NOTE_E4, NOTE_E4, NOTE_FS4, NOTE_CS4, NOTE_CS4,
        NOTE_CS4, NOTE_E4, NOTE_E4, NOTE_FS4, NOTE_FS4, NOTE_GS4,
        NOTE_GS4, NOTE_E4, NOTE_FS4, NOTE_GS4, NOTE_FS4,
        NOTE_E4, NOTE_E4, NOTE_FS4, NOTE_CS4, NOTE_CS4, NOTE_CS4, NOTE_E4, NOTE_E4,
        NOTE_FS4, NOTE_FS4, NOTE_GS4, NOTE_GS4,
        NOTE_E4, NOTE_FS4, NOTE_GS4, NOTE_FS4, NOTE_E4, NOTE_E4, NOTE_FS4, NOTE_CS4, NOTE_CS4,
        NOTE_CS4, NOTE_CS4, NOTE_CS4, NOTE_CS4, NOTE_E4, NOTE_FS4, NOTE_GS4, NOTE_CS4, NOTE_E4, NOTE_FS4,
        NOTE_CS4};

    int durations_shapeofyou[] = {
        2, 2, 4, 2, 2, 4, 2, 2, 4, 2, 2, 2, 2, 2, 2, 2, 2, 4, 2, 2, 4, 2, 2, 2, 2, 8, 8, 4, 4, 8, 8, 8, 8, 8, 8, 8, 2, 8, 8, 4, 2, 8, 8, 4, 8, 8, 8, 4, 4, 8, 8, 8, 8, 8, 4, 8, 4, 8, 8, 8, 8, 4, 2, 8, 8, 8, 8, 4, 8, 8, 8, 8, 8, 8, 2, 8, 4, 8, 8, 8, 8, 8, 2, 4, 8, 8, 2, 4, 8, 8, 8, 8, 8, 8, 2, 8, 8, 4, 4, 4, 8, 8, 2, 4, 4, 2, 4, 2, 2, 4, 8, 8, 8, 2, 2, 8, 4, 8, 4, 4, 4, 4, 8, 8, 8, 8, 2, 8, 8, 4, 8, 8, 4, 2, 8, 4, 8, 4, 4, 4, 4, 2, 2, 2, 2, 4, 8, 8, 8, 2, 2, 2, 4, 8, 4, 4, 4, 4, 8, 8, 8, 8, 2, 8, 8, 4, 8, 8, 4, 2, 8, 8, 4, 8, 8, 4, 2, 2, 4, 2, 8, 8, 4, 8, 8, 4, 8, 8, 2, 8, 8, 4, 8, 8, 4, 8, 8, 2, 8, 8, 4, 4, 4, 8, 8, 2, 8, 8, 4, 8, 8, 8, 4, 8, 2, 4, 4, 8, 8, 4, 4, 8, 2, 8, 8, 4, 4, 4, 8, 8, 4, 8, 8, 8, 8, 8, 8, 4, 4, 4, 4, 8, 2, 8, 8, 4, 8, 8, 8, 4, 8, 4, 4, 4, 4, 4, 4, 4, 2, 8, 8, 4, 8, 8, 8, 4, 8, 4, 4, 4, 4, 4, 4, 4, 2, 8, 8, 4, 8, 8, 8, 4, 8, 4, 4, 4, 4, 4, 4, 4, 2, 8, 8, 4, 8, 8, 8, 4, 8, 4, 8, 8, 8, 8, 8, 8, 4, 4, 4, 4, 2};

#if defined(ESP32)
    const unsigned int soundChannel = 0;
    ledcAttachPin(buzzer, soundChannel);
#endif

    int size = sizeof(durations_shapeofyou) / sizeof(int);
    // iterate over the notes of the melody.
    // Remember, the array is twice the number of notes (notes + durations)
    for (int thisNote = 0; thisNote < size; thisNote = thisNote + 2)
    {

        int duration = 1000 / durations_shapeofyou[thisNote];
        int pauseBetweenNotes = duration * 1.30;
        // we only play the note for 90% of the duration, leaving 10% as a pause
#if defined(ESP32)
        ledcWriteTone(soundChannel, melody_shapeofyou[thisNote]);
#else
        tone(buzzer, melody_shapeofyou[thisNote], duration * 0.9);
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