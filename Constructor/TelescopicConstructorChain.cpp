#include <iostream>
using namespace std;
class Customer{
    
    string name,address,aadhar,pan,email;
    int phoneNum;
    
    public:
    
    Customer(string Name,string addr,string aadh,string PAN)
    {
        name = Name;
        address = addr;
        aadhar = aadh;
        pan = PAN;
        cout<<"Name:"<<name<<"\n";
        cout<<"Address:"<<address<<"\n";
        cout<<"Aadhar:"<<aadh<<"\n";
        cout<<"PAN:"<<pan<<"\n";
        cout<<"\n ##################\n";
    }
    Customer(string Name,string addr,string aadh,string PAN,int phone)
    {
        name = Name;
        address = addr;
        aadhar = aadh;
        pan = PAN;
        phoneNum = phone;
        cout<<"Name:"<<name<<"\n";
        cout<<"Address:"<<address<<"\n";
        cout<<"Aadhar:"<<aadh<<"\n";
        cout<<"PAN:"<<pan<<"\n";
        cout<<"Phone number:"<<phoneNum<<"\n";
        cout<<"\n ##################\n";
    }
   Customer(string Name,string addr,string aadh,string PAN,string EMAIL)
    {
        name = Name;
        address = addr;
        aadhar = aadh;
        pan = PAN;
        email = EMAIL;
        cout<<"Name:"<<name<<"\n";
        cout<<"Address:"<<address<<"\n";
        cout<<"Aadhar:"<<aadh<<"\n";
        cout<<"PAN:"<<pan<<"\n";
        cout<<"Email:"<<email<<"\n";
        cout<<"\n ##################\n";
    }
   Customer(string Name,string addr,string aadh,string PAN,int phone,string EMAIL)
    {
        name = Name;
        address = addr;
        aadhar = aadh;
        pan = PAN;
        email = EMAIL;
        phone = phoneNum;
        cout<<"Name:"<<name<<"\n";
        cout<<"Address:"<<address<<"\n";
        cout<<"Aadhar:"<<aadh<<"\n";
        cout<<"PAN:"<<pan<<"\n";
        cout<<"Email:"<<email<<"\n";
        cout<<"Phone number:"<<phoneNum<<"\n";
        cout<<"\n ##################\n";
    }
};

int main(){
 
    Customer c1{ "Tom","Blr","12245566","ADJ45667"};
    Customer c2{ "Tom","Blr","12245566","ADJ45667",9880067};
    Customer c3{ "Tom","Blr","12245566","ADJ45667","tom@gmail.com"};
    Customer c4{ "Tom","Blr","12245566","ADJ45667",465677,"tom@gmail.com"};
}
