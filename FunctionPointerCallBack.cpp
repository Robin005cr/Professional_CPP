#include <iostream>
using namespace std;

void sum(int a, int b)
{
	int result = a + b;
	cout << "Sum = " << result << endl;

}
void sub(int a, int b)
{
	int result = a - b;
	cout << "Sub = " << result << endl;

}
void display(void (*fptr)(int, int))
{
	fptr(5, 1);
}
int main()
{
	display(sum);
	display(sub);
	return 0;
}
