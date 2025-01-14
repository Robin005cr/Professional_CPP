/*
* project   : https://github.com/Robin005cr/Professional_CPP
* file name : ConstructorOutsideClass.cpp
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
class student {
	int rno;
	char name[50];
	double fee;
	 
public:
	student();
	void display();
};
	 
student::student()
{
	cout << "Enter the RollNo:";
	cin >> rno;
	 
	cout << "Enter the Name:";
	cin >> name;
	 
	cout << "Enter the Fee:";
	cin >> fee;
}
	 
void student::display()
{
	cout << endl << rno << "\t" << name << "\t" << fee;
}
	 
int main()
{
	student s;
	s.display();
	 
	return 0;
}
