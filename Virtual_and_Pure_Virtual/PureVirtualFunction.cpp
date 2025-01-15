/*
* project   : https://github.com/Robin005cr/Professional_CPP
* file name : PureVirtualFunction.cpp
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
Scenario
Base class as Animal. Derived classes are cow and snake. 
Each derived class is having a function called move to print their movement. 
Each animal is having different types of movement.
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

class Snake :public Animal
{
public:
    void move()
    {
        cout << "rectilinear, lateral undulation, sidewinding, and concertina\n";
    }
};

int main()
{
    Cow c;
    c.move();
    Snake s;
    s.move();

    return 0;
}
