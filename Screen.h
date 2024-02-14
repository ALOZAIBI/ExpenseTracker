#ifndef VIEW_H
#define VIEW_H

//OLED STUFF


#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

class Screen {
    private:
        Adafruit_SSD1306& display;
        int SCREEN_WIDTH;
        int SCREEN_HEIGHT;
        void drawBorder();
        void drawLeftButton(String text);
        void drawMidButton(String text);
        void drawRightButton(String text);
    public:
        Screen(Adafruit_SSD1306& display, int SCREEN_WIDTH, int SCREEN_HEIGHT);
        int currScreen;
        void mainScreen();
        void screenOne();
        void screenTwo();
};

#endif // VIEW_H
