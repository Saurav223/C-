#include<iostream>
using namespace std;
class test{
    public:
    int a;
    int b;
    test(int x,int y) : a(x), b(y){        // b(x), a(b+y) it is error beause a is intilized first
        cout<<"Construtor called"<<endl;
    };

};
int main(){
    test t1(2,54);
    cout<<"a="<<t1.a<<endl;
    cout<<"b="<<t1.b<<endl;

    return 0;
}