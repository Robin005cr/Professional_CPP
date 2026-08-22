/*
* project   : https://github.com/Robin005cr/Professional_CPP
* file name : Lvalue_Rvalue.cpp
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
#include<print>
using namespace std;

struct Employee
{
    int id;
};


//pass by reference (l value)
void func(Employee &e)
{
    println("Employee &");
}

// pass by r-value reference or Move semantics
void func(Employee &&e)
{
    println("Employee &&e");
}

int main()
{
    Employee bob;
    
    bob.id = 101;
    func(bob);
    func(std::move(bob));

    return 0;
}