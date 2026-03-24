#include <iostream>
#include <cstdint>

volatile uint32_t *hard_register = (uint32_t *)0x12345678;  // this can be port as well
using namespace std;
int main()
{
    cout<<"HElloe";
    uint32_t value = *hard_register;
    cout<<"Read value : "<<value<<endl;
    
    *hard_register = 0x567;
    value = *hard_register;
    cout<<"Read value : "<<value<<endl;
    return 0;
}