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


