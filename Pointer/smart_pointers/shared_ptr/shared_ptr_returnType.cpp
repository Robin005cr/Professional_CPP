#include <memory>

class SensorCalculate
{
public:
    SensorCalculate(int config, int data) : config_(config), data_(data)
    {
    }

private:
    int config_, data_;
};

class TempSensor : public SensorCalculate
{
public:
    TempSensor(int config, int data) : SensorCalculate(config, data)
    {
    }
};

class HumidSensor : public SensorCalculate
{
public:
    HumidSensor(int config, int data) : SensorCalculate(config, data)
    {
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

    // Further code to use the sensor...
    
    return 0;
}
