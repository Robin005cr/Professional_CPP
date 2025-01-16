/*
* project   : https://github.com/Robin005cr/Professional_CPP
* file name : DiamondProblem.cpp
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
// Problem: the superclass is called two times because of the diamond problem. It will create 2 instances for superclass
#include<iostream>
using namespace std;
class SuperClass { // class SuperClass.
public:
    SuperClass() { cout << "SuperClass called" << endl; }
    // Base constructor.

};

class ClassA : public SuperClass { // class ClassA inherits SuperClass.
public:

    ClassA() {
        cout << "ClassA called" << endl;
    }
};

class ClassB : public SuperClass { // class ClassB inherits SuperClass.
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

int main() {
    ClassC obj;
}
