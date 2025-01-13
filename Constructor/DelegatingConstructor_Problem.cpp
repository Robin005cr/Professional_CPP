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
