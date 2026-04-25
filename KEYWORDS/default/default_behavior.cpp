/*
 * project   : https://github.com/Robin005cr/Professional_CPP
 * file name : default_behavior.cpp
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
#include <vector>
using namespace std;

class Employee {
    
    public:
    int x;
    std::string name;
    std::vector<int> items;

    Employee() = default;                  
    Employee(const Employee&) = default;       
    Employee& operator=(const Employee&) = default; 
    ~Employee() = default;                 
    
};
int main()
{
   Employee E;
   cout<<E.x;

    return 0;
}