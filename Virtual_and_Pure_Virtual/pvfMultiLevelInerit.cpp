/*
* project   : https://github.com/Robin005cr/Professional_CPP
* file name : pvfMultiLevelInerit.cpp
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
// Any class directly inheriting from Base must implement configure().
// Derived does not need to provide its own definition for configure() 
// because Intermediate already provides a concrete implementation.
#include <iostream>
using namespace std;

class Base
{
public:
    virtual void configure() = 0; // pure virtual function
};

class Intermediate : public Base
{
public:
    void configure() override
    {
        cout << "Configure() from Intermediate";
    }
};

class Derived : public Intermediate
{
    // Derived does not need to implement configure(), but could if desired
};

int main() {
    Derived d;
    d.configure(); // Will call the configure() from Intermediate
    return 0;
}
