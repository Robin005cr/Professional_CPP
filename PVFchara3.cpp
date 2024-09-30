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

