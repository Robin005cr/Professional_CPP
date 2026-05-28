/*
* project   : https://github.com/Robin005cr/Professional_CPP
* file name : returnFunction.cpp
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

bool status1(int var)
{
    if(var>100)
    return true; //this will show a warning that the function may not return a value
   
}

bool status2(int var)
{
    if(var<100)
    {
    bool s = false;
    return s;
    } //this will show a warning that the function may not return a value

}

bool status3(int var)
{
    bool s;
    if(var<100)
    {
     s = false;
    return s;
    } //Preference: always initialize variables
    else
    {
        s = true;
        return s;
    }

}
int main()
{
    
    status1(900);
    status2(800);
    return 0;
}