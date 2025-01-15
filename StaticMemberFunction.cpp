/*
* project   : https://github.com/Robin005cr/Professional_CPP
* file name : StaticMemberFunction.cpp
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
class FruitsInStore
{
    public:
        static int orangeCount,appleCount;
        static int pickupOrange()
        {
            orangeCount--;
            return 0;
        }
        static int pickupApple()
        {
            appleCount--;
            return 0;
        }
       void view()
       {
           cout<<"Orange count: "<<orangeCount<<"\n";
           cout<<"Apple count: "<<appleCount<<"\n";
       }
};

int FruitsInStore::orangeCount;
int FruitsInStore::appleCount;
int main() 
{
    FruitsInStore Customer1,Customer2;
    FruitsInStore::orangeCount = 50;
    FruitsInStore::appleCount = 50;
    Customer1.pickupOrange();
    Customer1.pickupApple();
    Customer1.view();
    Customer2.pickupApple();
    Customer2.view();

    return 0;
}
