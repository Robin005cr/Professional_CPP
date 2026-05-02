/*
 * project   : https://github.com/Robin005cr/Professional_CPP
 * file name : default_danger.cpp
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
#include <vector>
using namespace std;

class Employee
{

public:
    int x;
    int *data;
    std::string name;
    std::vector<int> items;

    Employee() = default;
    Employee(const Employee &) = default;
    Employee &operator=(const Employee &) = default;
    ~Employee() = default;
};
int main()
{
    Employee E;
    cout << "E.x = " << E.x << endl;       // int, float is not initialised in default behavior
    cout << "E.name = " << E.name << endl; // string is initalised with empty string
    Employee E1;
    E1.name = "Alice";
    E1.items = {1, 2, 3};

    Employee E2(E1);  // Copy constructor
    Employee E3 = E1; // Also copy constructor (initialization)
    Employee E4;
    E4 = E1; // Copy assignment operator

    // int, float - bitwise copy
    // string - deep copy
    // vector - deep copy
    // pointer - shallow copy for both copy ctor and copy assignment
    return 0;
}