/*
* project   : https://github.com/Robin005cr/Professional_CPP
* file name : PVFchara3.cpp
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

/* 
3. Derived class inheriting the base class with pure virtual function 
should have the definition for that virtual function
*/
#include <iostream>
using namespace std;
class Animal
{
public:
    virtual void move() = 0;
};
class Cow :public Animal
{
public:
    void move()
    {
        cout << "Walk , Run\n";
    }
};

class Cat :public Animal
{
public:
    int speed;

};

int main()
{
    Cow c;
    c.move();
    Cat k;

    return 0;
}

