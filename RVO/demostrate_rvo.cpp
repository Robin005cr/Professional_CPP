/*
* project   : https://github.com/Robin005cr/Professional_CPP
* file name : demostrate_rvo.cpp
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
// Commands to compile
// g++ -O0 -std=c++11 rvo.cpp -o rvo_default
// g++ -O0 -std=c++11 -fno-elide-constructors rvo.cpp -o rvo_elide
#include <iostream>
using namespace std;

class Employee
{
public:
	int id;
	Employee()
	{
		id = 101;
	}
	Employee(const Employee& other) : id{other.id}
	{
		cout<<"copy"<<endl;
	}
};
Employee objectCreate()
{
	return Employee();
}
Employee changeID(int id)
{
	Employee temp = objectCreate();
	temp.id = temp.id+id;
	return temp;
}

int main()
{
	Employee e1;
	e1.id = 9;

	// Employee e2 = e1;
	Employee e2 = changeID(e1.id);

	cout<<"E2.id :"<<e2.id;
	return 0;
}

// output
// rvo_default
// E2.id :110
// rvo_elide
// copy
// copy
// copy
// copy
// E2.id :110