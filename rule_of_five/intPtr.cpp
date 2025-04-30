/*
* project   : https://github.com/Robin005cr/Professional_CPP
* file name : intPtr.cpp
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
#include <algorithm> // for  copy
using namespace std;

class IntArray
{
private:
    int *data;
    size_t size;

public:
    // Constructor
    IntArray(size_t sz) : size(sz), data(new int[sz])
    {
        fill(data, data + size, 0); // Initialize with zeros
    }

    // Destructor
    ~IntArray()
    {
        delete[] data;
    }

    // Copy Constructor
    IntArray(const IntArray &other) : size(other.size), data(new int[other.size])
    {
        copy(other.data, other.data + size, data);
    }

    // Copy Assignment Operator
    IntArray &operator=(const IntArray &other)
    {
        if (this != &other)
        {
            delete[] data;
            size = other.size;
            data = new int[size];
            copy(other.data, other.data + size, data);
        }
        return *this;
    }

    // Move Constructor
    IntArray(IntArray &&other) noexcept : data(other.data), size(other.size)
    {
        other.data = nullptr;
        other.size = 0;
    }

    // Move Assignment Operator
    IntArray &operator=(IntArray &&other) noexcept
    {
        if (this != &other)
        {
            delete[] data;
            data = other.data;
            size = other.size;
            other.data = nullptr;
            other.size = 0;
        }
        return *this;
    }
    size_t length() const { return size; }
    void print() const
    {
        for (size_t i = 0; i < size; ++i)
            cout << data[i] << ' ';
        cout << '\n';
    }
    void fillit(int element)
    {

        for (size_t i = 0; i < size; ++i)
            data[i] = element;
    }
};

int main()
{
    IntArray a(5); // Constructor
    a.fillit(7);
    a.print();
    IntArray b = a;            // Copy constructor
    IntArray c = std::move(a); // Move constructor
    b = c;                     // Copy assignment
    c = IntArray(3);           // Move assignment
    c.print();                 // Output: 0 0 0
}
