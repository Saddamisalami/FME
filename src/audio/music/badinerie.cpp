#include <Arduino.h>
#include "audio\scale.h"
/*
  Bach - Badinerie
  Connect a piezo buzzer or speaker to pin 11 or select a new pin.
  More songs available at https://github.com/robsoncouto/arduino-songs

                                              Robson Couto, 2019
                                              Juan (gdlost), 2020

Note (gdlost): I've transcripted from music sheet (https://toplayalong.com/wp-content/uploads/2016/01/253-bach-badinerie-orchestral-suite-no-2-flute.png)
              to code, the song needs some fixes, because, in some parts sounds awful XD.
*/

void play_badinerie(int buzzer)
{

  // change this to make the song slower or faster
  const int tempo_badinerie = 120;

  // notes of the moledy followed by the duration.
  // a 4 means a quarter note, 8 an eighteenth , 16 sixteenth, so on
  // !!negative numbers are used to represent dotted notes,
  // so -4 means a dotted quarter note, that is, a quarter plus an eighteenth!!
  const int melody_badinerie[] = {
      /*
       * C  D  E  F  G   A  B
       * DO RE MI FA SOL LA SI */
      // Badinerie
      NOTE_B5, -8, NOTE_D6, 16, NOTE_B5, 16,
      NOTE_FS5, -8, NOTE_B5, 16, NOTE_FS5, 16, NOTE_D5, -8, NOTE_FS5, 16, NOTE_D5, 16,
      NOTE_B4, 4, NOTE_F4, 16, NOTE_B4, 16, NOTE_D5, 16, NOTE_B4, 16,
      NOTE_CS5, 16, NOTE_B4, 16, NOTE_CS5, 16, NOTE_B4, 16, NOTE_AS4, 16, NOTE_CS5, 16, NOTE_E5, 16, NOTE_CS5, 16,
      NOTE_D5, 8, NOTE_B4, 8, NOTE_B5, -8, NOTE_D6, 16, NOTE_B5, 16,
      NOTE_FS5, -8, NOTE_B5, 16, NOTE_FS5, 16, NOTE_D5, -8, NOTE_FS5, 16, NOTE_D5, 16,
      // 6
      NOTE_B4, 4, NOTE_D5, 16, NOTE_CS5, -16, NOTE_D5, -8,
      NOTE_D5, 16, NOTE_CS5, -16, NOTE_D5, -8, NOTE_B5, -8, NOTE_D5, -8,
      NOTE_D5, 8, NOTE_CS5, -8, NOTE_FS5, -16, /*MI#*/ NOTE_F5, 16, NOTE_FS5, -8,
      NOTE_FS5, -16, /* MI#??*/ NOTE_F5, 16, NOTE_FS5, -8, NOTE_D6, -8, NOTE_FS5, -8,
      NOTE_FS5, 8, /*MI#*/ NOTE_F5, 8, NOTE_CS5, 16, NOTE_FS5, 16, NOTE_A5, 16, NOTE_FS5, 16,
      NOTE_GS5, 16, NOTE_FS5, 16, NOTE_GS5, 16, NOTE_FS5, 16, NOTE_F5, 16, NOTE_G5, 16, NOTE_B5, 16, NOTE_G5, 16,
      // 12
      NOTE_A5, 16, NOTE_GS5, 16, NOTE_A5, 16, NOTE_G5, 16, NOTE_F5, 16, NOTE_A5, 16, NOTE_FS5, 16, NOTE_F5, 16,
      NOTE_FS5, 16, NOTE_B5, 16, NOTE_FS5, 16, NOTE_F5, 16, NOTE_FS5, 16, NOTE_C6, 16, NOTE_FS5, 16, NOTE_E5, 16,
      NOTE_FS5, 16, NOTE_D6, 16, NOTE_FS5, 16, NOTE_F5, 16, NOTE_FS5, 16, NOTE_D6, 16, NOTE_C6, 16, NOTE_B5, 16,
      NOTE_C6, 16, NOTE_A5, 16, NOTE_GS5, 16, NOTE_FS5, 16, NOTE_A5, 8, NOTE_G5, 8,
      NOTE_FS5, 4, REST, 4, NOTE_FS5, -8, NOTE_A5, 16, NOTE_FS5, 16,
      // 18
      NOTE_CS5, -4, NOTE_FS5, 16, NOTE_CS5, 16, NOTE_A4, -8, NOTE_CS5, 16, NOTE_A4, 16,
      NOTE_F4, 4, NOTE_C5, 8, NOTE_B4, 8,
      NOTE_E5, 8, NOTE_DS5, 16, NOTE_FS5, 16, NOTE_A5, 8, NOTE_GS5, 16, NOTE_FS5, 16,
      NOTE_GS5, 8, NOTE_D5, 8, NOTE_GS5, -8, NOTE_B5, 16, NOTE_GS5, 8,
      NOTE_E5, -8, NOTE_GS5, 16, NOTE_E5, 16, NOTE_CS5, -8, NOTE_E5, 16, NOTE_CS5, 16,
      NOTE_A4, 4, NOTE_A4, 16, NOTE_D5, 16, NOTE_FS5, 16, NOTE_D5, 16,
      // 24
      NOTE_E5, 16, NOTE_D5, 16, NOTE_E5, 16, NOTE_D5, 16, NOTE_CS5, 16, NOTE_E5, 16, NOTE_G5, 16, NOTE_E5, 16,
      NOTE_FS5, 16, NOTE_E5, 16, NOTE_FS5, 16, NOTE_E5, 16, NOTE_D5, 16, NOTE_FS5, 16, NOTE_D5, 16, NOTE_CS5, 16,
      NOTE_D5, 16, NOTE_G5, 16, NOTE_D5, 16, NOTE_CS5, 16, NOTE_D5, 16, NOTE_A5, 16, NOTE_D5, 16, NOTE_CS5, 16,
      NOTE_D5, 16, NOTE_B5, 16, NOTE_D5, 16, NOTE_CS5, 16, NOTE_D5, 16, NOTE_B5, 16, NOTE_A5, 16, NOTE_G5, 16,
      NOTE_A5, 16, NOTE_FS5, 16, NOTE_E5, 16, NOTE_D5, 16, NOTE_FS5, 8, NOTE_E5, 16,
      // 29
      NOTE_D5, 4, NOTE_FS5, 16, NOTE_E5, 16, NOTE_FS5, -8,
      NOTE_FS5, 16, NOTE_E5, 16, NOTE_FS5, -8, NOTE_D6, -8, NOTE_FS5, -8,
      NOTE_FS5, 8, NOTE_E5, 8, NOTE_E5, 16, NOTE_D5, 16, NOTE_E5, -8,
      NOTE_E5, 16, NOTE_D5, 16, NOTE_E5, -8, NOTE_D6, -8, NOTE_E5, -8,
      NOTE_E5, 8, NOTE_D5, 8, NOTE_B5, -8, NOTE_D6, 16, NOTE_B5, 16,
      NOTE_B5, 8, NOTE_G5, 4, NOTE_G5, 4, NOTE_B5, 32, NOTE_A5, 32, NOTE_G5, 32, NOTE_FS5, 32,
      // 35
      NOTE_E5, 4, NOTE_E5, 8, NOTE_G5, 32, NOTE_FS5, 32, NOTE_E5, 32, NOTE_D5, 32,
      NOTE_C5, 16, NOTE_E5, 16, NOTE_G5, 16, NOTE_E5, 16, NOTE_CS5, 16, NOTE_B4, 16, NOTE_CS5, 16, NOTE_A4, 16,
      NOTE_AS4, -8, NOTE_A4, -8, NOTE_G4, 8, NOTE_F4, 8,
      NOTE_A4, 8, NOTE_AS4, 16, NOTE_CS5, 16, NOTE_E5, 8, NOTE_D5, 16, NOTE_CS5, 16,
      // 39
      NOTE_D5, 8, NOTE_B4, 32, NOTE_CS5, 32, NOTE_D5, 32, NOTE_E5, 32, NOTE_FS5, 8, NOTE_D5, 16, NOTE_FS5, 16,
      NOTE_B5, 8, NOTE_FS5, 8, NOTE_E5, 16, NOTE_D5, 16, NOTE_CS5, 16, NOTE_D5, 16,
      NOTE_CS5, 8, NOTE_B4, 4};

  // sizeof gives the number of bytes, each int value is composed of two bytes (16 bits)
  // there are two values per note (pitch and duration), so for each note there are four bytes
  const int notes = sizeof(melody_badinerie) / sizeof(melody_badinerie[0]) / 2;

  // this calculates the duration of a whole note in ms
  const int wholenote = (60000 * 4) / tempo_badinerie;

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
    divider = melody_badinerie[thisNote + 1];
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
    ledcWriteTone(soundChannel, melody_badinerie[thisNote]);
#else
    tone(buzzer, melody_badinerie[thisNote], noteDuration * 0.9);
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