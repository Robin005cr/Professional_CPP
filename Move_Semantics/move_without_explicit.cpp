/*
* project   : https://github.com/Robin005cr/Professional_CPP
* file name : move_without_explicit.cpp
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
#include <string>
#include <utility>
using namespace std;

class Employee
{
public:
    string name;
    int id;
    double salary;

    Employee(string name, int id, double salary)
        : name(name), id(id), salary(salary)
    {
    }
};

int main()
{
    Employee e1("Robin", 122, 56000);

    Employee e2 = std::move(e1);

    cout << "e1.name: [" << e1.name << "]\n";
    cout << "e1.id: " << e1.id << '\n';
    cout << "e1.salary: " << e1.salary << '\n';

    cout << "e2.name: [" << e2.name << "]\n";
    cout << "e2.id: " << e2.id << '\n';
    cout << "e2.salary: " << e2.salary << '\n';

    return 0;
}