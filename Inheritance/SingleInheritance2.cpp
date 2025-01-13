// Use / call / access the functions of base class inside the derived class functions
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
		set_A(); //calling the function of class A inside the function of class B
		set_B();
		disp_A();
		disp_B();
		p = a * b;
		cout << endl << "Product of " << a << " * " << b << " = " << p;
	}

};

int main()
{

	B _b;       //created the object for class B

	_b.cal_product();

	return 0;

}
