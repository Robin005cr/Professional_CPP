/*
* project   : https://github.com/Robin005cr/Professional_CPP
* file name : std_function_arguments.cpp
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
void execute(const  function<void(int)> &func, int value)
{
    func(value);
}

void printSquare(int x)
{
     cout << x * x <<  endl;
}

auto lambdaName = [](int x)
{  cout << x * 10 <<  endl; };

int main()
{
    // Passing a function name
    execute(printSquare, 5);

    // Passing a lambda directly
    execute([](int x)
            {  cout << x * 10 <<  endl; }, 7);

    // Passing a lambda name

    execute(lambdaName, 45);

    return 0;
}
