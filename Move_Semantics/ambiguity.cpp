/*
* project   : https://github.com/Robin005cr/Professional_CPP
* file name : ambiguity.cpp
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
//Note: Implementing both pass by copy and pass by value will leads to ambiguity compilation error.
//Actually this concept comes under function overloading

#include <iostream>
#include <print>
using namespace std;

struct Employee
{
    int id;
};

// pass by copy
void func(Employee e)
{
    println("Employee e");
}

// pass by reference
void func(Employee &e)
{
    println("Employee &");
}

int main()
{
    Employee bob;

    bob.id = 101;
    func(bob);

    return 0;
}