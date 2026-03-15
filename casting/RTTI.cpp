/*
* project   : https://github.com/Robin005cr/Professional_CPP
* file name : RTTI.cpp
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
#include <iostream>
#include <typeinfo>
using namespace std;

class Base {
public:
	virtual void show() {   
		cout << "Base class\n";
	}
};

class Derived : public Base {
public:
	void show() override {
		cout << "Derived class\n";
	}

	void derivedOnly() {
		cout << "Derived specific function\n";
	}
};

int main() {
	Base* ptr1 = new Derived();
	Base* ptr2 = new Base();


    cout<<"Ptr1 type:"<<typeid(*ptr1).name()<<endl;
    cout<<"Ptr2 type:"<<typeid(*ptr2).name()<<endl;


}
