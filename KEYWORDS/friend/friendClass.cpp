/*
 * project   : https://github.com/Robin005cr/Professional_CPP
 * file name : friendClass.cpp
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
#include <string>
using namespace std;

class Employee
{

private:
    string level;

public:
    int id;
    string name;
    friend class Admin;
};

class Admin
{
public:
    void changeLevel(Employee &E)
    {
        E.level = "B";
        cout << "Level changed to " << E.level << endl;
    }

    void getPromotion()
    {
        cout << "Get Promoted" << endl;
    }
};

int main()

{
    Employee E001;
    E001.id = 001;
    E001.name = "Sam";

    Admin a1;
    a1.changeLevel(E001);

    return 0;
}