/*
* project   : https://github.com/Robin005cr/Professional_CPP
* file name : CopyConstructor_Default.cpp
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

/* Default Copy Constructor - Compiler generated*/

#include <iostream>
using namespace std;
class student
{
    int i, r;
public:
    student() {}
    student(int id, int rollno)
    {
        i = id;
        r = rollno;

    }
    void display()
    {
        cout << "ID = " << i << "\n";
        cout << "Roll no:" << r << "\n";
    }
};
int main() {

    student s1(1234, 34);
    student s2(s1); // Copy constructor
    s1.display();
    s2.display();

    return 0;
}
