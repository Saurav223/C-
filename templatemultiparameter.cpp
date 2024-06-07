#include<iostream>
using namespace std;
template <class T1, class T2>
class Data{
    public :
    T1 a;
    T2 b;
    Data(T1 x,T2 y):a(x),b(y){};
    void display(){
        cout<<a<<endl<<b;
    }
};
int main(){
Data<int,string> stu(40,"Saurav");
stu.display();
return 0;
}