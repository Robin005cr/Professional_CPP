/*
* project   : https://github.com/Robin005cr/Professional_CPP
* file name : VariadicFunction_Callback1.cpp
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
#include<iostream>
#include<functional>
using namespace std;

/*
    T  - stands for the function form
    Args...  - represent the input arguments the function is supposed to take
*/

template<typename T, typename... PACK> auto U_Callback(T x, PACK ...Args)
{
    cout <<"Common business started..." << endl;
    (*x)(Args...);
    cout <<"Common business completed..." << endl;
    cout <<"---------------------" << endl;
}

//***consumer code***********
void fun1(float x, double y){cout <<"fun1(float,double) called, x="<< x << ",and y=" << y<< endl;}
void fun2(int x){cout <<"fun2(int) called, x=" << x << endl;}
int  fun3(){cout <<"fun3() called" << endl; return 500; }

int main()
{
   U_Callback(&fun1, 56.12f, 88.34);  // U_Callback(void(*x)(float,double),56.12f, 88.34);
   U_Callback(&fun2,200);  // U_Callback(void(*x)(int),200);
   U_Callback(&fun3);      // U_Callback(int(*x)(void));
   
    return 0;

}

