#include <iostream>
#include <any>
#include <string>

using namespace std;

int main()
{
    any var = 10;
    cout << any_cast<int>(var) << endl;

    try {
        var = "hello"; // this is const char*
        cout << any_cast<string>(var) << endl; // will throw
    } catch (const bad_any_cast& e) {
        cout << "Exception (string): " << e.what() << endl;
    }

    try {
        var = 23.66; // double
        cout << any_cast<float>(var) << endl; // will throw
    } catch (const bad_any_cast& e) {
        cout << "Exception (float): " << e.what() << endl;
    }

    try {
        var = 20; // int
        cout << any_cast<char>(var) << endl; // will throw
    } catch (const bad_any_cast& e) {
        cout << "Exception (char): " << e.what() << endl;
    }

    return 0;
}
