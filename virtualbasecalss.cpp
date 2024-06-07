#include<iostream>
using namespace std;
class Student{
    int roll;
    public:
void setroll(int r){
    roll=r;
}
void getroll(){
    cout<<"The roll is:"<<roll<<endl;
}
};
class Exam : public virtual Student{
    public:
    float maths, physics, chemistry;
    void germarks(int m,int p,int c){
        maths=m;
        physics=p;
        chemistry=c;
    }
    void printmarks(){
        cout<<"The marks if maths physics and chemistry is "<<maths<<endl<<physics<<endl<<chemistry<<endl;
    }
};
class Sport: public virtual Student{
    public:
    int score;
    void getscore(int s){
        score=s;
    }
    void printscore(){
        cout<<"The score is "<<score<<endl;
    }
};
class Result:public Exam, public Sport{
    float total;
    public:
    void printresult(){
    total=(maths+physics+chemistry+score)/4;
        cout<<"The result of the student is "<<total;
    }
};
int main(){
    Result Saurav;
    Saurav.setroll(40);
    Saurav.getroll();
    Saurav.germarks(67,89,79);
    Saurav.printmarks();
    Saurav.getscore(78);
    Saurav.printscore();
    Saurav.printresult();
    return 0;
}