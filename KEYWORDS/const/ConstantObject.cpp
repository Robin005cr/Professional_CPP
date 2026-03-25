/*
* project   : https://github.com/Robin005cr/Professional_CPP
* file name : ConstantObject.cpp
* author    : Robin CR
* mail id   : robinchovallurraju@gmail.com
* LinkedIn  : https://www.linkedin.com/in/robin-cr/
* portfolio : https://robin005cr.github.io/
*
* Note : If any mistakes, errors, or inconsistencies are found in the code, please feel free to mail me.
* Suggestions for improvements or better methods are always welcome and appreciated.
* I value constructive feedback and aim to continuously improve the quality of the work.
*
*/
#include <iostream>
using namespace std;

class Device {
    int UniqueID;
    string ComputerName;
    bool bleComp;

public:
    Device()
    {
        UniqueID = 112;
        ComputerName = "WER-11233";
        bleComp = true;
    }
};


int main()
{
    const Device computer;
    //computer.bleComp=false;    // ERROR
    return 0;
}
