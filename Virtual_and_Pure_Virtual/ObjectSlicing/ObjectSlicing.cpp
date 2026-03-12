/*
* project   : https://github.com/Robin005cr/Professional_CPP
* file name : ObjectSlicing.cpp
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
class Apple
{
    public:
        virtual void showColor()
        {
            cout<<"Color is red"<<endl;
        }
        
};
class GreenApple : public Apple
{
    public:
        void showColor() override
        {
            cout<<"Color is green"<<endl;
        }
        
};

int main()
{
   
    GreenApple g;
    Apple a;
    
    a = g;
    a.showColor();

    return 0;
}
