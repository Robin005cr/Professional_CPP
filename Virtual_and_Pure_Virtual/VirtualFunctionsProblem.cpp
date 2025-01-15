/*
* project   : https://github.com/Robin005cr/Professional_CPP
* file name : VirtualFunctionsProblem.cpp
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

/*
Scenario : The base class and derived class is having a common method/function showMyColor().
We need to call the derived class function with help of base class.
*/

#include <iostream>
using namespace std;
class Apple
{
public:
    void showMyColor()
    {
        cout << "My color is red";
    }

};
class GreenApple : public Apple
{
public:
    void showMyColor()
    {
        cout << "My color is green";
    }

};
int main() {

    Apple* a;     // a is the pointer
    GreenApple g; // g is an object

    a = &g;       // assigning the reference of object to the pointer
    a->showMyColor();


    return 0;
}
/*
Explanation for the output : 
 a->showMyColor() will call Base class function because of early(static) binding.
When early binding is done the compiler does not take the address the pointer is holding.


*/