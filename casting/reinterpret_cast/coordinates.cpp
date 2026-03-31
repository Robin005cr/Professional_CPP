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
struct GNSS
{
    int x, y, z;
};

struct GPS
{
    int x, y, z;
};
int main()
{
    GNSS *ptr_1 = new GNSS();

    ptr_1->x = 56;

    GPS *ptr_2 = reinterpret_cast<GPS *>(ptr_1);
    cout << ptr_2->x;

    return 0;
}