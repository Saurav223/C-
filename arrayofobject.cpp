#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    void getdata(int x, int y)
    {
        a = x;
        b = y;
    }
    void printdata()
    {
        cout<<a<<"+"<<b<<"i"<<endl;
    }
};
int main(){
    complex c1,c2,c3;  //array of objects
    c1.getdata(1,2);
    c1.printdata();
    c2.getdata(3,4);
    c2.printdata();
    c3.getdata(5,6);
    c3.printdata();
    return 0;
}