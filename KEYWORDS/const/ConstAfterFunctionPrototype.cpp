/*
* project   : https://github.com/Robin005cr/Professional_CPP
* file name : ConstAfterFunctionPrototype.cpp
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
using namespace std;

class Employee {
    int empId, age;
    string empName;

public:
    void getEmpDetails()
    {
        cout << "Enter name:";
        cin >> empName;
        cout << "Enter age :";
        cin >> age;
        cout << "Enter ID:";
        cin >> empId;
    }
    void displayEmpDetails() const
    {
        //age = age+65;  // ERROR
        //empId++;         // ERROR
        cout << "Name : " << empName << endl;
        cout << "Age : " << age << endl;
        cout << "ID : " << empId << endl;
    }

};

int main()
{
    Employee E1;
    E1.getEmpDetails();
    E1.displayEmpDetails();
    return 0;
}
