#include <Arduino.h>
#include "audio\scale.h"
/*
   Megalovania, Toby Fox
   Notes at https://pianoletternotes.blogspot.com/2017/10/megalovania-undertale-theme.html
*/

void play_megalovania(int buzzer)
{

  // change this to make the song slower or faster
  const int tempo_megalovania = 150;

  // notes of the moledy followed by the duration.
  // a 4 means a quarter note, 8 an eighteenth , 16 sixteenth, so on
  // !!negative numbers are used to represent dotted notes,
  // so -4 means a dotted quarter note, that is, a quarter plus an eighteenth!!
  const int melody_megalovania[] = {

       NOTE_D4, 12,  NOTE_D4, 12,  NOTE_D5, 12,  REST, 16,  NOTE_A4, 8,
  REST, 12,
  NOTE_GS4, 8,  REST, 16,  NOTE_G4, 12,  REST, 16,  NOTE_F4, 8,  REST, 20,  NOTE_D4, 16,  NOTE_F4, 16,  NOTE_G4, 12,

  NOTE_C4, 12,  NOTE_C4, 12,  NOTE_D5, 12,  REST, 16,  NOTE_A4, 8,
  REST, 12, 
  NOTE_GS4, 8,  REST, 16,  NOTE_G4, 12,  REST, 16,  NOTE_F4, 8,  REST, 20,  NOTE_D4, 16,  NOTE_F4, 16,  NOTE_G4, 12,

  NOTE_B3, 12,  NOTE_B3, 12,  NOTE_D5, 12,  REST, 16,  NOTE_A4, 8,
  REST, 12,
  NOTE_GS4, 8,  REST, 16,  NOTE_G4, 12,  REST, 16,  NOTE_F4, 8,  REST, 20,  NOTE_D4, 16,  NOTE_F4, 16,  NOTE_G4, 12,

  NOTE_AS3, 8,  NOTE_AS3, 8,  NOTE_D5, 12,  NOTE_A4, 8,
  REST, 12,
  NOTE_GS4, 8,  REST, 16,  NOTE_G4, 12,  REST, 16,  NOTE_F4, 8,  REST, 20,  NOTE_D4, 16,  NOTE_F4, 16,  NOTE_G4, 12,


  NOTE_D4, 12,  NOTE_D4, 12,  NOTE_D5, 12,  REST, 16,  NOTE_A4, 8,
  REST, 12,
  NOTE_GS4, 8,  REST, 16,  NOTE_G4, 12,  REST, 16,  NOTE_F4, 8,  REST, 20,  NOTE_D4, 16,  NOTE_F4, 16,  NOTE_G4, 12,

  NOTE_C4, 12,  NOTE_C4, 12,  NOTE_D5, 12,  REST, 16,  NOTE_A4, 8,
  REST, 12, 
  NOTE_GS4, 8,  REST, 16,  NOTE_G4, 12,  REST, 16,  NOTE_F4, 8,  REST, 20,  NOTE_D4, 16,  NOTE_F4, 16,  NOTE_G4, 12,

  NOTE_B3, 12,  NOTE_B3, 12,  NOTE_D5, 12,  REST, 16,  NOTE_A4, 8,
  REST, 12,
  NOTE_GS4, 8,  REST, 16,  NOTE_G4, 12,  REST, 16,  NOTE_F4, 8,  REST, 20,  NOTE_D4, 16,  NOTE_F4, 16,  NOTE_G4, 12,

  NOTE_AS3, 8,  NOTE_AS3, 8,  NOTE_D5, 12,  NOTE_A4, 8,
  REST, 12,
  NOTE_GS4, 8,  REST, 16,  NOTE_G4, 12,  REST, 16,  NOTE_F4, 8,  REST, 20,  NOTE_D4, 16,  NOTE_F4, 16,  NOTE_G4, 12,
  

  NOTE_D4, 12,  NOTE_D4, 12,  NOTE_D5, 12,  REST, 16,  NOTE_A4, 8,
  REST, 12,
  NOTE_GS4, 8,  REST, 16,  NOTE_G4, 12,  REST, 16,  NOTE_F4, 8,  REST, 20,  NOTE_D4, 16,  NOTE_F4, 16,  NOTE_G4, 12,

  NOTE_C4, 12,  NOTE_C4, 12,  NOTE_D5, 12,  REST, 16,  NOTE_A4, 8,
  REST, 12, 
  NOTE_GS4, 8,  REST, 16,  NOTE_G4, 12,  REST, 16,  NOTE_F4, 8,  REST, 20,  NOTE_D4, 16,  NOTE_F4, 16,  NOTE_G4, 12,

  NOTE_B3, 12,  NOTE_B3, 12,  NOTE_D5, 12,  REST, 16,  NOTE_A4, 8,
  REST, 12,
  NOTE_GS4, 8,  REST, 16,  NOTE_G4, 12,  REST, 16,  NOTE_F4, 8,  REST, 20,  NOTE_D4, 16,  NOTE_F4, 16,  NOTE_G4, 12,

  NOTE_AS3, 8,  NOTE_AS3, 8,  NOTE_D5, 12,  NOTE_A4, 8,
  REST, 12,
  NOTE_GS4, 8,  REST, 16,  NOTE_G4, 12,  REST, 16,  NOTE_F4, 8,  REST, 20,  NOTE_D4, 16,  NOTE_F4, 16,  NOTE_G4, 12,
  

  NOTE_D4, 12,  NOTE_D4, 12,  NOTE_D5, 12,  REST, 16,  NOTE_A4, 8,
  REST, 12,
  NOTE_GS4, 8,  REST, 16,  NOTE_G4, 12,  REST, 16,  NOTE_F4, 8,  REST, 20,  NOTE_D4, 16,  NOTE_F4, 16,  NOTE_G4, 12,

  NOTE_C4, 12,  NOTE_C4, 12,  NOTE_D5, 12,  REST, 16,  NOTE_A4, 8,
  REST, 12, 
  NOTE_GS4, 8,  REST, 16,  NOTE_G4, 12,  REST, 16,  NOTE_F4, 8,  REST, 20,  NOTE_D4, 16,  NOTE_F4, 16,  NOTE_G4, 12,

  NOTE_B3, 12,  NOTE_B3, 12,  NOTE_D5, 12,  REST, 16,  NOTE_A4, 8,
  REST, 12,
  NOTE_GS4, 8,  REST, 16,  NOTE_G4, 12,  REST, 16,  NOTE_F4, 8,  REST, 20,  NOTE_D4, 16,  NOTE_F4, 16,  NOTE_G4, 12,

  NOTE_AS3, 8,  NOTE_AS3, 8,  NOTE_D5, 12,  REST, 16,  NOTE_A4, 8,
  REST, 12,
  NOTE_GS4, 8,  REST, 16,  NOTE_G4, 12,  REST, 16,  NOTE_F4, 8,  REST, 20,  NOTE_D4, 16,  NOTE_F4, 16,  NOTE_G4, 12,
  


  NOTE_F4, 16,  REST, 12,  NOTE_F4, 12,  NOTE_F4, 12,  REST, 16,  NOTE_F4, 12,  REST, 16,  NOTE_F4, 12,  REST, 16,  NOTE_D4, 12,
  REST, 16,
  NOTE_D4, 12,  REST, 12,  NOTE_D4, 4,  REST, 16,  NOTE_F4, 12,  NOTE_F4, 12,  NOTE_F4, 12,  NOTE_F4, 12,  REST, 16,  NOTE_G4, 16,
  NOTE_GS4, 12,  REST, 16,  NOTE_G4, 12,  NOTE_F4, 8,  NOTE_D4, 12,  NOTE_F4, 12,  NOTE_G4, 8,


  NOTE_F4, 12,  REST, 16,  NOTE_F4, 12,  NOTE_F4, 12,  REST, 16,
  NOTE_G4, 12,  NOTE_GS4, 8, 
  REST, 16,  NOTE_A4, 12,  REST, 16,  NOTE_C5, 12,  REST, 12,  NOTE_A4, 12,  REST, 12,  NOTE_D5, 12,  REST, 16,  NOTE_D5, 12,
  REST, 16,  NOTE_D5, 12,  NOTE_A4, 12,  NOTE_D5, 12,  NOTE_C5, 4,

  REST, 2,

  NOTE_A4, 12,  REST, 16,  NOTE_A4, 12,  NOTE_A4, 12,  REST, 16,  NOTE_A4, 12,  REST, 16,  
  NOTE_A4, 12,  REST, 16,  NOTE_G4, 12,  REST, 16,  NOTE_G4, 12,  REST, 4,  NOTE_A4, 12,  REST, 16,  NOTE_A4, 12,  NOTE_A4, 12,
  REST, 16,  NOTE_A4, 12,  REST, 16,  NOTE_G4, 12,  REST, 16,
  NOTE_A4, 12,  REST, 16,  NOTE_D5, 12,  REST, 16,  NOTE_A4, 12,  REST, 16,  NOTE_G4, 12,  REST, 16,  NOTE_D5, 12,  REST, 16,
  NOTE_A4, 12,  REST, 16,  NOTE_G4, 12,  REST, 16,  NOTE_F4, 12,  REST, 16,  NOTE_C5, 12,  REST, 16,  NOTE_A4, 12,
  REST, 16,  NOTE_G4, 12,  REST, 16,  NOTE_F4, 12,  REST, 16,  NOTE_D4, 12,  REST, 16,  NOTE_E4, 12,  NOTE_F4, 12,  REST, 16,
  NOTE_A4, 12,  REST, 16,  NOTE_C5, 12,
  
  REST, 2,

  NOTE_F4, 12,  NOTE_D4, 12,  NOTE_F4, 12,  NOTE_G4, 12,  NOTE_GS4, 12,  NOTE_G4, 12,  NOTE_F4, 12,  NOTE_D4, 12,  NOTE_GS4, 12,
  NOTE_G4, 12,  NOTE_F4, 12,  NOTE_D4, 12,  NOTE_F4, 12,  NOTE_G4, 12,
  
  REST, 2,

  NOTE_GS4, 12,  REST, 16,  NOTE_A4, 12,  NOTE_C4, 12,  REST, 16,  NOTE_A4, 12,  NOTE_GS4, 12,  NOTE_G4, 12,  NOTE_F4, 12,
  NOTE_D4, 12,  NOTE_F4, 12,  REST, 16,  NOTE_G4, 12,  NOTE_GS4, 12,  REST, 16,  NOTE_C5, 12,  REST, 12,  NOTE_CS5, 12,  REST, 16,
  NOTE_GS4, 12,  REST, 16,  NOTE_GS4, 12,  NOTE_G4, 12,  NOTE_F4, 12,  NOTE_G4, 12,
  
  REST, 2,

  NOTE_F3, 12,  REST, 16,  NOTE_G3, 12,  REST, 16,  NOTE_A3, 12,  REST, 16,  NOTE_F4, 12,  REST, 16,  NOTE_E4, 10,  REST, 16,
  NOTE_D4, 10,  REST, 16,  NOTE_E4, 10,  REST, 16,  NOTE_F4, 10,  REST, 16,  NOTE_G4, 10,  REST, 16,  NOTE_E4, 10,
  NOTE_A4, 4,
  
  REST, 2,
  
  NOTE_A4, 12,  NOTE_GS4, 12,  NOTE_G4, 12,  NOTE_FS4, 12,  NOTE_F4, 12,  NOTE_E4, 12,  NOTE_DS4, 12,  NOTE_D4, 12,
  NOTE_CS4, 8,  REST, 8,  NOTE_DS4, 8,
  
  REST, 2,

  NOTE_F4, 12,  NOTE_D4, 12,  NOTE_F4, 12,  NOTE_G4, 12,  NOTE_GS4, 12,  NOTE_G4, 12,  NOTE_F4, 12,  NOTE_D4, 12,  NOTE_GS4, 12,
  NOTE_G4, 12,  NOTE_F4, 12,  NOTE_D4, 12,  NOTE_F4, 12,  NOTE_G4, 12,
  
  REST, 2,

  NOTE_GS4, 12,  REST, 16,  NOTE_A4, 12,  NOTE_C4, 12,  REST, 16,  NOTE_A4, 12,  NOTE_GS4, 12,  NOTE_G4, 12,  NOTE_F4, 12,
  NOTE_D4, 12,  NOTE_F4, 12,  REST, 16,  NOTE_G4, 12,  NOTE_GS4, 12,  REST, 16,  NOTE_C5, 12,  REST, 12,  NOTE_CS5, 12,  REST, 16,
  NOTE_GS4, 12,  REST, 16,  NOTE_GS4, 12,  NOTE_G4, 12,  NOTE_F4, 12,  NOTE_G4, 12,
  
  REST, 2,

  NOTE_F3, 12,  REST, 16,  NOTE_G3, 12,  REST, 16,  NOTE_A3, 12,  REST, 16,  NOTE_F4, 12,  REST, 16,  NOTE_E4, 10,  REST, 16,
  NOTE_D4, 10,  REST, 16,  NOTE_E4, 10,  REST, 16,  NOTE_F4, 10,  REST, 16,  NOTE_G4, 10,  REST, 16,  NOTE_E4, 10,
  NOTE_A4, 4,
  
  REST, 2,
  
  NOTE_A4, 12,  NOTE_GS4, 12,  NOTE_G4, 12,  NOTE_FS4, 12,  NOTE_F4, 12,  NOTE_E4, 12,  NOTE_DS4, 12,  NOTE_D4, 12,
  NOTE_CS4, 8,  REST, 8

  };

  // sizeof gives the number of bytes, each int value is composed of two bytes (16 bits)
  // there are two values per note (pitch and duration), so for each note there are four bytes
  const int notes = sizeof(melody_megalovania) / sizeof(melody_megalovania[0]) / 2;

  // this calculates the duration of a whole note in ms (60s/tempo)*4 beats
  const int wholenote = (60000 * 4) / tempo_megalovania;

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
    divider = melody_megalovania[thisNote + 1];
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
    ledcWriteTone(soundChannel, melody_megalovania[thisNote]);
#else
    tone(buzzer, melody_megalovania[thisNote], noteDuration * 0.9);
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