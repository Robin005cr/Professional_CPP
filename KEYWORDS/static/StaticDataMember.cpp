/*
* project   : https://github.com/Robin005cr/Professional_CPP
* file name : StaticDataMember.cpp
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
class Employee
{
    public:
        int empid;
        static int level;
};

int Employee::level;
int main() {
    
    Employee sathish;
    Employee ramesh;
    sathish.empid = 101;
    ramesh.empid = 102;
    
    sathish.level = 50;
    ramesh.level = 52;
    
    cout<<"Sathish level : "<<sathish.level<<"\n";
    cout<<"Ramesh level : "<<ramesh.level;

    return 0;
}
