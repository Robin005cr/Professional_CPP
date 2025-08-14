/*
* project   : https://github.com/Robin005cr/Professional_CPP
* file name : isFun.cpp
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
#include <cctype>
using namespace std;

int main() {

    char char1 = 'A';
    char char2 = '5';
    char char3 = '$';
    
    
    // isalnum()

    if (isalnum(char1)) {
        cout << char1 << " is alphanumeric." << std::endl;
    } else {
        cout << char1 << " is not alphanumeric." << std::endl;
    }

    if (isalnum(char2)) {
        cout << char2 << " is alphanumeric." << std::endl;
    } else {
        cout << char2 << " is not alphanumeric." << std::endl;
    }

    if (isalnum(char3)) {
        cout << char3 << " is alphanumeric." << std::endl;
    } else {
        cout << char3 << " is not alphanumeric." << std::endl;
    }
    
    //  isdigit()
    
     if (isdigit(char1)) {
        cout << char1 << " is digit." << std::endl;
    } else {
        cout << char1 << " is not digit." << std::endl;
    }

    if (isdigit(char2)) {
        cout << char2 << " is digit." << std::endl;
    } else {
        cout << char2 << " is not digit." << std::endl;
    }

    if (isdigit(char3)) {
        cout << char3 << " is digit." << std::endl;
    } else {
        cout << char3 << " is not digit." << std::endl;
    }
    
    //  isalpha()
    
     if (isalpha(char1)) {
        cout << char1 << " is alphabet." << std::endl;
    } else {
        cout << char1 << " is not alphabet." << std::endl;
    }

    if (isalpha(char2)) {
        cout << char2 << " is alphabet." << std::endl;
    } else {
        cout << char2 << " is not alphabet." << std::endl;
    }

    if (isalpha(char3)) {
        cout << char3 << " is alphabet." << std::endl;
    } else {
        cout << char3 << " is not alphabet." << std::endl;
    }


  return 0;
}
