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
