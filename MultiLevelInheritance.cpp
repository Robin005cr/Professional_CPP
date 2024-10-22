/*If derived class is again derived to some other class then it is called as Multi level inheritance.
We derive a class when it satisfy IS - A relationship with base class.
*/
#include <iostream>
using namespace std;

// base class
class Vehicle {
public:
    Vehicle()
    {
        cout << "This is a Vehicle\n";
    }
};

// first sub_class derived from class vehicle
class fourWheeler : public Vehicle {
public:
    fourWheeler()
    {
        cout << "Objects with 4 wheels are vehicles\n";
    }
};
// sub class derived from the derived base class fourWheeler

class Car : public fourWheeler {
public:
    Car()
    {
        cout << "Car has 4 Wheels\n";
    }

};


int main()
{
    // Creating object of sub class will
    // invoke the constructor of base classes.
    Car obj;
    return 0;
}


