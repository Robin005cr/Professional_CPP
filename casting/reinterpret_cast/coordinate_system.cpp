/*
* project   : https://github.com/Robin005cr/Professional_CPP
* file name : coordinate_system.cpp
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
struct GPS
{
    int x;
    int y;
    int z;
};

struct GLONASS
{
    int x;
    int y;
    int z;
};

int main()
{
    GPS point{1, 2, 3};

    auto *loc = reinterpret_cast<GLONASS *>(&point);

    cout << loc->x << " " << loc->y << " " << loc->z;

    return 0;
}
