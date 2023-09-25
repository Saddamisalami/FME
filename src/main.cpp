#define INCLUDE_BASESTATION 1
#define INCLUDE_MUSIC 1
#define INCLUDE_LORA 0

#define DEMO_ALARM 0

#include <Arduino.h>
#include <ArduinoJson.h>
#include <FastLED.h>
#include <painlessMesh.h>
#if (INCLUDE_LORA)
#include <RadioLib.h>
#endif
#include <TFT_eFEX.h>
#include <TFT_eSPI.h>

#include "audio\functions.h"
#include "button\functions.h"
#include "display\functions.h"
#include "display\views\alarm.h"
#include "display\views\bootscreen.h"
#include "display\views\menu.h"
#include "display\views\menubar.h"
#include "display\views\titlebar.h"
#include "filesystem\functions.h"
#include "graphic\functions.h"
#include "i18n\functions.h"
#include "mesh\functions.h"
#include "messages\functions.h"
#include "tasks\battery.h"
#include "tasks\mesh.h"
#include "tasks\time.h"
#include "tasks\wlan.h"
#include "time\functions.h"

#include "variables.h"

/*
 *Globale Variablen initialisieren
 */
// Alarm
unsigned long time_page_1 = 20000;
unsigned long time_page_2 = 20000;
unsigned long time_page_3 = 20000;
boolean running_Alarm = false;

// Config
boolean spiffs_active = true;
boolean littlefs_active = false;
unsigned int chip_id = 0;

String i18n = "de";

boolean menu_sound_active = true;

boolean display_time = true;
boolean display_landscape = true;
String display_theme = "color";
unsigned int display_level = 100;

boolean debug_mode = false;

boolean giessen_mode = false;
boolean closed_mode = false;

unsigned int cityId = 91;

// Hardware
unsigned int button_1_rotation = 90;
unsigned int button_1_pin = 16;
unsigned int button_1_pin_x = 13;
unsigned int button_1_pin_y = 12;
#if (INCLUDE_BASESTATION)
unsigned int relay_1_pin = 1;
boolean relay_1_mode = true;
boolean relay_1_state = false;
unsigned const int led_2_numbers = 7;
unsigned const int led_2_pin = 18;
CRGB leds2[led_2_numbers];
#endif
#if (INCLUDE_LORA)
unsigned int lora_1_pin_nss = 10;
unsigned int lora_1_pin_dio0 = 2;
unsigned int lora_1_pin_reset = 9;
unsigned int lora_1_pin_dio1 = 3;
boolean lora_1_active = false;
#endif
unsigned int sound_1_pin = 17;
boolean led_1_power = true;
unsigned int battery_1_pin = 4;
// Mesh
String mesh_prefix = "FMEMesh";
String mesh_password = "somethingSneaky";
unsigned int mesh_port = 5555;
unsigned int mesh_channel = 6;
boolean mesh_containsRoot = true;
boolean mesh_isRoot = true;
// Sound
unsigned int channel_1 = 0;
unsigned int volume_1 = 100;
// Zeit
unsigned int last_hour = 0;
unsigned int wake_hour = 0;
unsigned int wake_minute = 0;
unsigned int wake_hour_tmp = 0;
unsigned int wake_minute_tmp = 0;
/*
 * Lokale Variablen für Ablauf innerhalb von Loop
 */
unsigned const int led_1_numbers = 1;
unsigned const int led_1_pin = 21;
CRGB leds[led_1_numbers];

boolean show_page_1 = true;
boolean show_page_2 = true;
boolean show_page_3 = true;
boolean scroll_page_1 = true;
int display_light = 100;

unsigned int battery_status = 100;

boolean connected_usb = false;
boolean button_locked = false;

boolean wlan_connected = false;
int wlan_strength = 0;

unsigned int year_tmp = 0;
unsigned int month_tmp = 0;
unsigned int day_tmp = 0;
unsigned int hour_tmp = 0;
unsigned int minute_tmp = 0;
boolean wake_now = false;

boolean updateMenubar = true;
unsigned int currentMenu = 0;
unsigned int currentMenubar = 0;
unsigned int lastMenu = 9999;
unsigned int lastMenubar = 9999;

// Local Variables
boolean prefChanged = false;
unsigned long timeMenu = 0;
unsigned long timeDisplay = 0;

boolean connected_audio = false;

painlessMesh mesh;
Scheduler userScheduler;

Task taskCheckTimeStatus(TASK_SECOND * 60, TASK_FOREVER, &checkTimeStatus);
Task taskCheckBatteryStatus(TASK_SECOND * 600, TASK_FOREVER, &checkBatteryStatus);
Task taskCheckWLANStatus(TASK_SECOND * 600, TASK_FOREVER, &checkWLANStatus);
Task taskSendStatusFME(TASK_SECOND * 1200, TASK_FOREVER, &sendStatusFME);

Joystick *joystick;

int scrollPositionInit = 0;
int scrollPosition = scrollPositionInit;
unsigned int scrollTextLength = 0;
unsigned long timePreviousMillisScroll = 0;
unsigned const int pauseScrolling = 20;

unsigned long timeDisplayAlarmCurrent = 0;

boolean button_pressed = false;

/*
 * Sound Funktionen/Variablen
 */

unsigned long timePreviousMillisTone = 0;
unsigned long timePreviousMillisPause = 0;
unsigned long timePreviousAlarm = 0;

boolean playingTone = false;
boolean playingPause = false;

unsigned int frequencyCounter = 0;

/*
 * Grafische Funktionen/Variablen
 */
TFT_eSPI tft = TFT_eSPI();

TFT_eSprite sprTitlebar1 = TFT_eSprite(&tft);
TFT_eSprite sprTitlebar2 = TFT_eSprite(&tft);
TFT_eSprite sprTitlebar3 = TFT_eSprite(&tft);

TFT_eSprite sprMenubar1 = TFT_eSprite(&tft);

TFT_eSprite sprMenu1 = TFT_eSprite(&tft);
TFT_eSprite sprMenu2 = TFT_eSprite(&tft);

TFT_eSprite sprScroll1 = TFT_eSprite(&tft);

boolean updateTitlebar = true;
boolean display_on = false;
boolean display_action = false;

unsigned long timePreviousMillisDisplayDarker = 0;
unsigned const int pauseDisplayDarker = 1000;

/*
 * LED Funktionen/Variablen
 */
#if (INCLUDE_LORA)
/*
 * LoRa Funktionen/Variablen
 *
 * SX1278 has the following connections_
 * NSS pin:   10
 * DIO0 pin:  2
 * RESET pin: 9
 * DIO1 pin:  3
 *
 */
SX1278 radio = new Module(10, 2, 9, 3);

volatile bool receivedLoRaFlag = false;
volatile bool enableLoRaInterrupt = true;

#if defined(ESP8266) || defined(ESP32)
ICACHE_RAM_ATTR
#endif
void setLoraInterruptFlag(void)
{
  if (!enableLoRaInterrupt)
  {
    return;
  }
  receivedLoRaFlag = true;
}
#endif

void colorLED(int alarmTypeForLED)
{
  if (alarmTypeForLED == 1)
  {
    leds[0] = CRGB::Red;
  }
  else if (alarmTypeForLED == 2)
  {
    leds[0] = CRGB::OrangeRed;
  }
  else if (alarmTypeForLED == 3)
  {
    leds[0] = CRGB::WhiteSmoke;
  }
  else if (alarmTypeForLED == 5)
  {
    leds[0] = CRGB::MediumBlue;
  }
  else if (alarmTypeForLED == 6)
  {
    leds[0] = CRGB::Green;
  }
  else
  {
    leds[0] = CRGB::White;
  }
  FastLED.show();
}

#if (INCLUDE_BASESTATION)
void colorBaseStationLED(int alarmTypeForLED)
{
  if (alarmTypeForLED == 1)
  {
    for (size_t i = 0; i < led_2_numbers; i++)
    {
      leds2[i] = CRGB::Red;
    }
  }
  else if (alarmTypeForLED == 2)
  {
    for (size_t i = 0; i < led_2_numbers; i++)
    {
      leds2[i] = CRGB::OrangeRed;
    }
  }
  else if (alarmTypeForLED == 3)
  {
    for (size_t i = 0; i < led_2_numbers; i++)
    {
      leds2[i] = CRGB::WhiteSmoke;
    }
  }
  else if (alarmTypeForLED == 5)
  {
    for (size_t i = 0; i < led_2_numbers; i++)
    {
      leds2[i] = CRGB::MediumBlue;
    }
  }
  else if (alarmTypeForLED == 6)
  {
    for (size_t i = 0; i < led_2_numbers; i++)
    {
      leds2[i] = CRGB::Green;
    }
  }
  else
  {
    for (size_t i = 0; i < led_2_numbers; i++)
    {
      leds2[i] = CRGB::White;
    }
  }
  FastLED.show();
}
#endif

// the setup function runs once when you press reset or power the board
void setup()
{
  initFileSystem();

  readConfig();

  initLanguage(i18n);

  initTheme(display_theme);

  pinMode(led_1_pin, OUTPUT);
  FastLED.addLeds<NEOPIXEL, led_1_pin>(leds, led_1_numbers);
#if (INCLUDE_BASESTATION)
  pinMode(led_2_pin, OUTPUT);
  FastLED.addLeds<NEOPIXEL, led_2_pin>(leds2, led_2_numbers);
#endif

  joystick = new AxisJoystick(button_1_pin, button_1_pin_x, button_1_pin_y);
  joystick->calibrate(0, 4095, 100);

  initDisplay(tft, true);

  drawBootscreen(tft);

  delay(2000);

  mesh.init(mesh_prefix, mesh_password, &userScheduler, mesh_port, WIFI_AP_STA, mesh_channel);
  mesh.setContainsRoot(mesh_containsRoot);
  if (mesh_isRoot == true)
  {
    mesh.initOTAReceive("otaBridge");
  }
  else
  {
    mesh.initOTAReceive("otaClient");
  }
  mesh.onReceive(&receivedAlarmCallback);
  mesh.onNewConnection(&newConnectionCallback);
  mesh.onChangedConnections(&changedConnectionCallback);
  mesh.onNodeTimeAdjusted(&nodeTimeAdjustedCallback);

  userScheduler.addTask(taskCheckTimeStatus);
  taskCheckTimeStatus.enable();

  userScheduler.addTask(taskCheckBatteryStatus);
  taskCheckBatteryStatus.enable();
  if (mesh_isRoot == true)
  {
    userScheduler.addTask(taskCheckWLANStatus);
    taskCheckWLANStatus.enable();
  }

  userScheduler.addTask(taskSendStatusFME);
  taskSendStatusFME.enable();
  taskSendStatusFME.setInterval(120000);
#if (INCLUDE_BASESTATION)
  pinMode(relay_1_pin, OUTPUT);
#endif

#if (INCLUDE_LORA)
  if (lora_1_active == true)
  {
    int state = radio.begin();
    if (state == RADIOLIB_ERR_NONE)
    {
      radio.setDio0Action(setLoraInterruptFlag);
    }
    state = radio.startReceive();
    if (state == RADIOLIB_ERR_NONE)
    {
    }
  }
#endif
  setLandscape(tft, display_landscape);

  drawTitlebar(tft, sprTitlebar1, sprTitlebar2, sprTitlebar3);
  drawMenubar(tft, sprMenubar1);
#if defined(ESP32)
  ledcAttachPin(sound_1_pin, channel_1);
#endif
#if (DEMO_ALARM)
  {
    alarmSet(0, 100, true, 16, 101, "Helgenstockstrasse 19, 35394 Gießen Rödgen", "Das ist ein Demo Alarm");
    running_Alarm = true;
  }
#else
  {
    readAlarmsFromFS();
    readMessagesFromFS();
  }
#endif
}

void loop()
{
  // Aktualisieren des Mesh Netzwerkes & Empfangen von Nachrichten
  mesh.update();
#if (INCLUDE_LORA)
  if (receivedLoRaFlag)
  {
    enableLoRaInterrupt = false;
    receivedLoRaFlag = false;

    String str;
    int state = radio.readData(str);

    // you can also read received data as byte array
    /*
      byte byteArr[8];
      int state = radio.readData(byteArr, 8);
    */

    if (state == RADIOLIB_ERR_NONE)
    {
      // packet was successfully received
      Serial.println(F("[SX1278] Received packet!"));

      // print data of the packet
      Serial.print(F("[SX1278] Data:\t\t"));
      Serial.println(str);

      // print RSSI (Received Signal Strength Indicator)
      Serial.print(F("[SX1278] RSSI:\t\t"));
      Serial.print(radio.getRSSI());
      Serial.println(F(" dBm"));

      // print SNR (Signal-to-Noise Ratio)
      Serial.print(F("[SX1278] SNR:\t\t"));
      Serial.print(radio.getSNR());
      Serial.println(F(" dB"));

      // print frequency error
      Serial.print(F("[SX1278] Frequency error:\t"));
      Serial.print(radio.getFrequencyError());
      Serial.println(F(" Hz"));
    }
    else if (state == RADIOLIB_ERR_CRC_MISMATCH)
    {
      // packet was received, but is malformed
      Serial.println(F("[SX1278] CRC error!"));
    }
    else
    {
      // some other error occurred
      Serial.print(F("[SX1278] Failed, code "));
      Serial.println(state);
    }

    radio.startReceive();

    enableLoRaInterrupt = true;
  }
#endif

  // Joystick abfragen
  checkJoystick();

  // Ermitteln der NodeID des Mesh Netzes (erfolgt einmal sobald das Mesh steht, bzw. die NodeId sich geändert hat)
  if (chip_id == 0 || chip_id != mesh.getNodeId())
  {
    chip_id = mesh.getNodeId();
  }

  unsigned long currentMillis = millis();

  // speichern von geänderten Einstellungen

  if (prefChanged == true)
  {
    setLandscape(tft, display_landscape);
    prefChanged = false;
  }

  if (running_Alarm == false)
  {
    if (lastMenu != currentMenu)
    {
      if (menu_sound_active == true)
      {
#if defined(ESP32)
        ledcWriteTone(channel_1, 1000);
#else
        tone(sound_1_pin, 1000);
#endif
      }
      display_action = true;
      brightnessDisplay(tft, display_level);
      drawMenu(tft, sprMenu1, sprMenu2);
      if (menu_sound_active == true)
      {
#if defined(ESP32)
        ledcWriteTone(channel_1, 0);
#else
        noTone(sound_1_pin);
#endif
      }
      drawTitlebar(tft, sprTitlebar1, sprTitlebar2, sprTitlebar3);
      drawMenubar(tft, sprMenubar1);
      lastMenu = currentMenu;
    }
    else
    {
      display_action = false;
    }
    if (led_1_power == true)
    {
      digitalWrite(led_1_pin, LOW);
    }
    else
    {
      leds[0] = CRGB::Black;
      FastLED.show();
    }
#if (INCLUDE_BASESTATION)
    for (size_t i = 0; i < led_2_numbers; i++)
    {
      leds2[i] = CRGB::Black;
    }
    FastLED.show();
    if (relay_1_state == true)
    {
      if (relay_1_mode == true)
      {
        digitalWrite(relay_1_pin, LOW);
      }
      else
      {
        digitalWrite(relay_1_pin, HIGH);
      }
      relay_1_state = true;
    }
#endif
  }
  else if (running_Alarm == true)
  {
    display_action = true;
    unsigned int displayWidth = tft.getViewportWidth();
    unsigned int displayHeight = tft.getViewportHeight();
    unsigned int middleWidth = round(displayWidth / 2);
    unsigned int middleHeight = round(displayHeight / 2);

#if (INCLUDE_BASESTATION)
    if (relay_1_state == false)
    {
      if (relay_1_mode == true)
      {
        digitalWrite(relay_1_pin, HIGH);
      }
      else
      {
        digitalWrite(relay_1_pin, LOW);
      }
      relay_1_state = true;
    }
#endif

    if (show_page_1 == true)
    {
      lastMenu = 9999;
      lastMenubar = 9999;
      timeDisplayAlarmCurrent = currentMillis;
      brightnessDisplay(tft, display_level);
      drawMenu(tft, sprMenu1, sprMenu2);
      drawTitlebar(tft, sprTitlebar1, sprTitlebar2, sprTitlebar3);
      drawMenubar(tft, sprMenubar1);
      drawAlarmPageType(tft, sprMenu1, currentAlarm);
      show_page_1 = false;
      scroll_page_1 = true;
      scrollAlarmText(tft, sprScroll1, getAlarmAdress(currentAlarm));
    }
    if (scroll_page_1 == true && show_page_1 == false)
    {
      if (currentMillis > (timePreviousMillisScroll + pauseScrolling))
      {
        lastMenu = 9999;
        lastMenubar = 9999;
        timePreviousMillisScroll = currentMillis;
        sprScroll1.pushSprite(scrollPosition, middleHeight + 20);
        scrollPosition = scrollPosition - 1;
        if (scrollPosition < (-scrollTextLength + (displayWidth - 20)))
        {
          scrollPosition = scrollPositionInit;
        }
      }
    }
    if (show_page_1 == false && show_page_2 == true && currentMillis > (timeDisplayAlarmCurrent + time_page_1))
    {
      lastMenu = 9999;
      lastMenubar = 9999;
      scroll_page_1 = false;
      timeDisplayAlarmCurrent = currentMillis;
      drawAlarmPageDetail(tft, sprMenu1, false, currentAlarm);
      show_page_2 = false;
      drawMenubar(tft, sprMenubar1);
    }
    if (show_page_2 == false && show_page_3 == true && currentMillis > (timeDisplayAlarmCurrent + time_page_2))
    {
      lastMenu = 9999;
      lastMenubar = 9999;
      timeDisplayAlarmCurrent = currentMillis;
      drawAlarmPageDetail(tft, sprMenu1, true, currentAlarm);
      show_page_3 = false;
      drawMenubar(tft, sprMenubar1);
    }
    if (show_page_3 == false && currentMillis > (timeDisplayAlarmCurrent + time_page_3))
    {
      lastMenu = 9999;
      lastMenubar = 9999;
      cleanAlarm();
      display_action = false;
    }

    int frequency = 0;
    int frequencyLength = 0;
    int alarmTypeForLED = getAlarmCategory(getAlarmType(currentAlarm));
    ;
    if (getAlarmDigital(currentAlarm) == true)
    {
      frequency = getDigitalFrequency(getAlarmSound(currentAlarm), frequencyCounter);
      frequencyLength = getDigitalFrequencyLength(getAlarmSound(currentAlarm), frequencyCounter);

      /*
       * tone() ist nicht supported auf ESP32, ersetzt durch ledcWrite()
       */
      if (playingTone == false && playingPause == false)
      {
        timePreviousMillisTone = millis();
        playingTone = true;
        if (led_1_power == true)
        {
          digitalWrite(led_1_pin, HIGH);
        }
        else
        {
          colorLED(alarmTypeForLED);
        }
#if (INCLUDE_BASESTATION)
        colorBaseStationLED(alarmTypeForLED);
#endif

#if defined(ESP32)
        ledcWriteTone(channel_1, frequency);
#else
        tone(sound_1_pin, frequency);
#endif
      }
      if (playingTone == true && playingPause == false)
      {
        if (timePreviousMillisTone + digitalDuration <= millis())
        {
          playingTone = false;
          playingPause = true;
          timePreviousMillisPause = millis();
          if (led_1_power == true)
          {
            digitalWrite(led_1_pin, LOW);
          }
          else
          {
            leds[0] = CRGB::Black;
#if (INCLUDE_BASESTATION)
            for (size_t i = 0; i < led_2_numbers; i++)
            {
              leds2[i] = CRGB::Black;
            }
#endif
            FastLED.show();
          }
#if defined(ESP32)
          ledcWriteTone(channel_1, 0);
#else
          noTone(sound_1_pin);
#endif
        }
      }
      if (playingTone == false && playingPause == true)
      {
        if (timePreviousMillisPause + digitalPause <= millis())
        {
          playingPause = false;
          frequencyCounter = frequencyCounter + 1;
          if (frequencyCounter >= frequencyLength)
          {
            frequencyCounter = 0;
          }
        }
      }
    }
    else
    {
      unsigned int fullSound = getAlarmSound(currentAlarm);
      if (fullSound <= 99999 && fullSound >= 10000)
      {
        unsigned int num5 = fullSound % 10;
        unsigned int num4 = (fullSound / 10) % 10;
        unsigned int num3 = (fullSound / 100) % 10;
        unsigned int num2 = (fullSound / 1000) % 10;
        unsigned int num1 = (fullSound / 10000) % 10;

        num1 = getAnalogFrequency(num1);
        num2 = getAnalogFrequency(num2);
        num3 = getAnalogFrequency(num3);
        num4 = getAnalogFrequency(num4);
        num5 = getAnalogFrequency(num5);

        if (num1 == num2)
        {
          num2 = getAnalogReplacementFrequency();
        }
        if (num2 == num3)
        {
          num3 = getAnalogReplacementFrequency();
        }
        if (num3 == num4)
        {
          num4 = getAnalogReplacementFrequency();
        }
        if (num4 == num5)
        {
          num5 = getAnalogReplacementFrequency();
        }

        if (playingTone == false && frequencyCounter == 0 && timePreviousMillisTone < millis())
        {
          timePreviousMillisTone = millis() + analogDuration;
          playingTone = true;
          if (led_1_power == true)
          {
            digitalWrite(led_1_pin, LOW);
          }
          else
          {
            colorLED(alarmTypeForLED);
          }
#if (INCLUDE_BASESTATION)
          colorBaseStationLED(alarmTypeForLED);
#endif
#if defined(ESP32)
          ledcWriteTone(channel_1, num1);
#else
          tone(sound_1_pin, num1);
#endif
          frequencyCounter = frequencyCounter + 1;
        }

        if (playingTone == true && frequencyCounter == 1 && timePreviousMillisTone < millis())
        {
          timePreviousMillisTone = millis() + analogDuration;
          playingTone = true;
          if (led_1_power == true)
          {
            digitalWrite(led_1_pin, LOW);
          }
          else
          {
            colorLED(alarmTypeForLED);
          }
#if (INCLUDE_BASESTATION)
          colorBaseStationLED(alarmTypeForLED);
#endif
#if defined(ESP32)
          ledcWriteTone(channel_1, num2);
#else
          tone(sound_1_pin, num2);
#endif
          frequencyCounter = frequencyCounter + 1;
        }
        if (playingTone == true && frequencyCounter == 2 && timePreviousMillisTone < millis())
        {
          timePreviousMillisTone = millis() + analogDuration;
          playingTone = true;
          if (led_1_power == true)
          {
            digitalWrite(led_1_pin, LOW);
          }
          else
          {
            colorLED(alarmTypeForLED);
          }
#if (INCLUDE_BASESTATION)
          colorBaseStationLED(alarmTypeForLED);
#endif

#if defined(ESP32)
          ledcWriteTone(channel_1, num3);
#else
          tone(sound_1_pin, num3);
#endif
          frequencyCounter = frequencyCounter + 1;
        }
        if (playingTone == true && frequencyCounter == 3 && timePreviousMillisTone < millis())
        {
          timePreviousMillisTone = millis() + analogDuration;
          playingTone = true;
          if (led_1_power == true)
          {
            digitalWrite(led_1_pin, LOW);
          }
          else
          {
            colorLED(alarmTypeForLED);
          }
#if (INCLUDE_BASESTATION)
          colorBaseStationLED(alarmTypeForLED);
#endif
#if defined(ESP32)
          ledcWriteTone(channel_1, num4);
#else
          tone(sound_1_pin, num4);
#endif
          frequencyCounter = frequencyCounter + 1;
        }
        if (playingTone == true && frequencyCounter == 4 && timePreviousMillisTone < millis())
        {
          timePreviousMillisTone = millis() + analogDuration;
          playingTone = true;
          if (led_1_power == true)
          {
            digitalWrite(led_1_pin, LOW);
          }
          else
          {
            colorLED(alarmTypeForLED);
          }
#if (INCLUDE_BASESTATION)
          colorBaseStationLED(alarmTypeForLED);
#endif
#if defined(ESP32)
          ledcWriteTone(channel_1, num5);
#else
          tone(sound_1_pin, num5);
#endif
          frequencyCounter = frequencyCounter + 1;
        }
        if (playingTone == true && frequencyCounter == 5 && timePreviousMillisTone < millis())
        {
          timePreviousMillisTone = millis() + analogPause;
          playingTone = false;
          if (led_1_power == true)
          {
            digitalWrite(led_1_pin, HIGH);
          }
          else
          {
            leds[0] = CRGB::Black;
            FastLED.show();
          }
#if (INCLUDE_BASESTATION)
          for (size_t i = 0; i < led_2_numbers; i++)
          {
            leds2[i] = CRGB::Black;
          }
          FastLED.show();
#endif

#if defined(ESP32)
          ledcWriteTone(channel_1, 0);
#else
          noTone(sound_1_pin);
#endif
          frequencyCounter = 0;
          analogCounter = analogCounter + 1;
        }
      }
    }
  }

  if (wake_now == true)
  {
    wake_now = false;
    for (int i = 0; i < 3; i++)
    {
      play_nokiatune(sound_1_pin);
    }
  }

  if (display_action == false && display_light > 0 && display_light <= 100)
  {
    if (currentMillis > (timePreviousMillisDisplayDarker + pauseDisplayDarker))
    {
      timePreviousMillisDisplayDarker = currentMillis;
      display_light = display_light - 5;
      brightnessDisplay(tft, display_light);
    }
  }
}