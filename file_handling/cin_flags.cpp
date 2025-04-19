/*
* project   : https://github.com/Robin005cr/Professional_CPP
* file name : cin_flags.cpp
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
#include <limits>

using namespace std;

int main()
{
    int number;

    while (true)
    {
        cout << "Enter an integer: ";
        cin >> number;

        cout << "\n--- Stream State Flags ---\n";
        cout << "cin.fail(): " << cin.fail() << endl;
        cout << "cin.bad(): " << cin.bad() << endl;
        cout << "cin.eof(): " << cin.eof() << endl;
        cout << "cin.good(): " << cin.good() << endl;


        // if the below if block is commented then program will results in infinite loop.
        if (cin.fail())
        {
            cin.clear(); // Clear the error flags
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "\nInput was invalid. Error cleared.\n";
        }
    }
    return 0;
}
