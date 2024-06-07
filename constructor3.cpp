//CONSTRUCTOR OVERLOADING
#include<iostream>
using namespace std;
class complex{
    int a,b;
    public:
    complex();      //over loaded construtor with default argument;
    complex(int,int);
    complex(int);
    void print();
};
complex::complex(){
    a=0;
    b=0;
}
complex::complex(int x,int y){
    a=x;
    b=y;
}
complex::complex(int z){
    a=z;
    b=0;
}
void complex::print()
{
    cout<<a<<"+i"<<b<<endl;
}
int main(){
    complex o1;
    o1.print();
    complex o2(3,4);
    o2.print();
    complex o3(6);
    o3.print();
    return 0;

}