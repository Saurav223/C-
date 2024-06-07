
#include<iostream>
#include<vector>
using namespace std;
void display(auto v){
for(auto a=v.begin();a!=v.end();a++){
        cout<<"The data is"<<*a<<endl;
    }  
}
    /* In this above loop "auto" is used to as any data type 
        and then num.begin() assign the "address" of begging of vector to "a"
        than value is print by using dereferncing operator because "a" is act like pointer 
    */
int main(){
    vector<int>num;
    for(int i=0;i<10;i++){
        num.push_back(i);
    }
    display(num);
   num.resize(2);     //resize the vector
    display(num);

    if (num.empty()==false){          //vector.empty() check weather the vector empty or not and return in bool
        cout<<"Vetor is not empty";
    }


return 0;
}