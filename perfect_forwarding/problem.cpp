/*
* project   : https://github.com/Robin005cr/Professional_CPP
* file name : problem.cpp
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

// While forwarding the references the value type is not preserved.It forwards rvalues as lvalues.
#include <iostream>
#include<print>
using namespace std;

struct Employee
{
    int id;
};

template<typename T> void FuncWrapper(T e)
{
    println("FuncWrapper");
    func(e);
}

//pass by reference (l value)
void func(Employee &e)
{
    println("\t Employee &");
}

// pass by r-value reference or Move semantics
void func(Employee &&e)
{
    println("\t Employee &&e");
}

int main()
{
    Employee bob;
    
    bob.id = 101;
    FuncWrapper(bob);
    FuncWrapper(std::move(bob));

    return 0;
}

// Output 
// FuncWrapper
//          Employee &
// FuncWrapper
//          Employee &