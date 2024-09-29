#include <iostream>
using namespace std;
class Apple
{
public:
    virtual void showMyColor()
    {
        cout << "My color is red";
    }

};
class GreenApple : public Apple
{
public:
    void showMyColor()
    {
        cout << "My color is green";
    }

};
int main() {

    Apple* a;     // a is the pointer
    GreenApple g; // g is an object

    a = &g;       // assigning the reference of object to the pointer
    a->showMyColor();


    return 0;
}

/*
Explanation for the output :
If virtual keyword is there compiler will skip the definition and looks for other definition. 
Dynamic(Late) binding will happen.
*/
