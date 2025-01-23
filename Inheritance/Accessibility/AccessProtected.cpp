#include <iostream>
using namespace std;

class Base
 {
private:
    int a; // Private member, not accessible outside class A

protected:
    int b; // Protected member, accessible in derived classes

public:
    int c; // Public member, accessible from anywhere
    Base() : a(10), b(20), c(30) {} // Constructor to initialize members
};

class Derived : protected Base
 {
    // In protected inheritance, public and protected members of A are protected in B
public:
    int getB() 
    {
        return b; // Correct way to access protected member inherited from A
    }

    int getC() 
    {
        return c; // Correct way to access public member inherited from A
    }
};

int main()
 {
    Derived bObj;

    // cout << bObj.a; // Error: 'a' is private in A and not accessible in B

    // cout << bObj.b; // Error: 'b' is protected in B (inherited from A) and not accessible directly

    cout << "Accessing protected member b: " << bObj.getB() << endl; // Correct way to access 'b' through a member function

    cout << "Accessing public member c: " << bObj.getC() << endl; // Correct way to access 'c' through a member function

    return 0;
}
