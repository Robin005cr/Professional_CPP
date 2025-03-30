/*
* project   : https://github.com/Robin005cr/Professional_CPP
* file name : shared_ptr_returnType.cpp
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
#include <memory>
#include <iostream>
using namespace std;
class SensorCalculate
{
public:
    SensorCalculate(int config, int data) : config_(config), data_(data)
    {
    }
    virtual void configure() = 0;

private:
    int config_, data_;
};

class TempSensor : public SensorCalculate
{
public:
    TempSensor(int config, int data) : SensorCalculate(config, data)
    {
    }

    void configure()
    {
        cout<<"Temp sensor activated"<<endl;
    }
};

class HumidSensor : public SensorCalculate
{
public:
    HumidSensor(int config, int data) : SensorCalculate(config, data)
    {
    }
    void configure()
    {
        cout<<"Humid sensor activated"<<endl;
    }
};

// Function to return shared_ptr of base class
std::shared_ptr<SensorCalculate> createSensor(int mode, int config, int data)
{
    if (mode == 1)
    {
        return std::make_shared<TempSensor>(config, data);
    }
    else if (mode == 2)
    {
        return std::make_shared<HumidSensor>(config, data);
    }
    else
    {
        return nullptr;  // In case of invalid mode
    }
}

int main()
{
    int mode = 1;  // You can change this to 1 or 2 to test the function
    int config = 10;
    int data = 20;

    // Create the sensor based on mode
    std::shared_ptr<SensorCalculate> sensor = createSensor(mode, config, data);

    sensor->configure();
    return 0;
}
