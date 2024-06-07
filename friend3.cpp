#include <iostream>
using namespace std;
class c2;             //forward decleration of class
class c1
{
    int value;

public:
    friend void exchange(c1 &, c2 &);    // compier see the c2 so we need c2 inforward
    void set(int a)                     //friend deleceration of rreference of class
    {
        value = a;
    }
};
class c2
{
    int num;
    friend void exchange(c1 &, c2 &);   //passing by refernce of class

public:
    void set(int a)
    {
        num = a;
    }
};
void exchange(c1 &x, c2 &y)
{
    int tmp = x.value;
    x.value = y.num;
    y.num = tmp;
}
int main()
{
    c1 co1;
    c2 c02;
    co1.set(5);
    c02.set(8);
    exchange(co1, c02);
}