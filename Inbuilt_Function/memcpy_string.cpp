/*
* project   : https://github.com/Robin005cr/Professional_CPP
* file name : memcpy_string.cpp
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
#include <cstring> 
using namespace std; 

int main() {
    char s[] = "Hellos World!";
    int d[20];

    // Copy the contents of s to d
    memcpy(d, s, sizeof(s));

    // Destination string after copying
    cout << s;

    return 0;
}