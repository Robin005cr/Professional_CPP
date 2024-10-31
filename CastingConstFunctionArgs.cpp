#include <iostream>
#include <string>
using namespace std;
// Function that prints a formatted message
void printMessage(const string& message, const int number)
{
    cout << message << number << endl;
}

int main()
{
    string myMessage = "The value is: ";
    int myNumber = 100;

    // Call the function with arguments
    printMessage(myMessage, myNumber);

    return 0;
}
