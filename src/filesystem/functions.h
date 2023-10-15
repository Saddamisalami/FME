#include <Arduino.h>
#include <ArduinoJson.h>
#include <FS.h>
#include <LittleFS.h>
#include <JPEGDecoder.h>
#include <TFT_eSPI.h>

#include "math\functions.h"
#include "messages\functions.h"
#include "time\functions.h"

#include "variables.h"

String isType();

int totalBytes();

int usedBytes();

void initFileSystem();

uint16_t read16(fs::File &);

uint32_t read32(fs::File &);

void appendFile(const char *, const char *);

void deleteFile(const char *);

boolean existsFile(const char *);

void renameFile(const char *, const char *);

void writeFile(const char *, const char *);

void writeMessagesToFS();

void readMessagesFromFS();

void writeAlarmsToFS();

void readAlarmsFromFS();

void writeTime();

void readTime();

void writeConfig();

void readConfig();

boolean pushJPEGFromFS(const char *, int16_t, int16_t, TFT_eSPI &);

boolean pushBMPFromFS(const char *, int16_t, int16_t, TFT_eSPI &);
boolean pushPNGFromFS(const char *, int16_t, int16_t, TFT_eSPI &);

void pushImageFromFS(const char *, int16_t, int16_t, TFT_eSPI &);