/*
* project   : https://github.com/Robin005cr/Professional_CPP
* file name : stl_print.cpp
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
#include <print>
#include<vector>
#include<unordered_map>
using namespace std;
int main() {
    
    vector<int> myVec = {33,55,67,66};
    unordered_map<string, int> Employee = { {"bob",1}, {"harry",2},{"amit",3}};
    
    std::println("{}",myVec);  // C++ 26
     std::println("{}", Employee);
}