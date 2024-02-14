#ifndef Controller_h
#define Controller_h

#include "DataModel.h"
#include "Screen.h"

class Controller {
    private:
        DataModel& dataModel;
        Screen& view;
    public:
        Controller(DataModel& d, Screen& v);
        void btnLeft();
        void btnMid();
        void btnRight();
};



#endif