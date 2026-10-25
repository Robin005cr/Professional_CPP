/*
* project   : https://github.com/Robin005cr/Professional_CPP
* file name : VariadicFunction1.cpp
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
#include<iostream>
using namespace std;

//void Print() { cout << "empty call" << endl; }

template<typename T1> void Print(T1 x)
{
	cout << x << endl;
}

template<typename T1, typename... T2> void Print(T1 value, T2... args)
{
	cout << value << ",";
	Print(args...);
}
/*
	A variable of type T1 can hold a single value only
	A variable of variadic type T2 can hold arbitary number of values...

*/
int main()
{
	Print(10, 23, 45.12f, 56.78, 200, 'a');
	return 0;
}
