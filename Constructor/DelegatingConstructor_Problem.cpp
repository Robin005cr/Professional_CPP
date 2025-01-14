/*
* project   : https://github.com/Robin005cr/Professional_CPP
* file name : DelegatingConstructor_Problem.cpp
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
#include <string>
using namespace std;
class Rectangle
{
public:
    int length, breadth, area;
    string colour;

    Rectangle(int l, int b)
    {
        length = l;
        breadth = b;
        area = length * breadth;
    }
    Rectangle(int l, int b, string c)
    {
        length = l;
        breadth = b;
        colour = c;
        area = length * breadth;
    }
    void print()
    {
        cout << "The length is " << length << endl;
        cout << "The breadth is " << breadth << endl;
        cout << "The colour is " << colour << endl;
    }

};
int main()
{
    Rectangle rect1(5, 10);
    rect1.print();
    Rectangle rect2(5, 10, "red");
    rect2.print();

    return 0;
}
