


#include <iostream>
using namespace std;
class Employee
{
    public:
        int empid;
        static int level;
};

int Employee::level;
int main() {
    
    Employee sathish;
    Employee ramesh;
    sathish.empid = 101;
    ramesh.empid = 102;
    
    sathish.level = 50;
    ramesh.level = 52;
    
    cout<<"Sathish level : "<<sathish.level<<"\n";
    cout<<"Ramesh level : "<<ramesh.level;

    return 0;
}
