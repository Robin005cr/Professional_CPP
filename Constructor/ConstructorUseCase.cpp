#include <iostream>
#include <string.h>
using namespace std;
class Employee {
    int id;
    string name;
    string place;
    
    public:
    Employee()
    {
        id = 0;
        name = "NA";
        place = "NA";
    }
    void getData();
    void printData();
};
void Employee::getData()
{
    cout<<"Enter id:";
    cin>>id;
    cout<<"Enter name:";
    cin>>name;
    cout<<"Enter place:";
    cin>>place;
}
void Employee::printData()
{
    cout<<"Id:"<<id<<endl;
    cout<<"Name:"<<name<<endl;
    cout<<"Place:"<<place<<endl;
}
int main() {
    
    Employee e;
    e.getData();
    e.printData();
    return 0;
}
