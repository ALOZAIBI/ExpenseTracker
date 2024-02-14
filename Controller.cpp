#include "Controller.h"

Controller::Controller(DataModel& d, Screen& v):dataModel(d), view(v){

}
void Controller::btnLeft(){
    switch (view.currScreen){
        case 1:
            view.mainScreen();
            break;
        case 2:
            view.screenOne();
            break;
        default:
            break;
    }
    //Debounce
    delay(200);
}

void Controller::btnMid(){
    switch (view.currScreen){
        default:
            view.mainScreen();
            break;
    }
    //Debounce
    delay(200);
}

void Controller::btnRight(){
    switch (view.currScreen){
        case 0:
            view.screenOne();
            break;
        case 1:
            view.screenTwo();
            break;
        default:
            view.mainScreen();
            break;
    }
    //Debounce
    delay(200);
}