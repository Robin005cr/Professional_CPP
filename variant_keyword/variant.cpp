/*
* project   : https://github.com/Robin005cr/Professional_CPP
* file name : variant.cpp
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
#include <variant>
using namespace std;

int main()
{
    variant<int, float, string> v;

    v = 10;
    cout << holds_alternative<int>(v) << endl;     // 1 (true)
    cout << holds_alternative<float>(v) << endl;   // 0 (false)

    v = 3.14f;
    cout << holds_alternative<float>(v) << endl;   // 1

    v = string("Hello");
    cout << holds_alternative<string>(v) << endl;  // 1

    return 0;
}
