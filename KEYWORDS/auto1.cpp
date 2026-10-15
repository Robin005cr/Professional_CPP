/*
* project   : https://github.com/Robin005cr/Professional_CPP
* file name : auto1.cpp
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
#include<iostream>
using namespace std;

//C++11 approach
// template<typename T1, typename T2> auto Add(T1 x, T2 y) ->decltype(x+y)
// {
//     return x+y;
// }

//C++14 approach
template<typename T1, typename T2> auto Add(T1 x, T2 y) 
{
    return x+y;
}

//***consumer code****
int main()
{
    float x;
    x = Add(12.34f, 100);  
    cout <<"x=" << x << endl;
    cout <<"-------------" << endl;
   
    x = Add(100, 12.34f);
    cout <<"x =" << x << endl;
    return 0;
}