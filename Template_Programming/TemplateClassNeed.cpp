/*
* project   : https://github.com/Robin005cr/Professional_CPP
* file name : TemplateClassNeed.cpp
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
class IntArray
{
    public: 
    
        int array[10];
        void fill(int value)
        {
            for(int i =0;i<10;i++)
            {
                array[i] = value;
            }
        }
        
        void display()
        {
            for(int i =0;i<10;i++)
            {
                cout<<array[i] <<" ";
            }
            
        }
        int &at(int index)
        {
            return array[index];
        }
};

int main()
{
    IntArray a;
    a.fill(5);
    //a.display();
    a.at(5) = 12;
    a.display();

    return 0;
}
