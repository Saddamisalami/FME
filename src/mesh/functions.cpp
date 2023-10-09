#include <Arduino.h>
#include <ArduinoJson.h>
#include <painlessMesh.h>

#if (INCLUDE_MUSIC)
#include "audio\music.h"
#endif
#include "filesystem\functions.h"
#include "messages\functions.h"
#include "system\functions.h"
#include "time\functions.h"

#include "variables.h"

void changedConnectionCallback()
{
}

void newConnectionCallback(uint32_t nodeId)
{
}

void nodeTimeAdjustedCallback(int32_t offset)
{
}

void receivedAlarmCallback(uint32_t from, String &msg)
{
  // StaticJsonDocument<256> doc;
  StaticJsonDocument<768> doc;
  DeserializationError error = deserializeJson(doc, msg.c_str());
  if (error)
  {
    return;
  }

  unsigned int messageType = doc["message"];

  /*
  1 = alarm
  2 = message
  3 = order
  4 = config set
  */
  unsigned int currentId = doc["id"];
  if (messageType == 1)
  {
    boolean isDigital = doc["digital"];
    unsigned int currentTone = doc["sound"];
    unsigned int currentType = doc["type"];
    unsigned int currentSub = doc["sub"];
    String currentAdress = doc["adress"];
    unsigned int currentPLZ = doc["plz"];
    unsigned int currentCity = doc["city"];
    unsigned int currentStreet = doc["street"];
    unsigned int currentNumber = doc["number"];
    String currentAddition = doc["addition"];
    String currentComment = doc["comment"];
    if (currentTone > 0 && currentType > 0)
    {
      currentAlarm = nextAlarm;
      nextAlarm = nextAlarm + 1;
      if (nextAlarm == arraySize)
      {
        nextAlarm == 0;
      }
      alarmSet(currentAlarm, currentId, isDigital, currentTone, currentType, currentSub, currentAdress, currentPLZ, currentCity, currentStreet, currentNumber, currentAddition, currentComment, false, false);
      writeAlarmsToFS();
      running_Alarm = true;
    }
  }
  else if (messageType == 2)
  {
    String currentComment = doc["comment"];
    if (currentComment.length() >= 1)
    {
      currentMessage = nextMessage;
      nextMessage = nextMessage + 1;
      if (nextMessage == arraySize)
      {
        nextMessage == 0;
      }
      messageSet(currentMessage, currentId, currentComment, false);
      writeMessagesToFS();
    }
  }
  else if (messageType == 3)
  {
    unsigned int currentType = doc["type"];
    String currentComment = doc["comment"];
    if (currentComment.length() >= 1)
    {
      if (currentComment.equalsIgnoreCase("reset"))
      {
        restart();
      }
      else if (currentComment.equalsIgnoreCase("deepSleep"))
      {
        deepSleep(currentType);
      }
      else if (currentComment.equalsIgnoreCase("setYear"))
      {
        setYear(currentType);
      }
      else if (currentComment.equalsIgnoreCase("setMonth"))
      {
        setMonth(currentType);
      }
      else if (currentComment.equalsIgnoreCase("setDay"))
      {
        setDay(currentType);
      }
      else if (currentComment.equalsIgnoreCase("setHour"))
      {
        setHour(currentType);
      }
      else if (currentComment.equalsIgnoreCase("setMinute"))
      {
        setMinute(currentType);
      }
      else if (currentComment.equalsIgnoreCase("saveTime"))
      {
        writeTime();
      }
#if (INCLUDE_MUSIC)
      else if (currentComment.equalsIgnoreCase("play_asabranca"))
      {
        play_asabranca(sound_1_pin);
      }
      else if (currentComment.equalsIgnoreCase("play_babyelephantwalk"))
      {
        play_babyelephantwalk(sound_1_pin);
      }
      else if (currentComment.equalsIgnoreCase("play_badinerie"))
      {
        play_badinerie(sound_1_pin);
      }
      else if (currentComment.equalsIgnoreCase("play_bloodytears"))
      {
        play_bloodytears(sound_1_pin);
      }
      else if (currentComment.equalsIgnoreCase("play_bohemianRhapsody"))
      {
        play_bohemianRhapsody(sound_1_pin);
      }
      else if (currentComment.equalsIgnoreCase("play_brahmslullaby"))
      {
        play_brahmslullaby(sound_1_pin);
      }
      else if (currentComment.equalsIgnoreCase("play_cannonind"))
      {
        play_cannonind(sound_1_pin);
      }
      else if (currentComment.equalsIgnoreCase("play_cantinaband"))
      {
        play_cantinaband(sound_1_pin);
      }
      else if (currentComment.equalsIgnoreCase("play_coffindance"))
      {
        play_coffindance(sound_1_pin);
      }
      else if (currentComment.equalsIgnoreCase("play_doom"))
      {
        play_doom(sound_1_pin);
      }
      else if (currentComment.equalsIgnoreCase("play_furelise"))
      {
        play_furelise(sound_1_pin);
      }
      else if (currentComment.equalsIgnoreCase("play_gameofthrones"))
      {
        play_gameofthrones(sound_1_pin);
      }
      else if (currentComment.equalsIgnoreCase("play_greenhill"))
      {
        play_greenhill(sound_1_pin);
      }
      else if (currentComment.equalsIgnoreCase("play_greensleeves"))
      {
        play_greensleeves(sound_1_pin);
      }
      else if (currentComment.equalsIgnoreCase("play_happybirthday"))
      {
        play_happybirthday(sound_1_pin);
      }
      else if (currentComment.equalsIgnoreCase("play_harrypotter"))
      {
        play_harrypotter(sound_1_pin);
      }
      else if (currentComment.equalsIgnoreCase("play_homealone"))
      {
        play_homealone(sound_1_pin);
      }
      else if (currentComment.equalsIgnoreCase("play_imperialmarch"))
      {
        play_imperialmarch(sound_1_pin);
      }
      else if (currentComment.equalsIgnoreCase("play_jamesbond"))
      {
        play_jamesbond(sound_1_pin);
      }
      else if (currentComment.equalsIgnoreCase("play_jigglypuffsong"))
      {
        play_jigglypuffsong(sound_1_pin);
      }
      else if (currentComment.equalsIgnoreCase("play_keyboardcat"))
      {
        play_keyboardcat(sound_1_pin);
      }
      else if (currentComment.equalsIgnoreCase("play_mariosbros"))
      {
        play_mariosbros(sound_1_pin);
      }
      else if (currentComment.equalsIgnoreCase("play_megalovania"))
      {
        play_megalovania(sound_1_pin);
      }
      else if (currentComment.equalsIgnoreCase("play_merrychristmas"))
      {
        play_merrychristmas(sound_1_pin);
      }
      else if (currentComment.equalsIgnoreCase("play_miichannel"))
      {
        play_miichannel(sound_1_pin);
      }
      else if (currentComment.equalsIgnoreCase("play_minuetg"))
      {
        play_minuetg(sound_1_pin);
      }
      else if (currentComment.equalsIgnoreCase("play_nevergonegiveyouup"))
      {
        play_nevergonegiveyouup(sound_1_pin);
      }
      else if (currentComment.equalsIgnoreCase("play_nokiatune"))
      {
        play_nokiatune(sound_1_pin);
      }
      else if (currentComment.equalsIgnoreCase("play_odetojoy"))
      {
        play_odetojoy(sound_1_pin);
      }
      else if (currentComment.equalsIgnoreCase("play_pacman"))
      {
        play_pacman(sound_1_pin);
      }
      else if (currentComment.equalsIgnoreCase("play_pinkpanther"))
      {
        play_pinkpanther(sound_1_pin);
      }
      else if (currentComment.equalsIgnoreCase("play_piratesofthecaribbean"))
      {
        play_piratesofthecaribbean(sound_1_pin);
      }
      else if (currentComment.equalsIgnoreCase("play_princeigor"))
      {
        play_princeigor(sound_1_pin);
      }
      else if (currentComment.equalsIgnoreCase("play_professorlayton"))
      {
        play_professorlayton(sound_1_pin);
      }
      else if (currentComment.equalsIgnoreCase("play_pulodagaita"))
      {
        play_pulodagaita(sound_1_pin);
      }
      else if (currentComment.equalsIgnoreCase("play_silentnight"))
      {
        play_silentnight(sound_1_pin);
      }
      else if (currentComment.equalsIgnoreCase("play_songofstorms"))
      {
        play_songofstorms(sound_1_pin);
      }
      else if (currentComment.equalsIgnoreCase("play_startrekintro"))
      {
        play_startrekintro(sound_1_pin);
      }
      else if (currentComment.equalsIgnoreCase("play_starwars"))
      {
        play_starwars(sound_1_pin);
      }
      else if (currentComment.equalsIgnoreCase("play_supermariobros"))
      {
        play_supermariobros(sound_1_pin);
      }
      else if (currentComment.equalsIgnoreCase("play_takeonme"))
      {
        play_takeonme(sound_1_pin);
      }
      else if (currentComment.equalsIgnoreCase("play_tetris"))
      {
        play_tetris(sound_1_pin);
      }
      else if (currentComment.equalsIgnoreCase("play_thegodfather"))
      {
        play_thegodfather(sound_1_pin);
      }
      else if (currentComment.equalsIgnoreCase("play_thelick"))
      {
        play_thelick(sound_1_pin);
      }
      else if (currentComment.equalsIgnoreCase("play_thelionsleepstonight"))
      {
        play_thelionsleepstonight(sound_1_pin);
      }
      else if (currentComment.equalsIgnoreCase("play_theredsong"))
      {
        play_theredsong(sound_1_pin);
      }
      else if (currentComment.equalsIgnoreCase("play_vampirekiller"))
      {
        play_vampirekiller(sound_1_pin);
      }
      else if (currentComment.equalsIgnoreCase("play_zeldaslullaby"))
      {
        play_zeldaslullaby(sound_1_pin);
      }
      else if (currentComment.equalsIgnoreCase("play_zeldatheme"))
      {
        play_zeldatheme(sound_1_pin);
      }
      else if (currentComment.equalsIgnoreCase("play_xmas"))
      {
        play_xmas(sound_1_pin);
      }
#endif
    }
  }
  else if (messageType == 4)
  {
    time_page_1 = doc["time_page_1"]; // 20000
    time_page_2 = doc["time_page_2"]; // 20000
    time_page_3 = doc["time_page_3"]; // 20000
    String helper1 = doc["i18n"];
    i18n = helper1;                               // "de"
    menu_sound_active = doc["menu_sound_active"]; // true
    display_time = doc["display_time"];           // true
    display_landscape = doc["display_landscape"]; // true
    String helper2 = doc["display_theme"];
    display_theme = helper2;              // "color"
    display_level = doc["display_level"]; // 100
    debug_mode = doc["debug_mode"];       // false
    cityId = doc["cityId"];               // 91
    String helper3 = doc["mesh_prefix"];
    mesh_prefix = helper3; // "FMEMesh"
    String helper4 = doc["mesh_password"];
    mesh_password = helper4;                      // "somethingSneaky"
    mesh_port = doc["mesh_port"];                 // 5555
    mesh_channel = doc["mesh_channel"];           // 6
    mesh_containsRoot = doc["mesh_containsRoot"]; // true
    mesh_isRoot = doc["mesh_isRoot"];             // true
    wake_hour = doc["wake_hour"];                 // 0
    wake_minute = doc["wake_minute"];             // 0
  }
}