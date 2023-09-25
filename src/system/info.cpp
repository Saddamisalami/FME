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
    info += ESP.getChipModel();
  }
  else if (subject == 2)
  {
    info += "Revision: ";
    info += ESP.getChipRevision();
  }
  else if (subject == 3)
  {
    info += getI18n("menu_service_info_cores") + ": ";
    info += ESP.getChipCores();
  }
  else if (subject == 4)
  {
    info += "Freq: ";
    info += ESP.getCpuFreqMHz();
    info += unitMHz;
  }
  else if (subject == 5)
  {
    int heapsize = ESP.getHeapSize();
    info += "Heap " + getI18n("menu_service_info_size") + ": ";
    info += calcBytes(heapsize - ESP.getFreeHeap(), 1);
    info += divider;
    info += calcBytes(heapsize, 1);
    info += unitKB;
  }
  else if (subject == 6)
  {
    int psramsize = ESP.getPsramSize();
    info += "Psram " + getI18n("menu_service_info_size") + ": ";
    info += calcBytes(psramsize - ESP.getFreePsram(), 1);
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