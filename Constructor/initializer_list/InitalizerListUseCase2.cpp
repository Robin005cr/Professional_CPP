/*
* project   : https://github.com/Robin005cr/Professional_CPP
* file name : InitalizerListUseCase2.cpp
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
/* When the function parameter in parametrized constructor and data member of the same class is having same name
   If we are giving
   number = number, inside constructor the compiler will get ambiguity on the variables. This pointer also solves this problem
*/

#include <iostream>
using namespace std;
class student {
	int id, number;
public:
	student(int i, int number) : id(i), number(number)
	{

	}

	void print()
	{
		cout << "ID = " << id << "\n";
		cout << "Number = " << number << "\n";

	}

};

int main() {
	student S(12, 34);
	S.print();
	return 0;
}
