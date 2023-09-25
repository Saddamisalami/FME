#include <Arduino.h>

#include "variables.h"

void checkWLANStatus()
{
  if (WiFi.status() == WL_CONNECTED)
  {
    wlan_connected = true;
  }
  else
  {
    wlan_connected = false;
  }
  wlan_strength = WiFi.RSSI();
  updateTitlebar = true;
}