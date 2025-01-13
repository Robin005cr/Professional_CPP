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
