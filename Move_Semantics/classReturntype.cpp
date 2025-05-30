/*
* project   : https://github.com/Robin005cr/Professional_CPP
* file name : classReturntype.cpp
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

class FilterContainer
{
public:
    void getStatus()
    {
        cout << "Status invoked" << endl;
    }
};

FilterContainer createFilterContainer()
{
    FilterContainer fc;
    return fc;
}

int main()
{
    FilterContainer myFilter = createFilterContainer();
    myFilter.getStatus();  // Should print "Status invoked"
    return 0;
}
