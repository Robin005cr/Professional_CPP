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
