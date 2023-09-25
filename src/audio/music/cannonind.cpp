#include <Arduino.h>
#include "audio\scale.h"
/*
  Pachelbel's Canon
  Connect a piezo buzzer or speaker to pin 11 or select a new pin.
  More songs available at https://github.com/robsoncouto/arduino-songs

                                              Robson Couto, 2019
*/

void play_cannonind(int buzzer)
{
  // change this to make the song slower or faster
  const int tempo_cannonind = 100;

  // notes of the moledy followed by the duration.
  // a 4 means a quarter note, 8 an eighteenth , 16 sixteenth, so on
  // !!negative numbers are used to represent dotted notes,
  // so -4 means a dotted quarter note, that is, a quarter plus an eighteenth!!
  const int melody_cannonind[] = {

      // Cannon in D - Pachelbel
      // Score available at https://musescore.com/user/4710311/scores/1975521
      // C F
      NOTE_FS4, 2, NOTE_E4, 2,
      NOTE_D4, 2, NOTE_CS4, 2,
      NOTE_B3, 2, NOTE_A3, 2,
      NOTE_B3, 2, NOTE_CS4, 2,
      NOTE_FS4, 2, NOTE_E4, 2,
      NOTE_D4, 2, NOTE_CS4, 2,
      NOTE_B3, 2, NOTE_A3, 2,
      NOTE_B3, 2, NOTE_CS4, 2,
      NOTE_D4, 2, NOTE_CS4, 2,
      NOTE_B3, 2, NOTE_A3, 2,
      NOTE_G3, 2, NOTE_FS3, 2,
      NOTE_G3, 2, NOTE_A3, 2,

      NOTE_D4, 4, NOTE_FS4, 8, NOTE_G4, 8, NOTE_A4, 4, NOTE_FS4, 8, NOTE_G4, 8,
      NOTE_A4, 4, NOTE_B3, 8, NOTE_CS4, 8, NOTE_D4, 8, NOTE_E4, 8, NOTE_FS4, 8, NOTE_G4, 8,
      NOTE_FS4, 4, NOTE_D4, 8, NOTE_E4, 8, NOTE_FS4, 4, NOTE_FS3, 8, NOTE_G3, 8,
      NOTE_A3, 8, NOTE_G3, 8, NOTE_FS3, 8, NOTE_G3, 8, NOTE_A3, 2,
      NOTE_G3, 4, NOTE_B3, 8, NOTE_A3, 8, NOTE_G3, 4, NOTE_FS3, 8, NOTE_E3, 8,
      NOTE_FS3, 4, NOTE_D3, 8, NOTE_E3, 8, NOTE_FS3, 8, NOTE_G3, 8, NOTE_A3, 8, NOTE_B3, 8,

      NOTE_G3, 4, NOTE_B3, 8, NOTE_A3, 8, NOTE_B3, 4, NOTE_CS4, 8, NOTE_D4, 8,
      NOTE_A3, 8, NOTE_B3, 8, NOTE_CS4, 8, NOTE_D4, 8, NOTE_E4, 8, NOTE_FS4, 8, NOTE_G4, 8, NOTE_A4, 2,
      NOTE_A4, 4, NOTE_FS4, 8, NOTE_G4, 8, NOTE_A4, 4,
      NOTE_FS4, 8, NOTE_G4, 8, NOTE_A4, 8, NOTE_A3, 8, NOTE_B3, 8, NOTE_CS4, 8,
      NOTE_D4, 8, NOTE_E4, 8, NOTE_FS4, 8, NOTE_G4, 8, NOTE_FS4, 4, NOTE_D4, 8, NOTE_E4, 8,
      NOTE_FS4, 8, NOTE_CS4, 8, NOTE_A3, 8, NOTE_A3, 8,

      NOTE_CS4, 4, NOTE_B3, 4, NOTE_D4, 8, NOTE_CS4, 8, NOTE_B3, 4,
      NOTE_A3, 8, NOTE_G3, 8, NOTE_A3, 4, NOTE_D3, 8, NOTE_E3, 8, NOTE_FS3, 8, NOTE_G3, 8,
      NOTE_A3, 8, NOTE_B3, 4, NOTE_G3, 4, NOTE_B3, 8, NOTE_A3, 8, NOTE_B3, 4,
      NOTE_CS4, 8, NOTE_D4, 8, NOTE_A3, 8, NOTE_B3, 8, NOTE_CS4, 8, NOTE_D4, 8, NOTE_E4, 8,
      NOTE_FS4, 8, NOTE_G4, 8, NOTE_A4, 2

  };

  // sizeof gives the number of bytes, each int value is composed of two bytes (16 bits)
  // there are two values per note (pitch and duration), so for each note there are four bytes
  const int notes = sizeof(melody_cannonind) / sizeof(melody_cannonind[0]) / 2;

  // this calculates the duration of a whole note in ms
  const int wholenote = (60000 * 4) / tempo_cannonind;

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
    divider = melody_cannonind[thisNote + 1];
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
    ledcWriteTone(soundChannel, melody_cannonind[thisNote]);
#else
    tone(buzzer, melody_cannonind[thisNote], noteDuration * 0.9);
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