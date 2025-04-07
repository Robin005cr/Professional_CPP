/*
* project   : https://github.com/Robin005cr/Professional_CPP
* file name : unique_ptr_returnType.cpp
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

// If you have a 𝐟𝐚𝐜𝐭𝐨𝐫𝐲 𝐟𝐮𝐧𝐜𝐭𝐢𝐨𝐧 that creates and returns a smart pointer, 𝐜𝐨𝐧𝐬𝐢𝐝𝐞𝐫 𝐮𝐬𝐢𝐧𝐠 𝐬𝐭𝐝::𝐮𝐧𝐢𝐪𝐮𝐞_𝐩𝐭𝐫 𝐢𝐧𝐬𝐭𝐞𝐚𝐝 𝐨𝐟 𝐬𝐭𝐝::𝐬𝐡𝐚𝐫𝐞𝐝_𝐩𝐭𝐫. 

// There are 𝐭𝐰𝐨 𝐬𝐢𝐦𝐩𝐥𝐞 𝐛𝐮𝐭 𝐯𝐞𝐫𝐲 𝐢𝐦𝐩𝐨𝐫𝐭𝐚𝐧𝐭 𝐫𝐞𝐚𝐬𝐨𝐧𝐬: 
//  1️⃣ 𝐬𝐭𝐝::𝐮𝐧𝐢𝐪𝐮𝐞_𝐩𝐭𝐫 𝐜𝐚𝐧 𝐛𝐞 𝐜𝐨𝐧𝐯𝐞𝐫𝐭𝐞𝐝 𝐢𝐧𝐭𝐨 𝐬𝐭𝐝::𝐬𝐡𝐚𝐫𝐞𝐝_𝐩𝐭𝐫, 𝐛𝐮𝐭 𝐧𝐨𝐭 𝐯𝐢𝐜𝐞 𝐯𝐞𝐫𝐬𝐚. 
//  2️⃣ 𝐬𝐭𝐝::𝐬𝐡𝐚𝐫𝐞𝐝_𝐩𝐭𝐫 𝐜𝐨𝐦𝐞𝐬 𝐰𝐢𝐭𝐡 𝐞𝐱𝐭𝐫𝐚 𝐨𝐯𝐞𝐫𝐡𝐞𝐚𝐝 𝐝𝐮𝐞 𝐭𝐨 𝐫𝐞𝐟𝐞𝐫𝐞𝐧𝐜𝐞 𝐜𝐨𝐮𝐧𝐭𝐢𝐧𝐠. 

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

// Function to return unique_ptr of base class
std::unique_ptr<SensorCalculate> createSensor(int mode, int config, int data)
{
    if (mode == 1)
    {
        return std::make_unique<TempSensor>(config, data);
    }
    else if (mode == 2)
    {
        return std::make_unique<HumidSensor>(config, data);
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
    auto sensorUniq = createSensor(mode, config, data);
    sensorUniq->configure();

    // converting unique_ptr to shared_ptr
    auto sensorShared = shared_ptr<SensorCalculate>(move(sensorUniq));
    sensorShared->configure();
    return 0;
}
