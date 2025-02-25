#include <iostream>
using namespace std;

template<typename T>
class Array
{
    public: 
        T array[10];
        
        void fill(T value)
        {
            for(int i = 0; i < 10; i++)
            {
                array[i] = value;
            }
        }
        
        void display()
        {
            for(int i = 0; i < 10; i++)
            {
                cout << array[i] << " ";
            }
            cout << endl;
        }
        
        T& at(int index)
        {
            return array[index];
        }
};

int main()
{
    Array<int> IntArray;
    IntArray.fill(5);
    IntArray.at(5) = 12;
    IntArray.display();
    
    Array<string> stringArray;
    stringArray.fill("abc");
    stringArray.at(5) = "xyz";
    stringArray.display();

    return 0;
}
