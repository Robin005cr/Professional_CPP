/*
* project   : https://github.com/Robin005cr/Professional_CPP
* file name : wrongFunVal.cpp
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
[[nodiscard("You meant to call clearScreen function")]]int clearCache(int a)
{
    int result = a*0.1;
    return result;
}

int clearScreen(int a)
{
    a = 0;
    return a;
}
int main()
{
    clearCache(18);
    int newMemory = clearCache(18); // This statement wont trigger any warning
    return 0;
}