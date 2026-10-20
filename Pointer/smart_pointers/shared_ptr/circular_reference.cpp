/*
* project   : https://github.com/Robin005cr/Professional_CPP
* file name : circular_reference.cpp
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
// This code will leads to memory leak as destructor call is not happening.
// Why Destructor call is not happening?
// Destructor call will never happen, because ref_count will never reach to zero. 
// Take any one of the shared_ptr as weak_ptr that way ref_count will not increase and ref_count for one of the shared_ptr will reach to zero, 
// thus destructor call will happen.
#include <memory>
#include <iostream>
using namespace std;
class Child;

class Parent
{
    public:
    std::shared_ptr<Child> child_ptr;
    
    ~Parent()
    {
        cout<<"Parent Destructor called"<<endl;
    }
};

class Child
{
    public:
    std::shared_ptr<Parent> parent_ptr; // Circular reference
    
    ~Child()
    {
        cout<<"Child Destructor called"<<endl;
    }
};

int main()
{
    auto a = std::make_shared<Parent>();
    auto b = std::make_shared<Child>();
    
    a->child_ptr = b;
    b->parent_ptr = a;
    return 0;
}