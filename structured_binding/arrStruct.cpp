/*
* project   : https://github.com/Robin005cr/Professional_CPP
* file name : arrStruct.cpp
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

struct Point {
    int x;
    int y;
};

int main() {
    Point p{5, 10};

    auto [a, b] = p;

    cout << a << " " << b;

    int arr[3] = {1, 2, 3};

    auto [x, y, z] = arr;

    cout << x << " " << y << " " << z;
}