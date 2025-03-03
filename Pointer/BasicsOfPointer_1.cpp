#include <iostream>
using namespace std;
int main()
{
    int x = 10;
    //int *p = &x;
    int *p;
    p = &x;
    cout<<"*p = "<<*p<<endl;  // value of x
    cout<<"p = "<<p<<endl;    // address of x
    cout<<"x = "<<x<<endl;
    cout<<"&x = "<<&x<<endl;

    return 0;
}
