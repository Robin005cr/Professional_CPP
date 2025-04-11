#include <iostream>
#include <any>
#include<string>
using namespace std;
int main()
{
    any var =10;
    cout<<any_cast<int>(var)<<endl;
     cout<<"var.type().name():"<<var.type().name()<<endl;
    
    var =string("hello");
    cout<<any_cast<string>(var)<<endl;
    cout<<"var.type().name():"<<var.type().name()<<endl;
    
    var = 23.66F;
    cout<<any_cast<float>(var)<<endl;
     cout<<"var.type().name():"<<var.type().name()<<endl;
    cout<<"var.has_value():"<< std::boolalpha<<var.has_value()<<endl;
    
    var =20;
    cout<<any_cast<int>(var)<<endl;
    
    var.reset();
    cout<<"var.has_value():"<< std::boolalpha<<var.has_value()<<endl;
    
    return 0;
}