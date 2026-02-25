/*
* project   : https://github.com/Robin005cr/Professional_CPP
* file name : constCast.cpp
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
	int main() 
	{
	    int a2 = 20;
	    const int *b2=&a2;
	    int *d2=const_cast<int*>(b2);
	    *d2=30;
	    cout<<"a2="<<a2<<endl;
	    cout<<"*d2="<<*d2<<endl;
	    cout<<"Address of a2 = "<<&a2<<endl;
	    cout<<"Address the pointer d2 is holding = "<<d2;
	
	    return 0;
}