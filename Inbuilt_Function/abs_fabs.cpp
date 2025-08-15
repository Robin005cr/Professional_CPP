/*
* project   : https://github.com/Robin005cr/Professional_CPP
* file name : abs_fabs.cpp
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


// abs():
// Purpose: Computes the absolute value of an integer type.
// fabs():
// Purpose: Computes the absolute value of a floating-point type (e.g., float, double, long double).
#include <iostream>
#include <cstdlib> // For abs()
#include <cmath>   // For fabs()
using namespace std;
int main() {
    int int_val = -10;
    double double_val = -7.89;

    // Using abs() for an integer
    int abs_int_result = abs(int_val);
    cout << "abs(" << int_val << ") = " << abs_int_result << endl;

    // Using fabs() for a double
    double fabs_double_result = fabs(double_val);
    cout << "fabs(" << double_val << ") = " << fabs_double_result << endl;

    return 0;
}