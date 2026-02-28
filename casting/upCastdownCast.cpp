/*
* project   : https://github.com/Robin005cr/Professional_CPP
* file name : upCastdownCast.cpp
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

class Vehicle
{


public:
	int UID;
	int modelNo;
	virtual void displayDetails()
	{
		cout<<"UID:"<<UID<<endl;
		cout<<"Model Number:"<<modelNo<<endl;
	}
};

class Car: public Vehicle
{


public:
	string CarType;
	string TyreType;
	string CompanyName;
	void displayDetails() override
	{
		cout<<"Car Type:"<<CarType<<endl;
		cout<<"Tyre Type:"<<TyreType<<endl;
		cout<<"Company Name:"<<CompanyName<<endl;
	}
};
int main()
{
    
    // Base class ptr assigned with derived class object (upcasting)
    // Dynamic
	Vehicle *vptrD = new Car();
	vptrD->modelNo = 21;
	vptrD->displayDetails();
	
	
    // Static
	Vehicle *vptrS;
	Car Innova;

	vptrS = &Innova;
	vptrS->modelNo = 22;


    // Derived class ptr assigned with base class object (Downcasting)

    //Dynamic 
	Car *cptrD = new Vehicle();  // results compilation ERROR
	cptrD->CarType = "sedan";
	
	// Static
	Car* cptrS;                 // results compilation ERROR
	Vehicle obj;
	cptrS = &obj;


	return 0;
}