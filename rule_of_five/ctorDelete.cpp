/*
* project   : https://github.com/Robin005cr/Professional_CPP
* file name : ctorDelete.cpp
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
class Animal
{
public:
    Animal() { std::cout << "Animal created\n"; }

    // Rule of 5: explicitly delete the other 4 special member functions
    Animal(const Animal& other) = delete;             // Copy constructor
    Animal& operator=(const Animal& other) = delete;  // Copy assignment
    Animal(Animal&& other) = delete;                  // Move constructor
    Animal& operator=(Animal&& other) = delete;       // Move assignment

    ~Animal() = delete;  // Also delete the destructor (rare but possible)
};
int main()
{
    Animal a1;              // ✅ OK: Default constructor works

    Animal a2 = a1;         // ❌ Error: Copy constructor is deleted
    Animal a3; 
    a3 = a1;                // ❌ Error: Copy assignment is deleted

    Animal a4 = std::move(a1);  // ❌ Error: Move constructor is deleted
    Animal a5;
    a5 = std::move(a1);         // ❌ Error: Move assignment is deleted

    return 0;
}