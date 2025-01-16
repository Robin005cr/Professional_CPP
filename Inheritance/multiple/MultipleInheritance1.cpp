/*
* project   : https://github.com/Robin005cr/Professional_CPP
* file name : MultipleInheritance1.cpp
* author    : Robin CR
* mail id   : robinchovallurraju@gmail.com
* LinkedIn  : https://www.linkedin.com/in/robin-cr/
* portfolio : https://robin005cr.github.io/
*
* Note : If any mistakes, errors, or inconsistencies are found in the code, please feel free to mail me.
* Suggestions for improvements or better methods are always welcome and appreciated.
* I value constructive feedback and aim to continuously improve the quality of the work.
*
*/
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
