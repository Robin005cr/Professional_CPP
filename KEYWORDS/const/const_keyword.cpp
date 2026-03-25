/*
* project   : https://github.com/Robin005cr/Professional_CPP
* file name : const_keyword.cpp
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
const int PI = 3.14;  // compile time constant
int get_val()
{
    int val;
    cin>>val;
    return val;
}

void calc()
{
    int area = PI*10; // Even though PI is compile time constant, this function will know the value of PI at run time
    cout<<area;
}
int main()
{
    
    const int val = get_val(); // run time constant
     
    cout<<PI<<endl; 
    cout<<val<<endl;
    
    calc();
    return 0;
}