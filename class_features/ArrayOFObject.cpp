/*
* project   : https://github.com/Robin005cr/Professional_CPP
* file name : ArrayOFObject.cpp
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
    int id;
    char name[30];
    char place[30];

public:
    void getData();
    void printData();
};
void Employee::getData()
{
    cout << "Enter id:";
    cin >> id;
    cout << "Enter name:";
    cin >> name;
    cout << "Enter place:";
    cin >> place;
}
void Employee::printData()
{
    cout << "Id:" << id << endl;
    cout << "Name:" << name << endl;
    cout << "Place:" << place << endl;
}
int main() {

    Employee e[10];
    int numOfEmp;
    cout << "Enter the number of employee:";
    cin >> numOfEmp;

    for (int i = 0; i < numOfEmp; i++)
    {
        e[i].getData();
        e[i].printData();
    }
    return 0;
}
