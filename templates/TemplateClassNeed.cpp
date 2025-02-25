#include <iostream>
using namespace std;
class IntArray
{
    public: 
    
        int array[10];
        void fill(int value)
        {
            for(int i =0;i<10;i++)
            {
                array[i] = value;
            }
        }
        
        void display()
        {
            for(int i =0;i<10;i++)
            {
                cout<<array[i] <<" ";
            }
            
        }
        int &at(int index)
        {
            return array[index];
        }
};

int main()
{
    IntArray a;
    a.fill(5);
    //a.display();
    a.at(5) = 12;
    a.display();

    return 0;
}
