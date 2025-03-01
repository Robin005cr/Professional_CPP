// If int && var is there the function call update(55) will give priority to int &&var then const int &var.

#include <iostream>
using namespace std;

int update(int &var)
{
    int result = var*10;
    return result;
}
int update(const int &var)
{
    int result = var+10;
    return result;
}
int update(int &&var)
{
    int result = var+5;
    return result;
}
int main()
{
    int x = 10;
    cout<<"After Function call X :"<<update(x)<<endl;
    
    cout<<"After Function call X :"<<update(55)<<endl;
    return 0;
}
