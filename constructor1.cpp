//CONSTRUCTOR
#include<iostream>
#include<string.h>
using namespace std;
    // Constructor is a special type of member function which name is same of the class
    // So it is invoked (called) automatically when the object is iniciallyzied
    //it doesn't have any return type so it donot writen any vlaue
    // it is always wirttten in public section of class
class student{
    int roll;
    string name;
    public:
    student();
    void print(){
        cout<<name<<roll<<endl;
    }
};
student::student(){
    roll=40;
    name ="Saurav Subedi";
}
int main()
{
    student s1,s2;
    s1.print();
    s2.print();
    return 0;


}
