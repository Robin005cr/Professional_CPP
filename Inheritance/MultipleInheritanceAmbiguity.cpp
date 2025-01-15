/*
* project   : https://github.com/Robin005cr/Professional_CPP
* file name : MultipleInheritanceAmbiguity.cpp
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
Problem:
The child class object will have an ambiguity to call print() function because both the base classes are having the same function print().So it will leads to an error
Solution : 
instead of ch.print() we need to give ch.FatherChara::print(); or ch.MotherChara::print();
according to which baseclass print() we need to call.

*/

#include <iostream>  
using namespace std;  


class FatherChara {  
    public:   
    void print() {  
        cout << "This is from FatherChara class " << endl;  
    }  
 };   
   
 // class B  
 class MotherChara {  
    public:   
    void print() {  
        cout << "This is from MotherChara class" << endl;  
    }  
 };  
   
   
 // Creating a Child class using multiple inheritance. 
 class Child: public FatherChara, public MotherChara {  
    public:  
        void disp() {  
            cout << "It is the member function of the child class" << endl;  
        }  
 };  
   
 int main () {  
    // creating an object of the child class
    Child ch;  
    // ch.print(); // Error!!  It causes ambiguity   
    ch.FatherChara::print(); 
    ch.MotherChara::print();
    ch.disp();  
    return 0;  
 }   
