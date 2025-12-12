/*
* project   : https://github.com/Robin005cr/Professional_CPP
* file name : Nan_Comparison.cpp
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

    if (x == NAN)
        std::cout << "X equals NaN\n";
    else
        std::cout << "X does NOT equal NaN\n";  // This will print

    std::cout << "Use isnan(x): " << std::isnan(x) << "\n";

    return 0;
}
