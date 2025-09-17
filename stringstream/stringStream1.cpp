/*
* project   : https://github.com/Robin005cr/Professional_CPP
* file name : stringStream1.cpp
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
#include <sstream>
using namespace std;

int main()
{
    stringstream ss;
    
    string name = "Robson";
    int age = 10;
    int number;
    cin>>number;
    
    ss<<"Name:"<<name<<endl<<"Age:"<<age<<"Number:"<<number;
    cout<<ss.str();
    return 0;
}