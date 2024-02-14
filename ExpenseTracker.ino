const int leftButtonPin =2;
const int midButtonPin =12;
const int rightButtonPin =13;

#include "DataModel.h"
#include "Screen.h"
#include "Controller.h"

#pragma region OLED STUFF
//OLED STUFF
#define SCREEN_WIDTH 128 // OLED display width, in pixels
#define SCREEN_HEIGHT 64 // OLED display height, in pixels

#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define OLED_RESET     -1 // Reset pin # (or -1 if sharing Arduino reset pin)
#define SCREEN_ADDRESS 0x3C ///< See datasheet for Address; 0x3D for 128x64, 0x3C for 128x32
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);
#pragma endregion

DataModel dataModel;
Screen view(display, SCREEN_WIDTH, SCREEN_HEIGHT);
Controller controller(dataModel, view);



void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:
  pinMode(leftButtonPin,INPUT);
  pinMode(midButtonPin,INPUT);
  pinMode(rightButtonPin,INPUT);

  // SSD1306_SWITCHCAPVCC = generate display voltage from 3.3V internally
  if(!display.begin(SSD1306_SWITCHCAPVCC, SCREEN_ADDRESS)) {
    Serial.println(F("SSD1306 allocation failed"));
    for(;;); // Don't proceed, loop forever
  }
  
  view.mainScreen();
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(leftButtonPin)){
    controller.btnLeft();
  }
  if(digitalRead(midButtonPin)){
    controller.btnMid();
  }
  if(digitalRead(rightButtonPin)){
    controller.btnRight();
  }

}
