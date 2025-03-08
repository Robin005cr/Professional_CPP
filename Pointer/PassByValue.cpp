/*
* project   : https://github.com/Robin005cr/Professional_CPP
* file name : PassByValue.cpp
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
// Pass by value

#include <iostream>
using namespace std;

void update(int var)
{
    var = var+10;
}
int main()
{
    int x = 10;
    cout<<"Before Function call X :"<<x<<endl;
    update(x);
    cout<<"After Function call X :"<<x<<endl;

    return 0;
}
