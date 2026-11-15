/*
* project   : https://github.com/Robin005cr/Professional_CPP
* file name : ranges_basic.cpp
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
#include <algorithm>
#include <ranges>
#include <vector>
#include <iostream>
using namespace std;

int main()
{
    std::vector<int> v{5, 2, 8, 1, 9, 3};

    std::ranges::sort(v); // sort whole container
    for (int var : v)
        cout << var;
    auto it = std::ranges::find(v, 8); // find value
    auto cnt = std::ranges::count_if(v, [](int x)
                                     { return x % 2; });
    bool any = std::ranges::any_of(v, [](int x)
                                   { return x > 8; });
    bool all = std::ranges::all_of(v, [](int x)
                                   { return x > 0; });
    auto mx = std::ranges::max_element(v);
    auto [mn, mxx] = std::ranges::minmax(v); // returns struct of values
    std::ranges::reverse(v);
    std::ranges::for_each(v, [](int x)
                          { std::cout << x << ' '; });
    std::ranges::copy(v, std::ostream_iterator<int>(std::cout, " "));
    bool has = std::ranges::binary_search(v, 5); // needs sorted input
}