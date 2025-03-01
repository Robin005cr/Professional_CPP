#include <iostream>
#include <memory>
using namespace std;
class Animal
{
    public:
    
    Animal()
    {
        cout<<"Constructor of Animal class is called"<<endl;
    }
    ~Animal()
    {
        cout<<"Destructor of Animal class is called"<<endl;
    }
};

void callable()
{
     unique_ptr<Animal> unPtr1 = make_unique<Animal>();
}

int main() 
{
   
    callable();

    return 0;
}
