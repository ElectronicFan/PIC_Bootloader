#ifndef SDCARD_H
#define SDCARD_H

#include <Arduino.h>

void initSDSystem();
void verifyStatus();
void verifyStatusCheckSum();
bool compareFiles(const char* path1, const char* path2);
bool compareChecksum(const char* path, uint8_t expectedChecksum);
String GetConfigInfo();

extern const char* FLASH_FILE;
extern const char* CONFIG_FILE;
extern const char* VERIFY_FILE;


#endif