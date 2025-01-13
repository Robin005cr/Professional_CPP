// When the function ends
#include <iostream>
using namespace std;

class Rectangle
{
public:
	Rectangle()
	{
		cout << "Constructor is called" << endl;
	}
	~Rectangle()
	{
		cout << "Destructor is called" << endl;
	}
};

void objectCreation()
{
	Rectangle rect1;
}
int main()
{
	cout << "From main" << endl;
	objectCreation();
	cout << "After function call";

	return 0;
}
