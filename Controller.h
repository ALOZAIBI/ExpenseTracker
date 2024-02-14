#ifndef Controller_h
#define Controller_h

#include "DataModel.h"
#include "MainScreen.h"

class Controller {
    protected:
        DataModel& dataModel;
        int currScreen;
    public:
        MainScreen& mainScreen;
        Controller(DataModel& d, MainScreen& mS);
        void updateScreen();
        void btnLeft();
        void btnMid();
        void btnRight();
};



#endif