/*
* project   : https://github.com/Robin005cr/Professional_CPP
* file name : memcpy_array.cpp
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
    int s[5] = {10, 20, 30, 40, 50};
    int d[5];

    // Copy the contents of s to d
    memcpy(d, s, sizeof(s));

    // Destination array after copying
    for (int i = 0; i < 5; ++i)
        cout << d[i] << " ";
    cout << endl;

    return 0;
}