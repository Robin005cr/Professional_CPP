/*
* project   : https://github.com/Robin005cr/Professional_CPP
* file name : shared_ptr_init_new.cpp
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
   
    shared_ptr<Animal> shPtr1(new Animal());  
    shared_ptr<Animal> shPtr2 (shPtr1);
    //     shared_ptr<Animal> shPtr2 = shPtr1;
    
    cout<<shPtr1.get()<<endl;
    cout<<shPtr2.get()<<endl;
    
    cout<<shPtr1.use_count()<<endl;
    cout<<shPtr2.use_count()<<endl;

    return 0;
}
