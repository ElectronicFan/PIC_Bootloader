#ifndef DISPLAY_LOGIC_H
#define DISPLAY_LOGIC_H

#include <Arduino.h>

// UI Prototypes
void initDisplaySystem();
void handleTouch();
void handleFlashBack();
void handleFirmwareBack();
void handleFlashStart();
void drawUI();
void drawMainMenu();
void drawFlashMenu();
void drawBTMenu();
void drawSystemMenu();
void drawAboutMenu();
void drawFlashFirmwareMenu();
void createButton(int x, int y, int w, int h, uint32_t color, const char *label);
void drawBackButton();
void drawBack2Button();
void drawFlashButton();
void changeMenu(MenuState next);
bool checkTouchMount();
bool checkSDMount();
void updateProgressBar(float progress);
void updateProgressLabel(String msg) ;
void updateBlockSizeLabel(int intBlockSize, size_t fileSize, size_t i);
void updateVerifyBytesLabel();
void updateCriticalLabel(String msg, bool isSuccess) ;
void ResetProgressBar();

extern TFT_eSPI tft;                // (display_logic.cpp)
extern XPT2046_Touchscreen touch;   // (display_logic.cpp, sdcard.cpp)
extern SPIClass touchSPI;           // (display_logic.cpp, sdcard.cpp)  

#endif