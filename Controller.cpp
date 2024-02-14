#include "Controller.h"

Controller::Controller(DataModel& d, MainScreen& mS) 
    : dataModel(d), mainScreen(mS){
    currScreen = 0;
}
void Controller::updateScreen(){
    switch (currScreen)
    {
    case 0:
        mainScreen.drawScreen();
        break;
    
    default:
        break;
    }
    // mainScreen.drawScreen();
}
void Controller::btnLeft(){
    // switch (view.currScreen){
    //     case 1:
    //         view.mainScreen();
    //         break;
    //     case 2:
    //         view.screenOne();
    //         break;
    //     default:
    //         break;
    // }
    // //Debounce
    // delay(200);
}

void Controller::btnMid(){
    // switch (view.currScreen){
    //     default:
    //         view.mainScreen();
    //         break;
    // }
    // //Debounce
    // delay(200);
}

void Controller::btnRight(){
    // switch (view.currScreen){
    //     case 0:
    //         view.screenOne();
    //         break;
    //     case 1:
    //         view.screenTwo();
    //         break;
    //     default:
    //         view.mainScreen();
    //         break;
    // }
    // //Debounce
    // delay(200);
}