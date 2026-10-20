/*
* project   : https://github.com/Robin005cr/Professional_CPP
* file name : callback_shared.cpp
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
#include <string>
#include <ostream>
#include <iostream>
#include <functional>
#include <memory>

static int count = 0;

class Object
{
public:
    Object(std::string name) : name(name) { std::cout << "Object" << std::endl; ++count; }
    ~Object() { std::cout << "~Object" << std::endl; --count; }

    void run() { callback(); }

    std::string name;
    std::function<void()> callback;
};

int main()
{
    auto object = std::make_shared<Object>("OBJECT");

    // comment this line to enable calling the destructor -> remove memory leak
    object->callback = [object]() { std::cout << "Callback! " << object->name << std::endl; };

    object->run();
    object.reset();
    return 0;
}
