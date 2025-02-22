#include <iostream>
#include<fstream>
using namespace std;

int main()
{
    
    ofstream fileTax("Tax-2021.txt");
    if(fileTax)
    {
        cout<<"File opened "<<endl;
    }
    
    if(fileTax.is_open())
    {
        cout<<"File opened"<<endl;
    }
    
    if(!fileTax.fail())
    {
        cout<<"File opened"<<endl;
    }
    else if(fileTax.fail())
    {
        cout<<"Error opening file"<<endl;
    }
    
    fileTax.close();
    
    
    return 0;
}
