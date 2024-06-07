//Inheritance
#include<iostream>
using namespace std;
// BASE CLASS FOR THE INHERITANCE
class employee{
    public:
    int id;
    float salary;
    employee(){
        id= 10;
        salary = 50000;
    }
    employee(int a){
        id = a;
        salary = 20000;
    }
    void print(){
        cout<<"The salary for employee of  id "<<id<<"is "<<salary<<endl;
    }
    /*DERIVRED CLASS
     SYNAX:   class{{derived class name}} : {{visibility mode}} {{base class name}}
     visibility is only public and private
     In Public the "base class" public member is also "derived class" public member
     In private the base classs public memeber is derived class private member
     *NOTE: In defualt visibility mode is in private
     Private member of derived class cannot be inheritanc
    */
};
   class programmer : public employee{
    public:
    programmer(int b){
        id=b;
        salary = 30000;
    }
   };
int main(){
    employee ram(1),hari;
    ram.print();
    hari.print();
    programmer fornten(2);
    fornten.print();
    programmer backyend(3);
    backyend.print();
    return 0;
}
