#include<iostream>
using namespace std;
template <class T>           //T is used as a data type
class vector{
    public:
    T *arr;
    int size;
    vector(int s) : size(s){
        arr = new T[3];
    }
    int dotproduct(vector &v){
        T dot=0;
    for(int i=0;i<size;i++){
        dot += this->arr[i] * v.arr[i];
    }
    cout<<"The dotproduct is:"<<dot<<endl;
    }
};
int main(){
    vector <int> v1(3);   //It initizes the obj is int/flaot/double
    v1.arr[0] =2;
    v1.arr[1] =6;
    v1.arr[2] =3;

    vector <int> v2(3);
    v2.arr[0]=55;
    v2.arr[1]=23;
    v2.arr[2]=3;
    v1.dotproduct(v2);
    return 0;
}
