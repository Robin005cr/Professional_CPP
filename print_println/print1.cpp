/*
* project   : https://github.com/Robin005cr/Professional_CPP
* file name : print1.cpp
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
#include<string>
int main() {
    
    std::string value = "Hundred";
    std::print("hello"); // cout<<"hello";
    std::print("Variable : {}", value); // cout<<"Variable :"<<value;
    std::print("Hello, {}!\n", "world");   // std::print requires manual \n
    std::println("Hello, {}!", "world");   // cout<<"content"<<endl; |adds newline automatically
    

}

