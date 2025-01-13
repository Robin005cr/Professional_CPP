#include <iostream>
using namespace std;
  
// first base class
class Vehicle {
public:
    int vnum,vinum,tno;
    void get_details()
    {
        cout<<"Enter the vehicle number:";
        cin>>vnum;
        cout<<"Enter the insurance number:";
        cin>>vinum;
    }
    
};
  
// second base class
class FourWheeler {
public:
    int bluetooth=2;
    void ble()
    {
        if(bluetooth==1)
        {
            cout<<"Bluetooth is enabled";
        }
    }
    void wifi();
    void auto_rotation_mirror();
    void acvent();
    void panoramaroof();
};
  
// sub class derived from two base classes
class Car_tata_punch : public Vehicle, public FourWheeler 
{
    public:
            void init()
            {
                bluetooth=1;
                get_details();
                ble();
               // wifi();
                
            }
};
  
// main function
int main()
{
    Car_tata_punch obj;
    obj.init();
    return 0;
}
