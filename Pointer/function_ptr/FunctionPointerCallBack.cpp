/*
* project   : https://github.com/Robin005cr/Professional_CPP
* file name : FunctionPointerCallBack.cpp
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

void sum(int a, int b)
{
	int result = a + b;
	cout << "Sum = " << result << endl;

}
void sub(int a, int b)
{
	int result = a - b;
	cout << "Sub = " << result << endl;

}
void display(void (*fptr)(int, int))
{
	fptr(5, 1);
}
int main()
{
	display(sum);
	display(sub);
	return 0;
}
