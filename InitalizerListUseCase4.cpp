/*The parameterized constructor of the base class can only be called using the Initializer List.*/


#include <iostream>
using namespace std;

class Base {
	int i;
public:
	Base(int arg) {
		i = arg;
		cout << "Base's Constructor called: Value of i: " << i << endl;
	}
};

class Derived : public Base
{
public:
	Derived(int x) :Base(x)
	{
		cout << "Derived's Constructor called";
	}
};

int main()
{
	Derived obj(10);
	return 0;
}
