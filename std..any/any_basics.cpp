#include <iostream>
#include <any>
#include<string>
using namespace std;
int main()
{
    any var =10;
    cout<<any_cast<int>(var)<<endl;
    
    var =string("hello");
    cout<<any_cast<string>(var)<<endl;
    
    var = 23.66F;
    cout<<any_cast<float>(var)<<endl;
    
    var =20;
    cout<<any_cast<int>(var)<<endl;
    
    return 0;
}