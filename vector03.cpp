#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec;
    vec.push_back(3);
    vec.push_back(5);
    vec.push_back(3);
    vec.push_back(9);
    vector<int> :: iterator p;   // intilization of iterator   vector<type> :: iterator= any 
    //p = vec.begin();
    for(p=vec.begin();p!=vec.end();p++){
            cout<<*p<<endl;
    }

}