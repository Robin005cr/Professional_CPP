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
