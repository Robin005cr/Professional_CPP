/*
* project   : https://github.com/Robin005cr/Professional_CPP
* file name : ConstFunctionArguments.cpp
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
// Function that prints a formatted message
void printMessage(const string& message, const int number)
{
    cout << message << number << endl;
}

int main()
{
    string myMessage = "The value is: ";
    int myNumber = 100;

    // Call the function with arguments
    printMessage(myMessage, myNumber);

    return 0;
}