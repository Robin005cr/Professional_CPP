/*
* project   : https://github.com/Robin005cr/Professional_CPP
* file name : ValueMetaFun1.cpp
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
int myValue(int val)
{
    return val;
}
template<int val> 
struct IntValue
{
    static constexpr int value = val;
};
int main() {
    cout<<myValue(98)<<endl;
    cout<<IntValue<45>::value;

    return 0;
}