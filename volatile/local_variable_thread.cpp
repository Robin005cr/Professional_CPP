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