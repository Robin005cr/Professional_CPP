/*
* project   : https://github.com/Robin005cr/Professional_CPP
* file name : assignmentOperator.cpp
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

class Movie
{
    
    public:
        string name;
        int time_hr;
        string journer;
        
        Movie operator=(const Movie& other)
        {
            name = other.name;
            time_hr = other.time_hr;
            return *this;
        }
};

int main()
{
    Movie m1;
    m1.name = "Titanic";
    m1.time_hr = 2;
    
    Movie m2;
    m2 = m1;
    
    cout<<"M1:"<<m1.name<<endl;
    cout<<"M2:"<<m2.name<<endl;

    return 0;
}