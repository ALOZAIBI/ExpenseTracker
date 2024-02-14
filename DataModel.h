#ifndef DATAMODEL_H
#define DATAMODEL_H

#include <Arduino.h>

class DataModel {
    public:
        //The current screen that the user is on(This will influence what the controller buttons do)
        //0 = Home Screen
        int currScreen;
        void printHi();
};
#endif 
