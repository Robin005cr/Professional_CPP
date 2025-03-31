/*
* project   : https://github.com/Robin005cr/Professional_CPP
* file name : upcasting.cpp
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
        void showMyColor()
        {
            cout<<"My color is red";
        }
        
};
class GreenApple : public Apple
{
    public:
        void showMyColor()
        {
            cout<<"My color is green";
        }
        void getMyShape()
        {
            cout<<"My shape is sphere"<<endl;
        }
        
};
int main() {

  Apple *a;     // a is the pointer
  GreenApple g; // g is an object
  
  a = &g;       // assigning the reference of object to the pointer
  a->showMyColor();
  // a->getMyShape(); Invalid getMyShape() is the function of derived class
  

  return 0;
}
