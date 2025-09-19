/*
* project   : https://github.com/Robin005cr/Professional_CPP
* file name : TemplateFunction2.cpp
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
#include <string>

using namespace std;

template <typename customType, typename customType1>
customType Max(customType a, customType1 b)
{
	return a < b ? b : a;
}

int main()
{
	int i = 39;
	int j = 20;
	cout << "Max(i, j): " << Max(i, j) << endl;

	double f1 = 13.5;
	double f2 = 20.7;
	cout << "Max(f1, f2): " << Max(f1, f2) << endl;

	float a = 3.4;
	float b = 3.6;
	cout << "Max(a, b): " << Max(a, b) << endl;


	string s1 = "Hello";
	string s2 = "World";
	cout << "Max(s1, s2): " << Max(s1, s2) << endl;

	cout << "Max(f2,a): " << Max(f2, i) << endl;

	return 0;
}
