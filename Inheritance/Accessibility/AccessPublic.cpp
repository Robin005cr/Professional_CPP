#include <iostream>
using namespace std;

class Base
 {
private:
    int a; // Private member, not accessible outside class A or in derived classes

protected:
    int b; // Protected member, accessible in derived classes and within A

public:
    int c; // Public member, accessible from anywhere
    Base() : a(10), b(20), c(30) {} // Constructor to initialize members
};

class Derived : public Base 
{
    // In public inheritance, public and protected members of A retain their access levels in B
public:
    int getB() {
        return b; // Correct way to access protected member inherited from A
    }

    // Direct access to 'c' is allowed since it's public in A and remains public in B
};

int main() 
{
    Derived bObj;

    // cout << bObj.a; // Error: 'a' is private in A and not accessible in B or from main

    // cout << bObj.b; // Error: 'b' is protected in B (inherited from A) and not accessible directly from main

    cout << "Accessing protected member b through a member function: " << bObj.getB() << endl; // Correct way to access 'b' through a member function

    cout << "Accessing public member c directly: " << bObj.c << endl; // Correct way to access 'c' directly as it's public in B

    return 0;
}
