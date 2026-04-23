/*
 * project   : https://github.com/Robin005cr/Professional_CPP
 * file name : map.cpp
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
#include <map>
#include <string>
using namespace std;

int main()
{
    std::map<std::string, int> scores = {{"Alice", 95}, {"Bob", 87}};

    for (const auto &kv : scores)
        cout << kv.first << ": " << kv.second;

    // With structured bindings (clean)
    for (const auto &[name, score] : scores)
        cout << name << ": " << score;
}
