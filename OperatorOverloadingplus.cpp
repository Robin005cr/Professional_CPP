#include <iostream>
using namespace std;
class Point
{

    int x, y;
public:
    Point(int x = 0, int y = 0) :x{ x }, y{ y }
    { }

    Point operator +(const Point& rhs)
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
int main() {

    Point P1(3, 2), P2(1, 4);
    Point P3 = P1 + P2;  // internally converted as P1.operator+(P2)
    P3.print();

    return 0;
}
