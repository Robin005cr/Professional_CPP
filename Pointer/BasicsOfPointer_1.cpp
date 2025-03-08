/*
* project   : https://github.com/Robin005cr/Professional_CPP
* file name : BasicsOfPointer_1.cpp
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
int main()
{
    int x = 10;
    //int *p = &x;
    int *p;
    p = &x;
    cout<<"*p = "<<*p<<endl;  // value of x
    cout<<"p = "<<p<<endl;    // address of x
    cout<<"x = "<<x<<endl;
    cout<<"&x = "<<&x<<endl;

    return 0;
}
