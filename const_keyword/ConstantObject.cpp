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
