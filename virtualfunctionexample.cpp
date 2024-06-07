#include <iostream>
#include <cstring>
using namespace std;
class School
{
public:
    string name;
    int age;
    School(string n, int a)
    {
        name = n;
        age = a;
    }
    virtual void display(){};
};
class Student : public School
{
public:
    int roll;
    float fee;
    Student(string s, int a, int r, float f) : School(s, a)
    {
        roll = r;
        fee = f;
    }
    void display()
    {
        cout << name << age << roll << fee << endl;
    }
};
class Teacher : public School
{
public:
    int ID;
    float salary;
    Teacher(string n, int a, int i, float s) : School(n, a)
    {
        ID = i;
        salary = s;
    }
    void display()
    {
        cout << name << age << ID << salary << endl;
    }
};
int main()
{
    School *ptr[2];
    Student s1("Saurav", 18, 40, 3880.45);
    Teacher t1("Ram", 45, 23, 60000);
    ptr[1] = &s1;
    ptr[2] = &t1;
    ptr[1]->display();
    ptr[2]->display();
    return 0;
}/*
1.They cannot be static
2.They can excess by obj pointer
3.Virtual function can be friend of anotherclass

*/