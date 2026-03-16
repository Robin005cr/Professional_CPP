/*
* project   : https://github.com/Robin005cr/Professional_CPP
* file name : RAII.cpp
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

class autoDeleter
{
    int *data;

public:
    autoDeleter(int *m) : data{m}
    {
        cout << "Constructor called" << endl;
        cout << "Resource :" << *m << endl;
    }

    ~autoDeleter()
    {
        cout << "Destructor called" << endl;
        delete[] data;
    }
};

int main()
{

    autoDeleter ptr(new int(10));
}
