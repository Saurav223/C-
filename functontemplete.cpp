#include<iostream>
using namespace std;
template<class T1, class T2>
void average(T1 a,T2 b){
    T1 c = (a+b)/2;
    cout<<"The average is "<<c<<endl;
}
int main(){
    average(23,43.23);
    return 0;
}