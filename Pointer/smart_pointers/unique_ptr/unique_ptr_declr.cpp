/*
* project   : https://github.com/Robin005cr/Professional_CPP
* file name : unique_ptr_declr.cpp
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
#include <memory>
using namespace std;
class Animal
{
    public:

    Animal()
    {
        cout<<"Constructor of Animal class is called"<<endl;
    }
    ~Animal()
    {
        cout<<"Destructor of Animal class is called"<<endl;
    }
};


int main() 
{
   
    unique_ptr<Animal> unPtr1 = make_unique<Animal>();
    unique_ptr<Animal> unPtr2(new Animal);  // default initialization
    unique_ptr<Animal> unPtr3(new Animal()); // value initialization

    return 0;
}

