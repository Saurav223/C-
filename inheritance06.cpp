//Multiple Inheritance
#include<iostream>
using namespace std;
class Base1{
    protected:
    int a;
    public:
    void seta(int x){
        a=x;
    }
};
class Base2{
    protected:
    int b;
    public:
    void setb(int y){
        b=y;
    }
};
class Derive : public Base1, public Base2{

    public:
    void sum(){
        cout<<"The sum  of a and b is"<<a+b<<endl;
    }

};
int main (){
    Derive D1;
    D1.seta(3);
    D1.setb(7);
    D1.sum();
    return 0;
}