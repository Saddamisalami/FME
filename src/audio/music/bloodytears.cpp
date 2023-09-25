#include <Arduino.h>
#include "audio\scale.h"
/*
  Bloody Tears from Castlevania II
  Connect a piezo buzzer or speaker to pin 11 or select a new pin.
  More songs available at https://github.com/robsoncouto/arduino-songs

                                              Robson Couto, 2019
*/

void play_bloodytears(int buzzer)
{

  // change this to make the song slower or faster
  const int tempo_bloodytears = 144;

  // notes of the moledy followed by the duration.
  // a 4 means a quarter note, 8 an eighteenth , 16 sixteenth, so on
  // !!negative numbers are used to represent dotted notes,
  // so -4 means a dotted quarter note, that is, a quarter plus an eighteenth!!
  const int melody_bloodytears[] = {

      // Bloody Tears, from Castlevania II
      // Arranged by Bobby Lee. THe flute part was used
      // https://musescore.com/user/263171/scores/883296

      // B-flat major Bb Eb
      REST, 4, NOTE_G5, 4,
      NOTE_A5, 4, NOTE_AS5, 4,
      NOTE_A5, 4, NOTE_F5, 4,
      NOTE_A5, 4, NOTE_G5, 4,
      REST, 4, NOTE_G5, 4,
      NOTE_A5, 4, NOTE_AS5, 4,
      NOTE_C6, 4, NOTE_AS5, 4,

      NOTE_A5, 4, NOTE_G5, 4, // 8
      REST, 4, NOTE_G5, 4,
      NOTE_A5, 4, NOTE_AS5, 4,
      NOTE_A5, 4, NOTE_F5, 4,
      NOTE_A5, 4, NOTE_G5, 4,
      NOTE_D6, 4, REST, 8, NOTE_C6, 8,
      REST, 4, NOTE_AS5, 4,

      NOTE_A5, 4, NOTE_AS5, 8, NOTE_C6, 8, // 15
      NOTE_F6, 8, REST, 8, REST, 4,
      NOTE_G5, 16, NOTE_D5, 16, NOTE_D6, 16, NOTE_D5, 16, NOTE_C6, 16, NOTE_D5, 16, NOTE_AS5, 16, NOTE_D5, 16,
      NOTE_A5, 16, NOTE_D5, 16, NOTE_AS5, 16, NOTE_D5, 16, NOTE_A5, 16, NOTE_D5, 16, NOTE_G5, 16, NOTE_D5, 16,
      NOTE_A5, 16, NOTE_D5, 16, NOTE_AS5, 16, NOTE_D5, 16, NOTE_C6, 16, NOTE_D5, 16, NOTE_AS5, 16, NOTE_D5, 16,

      NOTE_A5, 16, NOTE_D5, 16, NOTE_F5, 16, NOTE_D5, 16, NOTE_A5, 16, NOTE_D5, 16, NOTE_G5, 16, NOTE_D5, 16, // 20
      NOTE_G5, 16, NOTE_D5, 16, NOTE_D6, 16, NOTE_D5, 16, NOTE_C6, 16, NOTE_D5, 16, NOTE_AS5, 16, NOTE_D5, 16,
      NOTE_A5, 16, NOTE_D5, 16, NOTE_AS5, 16, NOTE_D5, 16, NOTE_A5, 16, NOTE_D5, 16, NOTE_AS5, 16, NOTE_D5, 16,
      NOTE_A5, 16, NOTE_D5, 16, NOTE_AS5, 16, NOTE_D5, 16, NOTE_C6, 16, NOTE_D5, 16, NOTE_AS5, 16, NOTE_D5, 16,
      NOTE_A5, 16, NOTE_D5, 16, NOTE_F5, 16, NOTE_D5, 16, NOTE_A5, 16, NOTE_D5, 16, NOTE_G5, 16, NOTE_D5, 16,

      NOTE_G5, 16, NOTE_D5, 16, NOTE_D6, 16, NOTE_D5, 16, NOTE_C6, 16, NOTE_D5, 16, NOTE_AS5, 16, NOTE_D5, 16, // 25
      NOTE_A5, 16, NOTE_D5, 16, NOTE_AS5, 16, NOTE_D5, 16, NOTE_A5, 16, NOTE_D5, 16, NOTE_G5, 16, NOTE_D5, 16,
      NOTE_A5, 16, NOTE_D5, 16, NOTE_AS5, 16, NOTE_D5, 16, NOTE_C6, 16, NOTE_D5, 16, NOTE_AS5, 16, NOTE_D5, 16,
      NOTE_A5, 16, NOTE_D5, 16, NOTE_F5, 16, NOTE_D5, 16, NOTE_A5, 16, NOTE_D5, 16, NOTE_G5, 16, NOTE_D5, 16,
      NOTE_AS5, 16, NOTE_D5, 16, NOTE_D6, 16, NOTE_D5, 16, NOTE_C6, 16, NOTE_D5, 16, NOTE_AS5, 16, NOTE_D5, 16,

      NOTE_A5, 16, NOTE_D5, 16, NOTE_AS5, 16, NOTE_D5, 16, NOTE_A5, 16, NOTE_D5, 16, NOTE_G5, 16, NOTE_D5, 16,
      NOTE_A5, 16, NOTE_D5, 16, NOTE_AS5, 16, NOTE_D5, 16, NOTE_C6, 16, NOTE_D5, 16, NOTE_AS5, 16, NOTE_D5, 16,
      NOTE_A5, 16, NOTE_D5, 16, NOTE_F5, 16, NOTE_D5, 16, NOTE_A5, 16, NOTE_D5, 16, NOTE_G5, 16, NOTE_D5, 16,
      NOTE_C6, 16, NOTE_C6, 16, NOTE_F6, 16, NOTE_D6, 8, REST, 16, REST, 8,
      REST, 4, NOTE_C6, 16, NOTE_AS5, 16,

      NOTE_C6, -8, NOTE_F6, -8, NOTE_D6, -4, // 35
      NOTE_C6, 8, NOTE_AS5, 8,
      NOTE_C6, 8, NOTE_F6, 16, NOTE_D6, 8, REST, 16, REST, 8,
      REST, 4, NOTE_C6, 8, NOTE_D6, 8,
      NOTE_DS6, -8, NOTE_F6, -8,

      NOTE_D6, -8, REST, 16, NOTE_DS6, 8, REST, 8, // 40
      NOTE_C6, 8, NOTE_F6, 16, NOTE_D6, 8, REST, 16, REST, 8,
      REST, 4, NOTE_C6, 8, NOTE_AS5, 8,
      NOTE_C6, -8, NOTE_F6, -8, NOTE_D6, -4,
      NOTE_C6, 8, NOTE_AS5, 8,

      NOTE_C6, 8, NOTE_F6, 16, NOTE_D6, 8, REST, 16, REST, 8, // 45
      REST, 4, NOTE_C6, 8, NOTE_D6, 8,
      NOTE_DS6, -8, NOTE_F6, -8,
      NOTE_D5, 8, NOTE_FS5, 8, NOTE_F5, 8, NOTE_A5, 8,
      NOTE_A5, -8, NOTE_G5, -4,

      NOTE_A5, -8, NOTE_G5, -4, // 50
      NOTE_A5, -8, NOTE_G5, -4,
      NOTE_AS5, 8, NOTE_A5, 8, NOTE_G5, 8, NOTE_F5, 8,
      NOTE_A5, -8, NOTE_G5, -8, NOTE_D5, 8,
      NOTE_A5, -8, NOTE_G5, -8, NOTE_D5, 8,
      NOTE_A5, -8, NOTE_G5, -8, NOTE_D5, 8,

      NOTE_AS5, 4, NOTE_C6, 4, NOTE_A5, 4, NOTE_AS5, 4,
      NOTE_G5, 16, NOTE_D5, 16, NOTE_D6, 16, NOTE_D5, 16, NOTE_C6, 16, NOTE_D5, 16, NOTE_AS5, 16, NOTE_D5, 16, // 56 //r
      NOTE_A5, 16, NOTE_D5, 16, NOTE_AS5, 16, NOTE_D5, 16, NOTE_A5, 16, NOTE_D5, 16, NOTE_G5, 16, NOTE_D5, 16,
      NOTE_A5, 16, NOTE_D5, 16, NOTE_AS5, 16, NOTE_D5, 16, NOTE_C6, 16, NOTE_D5, 16, NOTE_AS5, 16, NOTE_D5, 16,
      NOTE_A5, 16, NOTE_D5, 16, NOTE_F5, 16, NOTE_D5, 16, NOTE_A5, 16, NOTE_D5, 16, NOTE_G5, 16, NOTE_D5, 16,

      NOTE_G5, 16, NOTE_D5, 16, NOTE_D6, 16, NOTE_D5, 16, NOTE_C6, 16, NOTE_D5, 16, NOTE_AS5, 16, NOTE_D5, 16, // 61
      NOTE_A5, 16, NOTE_D5, 16, NOTE_AS5, 16, NOTE_D5, 16, NOTE_A5, 16, NOTE_D5, 16, NOTE_AS5, 16, NOTE_D5, 16,
      NOTE_A5, 16, NOTE_D5, 16, NOTE_AS5, 16, NOTE_D5, 16, NOTE_C6, 16, NOTE_D5, 16, NOTE_AS5, 16, NOTE_D5, 16,
      NOTE_A5, 16, NOTE_D5, 16, NOTE_F5, 16, NOTE_D5, 16, NOTE_A5, 16, NOTE_D5, 16, NOTE_G5, 16, NOTE_D5, 16,
      NOTE_G5, 16, NOTE_D5, 16, NOTE_D6, 16, NOTE_D5, 16, NOTE_C6, 16, NOTE_D5, 16, NOTE_AS5, 16, NOTE_D5, 16,

      NOTE_A5, 16, NOTE_D5, 16, NOTE_AS5, 16, NOTE_D5, 16, NOTE_A5, 16, NOTE_D5, 16, NOTE_G5, 16, NOTE_D5, 16, // 66
      NOTE_A5, 16, NOTE_D5, 16, NOTE_AS5, 16, NOTE_D5, 16, NOTE_C6, 16, NOTE_D5, 16, NOTE_AS5, 16, NOTE_D5, 16,
      NOTE_A5, 16, NOTE_D5, 16, NOTE_F5, 16, NOTE_D5, 16, NOTE_A5, 16, NOTE_D5, 16, NOTE_G5, 16, NOTE_D5, 16,
      NOTE_AS5, 16, NOTE_D5, 16, NOTE_D6, 16, NOTE_D5, 16, NOTE_C6, 16, NOTE_D5, 16, NOTE_AS5, 16, NOTE_D5, 16,
      NOTE_A5, 16, NOTE_D5, 16, NOTE_AS5, 16, NOTE_D5, 16, NOTE_A5, 16, NOTE_D5, 16, NOTE_G5, 16, NOTE_D5, 16,

      NOTE_A5, 16, NOTE_D5, 16, NOTE_AS5, 16, NOTE_D5, 16, NOTE_C6, 16, NOTE_D5, 16, NOTE_AS5, 16, NOTE_D5, 16, // 71 //
      NOTE_A5, 16, NOTE_D5, 16, NOTE_F5, 16, NOTE_D5, 16, NOTE_A5, 8, NOTE_G5, 32, NOTE_A5, 32, NOTE_AS5, 32, NOTE_C6, 32,
      NOTE_D6, 16, NOTE_G5, 16, NOTE_AS5, 16, NOTE_G5, 16, NOTE_C6, 16, NOTE_G5, 16, NOTE_D6, 16, NOTE_G5, 16,
      NOTE_C6, 16, NOTE_G5, 16, NOTE_A5, 16, NOTE_G5, 16, NOTE_F6, 16, NOTE_G5, 16, NOTE_D6, 16, NOTE_DS5, 16,
      NOTE_D6, 4, REST, 4,

      NOTE_C5, 8, REST, 8, NOTE_A4, -16, NOTE_AS4, -16, NOTE_C5, 16, // 76
      NOTE_D6, 16, NOTE_G4, 16, NOTE_AS4, 16, NOTE_G4, 16, NOTE_C5, 16, NOTE_G4, 16, NOTE_D6, 16, NOTE_G4, 16,
      NOTE_C6, 16, NOTE_F4, 16, NOTE_A4, 16, NOTE_F4, 16, NOTE_F5, 16, NOTE_F4, 16, NOTE_D6, 16, NOTE_DS4, 16,
      NOTE_D6, 16, REST, 8, NOTE_E4, 16, NOTE_F4, 16,

      // change of key B Major A# C# D# F# G#
      NOTE_GS4, 8, REST, 8, NOTE_AS4, 8, REST, 8,

      NOTE_DS5, 16, NOTE_GS4, 16, NOTE_B4, 16, NOTE_GS4, 16, NOTE_CS5, 16, NOTE_GS4, 16, NOTE_DS5, 16, NOTE_GS4, 16, // 81
      NOTE_CS5, 16, NOTE_FS4, 16, NOTE_AS4, 16, NOTE_FS4, 16, NOTE_FS5, 16, NOTE_FS4, 16, NOTE_DS5, 16, NOTE_E5, 16,
      NOTE_D5, 4, REST, 4,
      NOTE_CS5, 8, REST, 8, NOTE_AS4, -16, NOTE_B4, -16, NOTE_CS5, 16,
      NOTE_DS5, 16, NOTE_GS4, 16, NOTE_B4, 16, NOTE_GS4, 16, NOTE_CS5, 16, NOTE_GS4, 16, NOTE_DS5, 16, NOTE_GS4, 16,

      NOTE_CS5, 16, NOTE_FS4, 16, NOTE_AS4, 16, NOTE_FS4, 16, NOTE_FS5, 16, NOTE_FS4, 16, NOTE_DS5, 16, NOTE_E5, 16,
      NOTE_DS5, 4, REST, 8, NOTE_DS5, 16, NOTE_E5, 16,
      NOTE_FS5, 16, NOTE_CS5, 16, NOTE_E5, 16, NOTE_CS4, 16, NOTE_DS5, 16, NOTE_E5, 16, NOTE_G5, 16, NOTE_AS5, 16,
      NOTE_GS5, 16, NOTE_DS5, 16, NOTE_DS6, 16, NOTE_DS5, 16, NOTE_CS6, 16, NOTE_DS5, 16, NOTE_B5, 16, NOTE_DS5, 16,

      NOTE_AS5, 16, NOTE_DS5, 16, NOTE_B5, 16, NOTE_DS5, 16, NOTE_AS5, 16, NOTE_DS5, 16, NOTE_GS5, 16, NOTE_DS5, 16, // 90
      NOTE_AS5, 16, NOTE_DS5, 16, NOTE_B5, 16, NOTE_DS5, 16, NOTE_CS6, 16, NOTE_DS5, 16, NOTE_B5, 16, NOTE_DS5, 16,
      NOTE_AS5, 16, NOTE_DS5, 16, NOTE_FS5, 16, NOTE_DS5, 16, NOTE_AS5, 16, NOTE_DS5, 16, NOTE_GS5, 16, NOTE_DS5, 16,
      NOTE_GS5, 16, NOTE_DS5, 16, NOTE_DS6, 16, NOTE_DS5, 16, NOTE_CS6, 16, NOTE_DS5, 16, NOTE_B5, 16, NOTE_DS5, 16,

      NOTE_AS5, 16, NOTE_DS5, 16, NOTE_B5, 16, NOTE_DS5, 16, NOTE_AS5, 16, NOTE_DS5, 16, NOTE_GS5, 16, NOTE_DS5, 16, // 94
      NOTE_AS5, 16, NOTE_DS5, 16, NOTE_B5, 16, NOTE_DS5, 16, NOTE_CS6, 16, NOTE_DS5, 16, NOTE_B5, 16, NOTE_DS5, 16,
      NOTE_AS5, 16, NOTE_DS5, 16, NOTE_FS5, 16, NOTE_DS5, 16, NOTE_AS5, 16, NOTE_DS5, 16, NOTE_GS5, 16, NOTE_DS5, 16,
      NOTE_GS5, 16, NOTE_DS5, 16, NOTE_DS6, 16, NOTE_DS5, 16, NOTE_CS6, 16, NOTE_DS5, 16, NOTE_B5, 16, NOTE_DS5, 16,

      NOTE_AS5, 16, NOTE_DS5, 16, NOTE_B5, 16, NOTE_DS5, 16, NOTE_AS5, 16, NOTE_DS5, 16, NOTE_GS5, 16, NOTE_DS5, 16, // 98
      NOTE_AS5, 16, NOTE_DS5, 16, NOTE_B5, 16, NOTE_DS5, 16, NOTE_CS6, 16, NOTE_DS5, 16, NOTE_B5, 16, NOTE_DS5, 16,
      NOTE_AS5, 16, NOTE_DS5, 16, NOTE_FS5, 16, NOTE_DS5, 16, NOTE_AS5, 16, NOTE_DS5, 16, NOTE_GS5, 16, NOTE_DS5, 16,
      NOTE_GS5, 16, NOTE_DS5, 16, NOTE_DS6, 16, NOTE_DS5, 16, NOTE_CS6, 16, NOTE_DS5, 16, NOTE_B5, 16, NOTE_DS5, 16,

      NOTE_AS5, 16, NOTE_DS5, 16, NOTE_B5, 16, NOTE_DS5, 16, NOTE_AS5, 16, NOTE_DS5, 16, NOTE_GS5, 16, NOTE_DS5, 16, // 102
      NOTE_AS5, 16, NOTE_DS5, 16, NOTE_B5, 16, NOTE_DS5, 16, NOTE_CS6, 16, NOTE_DS5, 16, NOTE_B5, 16, NOTE_DS5, 16,
      NOTE_AS5, 16, NOTE_DS5, 16, NOTE_FS5, 16, NOTE_DS5, 16, NOTE_AS5, 16, NOTE_DS5, 16, NOTE_GS5, 16, NOTE_DS5, 16,

      NOTE_CS6, 8, NOTE_FS6, 16, NOTE_DS6, 8, REST, 16, REST, 8, // 107
      REST, 4, NOTE_CS6, 8, NOTE_B5, 8,
      NOTE_CS6, -8, NOTE_FS6, -8, NOTE_DS6, -4,
      NOTE_CS6, 8, NOTE_B5, 8,
      NOTE_CS6, 8, NOTE_FS6, 16, NOTE_DS6, 8, REST, 16, REST, 8,
      REST, 4, NOTE_CS6, 8, NOTE_B5, 8,
      NOTE_E6, -8, NOTE_F6, -8,

      NOTE_DS6, -8, REST, 16, NOTE_E6, 8, REST, 16, REST, 16, // 112
      NOTE_CS6, 8, NOTE_FS6, 16, NOTE_DS6, 8, REST, 16, REST, 8,
      REST, 4, NOTE_CS6, 8, NOTE_B5, 8,
      NOTE_CS6, -8, NOTE_FS6, -8, NOTE_DS6, -4,
      NOTE_CS6, 8, NOTE_B5, 8,

      NOTE_CS6, 8, NOTE_FS6, 16, NOTE_DS6, 8, REST, 16, REST, 8, // 117
      REST, 4, NOTE_CS5, 8, NOTE_DS5, 8,
      NOTE_E5, -8, NOTE_F5, -8,
      NOTE_DS5, 8, NOTE_G5, 8, NOTE_GS5, 8, NOTE_AS5, 8,
      NOTE_AS5, -8, NOTE_GS5, -8,

      NOTE_AS5, -8, NOTE_GS5, -8, // 122
      NOTE_AS5, -8, NOTE_GS5, -8,
      NOTE_B6, 8, NOTE_AS5, 8, NOTE_GS5, 8, NOTE_FS5, 8,
      NOTE_AS5, -8, NOTE_GS6, -8, NOTE_DS5, 8,
      NOTE_AS5, -8, NOTE_GS6, -8, NOTE_DS5, 8,
      NOTE_AS5, -8, NOTE_GS6, -8, NOTE_DS5, 8,

      NOTE_B5, 8, NOTE_CS6, 8, NOTE_AS5, 8, NOTE_B5, 8, // 128
      NOTE_GS5, 8, REST, 8, REST, 16

  };

  // sizeof gives the number of bytes, each int value is composed of two bytes (16 bits)
  // there are two values per note (pitch and duration), so for each note there are four bytes
  const int notes = sizeof(melody_bloodytears) / sizeof(melody_bloodytears[0]) / 2;

  // this calculates the duration of a whole note in ms (60s/tempo)*4 beats
  const int wholenote = (60000 * 4) / tempo_bloodytears;

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
    divider = melody_bloodytears[thisNote + 1];
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
    ledcWriteTone(soundChannel, melody_bloodytears[thisNote]);
#else
    tone(buzzer, melody_bloodytears[thisNote], noteDuration * 0.9);
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