#include <iostream>
using namespace std;

class Base
{
    public : 
        virtual void configure() = 0;
};

class DerivedA :public Base
{
    public : 
        void configure()
        {
            cout<<"Configure() from Derived A";
        }
};

class DerivedB :public Base
{
    public : 
        
};
int main()
{
    DerivedA obj;
    // DerivedB n1;  // cannot be instantiated

    return 0;
}