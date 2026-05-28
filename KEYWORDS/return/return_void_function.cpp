/*
* project   : https://github.com/Robin005cr/Professional_CPP
* file name : return_void_function.cpp
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

void sayHello(int times) {
    if (times <= 0) 
    {
         cerr<<"Negative value "<<endl;
         return; // early exit
    }
   
    for (int i = 0; i < times; ++i)
        cout << "Hello\n";
}

int main() {
    sayHello(2);
    sayHello(-1);
    cout << "Done!" << endl;
    return 0;
}
