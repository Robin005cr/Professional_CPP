/*
* project   : https://github.com/Robin005cr/Professional_CPP
* file name : constexpr.cpp
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
constexpr int PI = 3.14;
constexpr int calc()
{
    int area = PI * 10;
    // cout<<area;  this will create an error, since cout is a runtime command
    return area;
}
int main()
{

    constexpr int val = calc();

    return 0;
}