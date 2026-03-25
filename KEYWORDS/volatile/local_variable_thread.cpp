/*
* project   : https://github.com/Robin005cr/Professional_CPP
* file name : local_variable_thread.cpp
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

// declare the volatile variable
volatile bool interruptFlag = false;

void interruptHandler() { interruptFlag = true; }

void mainLoop()
{
    while (!interruptFlag) {
        cout << "Working..." << endl;
        this_thread::sleep_for(chrono::milliseconds(500));
    }
    cout << "Interrupt received. Exiting." << endl;
}

int main()
{
    thread worker(mainLoop);
    this_thread::sleep_for(chrono::seconds(2));
    interruptHandler();
    worker.join();
    return 0;
}