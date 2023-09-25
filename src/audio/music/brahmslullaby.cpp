#include <Arduino.h>
#include "audio\scale.h"
/*
  Brahms' Lullaby (Wiegenlied) -  Johannes Brahms
  Connect a piezo buzzer or speaker to pin 11 or select a new pin.
  More songs available at https://github.com/robsoncouto/arduino-songs

                                              Robson Couto, 2019
*/

void play_brahmslullaby(int buzzer)
{
  // change this to make the song slower or faster
  const int tempo_brahmslullaby = 76;

  // notes of the moledy followed by the duration.
  // a 4 means a quarter note, 8 an eighteenth , 16 sixteenth, so on
  // !!negative numbers are used to represent dotted notes,
  // so -4 means a dotted quarter note, that is, a quarter plus an eighteenth!!
  const int melody_brahmslullaby[] = {

      // Wiegenlied (Brahms' Lullaby)
      // Score available at https://www.flutetunes.com/tunes.php?id=54

      NOTE_G4, 4, NOTE_G4, 4, // 1
      NOTE_AS4, -4, NOTE_G4, 8, NOTE_G4, 4,
      NOTE_AS4, 4, REST, 4, NOTE_G4, 8, NOTE_AS4, 8,
      NOTE_DS5, 4, NOTE_D5, -4, NOTE_C5, 8,
      NOTE_C5, 4, NOTE_AS4, 4, NOTE_F4, 8, NOTE_G4, 8,
      NOTE_GS4, 4, NOTE_F4, 4, NOTE_F4, 8, NOTE_G4, 8,
      NOTE_GS4, 4, REST, 4, NOTE_F4, 8, NOTE_GS4, 8,
      NOTE_D5, 8, NOTE_C5, 8, NOTE_AS4, 4, NOTE_D5, 4,

      NOTE_DS5, 4, REST, 4, NOTE_DS4, 8, NOTE_DS4, 8, // 8
      NOTE_DS5, 2, NOTE_C5, 8, NOTE_GS4, 8,
      NOTE_AS4, 2, NOTE_G4, 8, NOTE_DS4, 8,
      NOTE_GS4, 4, NOTE_AS4, 4, NOTE_C5, 4,
      NOTE_AS4, 2, NOTE_DS4, 8, NOTE_DS4, 8,
      NOTE_DS5, 2, NOTE_C5, 8, NOTE_GS4, 8,
      NOTE_AS4, 2, NOTE_G4, 8, NOTE_DS4, 8,
      NOTE_AS4, 4, NOTE_G4, 4, NOTE_DS4, 4,
      NOTE_DS4, 2

  };

  // sizeof gives the number of bytes, each int valsmaue is composed of two bytes (16 bits)
  // there are two values per note (pitch and duration), so for each note there are four bytes
  const int notes = sizeof(melody_brahmslullaby) / sizeof(melody_brahmslullaby[0]) / 2;

  // this calculates the duration of a whole note in ms
  const int wholenote = (60000 * 4) / tempo_brahmslullaby;

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
    divider = melody_brahmslullaby[thisNote + 1];
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
    ledcWriteTone(soundChannel, melody_brahmslullaby[thisNote]);
#else
    tone(buzzer, melody_brahmslullaby[thisNote], noteDuration * 0.9);
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