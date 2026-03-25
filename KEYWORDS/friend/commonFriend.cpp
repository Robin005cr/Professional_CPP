/*
 * project   : https://github.com/Robin005cr/Professional_CPP
 * file name : commonFriend.cpp
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
class Bird;
class Animal
{
    private:
    string movement;
    
    protected:
    bool has_feather;
    public:
    friend void commonFun(Animal &a, Bird &b);
};
class Bird
{
    private:
    string movement;
    
    protected:
    bool has_feather;
    
    public:
    friend void commonFun(Animal &a, Bird &b);
};

void commonFun(Animal &a, Bird &b)
{
    a.movement = "walk";
    a.has_feather = false;
    
    b.movement = "fly";
    b.has_feather = true;
    
    cout<<"Animal movement:"<<a.movement<<endl;
    cout<<"Bird movement: "<<b.movement<<endl;
}

int main()
{
    Animal dog;
    Bird parrot;
    
    commonFun(dog,parrot);
    return 0;
}