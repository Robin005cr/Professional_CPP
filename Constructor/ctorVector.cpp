/*
* project   : https://github.com/Robin005cr/Professional_CPP
* file name : ctorVector.cpp
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
#include <vector>
using namespace std;
class NumArray
{
public:
    vector<int> nums;
    vector<int> prefix;
    NumArray(vector<int> &nums)
    {
        this->nums = nums;
        int n = nums.size();
        prefix.resize(n);
    }
};

int main()
{
    vector<int> nums;

    //  Your NumArray object will be instantiated and called as such:
    NumArray *obj = new NumArray(nums);
    return 0;
}