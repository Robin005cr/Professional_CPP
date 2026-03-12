/*
* project   : https://github.com/Robin005cr/Professional_CPP
* file name : ObjectSlicing_2_Soln.cpp
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
#include<vector>
using namespace std;
class Apple
{
    public:
        virtual string showColor() const
        {
            return "RedApple";
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
    Apple a;   
    GreenApple g;
    
    std::vector<Apple*> AppleBasket;
    AppleBasket.push_back(&a);
    AppleBasket.push_back(&g);
    
    for( auto var: AppleBasket)
    {
        cout<<var->showColor();
    }

    return 0;
}
