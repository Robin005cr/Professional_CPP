/*
* project   : https://github.com/Robin005cr/Professional_CPP
* file name : data_member_thread.cpp
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