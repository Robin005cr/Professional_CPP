/*
* project   : https://github.com/Robin005cr/Professional_CPP
* file name : std_function_basics.cpp
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
#include <functional>
using namespace std;

// Function
void functionA(int a)
{
    cout << a << endl;
}
// Lambda
auto sumOfTwoNumbers = [](float a, int b)
{
    cout << (a + b) << endl;
    return a + b;
};
int main()
{
    function<void(int)> f = functionA;
    functionA(5);
    f(5);

    
    function<void(float, float)> s = sumOfTwoNumbers;
    sumOfTwoNumbers(55, 66);
    s(9, 19);

    return 0;
}