/*
* project   : https://github.com/Robin005cr/Professional_CPP
* file name : OperatorOverloadingRelational.cpp
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

// Relational or Comparison operator overloading

#include <iostream>
using namespace std;

class Person
{
private:
    string name;
    int age;

public:
    // Constructor
    Person(string n, int a) : name(n), age(a) {}

    // Overload == operator
    bool operator==(const Person& other) const
    {
        return  age == other.age;
    }

    // Overload < operator
    bool operator<(const Person& other) const
    {
        return age < other.age;
    }

    // Overload > operator
    bool operator>(const Person& other) const
    {
        return age > other.age;
    }
    
    bool operator>=(const Person& other) const
    {
        return age >= other.age;
    }
    bool operator<=(const Person& other) const
    {
        return age <= other.age;
    }
    void display() const
    {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main()
{
    Person p1("Robin", 25);
    Person p2("John", 30);
    Person p3("Bravo", 25);

    cout << "Comparing p1 and p2\n";

    if (p1 < p2)
        cout << "p1 is younger than p2\n";

    if (p2 > p1)
        cout << "p2 is older than p1\n";

    if (p1 == p3)
        cout << "p1 and p3 are equal\n";
        
    if(p2 >= p3)
    {
        cout<<"The Person P2 is older or same age of P3"<<endl;
    }
     if(p3 <= p1)
    {
        cout<<"The Person P3 is o younger same age of P1"<<endl;
    }

    return 0;
}