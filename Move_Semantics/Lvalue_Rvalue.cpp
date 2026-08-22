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