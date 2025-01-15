/*
* project   : https://github.com/Robin005cr/Professional_CPP
* file name : InitalizerListUseCase1.cpp
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
/* Const variable and Reference */

#include <iostream>
using namespace std;
class Base 
{
	const int variable;
	int& ref;

public:
	Base(int& r) : variable{ 0 }, ref{ r } {
		// Now variable is initialized to 0 and ref is initialized with the reference r
		cout << ref << endl;
		cout << variable << endl;
	}
};

int main() {
	int some_int = 10;
	Base b(some_int);

	return 0;
}
