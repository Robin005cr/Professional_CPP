/* Const variable and Reference */

#include <iostream>
using namespace std;
class Base 
{
	const int variable;
	int& ref;

public:
	Base(int& r) : variable{ 0 }, ref{ r } {
		// Now variable is initialized to 0 and ref is initialized with the reference r
		cout << ref << endl;
		cout << variable << endl;
	}
};

int main() {
	int some_int = 10;
	Base b(some_int);

	return 0;
}
