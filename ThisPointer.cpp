#include <iostream>
using namespace std;
class area
{
    private:
    int x,y,z;
    public:
    void get(int x, int y, int z)
    {
        this->x=x;
        this->y=y;
        this->z=z;
    }
    void display()
    {
        cout<<"x = "<<x<<endl;
        cout<<"y = "<<y<<endl;
        cout<<"z = "<<z<<endl;
    }
    
};
int main() {
    area A;
    A.get(10,20,30);
    A.display();
    return 0;
}
