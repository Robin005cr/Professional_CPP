/*
* project   : https://github.com/Robin005cr/Professional_CPP
* file name : OperatorOverloadingStar.cpp
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
class Point
{

    int x, y;
public:
    Point(int x = 0, int y = 0) :x{ x }, y{ y }
    { }

    Point operator *(int m)
    {
        cout<<"Called right constant"<<endl;
        Point P;
        P.x = x * m;
        P.y = y * m;
        return P;
    }
    Point operator *(const Point &rhs)
    {
        cout<<"Normal "<<endl;
        Point P;
        P.x = x * rhs.x;
        P.y = y * rhs.y;
        return P;
    }
    friend Point operator*(Point P1, Point P2)
    {
        cout<<"Both are Objects"<<endl;
        Point P;
        P.x = P1.x * P2.x;
        P.y = P1.y * P2.y;
        return P;
    }
    friend Point operator*(int m,Point P1)
    {
        cout<<"Called left constant"<<endl;
        Point P;
        P.x = m * P1.x;
        P.y = m * P1.y;
        return P;
    }
    void print()
    {
        cout << "x = " << x << "\n";
        cout << "y = " << y << "\n";
    }
};
int main() {

    Point P1(3, 2), P2(1, 4);
    Point P3 = P1 * 2;  
    Point P4 = 2 * P1;
    Point P5 = P1 * P2;
    P3.print();
    P4.print();
    P5.print();
    return 0;
}