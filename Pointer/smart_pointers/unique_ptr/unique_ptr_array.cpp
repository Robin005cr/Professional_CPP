/*
* project   : https://github.com/Robin005cr/Professional_CPP
* file name : unique_ptr_array.cpp
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
#include <memory>
int main()
{
    std ::unique_ptr<int> ptr(new int[10]);   // uses delete and it cannot properly deallocate arrays
    std ::unique_ptr<int[]> ptr(new int[10]); // automatically uses delete[]
    auto ptr = std ::make_unique<int[]>(10);  // Modern approach. Automatically uses the correct deleter.

    return 0;
}