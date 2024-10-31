//Inline function

#include<iostream>
using namespace std;
inline int function(int count)
{
    count++;
    return count;
}

int main()
{
    int result = function(5);
    cout << "Result = " << result;
}
