#include<iostream>
using namespace std;
class Store{
    int  id, price;
    public:
    void setdata(int  a,int b){
        id=a;
        price=b;
    }
    void getdata(){
        cout<<"The price of product "<<id<<" is "<<price<<endl;
    }
};
int main(){
    int x,y;
    Store *ptr = new Store[3];
    Store *tmp = ptr;
    for(int i=0; i<3;i++){
        cout<<"Enter the ID and price"<<endl;
        cin>>x>>y;
        ptr->setdata(x,y);
        ptr++;
    }
    for(int i=0;i<3;i++){
        tmp->getdata();
        tmp++;
    }
    return 0;
}
