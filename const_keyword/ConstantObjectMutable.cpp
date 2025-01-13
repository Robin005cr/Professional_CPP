#include <iostream>
using namespace std;

class Device
{
public:
    int UniqueID;
    string ComputerName;
    mutable bool bleComp;


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
    computer.bleComp = false;
    return 0;
}
