/*
* project   : https://github.com/Robin005cr/Professional_CPP
* file name : StructureInsideClass.cpp
* author    : Robin CR
* mail id   : robinchovallurraju@gmail.com
* LinkedIn  : https://www.linkedin.com/in/robin-cr/
* portfolio : https://robin005cr.github.io/
*
* Note : If any mistakes, errors, or inconsistencies are found in the code, please feel free to mail me.
* Suggestions for improvements or better methods are always welcome and appreciated.
* I value constructive feedback and aim to continuously improve the quality of the work.
*
*/
#include <iostream>
using namespace std;
class MyClass {
public:
    struct MyStruct {
        int x;
        int y;
    };
    MyStruct myStruct; // creating a structure variable

    // Method to set the values of the structure members
    void setStructValues(int a, int b) {
        myStruct.x = a;
        myStruct.y = b;
    }

    // Method to display the values of the structure members
    void displayStructValues() {
        cout << "x: " << myStruct.x << ", y: " << myStruct.y << endl;
    }

};

int main() {
    MyClass obj; // Create an instance of the class
    obj.setStructValues(5, 10);  // Set values for the structure members
    obj.displayStructValues();  // Display the values of the structure members
    obj.myStruct.x = 15;
    obj.myStruct.y = 10;
     obj.displayStructValues();
    return 0;
}
