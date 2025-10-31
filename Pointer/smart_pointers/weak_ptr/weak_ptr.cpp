/*
* project   : https://github.com/Robin005cr/Professional_CPP
* file name : weak_ptr.cpp
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
class Object {
public:
    Object(int value) : data(value) {
        std::cout << "Object created with value: " << data << std::endl;
    }
    ~Object() {
        std::cout << "Object destroyed with value: " << data << std::endl;
    }
    int data;
};

int main() {
    std::shared_ptr<Object> sharedObject = std::make_shared<Object>(42);
    std::weak_ptr<Object> weakObject = sharedObject;

    if (auto locked = weakObject.lock()) {
        std::cout << "The value stored in sharedObject: " << locked->data << std::endl;
    }

    sharedObject.reset(); // Object gets destroyed here if no other shared_ptr owns it
    std::cout << "End of Program" << std::endl;
    return 0;
}
