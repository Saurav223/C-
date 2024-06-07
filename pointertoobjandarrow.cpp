#include<iostream>
using namespace std;
class complex{
    int a,b;
    public:
    void setdata(int x, int y){
        a=x;
        b=y;
    }
    void getdata(){
        cout<<a<<"+"<<b<<"i"<<endl;
    } 

};
int main(){
    complex *ptr = new complex;
    ptr->setdata(2,3);
    (*ptr).getdata();  // arrrow operator works same as that
    ptr->getdata();
    return 0;
}