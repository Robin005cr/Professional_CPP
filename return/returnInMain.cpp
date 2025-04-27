/*
* project   : https://github.com/Robin005cr/Professional_CPP
* file name : returnInMain.cpp
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
#include <string>
using namespace std;

int main()
{
    int a;
    cin >> a;

    if (a == 1)
    {
        cout << "a = 1";
        return 0;
    }
    else if (a == 2)
    {
        cout << "a = 2";
        return 1;
    }
    else if (a == 3)
    {
        cout << "a = 3";
        return 3;
    }
    else
    {
        return 0;
    }
}
