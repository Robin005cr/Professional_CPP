/*
 * project   : https://github.com/Robin005cr/Professional_CPP
 * file name : VariadicFunction2.cpp
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
using namespace std;

void Business(int x)
{
	cout << __FUNCTION__ << endl;
	// cout << __PRETTY_FUNCTION__ << endl;
	cout << "Int business..." << x << endl;
}
void Business(float x) { cout << "float business..." << x << endl; }
void Business(double x) { cout << "double business..." << x << endl; }
void Business(char x) { cout << "char business..." << x << endl; }
//--------------------------------
void fun() { cout << "pack is emptied..." << endl; }

template <typename T1, typename... T2>
void fun(T1 value, T2... args)
{
	Business(value);
	fun(args...);
}

// consumer choice
int main()
{
	fun(10, 23, 45.12f, 56.78, 200, 'a');

	return 0;
}
