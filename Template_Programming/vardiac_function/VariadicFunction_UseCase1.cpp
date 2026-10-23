/*
* project   : https://github.com/Robin005cr/Professional_CPP
* file name : VariadicFunction_UseCase1.cpp
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
#include<iostream>
#include<vector>
#include<initializer_list>
using namespace std;

template<typename T> class Collection
{
private:
  vector<T> v1;
public:
    Collection(){ }
    Collection(initializer_list<T> init):v1(init){} 

    //Variadic function template
    template<typename... PACK> void AddElements(PACK... Args)
    {
      (v1.push_back(Args), ...);   //C++17 - fold over comma
    }

    auto begin() { return v1.begin();}
    auto end(){ return v1.end(); }
    
    void print()
    {
        for(auto x:v1){cout <<x <<"," ;}
        cout << endl;
    }
};

int main()
{
   Collection<int> c1;
   c1.AddElements(39,40,50,10,20,30,50);
   //c1.print();
   for(auto x:c1){cout << x <<",";}
   cout << endl;
   cout <<"------------------" << endl;
   Collection<float> c2{23.12f, 89.21f, 83.23f};
   c2.print();
   return 0;
}