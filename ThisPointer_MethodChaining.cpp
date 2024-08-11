#include <iostream>
using namespace std;
class area
{
    private:
    int x,y,z;
    public:
    area  &get(int x, int y, int z) // Function datatype should be of class name
    {
        this->x=x;
        this->y=y;
        this->z=z;
        return *this;
    }
    void display()
    {
        cout<<"x = "<<x<<endl;
        cout<<"y = "<<y<<endl;
        cout<<"z = "<<z<<endl;
    }
    
};
int main()
 {
    area A;
    A.get(10,20,30).display();  //Chained function calls.  All calls modify the same object 

    
    return 0;
}
