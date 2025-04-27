/*
* project   : https://github.com/Robin005cr/Professional_CPP
* file name : CLI_exercise1a.cpp
* author    : Robin CR
* mail id   : robinchovallurraju@gmail.com
* LinkedIn  : https://www.linkedin.com/in/robin-cr/
* portfolio : https://robin005cr.github.io/
*
* Note : If any mistakes, errors, or inconsistencies are found in the code, please feel free to mail me.
* Suggestions for improvements or better methods are always welcome and appreciated.
* I value constructive feedback and aim to continuously improve the quality of the work.
*
*/
#include <iostream>
#include<string>
using namespace std;

class Temperature
{
    public:
        void display()
        {
            cout<<"Temperature data"<<endl;
        }
};
class Humidity
{
    public:
        void display()
        {
            cout<<"Humidity data"<<endl;
        }
};
int main(int argc, char* argv[])
{
   if(argc != 3)
   {
       cerr<<"Usage"<<endl;
       return 1;
   }
    
    string className = argv[1];
    string functionName = argv[2];
    
    if(className == "Temperature")
    {
        Temperature t;
        
        if(functionName == "display")
        {
            t.display();
    
        }
        else
        {
            cerr<<"Invalid function for Temperature class "<<endl;
        }
    }
    else if(className == "Humidity")
    {
        Humidity h;
        
        if(functionName == "display")
        {
            h.display();
    
        }
        else
        {
            cerr<<"Invalid function for Humidity class "<<endl;
        }
    }
    
    else
    {
        cerr<<"Invalid class name"<<endl;
        return 1;
    }
    
    
    return 0;
}