/*
* project   : https://github.com/Robin005cr/Professional_CPP
* file name : explicit_solution.cpp
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

class Meter {
    int m;
public:
    explicit Meter(int x) : m(x) {}  // prevent implicit conversion
    int get() { return m; }
};

void printMeter(Meter obj) {
    cout << "Value in meters = " << obj.get() << endl;
}

int main() {
    // printMeter(5);   //  Error: no implicit conversion allowed
    printMeter(Meter(5)); //  Must construct explicitly
    return 0;
}
