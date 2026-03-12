/*
* project   : https://github.com/Robin005cr/Professional_CPP
* file name : ObjectSlicing_1.cpp
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
#include<string>
using namespace std;
class Apple
{
    public:
        virtual string showColor() const
        {
            return "Red Apple";
        }
        
};
class GreenApple : public Apple
{
    public:
        string showColor() const override
        {
            return "GreenApple";
        }
        
};

string getName(const Apple a)
{
    return a.showColor();
}

int main()
{
   
    GreenApple g;
    
    cout<<getName(g);

    return 0;
}
