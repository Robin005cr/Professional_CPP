/*
* project   : https://github.com/Robin005cr/Professional_CPP
* file name : objectModel.cpp
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

class vehicle
{
    int a;
    char v;
};

class engine
{
    int a;
    char v;
    public: 
        virtual void func()
        {
            cout<<"Function called"<<endl;
        }
};
int main()
{
    vehicle v;
    engine e;
    
    cout<<"Size of vehicle object:"<<sizeof(v)<<endl;
    cout<<"Size of Engine object:"<<sizeof(e)<<endl;
    return 0;
}