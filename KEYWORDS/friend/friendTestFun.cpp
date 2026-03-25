/*
 * project   : https://github.com/Robin005cr/Professional_CPP
 * file name : friendTestFun.cpp
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
class BusinessEquation
{
    private:
    int prize;
    
    protected:
    int x;
    public:
    friend void testFun(BusinessEquation &obj);
};

void testFun(BusinessEquation &obj)
{
    obj.prize = 30;
    obj.x =9;
    int result = obj.prize*obj.x;
    cout<<"Result : "<<result<<endl;
}
int main()
{
    BusinessEquation obj;
    testFun(obj);
    return 0;
}