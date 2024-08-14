#include <iostream>
using namespace std;
namespace scale1
{
    void calculateindex(int input)
    {
        int index;
        index = input*100;
        cout<<"Index = "<<index;
    }
}
namespace scale2
{
    void calculateindex(int input)
    {
        int index;
        index = input*1000;
        std::cout<<"Index = "<<index;
    }
}

int main() 
{
    int input;
    cout<<"Enter the input:";
    cin>>input;
    if(input<=10)
    {
        scale1::calculateindex(input);
    }
    else if(input>10)
    {
        scale2::calculateindex(input);
    }
    
    return 0;
}
