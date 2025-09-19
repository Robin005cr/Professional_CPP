/*
* project   : https://github.com/Robin005cr/Professional_CPP
* file name : std_bind_member_function.cpp
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
class Printer {
public:
    void printMessage(const string& prefix, const string& message) const {
        cout << prefix << ": " << message << std::endl;
    }
};

int main() {
    Printer printer;

    // Bind the member function to the printer object
    auto infoPrinter = std::bind(&Printer::printMessage, &printer, "Info", std::placeholders::_1);

    // Now only one argument (the message) is needed
    infoPrinter("System is starting up.");  // Output: Info: System is starting up.
    infoPrinter("Everything is running smoothly.");  // Output: Info: Everything is running smoothly.

    return 0;
}