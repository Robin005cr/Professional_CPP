/*
* project   : https://github.com/Robin005cr/Professional_CPP
* file name : InlineFunction.cpp
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
//Inline function

#include<iostream>
using namespace std;
inline int function(int count)
{
    count++;
    return count;
}

int main()
{
    int result = function(5);
    cout << "Result = " << result;
}
