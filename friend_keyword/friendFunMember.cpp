/*
 * project   : https://github.com/Robin005cr/Professional_CPP
 * file name : friendFunMember.cpp
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
class Employee;
class hrTeam
{
    public:
        void levelChange(Employee &E);
};
class Employee
{
    public:
        string name;
        friend void hrTeam::levelChange(Employee &E);
        
    private:
        string level;
};


void hrTeam::levelChange(Employee &E)
        {
            E.level = "Level B";
            cout<<"Level : "<<E.level<<endl;
        }

int main()
{
    
    Employee E1;
    hrTeam h1;
    h1.levelChange(E1);
    
    
    return 0;
}