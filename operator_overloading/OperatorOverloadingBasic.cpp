/*
* project   : https://github.com/Robin005cr/Professional_CPP
* file name : OperatorOverloadingBasic.cpp
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
// Note: This solution is not the solution which demonstrates operator overloading.
// But we need to understand this example for better understanding of operator overloading

#include <iostream>
using namespace std;
class Point
{

    int x, y;
public:
    Point(int x = 0, int y = 0) :x{ x }, y{ y }
    { }

    Point add(const Point& rhs)
    {
        Point P;
        P.x = x + rhs.x;
        P.y = y + rhs.y;
        return P;
    }
    void print()
    {
        cout << "x = " << x << "\n";
        cout << "y = " << y << "\n";
    }
};
int main()
{

    Point P1(3, 2), P2(1, 4);
    Point P3 = P1.add(P2);
    P3.print();

    return 0;
}

