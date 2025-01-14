/*
* project   : https://github.com/Robin005cr/Professional_CPP
* file name : ConstructorUseCase.cpp
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
