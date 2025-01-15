/*
* project   : https://github.com/Robin005cr/Professional_CPP
* file name : Enum_class.cpp
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

enum class days { SUN, MON = 8, TUE };

int main()
{
    days Week1day = days::SUN;

    switch (Week1day)
    {
    case days::SUN:
        cout << "This is Sunday";
        break;
    case days::MON:
        cout << "This is Monday";
        break;
    case days::TUE:
        cout << "This is Tuesday";
        break;

    }
    cout << static_cast<int>(Week1day); // static_cast is required to print the integer value.
    return 0;
}
