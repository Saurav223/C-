#include<iostream>
using namespace std;
class Base{
    public:
    Base(){
        cout<<"Constructor of base class invoked"<<endl;
    }
    void display(){
        cout<<"Base"<<endl;
    }
    virtual void show(){
        cout<<"Show Base"<<endl;
    }
    virtual ~Base(){
        cout<<"Distructor of baase class invoked"<<endl;
    }
};
class Derived : public Base{
      public:
      Derived(){
        cout<<"Constructor of Derived class invoked"<<endl;
    }
    void display(){
        cout<<"Derived"<<endl;
    }
     void show(){
        cout<<"Show Derived"<<endl;
    }
    ~Derived(){
        cout<<"Distructor of Derived class invoked"<<endl;
    }
};
int main(){
    Derived d;
    d.display();
    d.show();
    
    



}