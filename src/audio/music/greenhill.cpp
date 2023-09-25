#include <Arduino.h>
#include "audio\scale.h"
/*
  Cantina band song from Star Wars
  Connect a piezo buzzer or speaker to pin 11 or select a new pin.
  More songs available at https://github.com/robsoncouto/arduino-songs

                                              Robson Couto, 2019
*/

void play_greenhill(int buzzer)
{
  // change this to make the song slower or faster
  const int tempo_greenhill = 140;

  // notes of the moledy followed by the duration.
  // a 4 means a quarter note, 8 an eighteenth , 16 sixteenth, so on
  // !!negative numbers are used to represent dotted notes,
  // so -4 means a dotted quarter note, that is, a quarter plus an eighteenth!!
  const int melody_greenhill[] = {

      // Gren Hill Zone - Sonic the Hedgehog
      // Score available at https://musescore.com/user/248346/scores/461661
      // Theme by Masato Nakamura, arranged by Teddy Mason

      REST, 2, NOTE_D5, 8, NOTE_B4, 4, NOTE_D5, 8, // 1
      NOTE_CS5, 4, NOTE_D5, 8, NOTE_CS5, 4, NOTE_A4, 2,
      REST, 8, NOTE_A4, 8, NOTE_FS5, 8, NOTE_E5, 4, NOTE_D5, 8,
      NOTE_CS5, 4, NOTE_D5, 8, NOTE_CS5, 4, NOTE_A4, 2,
      REST, 4, NOTE_D5, 8, NOTE_B4, 4, NOTE_D5, 8,
      NOTE_CS5, 4, NOTE_D5, 8, NOTE_CS5, 4, NOTE_A4, 2,

      REST, 8, NOTE_B4, 8, NOTE_B4, 8, NOTE_G4, 4, NOTE_B4, 8, // 7
      NOTE_A4, 4, NOTE_B4, 8, NOTE_A4, 4, NOTE_D4, 2,
      REST, 4, NOTE_D5, 8, NOTE_B4, 4, NOTE_D5, 8,
      NOTE_CS5, 4, NOTE_D5, 8, NOTE_CS5, 4, NOTE_A4, 2,
      REST, 8, NOTE_A4, 8, NOTE_FS5, 8, NOTE_E5, 4, NOTE_D5, 8,
      NOTE_CS5, 4, NOTE_D5, 8, NOTE_CS5, 4, NOTE_A4, 2,

      REST, 4, NOTE_D5, 8, NOTE_B4, 4, NOTE_D5, 8, // 13
      NOTE_CS5, 4, NOTE_D5, 8, NOTE_CS5, 4, NOTE_A4, 2,
      REST, 8, NOTE_B4, 8, NOTE_B4, 8, NOTE_G4, 4, NOTE_B4, 8,
      NOTE_A4, 4, NOTE_B4, 8, NOTE_A4, 4, NOTE_D4, 8, NOTE_D4, 8, NOTE_FS4, 8,
      NOTE_E4, -1,
      REST, 8, NOTE_D4, 8, NOTE_E4, 8, NOTE_FS4, -1,

      REST, 8, NOTE_D4, 8, NOTE_D4, 8, NOTE_FS4, 8, NOTE_F4, -1, // 20
      REST, 8, NOTE_D4, 8, NOTE_F4, 8, NOTE_E4, -1,              // end 1

      // repeats from 1

      REST, 2, NOTE_D5, 8, NOTE_B4, 4, NOTE_D5, 8, // 1
      NOTE_CS5, 4, NOTE_D5, 8, NOTE_CS5, 4, NOTE_A4, 2,
      REST, 8, NOTE_A4, 8, NOTE_FS5, 8, NOTE_E5, 4, NOTE_D5, 8,
      NOTE_CS5, 4, NOTE_D5, 8, NOTE_CS5, 4, NOTE_A4, 2,
      REST, 4, NOTE_D5, 8, NOTE_B4, 4, NOTE_D5, 8,
      NOTE_CS5, 4, NOTE_D5, 8, NOTE_CS5, 4, NOTE_A4, 2,

      REST, 8, NOTE_B4, 8, NOTE_B4, 8, NOTE_G4, 4, NOTE_B4, 8, // 7
      NOTE_A4, 4, NOTE_B4, 8, NOTE_A4, 4, NOTE_D4, 2,
      REST, 4, NOTE_D5, 8, NOTE_B4, 4, NOTE_D5, 8,
      NOTE_CS5, 4, NOTE_D5, 8, NOTE_CS5, 4, NOTE_A4, 2,
      REST, 8, NOTE_A4, 8, NOTE_FS5, 8, NOTE_E5, 4, NOTE_D5, 8,
      NOTE_CS5, 4, NOTE_D5, 8, NOTE_CS5, 4, NOTE_A4, 2,

      REST, 4, NOTE_D5, 8, NOTE_B4, 4, NOTE_D5, 8, // 13
      NOTE_CS5, 4, NOTE_D5, 8, NOTE_CS5, 4, NOTE_A4, 2,
      REST, 8, NOTE_B4, 8, NOTE_B4, 8, NOTE_G4, 4, NOTE_B4, 8,
      NOTE_A4, 4, NOTE_B4, 8, NOTE_A4, 4, NOTE_D4, 8, NOTE_D4, 8, NOTE_FS4, 8,
      NOTE_E4, -1,
      REST, 8, NOTE_D4, 8, NOTE_E4, 8, NOTE_FS4, -1,

      REST, 8, NOTE_D4, 8, NOTE_D4, 8, NOTE_FS4, 8, NOTE_F4, -1, // 20
      REST, 8, NOTE_D4, 8, NOTE_F4, 8, NOTE_E4, 8,               // end 2
      NOTE_E4, -2, NOTE_A4, 8, NOTE_CS5, 8,
      NOTE_FS5, 8, NOTE_E5, 4, NOTE_D5, 8, NOTE_A5, -4};

  // sizeof gives the number of bytes, each int value is composed of two bytes (16 bits)
  // there are two values per note (pitch and duration), so for each note there are four bytes
  const int notes = sizeof(melody_greenhill) / sizeof(melody_greenhill[0]) / 2;

  // this calculates the duration of a whole note in ms
  const int wholenote = (60000 * 2) / tempo_greenhill;

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
    divider = melody_greenhill[thisNote + 1];
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
    ledcWriteTone(soundChannel, melody_greenhill[thisNote]);
#else
    tone(buzzer, melody_greenhill[thisNote], noteDuration * 0.9);
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