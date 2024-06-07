#include<iostream>
using namespace std;
class Base{
    public:
    int varbase;
    virtual void display(){
        cout<<"Base function "<<varbase<<endl;
    }
};
class Derived : public Base{
    int varderived;
    void display(){
        cout<<"Derived Class "<<varderived<<endl;
    }
};
int main(){
    Base objbase;
    Derived objderived;
    Base *bptr = & objderived;
    bptr->display(); //without virtual function it call the display of base class
    return 0;             // and when we write "virtual " in fornt of any function this function is not call
                           // then display of derived class is run
}