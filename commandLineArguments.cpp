/*
* project   : https://github.com/Robin005cr/Professional_CPP
* file name : commandLineArguments.cpp
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

int main(int argc, char *argv[]) 
{
    // Display the number of command-line arguments
    cout << "Number of arguments: " << argc << endl;

    // Display the arguments
    cout << "Arguments passed to the program:" << endl;
    for (int i = 0; i < argc; i++) {
        cout << "argv[" << i << "] = " << argv[i] << endl;
    }

    return 0;
}
