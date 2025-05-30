/*
* project   : https://github.com/Robin005cr/Professional_CPP
* file name : SingleInheritance1.cpp
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

// Accessing the members / functions of base class using the object of derived class

#include<iostream>
using namespace std;

class A
{
protected:
	int a;

public:
	void set_A()
	{
		cout << "Enter the Value of A=";
		cin >> a;

	}
	void disp_A()
	{
		cout << endl << "Value of A=" << a;
	}
};

class B : public A
{
	int b, p;

public:
	void set_B()
	{

		cout << "Enter the Value of B=";
		cin >> b;
	}

	void disp_B()
	{

		cout << endl << "Value of B=" << b;
	}

	void cal_product()
	{
		p = a * b;
		cout << endl << "Product of " << a << " * " << b << " = " << p;
	}

};

int main()
{

	B _b;          //created the object for class B
	_b.set_A(); //calling the function of class A using the object of class B
	_b.set_B();
	_b.disp_A();
	_b.disp_B();
	_b.cal_product();

	return 0;

}
