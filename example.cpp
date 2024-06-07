#include<iostream>

using namespace std;

class Time {
    int hr, min;

    public:
    Time(){
        hr=1;
        min=20;
    }

    operator int (){
        int sum = hr*60+min;
        return sum;
        
    }
};

int main(){
    Time T1;
    int t = T1;
    cout<<t<<"min";

}