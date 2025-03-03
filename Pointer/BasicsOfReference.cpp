#include <iostream>
using namespace std;
int main()
{
    int x = 10;
    int &ref = x;
    cout<<"Ref :"<<ref<<endl;
    cout<<"X :"<<x<<endl;
    cout<<"Address of Ref :"<<&ref<<endl;
    cout<<"Address of X :"<<&x<<endl;

    return 0;
}
