/* Default Copy Constructor - Compiler generated*/

#include <iostream>
using namespace std;
class student
{
    int i, r;
public:
    student() {}
    student(int id, int rollno)
    {
        i = id;
        r = rollno;

    }
    void display()
    {
        cout << "ID = " << i << "\n";
        cout << "Roll no:" << r << "\n";
    }
};
int main() {

    student s1(1234, 34);
    student s2(s1); // Copy constructor
    s1.display();
    s2.display();

    return 0;
}
