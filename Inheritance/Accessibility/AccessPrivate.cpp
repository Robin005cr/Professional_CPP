#include <iostream>
using namespace std;

class Base
 {
private:
    int a; // Private member, not accessible outside class A or in derived classes

protected:
    int b; // Protected member, accessible within A and in derived classes

public:
    int c; // Public member, accessible from anywhere
    Base() : a(10), b(20), c(30) {} // Constructor to initialize members
};

class Derived : private Base 
{
    // In private inheritance, public and protected members of A become private in B
public:
    int getB() {
        return b; // Accessing protected member inherited from A
    }

    int getC() {
        return c; // Accessing public member inherited from A
    }
};

int main()
 {
    Derived bObj;

    // cout << bObj.a; // Error: 'a' is private in A and not accessible in B or from main

    // cout << bObj.b; // Error: 'b' is private in B (inherited from A) and not accessible directly from main

    // cout << bObj.c; // Error: 'c' is private in B (inherited from A) and not accessible directly from main

    cout << "Accessing inherited protected member b through a member function: " << bObj.getB() << endl; // Correct way to access 'b' through a member function of B

    cout << "Accessing inherited public member c through a member function: " << bObj.getC() << endl; // Correct way to access 'c' through a member function of B

    return 0;
}
