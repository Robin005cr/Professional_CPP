/*
* project   : https://github.com/Robin005cr/Professional_CPP
* file name : ThisPointer_MethodChaining.cpp
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
class area
{
    private:
    int x,y,z;
    public:
    area  &get(int x, int y, int z) // Function datatype should be of class name
    {
        this->x=x;
        this->y=y;
        this->z=z;
        return *this;
    }
    void display()
    {
        cout<<"x = "<<x<<endl;
        cout<<"y = "<<y<<endl;
        cout<<"z = "<<z<<endl;
    }
    
};
int main()
 {
    area A;
    A.get(10,20,30).display();  //Chained function calls.  All calls modify the same object 

    
    return 0;
}
