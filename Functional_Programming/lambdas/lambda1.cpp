/*
* project   : https://github.com/Robin005cr/Professional_CPP
* file name : lambda2.cpp
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

int main()
{

    // Example 1
    auto sayHelloWorld = []()
    {
        cout << "Hello World";
    };

    sayHelloWorld();

    // Example 2

    auto sumOfTwoNumbers = [](float a, int b)
    {
        return a + b;
    };

    cout << sumOfTwoNumbers(12.9, 34);

    // Example 3

    auto sumOfTwoNumbers = [](float a, int b) -> int
    {
        return a + b;
    };

    cout << sumOfTwoNumbers(12.9, 34);


}