#include <iostream>
using namespace std;

int main(int argc, char *argv[]) 
{
    // Display the number of command-line arguments
    cout << "Number of arguments: " << argc << endl;

    // Display the arguments
    cout << "Arguments passed to the program:" << endl;
    for (int i = 0; i < argc; i++) {
        cout << "argv[" << i << "] = " << argv[i] << endl;
    }

    return 0;
}
