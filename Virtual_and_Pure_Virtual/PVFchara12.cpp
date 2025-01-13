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
