#include<iostream>
#include<string.h>
using namespace std;
class student{
    public:
    int roll, clas,age;
    char name[20];
    void getdetails(int r,int c,int a,char n[20],int f);
    void printdetails();
    private:
    int fee;
};
void student::getdetails(int r,int c,int a,char n[20],int f){
     roll=r;
       clas=c;
       age=a;
       strncpy(name,n,20);
       fee=f;
}
void student::printdetails(){
    cout<<name<<endl;
    cout<<roll<<endl;
    cout<<clas<<endl;
    cout<<age<<endl;
    cout<<fee<<endl;
} 
int main()
{
    student stu;
    stu.getdetails(40,10,16,"Saurav Subedi",20000);
    //stu.fee=40000; because it is a private member
    stu.printdetails();
    return 0;
}