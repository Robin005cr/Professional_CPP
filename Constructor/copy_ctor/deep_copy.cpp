/*
* project   : https://github.com/Robin005cr/Professional_CPP
* file name : CopyConstructor_UserDefined.cpp
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
#include <cstring>
using namespace std;

class Vehicle
{
public:
    int *id;
    char *name;

    Vehicle(int i, const char* n)
    {
        id = new int(i);
        name = new char[strlen(n) + 1];
        strcpy(name, n);
    }

    // Deep copy constructor
    Vehicle(const Vehicle &obj)
    {
        id = new int(*(obj.id));

        name = new char[strlen(obj.name) + 1];
        strcpy(name, obj.name);
    }

    ~Vehicle()
    {
        delete id;
        delete[] name;
    }
};

int main()
{
    Vehicle v1(101, "Car");
    Vehicle v2 = v1;   // deep copy

    cout << *v1.id << " " << v1.name << endl;
    cout << *v2.id << " " << v2.name << endl;
}