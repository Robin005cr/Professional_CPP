
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
