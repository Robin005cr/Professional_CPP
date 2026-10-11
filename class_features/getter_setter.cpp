/*
* project   : https://github.com/Robin005cr/Professional_CPP
* file name : getter_setter.cpp
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
#include <sstream>
using namespace std;

class Student
{
private:
    int age_, standard_;
    string first_name_, last_name_;

public:
    int get_age()
    {
        return age_;
    }
    void set_age(int r_age)
    {
        age_ = r_age;
    }
    string get_first_name()
    {
        return first_name_;
    }
    void set_first_name(string r_first_name)
    {
        first_name_ = r_first_name;
    }
    string get_last_name()
    {
        return last_name_;
    }
    void set_last_name(string r_last_name)
    {
        last_name_ = r_last_name;
    }
    int get_standard()
    {
        return standard_;
    }
    void set_standard(int r_standard)
    {

        standard_ = r_standard;
    }

    string to_string()
    {
        string result = std::to_string(get_age()) + "," + get_first_name() + "," + get_last_name() + "," + std::to_string(get_standard());

        return result;
    }
};

int main()
{
    int age, standard;
    string first_name, last_name;

    cin >> age >> first_name >> last_name >> standard;

    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);

    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();

    return 0;
}
