// Single Private inheritance
#include <iostream>
using namespace std;
class Base
{
    int data1;

public:
    int data2;
    void setdata();
    int getdata1();
};
void Base ::setdata()
{
    data1 = 50;
    data2 = 100;
}
int Base ::getdata1()
{
    return data1;
}
class Derive : private Base
{
    int data3;

public:
    void process()
    {   setdata();    //modify
        data3 = data2 + (getdata1() * 3);
    }
    void display();
};
void Derive::display(){
    cout<<"Data1="<<getdata1()<<endl;
    cout<<"Data2="<<data2<<endl;
    cout<<"Data3="<<data3<<endl;
}
int main(){
    Derive D1;
    //D1.setdata(); cannot access directly
    D1.process();
    D1.display();
    return 0;
}