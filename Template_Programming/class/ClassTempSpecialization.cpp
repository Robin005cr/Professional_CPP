/*
* project   : https://github.com/Robin005cr/Professional_CPP
* file name : ClassTempSpecialization.cpp
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
#include <string>
#include <typeinfo>

// === 1. PRIMARY CLASS TEMPLATE ===
template<typename T>
class Printer {
public:
    static void print(const T& value) {
        std::cout << "Generic Printer: " << value << " (type: " 
                  << typeid(T).name() << ")\n";
    }
};

// === 2. FULL/EXPLICIT SPECIALIZATION ===
// template<> - completely replaces primary for EXACT type
template<>
class Printer<int> {
public:
    static void print(const int& value) {
        std::cout << "INT specialization: " << (value * 2) 
                  << " (doubled!)\n";
    }
};

// === 3. PARTIAL SPECIALIZATION ===
// Specializes for POINTERS to any type (T*)
template<typename T>
class Printer<T*> {
public:
    static void print(const T* ptr) {
        std::cout << "POINTER specialization: " << *ptr 
                  << " (points to: " << typeid(T).name() << ")\n";
    }
};

// === 4. ANOTHER PARTIAL SPECIALIZATION ===
// Specializes for REFERENCES to const types
template<typename T>
class Printer<const T&> {
public:
    static void print(const T& value) {
        std::cout << "CONST REF specialization: " << value << "\n";
    }
};

int main() {
    // 1. PRIMARY TEMPLATE
    Printer<double> p1;
    p1.print(3.14);  // Generic
    
    // 2. FULL SPECIALIZATION
    Printer<int> p2;
    p2.print(42);    // int-specific
    
    // 3. PARTIAL SPECIALIZATION (pointer)
    int x = 100;
    Printer<int*> p3;
    p3.print(&x);    // T* match
    
    // 4. PARTIAL SPECIALIZATION (const ref)
    const std::string s = "hello";
    Printer<const std::string&> p4;
    p4.print(s);     // const T& match
    
    return 0;
}
