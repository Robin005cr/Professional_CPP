/*
 * project   : https://github.com/Robin005cr/Professional_CPP
 * file name : virtualDestructor.cpp
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
// If we fail to declare destructor as virtual in Base class. We will end up in memory leak.
#include <iostream>
using namespace std;
class Base
{
public:
    Base()
    {
        cout << "Constructor base" << endl;
    }
    virtual ~Base()
    {
        cout << "Destructor base" << endl;
    }
};
class Derived : public Base
{
public:
    Derived()
    {
        cout << "Constructor Derived" << endl;
    }
    ~Derived()
    {
        cout << "Destructor Derived" << endl;
    }
};

int main()
{
    Base *ptr = new Derived;
    delete ptr;
}
