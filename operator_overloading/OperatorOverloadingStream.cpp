/*
* project   : https://github.com/Robin005cr/Professional_CPP
* file name : OperatorOverloadingStream.cpp
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
using namespace std;

class Innova
{
   private:
        int modelNumber;
        string firstName;
    public: 
        friend ostream &operator <<(ostream &output,Innova &rhs);
        friend istream &operator >>(istream &input,Innova &rhs);
        
        
};

ostream &operator <<(ostream &output, Innova &rhs)
{
    output<<"Model number:"<<rhs.modelNumber;
    output<<"First Name:"<<rhs.firstName;
    return output;
}

istream &operator >>(istream &input, Innova &rhs)
{
    input >>rhs.modelNumber>>rhs.firstName;
    return input;
}
int main()
{
    Innova modelA;
    
    cin>>modelA;
    cout<<modelA;

    return 0;
}