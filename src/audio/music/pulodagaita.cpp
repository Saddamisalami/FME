#include <Arduino.h>
#include "audio\scale.h"

void play_pulodagaita(int buzzer)
{
    // change this to make the song slower or faster
    const int tempo_pulodagaita = 100;

    const int melody_pulodagaita[] = {
        // Pulo da gaita - Auto da Compadecida 
  // Score available at https://musescore.com/user/196039/scores/250206
  
  NOTE_C5,4, NOTE_G4,8, NOTE_AS4,4, NOTE_A4,8,
  NOTE_G4,16, NOTE_C4,8, NOTE_C4,16, NOTE_G4,16, NOTE_G4,8, NOTE_G4,16,
  NOTE_C5,4, NOTE_G4,8, NOTE_AS4,4, NOTE_A4,8,
  NOTE_G4,2,
  
  NOTE_C5,4, NOTE_G4,8, NOTE_AS4,4, NOTE_A4,8,
  NOTE_G4,16, NOTE_C4,8, NOTE_C4,16, NOTE_G4,16, NOTE_G4,8, NOTE_G4,16,
  NOTE_F4,8, NOTE_E4,8, NOTE_D4,8, NOTE_C4,8,
  NOTE_C4,2,

  NOTE_C5,4, NOTE_G4,8, NOTE_AS4,4, NOTE_A4,8,
  NOTE_G4,16, NOTE_C4,8, NOTE_C4,16, NOTE_G4,16, NOTE_G4,8, NOTE_G4,16,
  NOTE_C5,4, NOTE_G4,8, NOTE_AS4,4, NOTE_A4,8,
  NOTE_G4,2,

  NOTE_C5,4, NOTE_G4,8, NOTE_AS4,4, NOTE_A4,8,
  NOTE_G4,16, NOTE_C4,8, NOTE_C4,16, NOTE_G4,16, NOTE_G4,8, NOTE_G4,16,
  NOTE_F4,8, NOTE_E4,8, NOTE_D4,8, NOTE_C4,8,
  NOTE_C4,16, NOTE_D5,8, NOTE_D5,16, NOTE_D5,16, NOTE_D5,8, NOTE_D5,16,

  NOTE_D5,16, NOTE_D5,8, NOTE_D5,16, NOTE_C5,8, NOTE_E5,-8,
  NOTE_C5,8, NOTE_C5,16, NOTE_E5,16, NOTE_E5,8, NOTE_C5,16,
  NOTE_F5,8, NOTE_D5,8, NOTE_D5,8, NOTE_E5,-8,
  NOTE_C5,8, NOTE_D5,16, NOTE_E5,16, NOTE_D5,8, NOTE_C5,16,

  NOTE_F5,8, NOTE_F5,8, NOTE_A5,8, NOTE_G5,-8,//21
  NOTE_G5,8, NOTE_C5,16, NOTE_C5,16, NOTE_C5,8, NOTE_C5,16,
  NOTE_F5,-8, NOTE_E5,16, NOTE_D5,8, NOTE_C5,4,
  NOTE_C5,16, NOTE_C5,16, NOTE_C5,16, NOTE_C5,16,

  NOTE_F5,8, NOTE_F5,16, NOTE_A5,8, NOTE_G5,-8,//25
  NOTE_G5,8, NOTE_C5,16, NOTE_C5,16, NOTE_C5,8, NOTE_C5,16,
  NOTE_F5,16, NOTE_E5,8, NOTE_D5,16, NOTE_C5,8, NOTE_E5,-8,
  NOTE_C5,8, NOTE_D5,16, NOTE_E5,16, NOTE_D5,8, NOTE_C5,16,
 
  NOTE_F5,8, NOTE_F5,16, NOTE_A5,8, NOTE_G5,-8,//29
  NOTE_G5,8, NOTE_C5,16, NOTE_C5,16, NOTE_C5,8, NOTE_C5,16,
  NOTE_F5,8, NOTE_E5,16, NOTE_D5,8, NOTE_C5,8,
  NOTE_C5,4, NOTE_G4,8, NOTE_AS4,4, NOTE_A4,8,

  NOTE_G4,16, NOTE_C4,8, NOTE_C4,16, NOTE_G4,16, NOTE_G4,8, NOTE_G4,16,
  NOTE_C5,4, NOTE_G4,8, NOTE_AS4,4, NOTE_A4,8,
  NOTE_G4,2,
  NOTE_C5,4, NOTE_G4,8, NOTE_AS4,4, NOTE_A4,8,

  NOTE_G4,16, NOTE_C4,8, NOTE_C4,16, NOTE_G4,16, NOTE_G4,8, NOTE_G4,16,
  NOTE_F4,8, NOTE_E4,8, NOTE_D4,8, NOTE_C4,-2,
  NOTE_C5,4, NOTE_G4,8, NOTE_AS4,4, NOTE_A4,8,

  NOTE_G4,16, NOTE_C4,8, NOTE_C4,16, NOTE_G4,16, NOTE_G4,8, NOTE_G4,16,
  NOTE_C5,4, NOTE_G4,8, NOTE_AS4,4, NOTE_A4,8,
  NOTE_G4,2,
  NOTE_C5,4, NOTE_G4,8, NOTE_AS4,4, NOTE_A4,8,

  NOTE_G4,16, NOTE_C4,8, NOTE_C4,16, NOTE_G4,16, NOTE_G4,8, NOTE_G4,16,
  NOTE_F4,8, NOTE_E4,8, NOTE_D4,8, NOTE_C4,-2,
  NOTE_C4,16, NOTE_C4,8, NOTE_C4,16, NOTE_E4,16, NOTE_E4,8, NOTE_E4,16,
  NOTE_F4,16, NOTE_F4,8, NOTE_F4,16, NOTE_FS4,16, NOTE_FS4,8, NOTE_FS4,16,

  NOTE_G4,8, REST,8, NOTE_AS4,8, NOTE_C5,1};

    // sizeof gives the number of bytes, each int value is composed of two bytes (16 bits)
    // there are two values per note (pitch and duration), so for each note there are four bytes
    const int notes = sizeof(melody_pulodagaita) / sizeof(melody_pulodagaita[0]) / 2;

    // this calculates the duration of a whole note in ms
    const int wholenote = (60000 * 4) / tempo_pulodagaita;

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
        divider = melody_pulodagaita[thisNote + 1];
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
        ledcWriteTone(soundChannel, melody_pulodagaita[thisNote]);
#else
        tone(buzzer, melody_pulodagaita[thisNote], noteDuration * 0.9);
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