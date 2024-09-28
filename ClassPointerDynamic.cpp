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

    MyClass* ptr = new MyClass(20);  // Dynamically allocating an object

    ptr->display();       // Access the object's member using the pointer
    delete ptr;
    return 0;
}
