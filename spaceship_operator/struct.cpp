/*
* project   : https://github.com/Robin005cr/Professional_CPP
* file name : struct.cpp
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

struct Point {
    int x;
    int y;

    // Compiler auto-generates ==, !=, <, >, <=, >= from this single line
    auto operator<=>(const Point&) const = default;
};

int main() {
    Point p1{1, 2};
    Point p2{1, 3};

    std::cout << (p1 < p2)  << "\n"; // 1 (true)
    std::cout << (p1 == p2) << "\n"; // 0 (false)
    std::cout << (p1 != p2) << "\n"; // 1 (true)
}