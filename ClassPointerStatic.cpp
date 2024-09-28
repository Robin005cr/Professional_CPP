#include <iostream>

class MyClass {
private:
    int data;

public:
    MyClass(int value) : data(value) {
        std::cout << "Constructor called, data = " << data << std::endl;
    }

    ~MyClass() {
        std::cout << "Destructor called, data = " << data << std::endl;
    }

    void display() const {
        std::cout << "Data: " << data << std::endl;
    }

};
int main() {
    MyClass obj(10);      // Create an object of MyClass
    MyClass* ptr = &obj;  // Create a pointer to the object

    ptr->display();       // Access the object's member using the pointer

    return 0;
}


