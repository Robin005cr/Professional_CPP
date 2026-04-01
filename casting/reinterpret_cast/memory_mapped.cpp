/*
 * project   : https://github.com/Robin005cr/Professional_CPP
 * file name : memory_mapped.cpp
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

// Handling reinterpret_Cast is easy when memory layout is known
struct display701
{
    int x;  // 4 bytes
    int y;  // 4 bytes
    bool flag; // 1 byte
    char d; // 1 byte
    
};

// Handling reinterpret_Cast is risky when the struct contains string
struct display702
{
    int x;  // 4 bytes
    int y;  // 4 bytes
    bool flag; // 1 byte
    char d; // 1 byte
    char *st;
    string s;
    
};
int main()
{
    display701 dev1;
    dev1.x = 9;
    dev1.y = 67;
    dev1.flag = true;

    int *p = reinterpret_cast<int*>(&dev1);
    cout<<"x : "<<*p<<endl;
    p++;
    cout<<"y : "<<*p<<endl;
    p++;
    cout<<"flag with int:"<<*p<<endl;  // Try to read 4 byte (bool + char + padding) garbage value
    bool *b = reinterpret_cast<bool*>(p);
    cout<<"flag with bool:"<<*b<<endl;  // Try to read the bool alone

    return 0;
}