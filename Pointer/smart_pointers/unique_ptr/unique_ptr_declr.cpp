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


int main() 
{
   
    unique_ptr<Animal> unPtr1 = make_unique<Animal>();
    unique_ptr<Animal> unPtr2(new Animal);  // default initialization
    unique_ptr<Animal> unPtr3(new Animal()); // value initialization

    return 0;
}

