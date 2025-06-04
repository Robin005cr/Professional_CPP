	#include <iostream>
	using namespace std;
	int main() 
	{
	    int a2 = 20;
	    const int *b2=&a2;
	    int *d2=const_cast<int*>(b2);
	    *d2=30;
	    cout<<"a2="<<a2<<endl;
	    cout<<"*d2="<<*d2<<endl;
	    cout<<"Address of a2 = "<<&a2<<endl;
	    cout<<"Address the pointer d2 is holding = "<<d2;
	
	    return 0;
}