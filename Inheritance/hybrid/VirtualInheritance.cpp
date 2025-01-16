/*
* project   : https://github.com/Robin005cr/Professional_CPP
* file name : VirtualInheritance.cpp
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

//Solution of the Diamond Problem: The solution is to use the keyword virtual on the two parent classes, ClassA and ClassB.
// Two-parent classes with a common base class will now inherit the base class virtually and avoid the occurrence of copies
// of the base class in the child class (ClassC here).
// This is called virtual inheritance. The virtual inheritance limits the passing of more than a single instance from the base 
// class to the child class.

#include<iostream>
using namespace std;
class SuperClass { // class SuperClass.
public:
    SuperClass() { cout << "SuperClass called" << endl; }
    // Base constructor.

};

class ClassA : virtual public SuperClass { // class ClassA inherits SuperClass.
public:
    // Parameterized constructor.
    ClassA() {
        cout << "ClassA called" << endl;
    }
};

class ClassB : virtual public SuperClass { // class ClassB inherits SuperClass.
public:
    ClassB() {
        cout << "ClassB called" << endl;
    }
};

class ClassC : public ClassA, public ClassB { // class ClassC inherits ClassA and ClassB.
public:
    ClassC() {
        cout << "ClassC called" << endl;
    }
};

int main()
{
    ClassC obj;
    return 0;
}
