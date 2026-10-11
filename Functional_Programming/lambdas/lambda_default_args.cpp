/*
* project   : https://github.com/Robin005cr/Professional_CPP
* file name : lambda_default_args.cpp
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

/*
    In C++14, lambda functions can take default arguments.
*/

int main()
{
    auto lm = [](int x=1, int y=2)
    {
        cout <<"lambda lm called, x =" << x<<", y=" << y << endl;
    };

    lm();
    lm(100);
    lm(20,30);
    return 0;
}