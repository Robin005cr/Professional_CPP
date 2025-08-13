/*
* project   : https://github.com/Robin005cr/Professional_CPP
* file name : tryCatchSolution.cpp
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
#include <algorithm>
using namespace std;
int main()
{
    vector<int> vec;
    
    vec.push_back(34);
    
    try
    {
        
    cout<<vec.at(0)<<endl;
    cout<<vec.at(1)<<endl;
    cout<<"This line will not execute";  
    }
    catch(std::out_of_range)
    {
        cout<<"Out of range exception"<<endl;
    }
    
    cout<<"This line will execute";
    return 0;
}
