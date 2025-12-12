/*
* project   : https://github.com/Robin005cr/Professional_CPP
* file name : std_isnan.cpp
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
#include <cmath>   // for std::isnan, NAN

int main() {
    double a = 0.0 / 0.0;   // produces NaN
    double b = NAN;         // explicitly assign NaN

    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;

    if (std::isnan(a)) {
        std::cout << "a is NaN\n";
    }

    if (std::isnan(b)) {
        std::cout << "b is NaN\n";
    }

    return 0;
}
