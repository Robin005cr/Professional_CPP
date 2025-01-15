/*
* project   : https://github.com/Robin005cr/Professional_CPP
* file name : HierarchialInheritance.cpp
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

#include<iostream>
#include<string>
using namespace std;
class Fruit {

    string shapeName;
public:
    void getShape()
    {
        cout << "The shape of the fruit is:";
        cin >> shapeName;
    }
};
class Orange : public Fruit
{
public:
    void useCosmetic()
    {
        cout << "I am used in cosmetics" << endl;
    }
};
class Apple : public Fruit
{
public:
    void mineralContent()
    {
        cout << "I contain iron" << endl;
    }
};
int main()
{
    Orange O;
    O.getShape();
    O.useCosmetic();
    Apple A;
    A.getShape();
    A.mineralContent();
}


