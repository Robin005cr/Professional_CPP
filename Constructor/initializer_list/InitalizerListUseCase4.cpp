/*
* project   : https://github.com/Robin005cr/Professional_CPP
* file name : InitalizerListUseCase4.cpp
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
