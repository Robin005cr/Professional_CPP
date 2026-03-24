#include <chrono>
#include <iostream>
#include <thread>
using namespace std;

class SensorInterface {
private:
    volatile int temperature;

public:
    SensorInterface()
        : temperature(0)
    {
    }

    void readSensor()
    {
        // Simulate reading from a sensor
        while (true) {
            temperature = rand() % 100;
            this_thread::sleep_for(chrono::seconds(1));
        }
    }

    int getTemperature() const { return temperature; }
};

int main()
{
    SensorInterface sensor;
    thread sensorThread(&SensorInterface::readSensor,
                        &sensor);

    for (int i = 0; i < 5; ++i) {
        cout << "Current temperature: "
             << sensor.getTemperature() << "°C" << endl;
        this_thread::sleep_for(chrono::seconds(1));
    }

    sensorThread.detach();
    return 0;
}