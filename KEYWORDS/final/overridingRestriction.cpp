/*
* project   : https://github.com/Robin005cr/Professional_CPP
* file name : overridingRestriction.cpp
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
class Base {
public:
    virtual void show() final; // virtual = supports polymorphism, final = can't be overridden beyond this point
};

void Base::show() {
    cout << "Base class show function" << endl;
}

class Intermediate : public Base {
    void show()   // cannot override show() here
    {
        cout << "Intermediate class show function" << endl; // This will cause a compilation error
    }
   
};
int main() {
    Base* obj = new Base();
    obj->show();  // Calls Base's show function

    delete obj;
    return 0;
}

