/*
* project   : https://github.com/Robin005cr/Professional_CPP
* file name : shared_ptr_derived_class.cpp
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
#include <memory>
using namespace std;

class vehicle
{
public:
    virtual void createVehicle() = 0;  // Pure virtual function to enforce override in derived classes
    virtual ~vehicle() {}  // Virtual destructor to ensure proper cleanup of derived class objects
};

class truck : public vehicle
{
public:
    void createVehicle() override
    {
        cout << "Truck created" << endl;
    }
};

class loadingTruck : public truck
{
public:
    void createVehicle() override
    {
        cout << "Loading truck created" << endl;
    }
};

class undergroundTruck : public truck
{
public:
    void createVehicle() override
    {
        cout << "Underground truck created" << endl;
    }
};

class vegetableGoodsTruck : public truck
{
public:
    void createVehicle() override
    {
        cout << "Vegetable goods truck created" << endl;
    }
};

int main()
{
    // Create shared pointer to base class (vehicle)
    shared_ptr<vehicle> truckPtr = make_shared<truck>();
    shared_ptr<vehicle> loadingTruckPtr = make_shared<loadingTruck>();
    shared_ptr<vehicle> undergroundTruckPtr = make_shared<undergroundTruck>();
    shared_ptr<vehicle> vegetableGoodsTruckPtr = make_shared<vegetableGoodsTruck>();

    // Demonstrating the polymorphism
    truckPtr->createVehicle();
    loadingTruckPtr->createVehicle();
    undergroundTruckPtr->createVehicle();
    vegetableGoodsTruckPtr->createVehicle();

    return 0;
}
