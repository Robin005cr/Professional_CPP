/*
* project   : https://github.com/Robin005cr/Professional_CPP
* file name : DestructorUse2.cpp
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

// When the function ends
#include <iostream>
using namespace std;

class Rectangle
{
public:
	Rectangle()
	{
		cout << "Constructor is called" << endl;
	}
	~Rectangle()
	{
		cout << "Destructor is called" << endl;
	}
};

void objectCreation()
{
	Rectangle rect1;
}
int main()
{
	cout << "From main" << endl;
	objectCreation();
	cout << "After function call";

	return 0;
}
