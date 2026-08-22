
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