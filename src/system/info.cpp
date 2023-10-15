#include <Arduino.h>

#include "filesystem\functions.h"
#include "i18n\functions.h"
#include "math\functions.h"

#include "variables.h"

const String divider = "/";
const String unitMHz = " MHz";
const String unitKB = " KB";

String getHardwareInfo(int subject)
{
  String info = "";
  if (subject == 1)
  {
    info += "Chip: ";
#if defined(ESP32)
    info += ESP.getChipModel();
#elif defined(ESP8266)
    info += "";
#endif
  }
  else if (subject == 2)
  {
    info += "Revision: ";
#if defined(ESP32)
    info += ESP.getChipRevision();
#elif defined(ESP8266)
    info += "1";
#endif
  }
  else if (subject == 3)
  {
    info += getI18n("menu_service_info_cores") + ": ";
#if defined(ESP32)
    info += ESP.getChipCores();
#elif defined(ESP8266)
    info += "1";
#endif
  }
  else if (subject == 4)
  {
    info += "Freq: ";
    info += ESP.getCpuFreqMHz();
    info += unitMHz;
  }
  else if (subject == 5)
  {
    int heapsize = 0;
#if defined(ESP32)
    heapsize = ESP.getHeapSize();
#elif defined(ESP8266)
    static uint32_t myfree;
    static uint16_t mymax;
    static uint8_t myfrag;
    ESP.getHeapStats(&myfree, &mymax, &myfrag);
    heapsize = mymax;
#endif
    info += "Heap " + getI18n("menu_service_info_size") + ": ";
    info += calcBytes(heapsize - ESP.getFreeHeap(), 1);
    info += divider;
    info += calcBytes(heapsize, 1);
    info += unitKB;
  }
  else if (subject == 6)
  {
    int psramsize = 0;
    int psramsizefree = 0;
#if defined(ESP32)
    psramsize = ESP.getPsramSize();
#elif defined(ESP8266)
    psramsize = 0;
#endif
#if defined(ESP32)
    psramsizefree = ESP.getFreePsram();
#elif defined(ESP8266)
    psramsizefree = 0;
#endif

    info += "Psram " + getI18n("menu_service_info_size") + ": ";
    info += calcBytes(psramsize - psramsizefree, 1);
    info += divider;
    info += calcBytes(psramsize, 1);
    info += unitKB;
  }
  else if (subject == 7)
  {
    info += "Flash " + getI18n("menu_service_info_size") + ": ";
    info += calcBytes(ESP.getFlashChipSize(), 1);
    info += unitKB;
  }
  else if (subject == 8)
  {
    info += "Flash Mode: ";
    info += ESP.getFlashChipMode();
  }
  else if (subject == 9)
  {
    info += "Flash " + getI18n("menu_service_info_speed") + ": ";
    info += calcBytes(ESP.getFlashChipSpeed(), 2);
    info += unitMHz;
  }
  return info;
}

String getSoftwareInfo(int subject)
{
  String info = "";
  if (subject == 1)
  {
    info += "SDK: ";
    info += ESP.getSdkVersion();
  }
  else if (subject == 2)
  {
    int sketchsize = ESP.getSketchSize();
    info += "Sketch " + getI18n("menu_service_info_size") + ": ";
    info += calcBytes(sketchsize - ESP.getFreeSketchSpace(), 1);
    info += divider;
    info += calcBytes(sketchsize, 1);
    info += unitKB;
  }
  else if (subject == 3)
  {
    info += "Sketch MD5: ";
    info += ESP.getSketchMD5();
  }
  else if (subject == 4)
  {
    info += isType() + " " + getI18n("menu_service_info_size") + ": ";
    info += calcBytes(usedBytes(), 1);
    info += divider;
    info += calcBytes(totalBytes(), 1);
    info += unitKB;
  }
  else if (subject == 5)
  {
    info += getI18n("menu_service_info_compile") + ": ";
    info += __DATE__ " " __TIME__;
  }
  return info;
}