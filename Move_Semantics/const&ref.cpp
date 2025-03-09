/*
* project   : https://github.com/Robin005cr/Professional_CPP
* file name : const&ref.cpp
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

int update(int &var)
{
    int result = var*10;
    return result;
}
int update(const int &var)
{
    int result = var+10;
    return result;
}
int main()
{
    int x = 10;
    cout<<"After Function call X :"<<update(x)<<endl;
    
    cout<<"After Function call X :"<<update(55)<<endl;
    return 0;
}
