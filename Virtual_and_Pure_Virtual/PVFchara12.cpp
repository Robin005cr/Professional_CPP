/*
* project   : https://github.com/Robin005cr/Professional_CPP
* file name : PVFchara12.cpp
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
    1. A pure virtual function can have a definition of its own
    2. We cannot create an object for base class with pure virtual function
*/

#include <iostream>
using namespace std;
class Animal
{
public:
    virtual void move() = 0;
};
void Animal::move()
{
    cout << "Walk and run - common for all animals\n";
}
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
        Animal::move();
        cout << "rectilinear, lateral undulation, sidewinding, and concertina\n";
    }
};

int main()
{
    Cow c;
    c.move();
    Snake s;
    s.move();
    Animal a; // error - not allowed

    return 0;
}
