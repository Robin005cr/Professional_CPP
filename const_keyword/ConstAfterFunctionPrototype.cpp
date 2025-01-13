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
