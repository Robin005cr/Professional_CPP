/*
* project   : https://github.com/Robin005cr/Professional_CPP
* file name : bool.cpp
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

class TestOddEven {
    int value;
public:
    TestOddEven(int v) : value(v) {}

    operator bool() {
        return (value%2) == 0;
    }
};

int main() {
    TestOddEven t1(10), t2(5);

    if (t1) {
        cout << "t1 is even" << endl;
    }

    if (!t2) {
        cout << "t2 is odd" << endl;
    }
}