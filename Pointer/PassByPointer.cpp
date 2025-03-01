// Pass by pointer

#include <iostream>
using namespace std;

void update(int *var)
{
    *var = *var+10;
}
int main()
{
    int x = 10;
    cout<<"Before Function call X :"<<x<<endl;
    update(&x);
    cout<<"After Function call X :"<<x<<endl;

    return 0;
}
