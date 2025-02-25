#include <iostream>
#include <string>

using namespace std;

template <typename customType, typename customType1>
customType Max(customType a, customType1 b)
{
	return a < b ? b : a;
}

int main()
{
	int i = 39;
	int j = 20;
	cout << "Max(i, j): " << Max(i, j) << endl;

	double f1 = 13.5;
	double f2 = 20.7;
	cout << "Max(f1, f2): " << Max(f1, f2) << endl;

	float a = 3.4;
	float b = 3.6;
	cout << "Max(a, b): " << Max(a, b) << endl;


	string s1 = "Hello";
	string s2 = "World";
	cout << "Max(s1, s2): " << Max(s1, s2) << endl;

	cout << "Max(f2,a): " << Max(f2, i) << endl;

	return 0;
}
