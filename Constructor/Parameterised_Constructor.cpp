/*
* project   : https://github.com/Robin005cr/Professional_CPP
* file name : Parameterised_Constructor.cpp
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
class Student
{
    public:
           int roll_no;
           string name;
           void printData();
           Student(string sname, int sroll)
           {
                name = sname;
                roll_no=sroll;
           }
};

void Student::printData()
{
    cout<<"Name: "<<name<<"\n";
    cout<<"Roll Number:"<<roll_no;
}

int main() 
{
    Student stud1("Robson",31);
    stud1.printData();

    return 0;
}
