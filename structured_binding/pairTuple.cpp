/*
* project   : https://github.com/Robin005cr/Professional_CPP
* file name : pairTuple.cpp
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
#include <utility>
#include <tuple>
using namespace std;

int main() {
    pair<int, string> p = {1, "Robin"};

    auto [id, name] = p;

    cout << id << " " << name;

    tuple<int, double, string> t = {10, 3.14, "C++"};

    auto [a, b, c] = t;

    cout << a << " " << b << " " << c;
}