#ifndef SCREEN_H
#define SCREEN_H

//OLED STUFF


#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <Arduino.h>

class Screen {
    protected:
        Adafruit_SSD1306& display;
        int SCREEN_WIDTH;
        int SCREEN_HEIGHT;
        //This will be incremented every time the screen is drawn and will be used to animate the border to show where selection currently is
        int animateSeed;
        void drawBorder();
        void drawLeftButton(String text="");
        void drawMidButton(String text);
        void drawRightButton(String text="");
        void drawLeftArrow();
        void drawRightArrow();
        void animateSelectionCursor();
    public:
        Screen(Adafruit_SSD1306& display, int SCREEN_WIDTH, int SCREEN_HEIGHT);
        void leftButton();
        void midButton();
        void rightButton();
        virtual void drawScreen() = 0;
};

#endif // SCREEN_H
