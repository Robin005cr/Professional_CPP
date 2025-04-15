/*
* project   : https://github.com/Robin005cr/Professional_CPP
* file name : any_basics.cpp
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
#include <any>
#include<string>
using namespace std;
int main()
{
    any var =10;
    cout<<any_cast<int>(var)<<endl;
    
    var =string("hello");
    cout<<any_cast<string>(var)<<endl;
    
    var = 23.66F;
    cout<<any_cast<float>(var)<<endl;
    
    var =20;
    cout<<any_cast<int>(var)<<endl;
    
    return 0;
}