/*
* project   : https://github.com/Robin005cr/Professional_CPP
* file name : views1.cpp
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
#include <ranges>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> Numbers{1, 2, 3, 4, 5};

    auto View = views::take(Numbers, 3);

    for (const auto& num : View)
    {
        cout << num << " ";
    }

    return 0;
}