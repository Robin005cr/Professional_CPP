/*
* project   : https://github.com/Robin005cr/Professional_CPP
* file name : InitalizerListUseCase3.cpp
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
/*If we are using a obj of a class inside another class, but the class containing obj is having only 
  parametrized constructor and no default constructor.
*/
#include <iostream>
using namespace std;
class Vehicle
{
public:
	int speed;
	Vehicle(int s) :speed(s)
	{
		cout << "Speed = " << speed << endl;
	}
};

class Road
{
	Vehicle car;
	string CarType;
public:
	Road(Vehicle inputCar, string carType) :car(inputCar), CarType(carType)
	{
		cout << "Car type :" << carType;
	}
};

int main() {
	Vehicle sedanCar(20);
	Road routea(sedanCar, "Sedan");
	return 0;
}
