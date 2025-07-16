/*
 * project   : https://github.com/Robin005cr/Professional_CPP
 * file name : modifyExistingFile.cpp
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
#include <fstream>
using namespace std;

int main()
{

    // Creating a file explicitly using ofstream
    fstream fileTax;
    fileTax.open("Tax-2021.txt", ios::app); // It will create a file if it does not exist.
    // If a file already exists, it will be opened in append mode. Modify the content without overwriting.

    if (fileTax)
    {
        cout << "File opened " << endl;
    }

    if (fileTax.is_open())
    {
        cout << "File opened" << endl;
    }

    if (!fileTax.fail())
    {
        cout << "File opened" << endl;
    }
    else if (fileTax.fail())
    {
        cout << "Error opening file" << endl;
    }

    fileTax.close();

    return 0;
}
