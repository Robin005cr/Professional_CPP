/*
* project   : https://github.com/Robin005cr/Professional_CPP
* file name : CastingConstFunctionArgs.cpp
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
class Animal final
{
public:
    void walk()
    {
        cout << "I can walk" << endl;
    }
};

class Elephant : public Animal  // This will cause a compilation error because Animal is declared as final
{
public:
    void size()
    {
        cout << "I am big" << endl;
    }
};
int main()
{

    return 0;
}