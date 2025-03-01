Example 4.2 : class with curly braces - automatically deallocation

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
	{
	     unique_ptr<Animal> unPtr1 = make_unique<Animal>();
	     cout<<"Inside Scope"<<endl;
	}
    cout<<"After Scope"<<endl;
    return 0;
}

