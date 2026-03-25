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
#include <cstdint>

volatile uint32_t *hard_register = (uint32_t *)0x12345678;  // this can be port as well
using namespace std;
int main()
{
    cout<<"HElloe";
    uint32_t value = *hard_register;
    cout<<"Read value : "<<value<<endl;
    
    *hard_register = 0x567;
    value = *hard_register;
    cout<<"Read value : "<<value<<endl;
    return 0;
}