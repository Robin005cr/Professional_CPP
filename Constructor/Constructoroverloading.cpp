/*
* project   : https://github.com/Robin005cr/Professional_CPP
* file name : Constructoroverloading.cpp
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

class Person {
    private:
    int age;

    public:
    // 1. Constructor with no arguments
    Person()
    {
        age = 20;
    }

    // 2. Constructor with an argument
    Person(int a) 
    {
        age = a;
    }

    int getAge() {
        return age;
    }
};

int main()
{
    Person person1, person2(45);

    cout << "Person1 Age = " << person1.getAge() << endl;
    cout << "Person2 Age = " << person2.getAge() << endl;

return 0;
}

