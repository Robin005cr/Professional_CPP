#include <iostream>
#include <string>
using namespace std;

template<typename T> 
T add(T num1, T num2) 
{
    return (num1 + num2);  // General case for all types
}

template<> char add<char>(char num1, char num2) 
{
    return (num1 - '0') + (num2 - '0');  // Converts chars to digits and adds them
}

template<> string add<string>(string num1, string num2) 
{
    return num1 + " " + num2;  // Concatenates strings with a space in between
}


int main() {
    cout << "Hello World" << endl;
    cout << add<int>(5, 6) << endl;  // Uncomment if needed, adds integers
    cout << static_cast<int>(add('2', '3')) << endl;  // Adds chars ('2' + '3' => 2 + 3 => 5)
    cout << add<string>("How", "are you?") << endl;  // Concatenates strings ("How are you?")
    return 0;
}
