#include "Screen.h"

Screen::Screen(Adafruit_SSD1306& d, int w, int h):display(d), SCREEN_WIDTH(w), SCREEN_HEIGHT(h){
    currScreen = 0;
}

void Screen::mainScreen(){
    currScreen = 0;
    display.clearDisplay();
    drawBorder();

    //Print Main in middle of screen in big Text
    display.setTextSize(2);
    display.setTextColor(WHITE);
    display.setCursor(SCREEN_WIDTH/2-20,SCREEN_HEIGHT/2-10);

    display.println("Test");

    drawLeftButton("Left");
    drawMidButton("Mid");
    drawRightButton("One");

    display.display();
}

void Screen::screenOne(){
    currScreen = 1;
    display.clearDisplay();
    drawBorder();

    //Print Main in middle of screen in big Text
    display.setTextSize(2);
    display.setTextColor(WHITE);
    display.setCursor(SCREEN_WIDTH/2-20,SCREEN_HEIGHT/2-10);

    display.println("One");

    drawLeftButton("Main");
    drawMidButton("Main");
    drawRightButton("Two");

    display.display();
}

void Screen::screenTwo(){
    currScreen = 2;
    display.clearDisplay();
    drawBorder();

    //Print Main in middle of screen in big Text
    display.setTextSize(2);
    display.setTextColor(WHITE);
    display.setCursor(SCREEN_WIDTH/2-20,SCREEN_HEIGHT/2-10);

    display.println("Two");

    drawLeftButton("One");
    drawMidButton("Main");
    drawRightButton("Right");

    display.display();
}


void Screen::drawLeftButton(String text){
    //Set cursor to bottom left
    display.setTextSize(1);
    display.setCursor(2,SCREEN_HEIGHT-9);
    display.setTextColor(WHITE);
    display.println(text);
}

void Screen::drawMidButton(String text){
    //Set cursor to bottom left
    display.setTextSize(1);
    display.setCursor(SCREEN_WIDTH/2-10,SCREEN_HEIGHT-9);
    display.setTextColor(WHITE);
    display.println(text);
}

void Screen::drawRightButton(String text){
    //Since at textSize 1, 1 char is 6 pixels wide we set cursor to have a 1 pixel margin from the right border
    //Set cursor to bottom left
    display.setTextSize(1);
    byte xPos = (SCREEN_WIDTH-1)-text.length()*6;
    display.setCursor(xPos,SCREEN_HEIGHT-9);
    display.setTextColor(WHITE);
    display.println(text);
}

void Screen::drawBorder(){
    display.drawRect(0,0,SCREEN_WIDTH,SCREEN_HEIGHT,WHITE);
}


//Screen One will be adding Expenses(Write it to SD CARD)

//Left and Right Buttons will be used to navigate between screens

//Middle Button will be used to enter screen. 
//Then we will use left and right buttons to navigate within the screen
//Middle Button will be used to confirm here.
//There will be a cursor to show where we are currently, cursor will eventually Leave
//the screen then the elft and right buttons will once again be used to navigate between screens