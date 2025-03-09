/*
* project   : https://github.com/Robin005cr/Professional_CPP
* file name : TemplateClassUsage.cpp
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

template<typename T>
class Array
{
    public: 
        T array[10];
        
        void fill(T value)
        {
            for(int i = 0; i < 10; i++)
            {
                array[i] = value;
            }
        }
        
        void display()
        {
            for(int i = 0; i < 10; i++)
            {
                cout << array[i] << " ";
            }
            cout << endl;
        }
        
        T& at(int index)
        {
            return array[index];
        }
};

int main()
{
    Array<int> IntArray;
    IntArray.fill(5);
    IntArray.at(5) = 12;
    IntArray.display();
    
    Array<string> stringArray;
    stringArray.fill("abc");
    stringArray.at(5) = "xyz";
    stringArray.display();

    return 0;
}
