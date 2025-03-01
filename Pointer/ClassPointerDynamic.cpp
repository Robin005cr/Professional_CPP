/*
* project   : https://github.com/Robin005cr/Professional_CPP
* file name : ClassPointerDynamic.cpp
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

class MyClass {
private:
    int data;

public:
    MyClass(int value) : data(value) {
        std::cout << "Constructor called, data = " << data << std::endl;
    }

    ~MyClass() {
        std::cout << "Destructor called, data = " << data << std::endl;
    }

    void display() const {
        std::cout << "Data: " << data << std::endl;
    }

};
int main() {

    MyClass* ptr = new MyClass(20);  // Dynamically allocating an object

    ptr->display();       // Access the object's member using the pointer
    delete ptr;
    return 0;
}
