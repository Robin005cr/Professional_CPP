/*
* project   : https://github.com/Robin005cr/Professional_CPP
* file name : NamespaceUsea.cpp
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
namespace scale1
{
    void calculateindex(int input)
    {
        int index;
        index = input*100;
        cout<<"Index = "<<index;
    }
}
namespace scale2
{
    void calculateindex(int input)
    {
        int index;
        index = input*1000;
        std::cout<<"Index = "<<index;
    }
}

int main() 
{
    int input;
    cout<<"Enter the input:";
    cin>>input;
    if(input<=10)
    {
        scale1::calculateindex(input);
    }
    else if(input>10)
    {
        scale2::calculateindex(input);
    }
    
    return 0;
}
