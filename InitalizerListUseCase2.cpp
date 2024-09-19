/* When the function parameter in parametrized constructor and data member of the same class is having same name
   If we are giving
   number = number, inside constructor the compiler will get ambiguity on the variables. This pointer also solves this problem
*/

#include <iostream>
using namespace std;
class student {
	int id, number;
public:
	student(int i, int number) : id(i), number(number)
	{

	}

	void print()
	{
		cout << "ID = " << id << "\n";
		cout << "Number = " << number << "\n";

	}

};

int main() {
	student S(12, 34);
	S.print();
	return 0;
}
