#include <Arduino.h>
#include "audio\scale.h"
/*
  Cantina band song from Star Wars
  Connect a piezo buzzer or speaker to pin 11 or select a new pin.
  More songs available at https://github.com/robsoncouto/arduino-songs

                                              Robson Couto, 2019
*/

void play_greensleeves(int buzzer)
{
  // change this to make the song slower or faster
  const int tempo_greensleeves = 70;

  // notes of the moledy followed by the duration.
  // a 4 means a quarter note, 8 an eighteenth , 16 sixteenth, so on
  // !!negative numbers are used to represent dotted notes,
  // so -4 means a dotted quarter note, that is, a quarter plus an eighteenth!!
  const int melody_greensleeves[] = {

      // Greensleeves
      // Score available at https://musescore.com/user/168402/scores/1396946
      // Alexander Trompoukis

      NOTE_G4, 8, // 1
      NOTE_AS4, 4, NOTE_C5, 8, NOTE_D5, -8, NOTE_DS5, 16, NOTE_D5, 8,
      NOTE_C5, 4, NOTE_A4, 8, NOTE_F4, -8, NOTE_G4, 16, NOTE_A4, 8,
      NOTE_AS4, 4, NOTE_G4, 8, NOTE_G4, -8, NOTE_FS4, 16, NOTE_G4, 8,
      NOTE_A4, 4, NOTE_FS4, 8, NOTE_D4, 4, NOTE_G4, 8,

      NOTE_AS4, 4, NOTE_C5, 8, NOTE_D5, -8, NOTE_DS5, 16, NOTE_D5, 8, // 6
      NOTE_C5, 4, NOTE_A4, 8, NOTE_F4, -8, NOTE_G4, 16, NOTE_A4, 8,
      NOTE_AS4, -8, NOTE_A4, 16, NOTE_G4, 8, NOTE_FS4, -8, NOTE_E4, 16, NOTE_FS4, 8,
      NOTE_G4, -2,
      NOTE_F5, 2, NOTE_E5, 16, NOTE_D5, 8,

      NOTE_C5, 4, NOTE_A4, 8, NOTE_F4, -8, NOTE_G4, 16, NOTE_A4, 8, // 11
      NOTE_AS4, 4, NOTE_G4, 8, NOTE_G4, -8, NOTE_FS4, 16, NOTE_G4, 8,
      NOTE_A4, 4, NOTE_FS4, 8, NOTE_D4, 04,
      NOTE_F5, 2, NOTE_E5, 16, NOTE_D5, 8,
      NOTE_C5, 4, NOTE_A4, 8, NOTE_F4, -8, NOTE_G4, 16, NOTE_A4, 8,

      NOTE_AS4, -8, NOTE_A4, 16, NOTE_G4, 8, NOTE_FS4, -8, NOTE_E4, 16, NOTE_FS4, 8, // 16
      NOTE_G4, -2,

      // repeats from the beginning

      NOTE_G4, 8, // 1
      NOTE_AS4, 4, NOTE_C5, 8, NOTE_D5, -8, NOTE_DS5, 16, NOTE_D5, 8,
      NOTE_C5, 4, NOTE_A4, 8, NOTE_F4, -8, NOTE_G4, 16, NOTE_A4, 8,
      NOTE_AS4, 4, NOTE_G4, 8, NOTE_G4, -8, NOTE_FS4, 16, NOTE_G4, 8,
      NOTE_A4, 4, NOTE_FS4, 8, NOTE_D4, 4, NOTE_G4, 8,

      NOTE_AS4, 4, NOTE_C5, 8, NOTE_D5, -8, NOTE_DS5, 16, NOTE_D5, 8, // 6
      NOTE_C5, 4, NOTE_A4, 8, NOTE_F4, -8, NOTE_G4, 16, NOTE_A4, 8,
      NOTE_AS4, -8, NOTE_A4, 16, NOTE_G4, 8, NOTE_FS4, -8, NOTE_E4, 16, NOTE_FS4, 8,
      NOTE_G4, -2,
      NOTE_F5, 2, NOTE_E5, 16, NOTE_D5, 8,

      NOTE_C5, 4, NOTE_A4, 8, NOTE_F4, -8, NOTE_G4, 16, NOTE_A4, 8, // 11
      NOTE_AS4, 4, NOTE_G4, 8, NOTE_G4, -8, NOTE_FS4, 16, NOTE_G4, 8,
      NOTE_A4, 4, NOTE_FS4, 8, NOTE_D4, 04,
      NOTE_F5, 2, NOTE_E5, 16, NOTE_D5, 8,
      NOTE_C5, 4, NOTE_A4, 8, NOTE_F4, -8, NOTE_G4, 16, NOTE_A4, 8,

      NOTE_AS4, -8, NOTE_A4, 16, NOTE_G4, 8, NOTE_FS4, -8, NOTE_E4, 16, NOTE_FS4, 8, // 16
      NOTE_G4, -2};

  // sizeof gives the number of bytes, each int value is composed of two bytes (16 bits)
  // there are two values per note (pitch and duration), so for each note there are four bytes
  const int notes = sizeof(melody_greensleeves) / sizeof(melody_greensleeves[0]) / 2;

  // this calculates the duration of a whole note in ms
  const int wholenote = (60000 * 2) / tempo_greensleeves;

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
    divider = melody_greensleeves[thisNote + 1];
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
    ledcWriteTone(soundChannel, melody_greensleeves[thisNote]);
#else
    tone(buzzer, melody_greensleeves[thisNote], noteDuration * 0.9);
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