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
   
    shared_ptr<Animal> shPtr1= make_shared<Animal>();  
    shared_ptr<Animal> shPtr2 (shPtr1);
    //     shared_ptr<Animal> shPtr2 = shPtr1;
    
    cout<<shPtr1.get()<<endl;
    cout<<shPtr2.get()<<endl;
    
    cout<<shPtr1.use_count()<<endl;
    cout<<shPtr2.use_count()<<endl;

    return 0;
}
