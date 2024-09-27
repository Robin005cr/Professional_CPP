//When the program ends

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
int main()
{
	Rectangle rect1;

	return 0;
}
