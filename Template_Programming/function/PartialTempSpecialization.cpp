/*
* project   : https://github.com/Robin005cr/Professional_CPP
* file name : PartialTempSpecialization.cpp
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

/* Function template does not support partial specialization. */
#include <iostream>
#include <string>
#include <cstring>

// ===  PRIMARY (GENERIC) FUNCTION TEMPLATE ===
template<typename T>
T maximum(T a, T b) {
    std::cout << "Generic maximum<T> called\n";
    return (a > b) ? a : b;
}

// === PARTIAL SPECIALIZATION ===
// Works only for POINTERS to any type (T*)
template<typename T>
T* maximum<T*>(T* a, T* b) {
    std::cout << "Partial specialization for pointers T*\n";
    return (*a > *b) ? a : b;
}

int main() {
    // Generic template (int -> uses primary)
    std::cout << "1. Generic: " << maximum(5, 3) << "\n\n";
    
    // Partial specialization (pointers)
    int x = 10, y = 20;
    int* px = &x, *py = &y;
    int* winner = maximum(px, py);
    std::cout << "4. Pointers: " << *winner << "\n";
    
    return 0;
}
