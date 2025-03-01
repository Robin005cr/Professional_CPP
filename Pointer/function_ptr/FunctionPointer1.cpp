/*
* project   : https://github.com/Robin005cr/Professional_CPP
* file name : FunctionPointer1.cpp
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

int sum(int a, int b)
{
    int result = a + b;
    return result;
}
int main()
{
    int s = 0;
    int (*ptr)(int, int) = &sum;
    s = (*ptr)(3, 3);
    cout << "Sum = " << s;

    return 0;
}
