#include "MainScreen.h"
#include <Arduino.h>

MainScreen::MainScreen(Adafruit_SSD1306& display, int SCREEN_WIDTH, int SCREEN_HEIGHT):Screen(display, SCREEN_WIDTH, SCREEN_HEIGHT){
}

void MainScreen::drawScreen(){
    display.clearDisplay();
    drawBorder();
    drawLeftButton();
    drawMidButton("Select");
    drawRightButton();
    display.display();
}