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
