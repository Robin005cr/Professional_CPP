/*
* project   : https://github.com/Robin005cr/Professional_CPP
* file name : std_bind_basic.cpp
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
#include <functional>
using namespace std;
void greet(const string& greeting, const string& name) {
    cout << greeting << ", " << name << "!" << endl;
}

int main() {
    // Bind the first parameter to "Hello"
    auto sayHello = std::bind(greet, "Hello", std::placeholders::_1);

    // Now you only need to provide the name
    sayHello("Alice");  // Output: Hello, Alice!
    sayHello("Bob");    // Output: Hello, Bob!

    return 0;
}
