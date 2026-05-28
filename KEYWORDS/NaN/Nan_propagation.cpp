/*
* project   : https://github.com/Robin005cr/Professional_CPP
* file name : Nan_propagation.cpp
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
#include <cmath>

int main() {
    double x = NAN;
    double y = x + 10;    // result will also be NaN

    std::cout << y << std::endl;        // prints nan
    std::cout << std::isnan(y) << std::endl;   // prints 1

    return 0;
}
