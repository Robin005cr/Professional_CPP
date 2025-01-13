// Delete operator
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
	Rectangle* ptr = new Rectangle;
	cout << "Before delete" << endl;
	delete ptr;
	cout << "After delete";
	return 0;
}
