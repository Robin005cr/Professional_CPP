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
    // Example 1 - Capturing local variables by value

    int bias = 10;
    auto sumOfNumbers = [bias](float a, int b)
    {
        return a + b + bias;
    };

    cout << sumOfNumbers(10.9, 10);

    // Example 2 - updating local will cause error

    int bias = 10;
    auto sumOfNumbers = [bias](float a, int b)
    {
        // bias = 100;   // results in error
        return a + b + bias;
    };

    cout << sumOfNumbers(10.9, 10);

    // Example 3 - Capturing local variables by reference can update the local variables in the body of function

    int bias = 10;
    auto sumOfNumbers = [&bias](float a, int b)
    {
        bias = 100;
        return a + b + bias;
    };

    cout << sumOfNumbers(10.9, 10);

    // Example 4 - Capturing all the local variables by value = Sign

    int c = 20, d = 10;
    auto sumOfNumbers = [=](float a, int b)
    {
        return a + b + c + d;
    };

    cout << sumOfNumbers(10.9, 10);

    // Example 5 - Capturing all the local variables by reference & Sign

    int c = 20, d = 10;
    auto sumOfNumbers = [&](float a, int b)
    {
        c = 100;
        d = 200;
        return a + b + c + d;
    };

    cout << sumOfNumbers(10.9, 10) << endl;

    cout << "C  = " << c << endl;
    cout << "D = " << d << endl;

    // Example 6 - Capturing all the local variables by reference except c ,c alone is not modifiable int c = 20, d = 10;
    auto sumOfNumbers = [&, c](float a, int b)
    {
        d = 200;
        return a + b + c + d;
    };

    cout << sumOfNumbers(10.9, 10) << endl;

    // Example 7 - Capturing all the local variables by value except d ,d alone is modifiable int c = 20, d = 10;
    auto sumOfNumbers = [=, &d](float a, int b)
    {
        d = 200;
        return a + b + c + d;
    };

    cout << sumOfNumbers(10.9, 10) << endl;
}