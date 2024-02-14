#ifndef MAINSCREEN_H
#define MAINSCREEN_H

//OLED STUFF

#include "Screen.h"

class MainScreen : public Screen{
    public:
        MainScreen(Adafruit_SSD1306& display, int SCREEN_WIDTH, int SCREEN_HEIGHT);
        void drawScreen() override;
    };

#endif // MAINSCREEN_H
