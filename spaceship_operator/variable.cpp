/*
* project   : https://github.com/Robin005cr/Professional_CPP
* file name : variable.cpp
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
#include <compare>
#include <iostream>

int main() {
    int a = 5, b = 10;
    auto result = a <=> b;

    if (result < 0) std::cout << "a is less than b\n";
    else if (result > 0) std::cout << "a is greater than b\n";
    else std::cout << "a is equal to b\n";
}