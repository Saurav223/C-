#include<iostream>
using namespace std;
int main(){
    int *a= new int(10);
    float *b = new float(34.345);
    cout<<"The value of a is "<<*a<<endl;
    cout<<"The value of b is "<<*b<<endl;
    int *arr = new int[3];
    arr[1]=23;
    arr[2]=56;
    arr[3]=45;
    cout<<arr[1]<<endl;
    cout<<arr[2]<<endl;    
    cout<<arr[3]<<endl;    
    return 0;
    



}