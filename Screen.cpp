#include "Screen.h"

Screen::Screen(Adafruit_SSD1306& d, int w, int h):display(d), SCREEN_WIDTH(w), SCREEN_HEIGHT(h){
    animateSeed = 0;
}

void Screen::drawLeftArrow(){
    display.drawTriangle(1,SCREEN_HEIGHT-4,8,SCREEN_HEIGHT-7,8,SCREEN_HEIGHT-1,WHITE);
}

void Screen::drawRightArrow(){
    display.drawTriangle(SCREEN_WIDTH-1,SCREEN_HEIGHT-4,SCREEN_WIDTH-8,SCREEN_HEIGHT-7,SCREEN_WIDTH-8,SCREEN_HEIGHT-1,WHITE);
}

void Screen::drawLeftButton(String text){
    if(text==""){
        drawLeftArrow();
    }
    //Set cursor to bottom left
    display.setTextSize(1);
    display.setCursor(2,SCREEN_HEIGHT-8);
    display.setTextColor(WHITE);
    display.println(text);
}

void Screen::drawMidButton(String text){
    //Set cursor to bottom left
    display.setTextSize(1);
    display.setCursor(SCREEN_WIDTH/2-10,SCREEN_HEIGHT-8);
    display.setTextColor(WHITE);
    display.println(text);
}

void Screen::drawRightButton(String text){
    if(text==""){
        drawRightArrow();
    }
    //Since at textSize 1, 1 char is 6 pixels wide we set cursor to have a 1 pixel margin from the right border
    //Set cursor to bottom left
    display.setTextSize(1);
    byte xPos = (SCREEN_WIDTH-1)-text.length()*6;
    display.setCursor(xPos,SCREEN_HEIGHT-8);
    display.setTextColor(WHITE);
    display.println(text);
}

void Screen::drawBorder(){
    // animateSeed+=10;
    //-8 because we want to leave space for the buttons below the border
    display.drawRect(0,0,SCREEN_WIDTH,SCREEN_HEIGHT-8,WHITE);
    // Draw a black line of 30 pixels that will be animated along the border
    // for(int i = 0; i<30;i++){
    //     display.drawPixel(i+(animateSeed%SCREEN_WIDTH),0,BLACK);
    //     display.drawPixel(0,SCREEN_WIDTH-(animateSeed%SCREEN_WIDTH)-i,BLACK);
    //     display.drawPixel(SCREEN_WIDTH,i+(animateSeed%SCREEN_WIDTH),BLACK);
    //     display.drawPixel(30-SCREEN_WIDTH+i-(animateSeed%SCREEN_WIDTH),SCREEN_HEIGHT-9,BLACK);
    // }
    // display.drawPixel(SCREEN_WIDTH,0,BLACK);
    // // display.drawPixel(SCREEN_WIDTH-1,0,BLACK);

    // display.drawPixel(0,0,BLACK);
    // display.drawPixel(1,0,BLACK);
    // Serial.println(SCREEN_WIDTH-(animateSeed%SCREEN_WIDTH));
}


//Screen One will be adding Expenses(Write it to SD CARD)

//Left and Right Buttons will be used to navigate between screens

//Middle Button will be used to enter screen. 
//Then we will use left and right buttons to navigate within the screen
//Middle Button will be used to confirm here.
//There will be a cursor to show where we are currently, cursor will eventually Leave
//the screen then the elft and right buttons will once again be used to navigate between screens