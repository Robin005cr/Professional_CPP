/*
 * project   : https://github.com/Robin005cr/Professional_CPP
 * file name : nested_loop.cpp
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
int main()
{
    for (int i = 0; i < 5; ++i)
    {
        for (int j = 0; j < 5; ++j)
        {
            if (i * j == 6)
            {
                cout << "Found: " << i << ", " << j << endl;
                goto done;
            }
        }
    }
done:
    cout << "Search finished"<<endl;
}