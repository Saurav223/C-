//copy constructor
#include<iostream>
using namespace std;
class number{
    int num;
    public:
    number(){
        num=0;
    }
    number(int x){
        num=x;
    }
    number(number &obj){           //it is a copy constructor
        num= obj.num;              //there a defualt copy constructor in every class
    }
    void print(){
        cout<<"The number is"<<num<<endl;
    }
};
int main(){
    number n1(34),n2;
    number n3(n1);
    n3.print();
    return 0;

}