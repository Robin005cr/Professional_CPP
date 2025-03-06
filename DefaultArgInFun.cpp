#include <iostream>

// Function with default arguments
void display(int x = 10, int y = 20) {
    std::cout << "x: " << x << ", y: " << y << std::endl;
}

int main() {
    // Calling function with no arguments, default values are used
    display();

    // Calling function with one argument, the second argument uses the default
    display(30);

    // Calling function with both arguments, default values are overridden
    display(40, 50);

    return 0;
}
