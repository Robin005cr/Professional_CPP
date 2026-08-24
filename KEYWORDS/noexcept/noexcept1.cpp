/*
* project   : https://github.com/Robin005cr/Professional_CPP
* file name : noexcept1.cpp
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

void func1() noexcept
{
    std::cout << "Nothing will throw" << std::endl; // This function promises not to throw
}
void func2() noexcept
{
    throw std::runtime_error("Error"); // This function promises not to throw but ends up throw and std::terminate will be called
}
int main()
{
    std::cout << "Hello World";
    func1();
    func2();
    return 0;
}