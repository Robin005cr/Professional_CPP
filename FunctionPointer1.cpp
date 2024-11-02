#include <iostream>
using namespace std;

int sum(int a, int b)
{
    int result = a + b;
    return result;
}
int main()
{
    int s = 0;
    int (*ptr)(int, int) = &sum;
    s = (*ptr)(3, 3);
    cout << "Sum = " << s;

    return 0;
}
