//Multilevel Inheritance
#include<iostream>
using namespace std;
class student{
    protected:
    int roll;
    public:
    void getroll(int r){
        roll=r;
    }

};
class exam: public student{
    protected:
    float maths,physics,chemistry;
    public:
    void getmarks(float m,float p, float c){
        maths=m;
        physics =p;
        chemistry = c;
    }
};
class result : public exam{
    public:
    void getresult(){
        cout<<"The percentage of the rollno: "<<roll<<"  is  "<<(maths + physics  + chemistry) /3<<"%"<<endl;
    }
};
int main(){
    result ram;
    ram.getroll(40);
    ram.getmarks(82,90,85);
    ram.getresult();
    return 0;
}