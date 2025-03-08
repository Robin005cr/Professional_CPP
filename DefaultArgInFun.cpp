/*
* project   : https://github.com/Robin005cr/Professional_CPP
* file name : DefaultArgInFun.cpp
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

// Function with default arguments
void display(int x = 10, int y = 20) {
    std::cout << "x: " << x << ", y: " << y << std::endl;
}

int main() {
    // Calling function with no arguments, default values are used
    display();

    // Calling function with one argument, the second argument uses the default
    display(30);

    // Calling function with both arguments, default values are overridden
    display(40, 50);

    return 0;
}
