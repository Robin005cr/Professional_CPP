#include <iostream>
using namespace std;

enum class days { SUN, MON = 8, TUE };

int main()
{
    days Week1day = days::SUN;

    switch (Week1day)
    {
    case days::SUN:
        cout << "This is Sunday";
        break;
    case days::MON:
        cout << "This is Monday";
        break;
    case days::TUE:
        cout << "This is Tuesday";
        break;

    }
    cout << static_cast<int>(Week1day); // static_cast is required to print the integer value.
    return 0;
}
