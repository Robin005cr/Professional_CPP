/*
* project   : https://github.com/Robin005cr/Professional_CPP
* file name : reinterpret_cast_1.cpp
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

class Apple
{
public:
    void funcApple()
    {
        cout << "Eating Apple" << endl;
    }
};

class Orange
{
public:
    void funcOrange()
    {
        cout << "Eating Orange" << endl;
    }
};

int main()
{

    Orange *ptrO = new Orange();

    Apple *ptrA = reinterpret_cast<Apple *>(ptrO);
    ptrA->funcApple();
    return 0;
}