/*
* project   : https://github.com/Robin005cr/Professional_CPP
* file name : booleanPtr.cpp
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

int main() {
    // Initialize a boolean variable
    bool b = true;

    // Declare a pointer to a boolean
    bool* ptr = &b;

    // Output the initial value of b
    std::cout << "Initial value of b: " << b << std::endl;  // Outputs: 1 (true)

    // Dereference the pointer to access the value
    std::cout << "Value of b via pointer: " << *ptr << std::endl;  // Outputs: 1 (true)

    // Change the value of b using the pointer
    *ptr = false;

    // Output the modified value of b
    std::cout << "Modified value of b: " << b << std::endl;  // Outputs: 0 (false)

    // Dereference the pointer again to check if the value was updated
    std::cout << "Value of b via pointer after modification: " << *ptr << std::endl;  // Outputs: 0 (false)

    return 0;
}
