#include <iostream>
#include<string>
using namespace std;
template <class T1 = int, class T2 = float>
class Myclass
{   
    T1 age;
    T2 height;
    public:
    Myclass(T1 x, T2 y) : age(x), height(y){};
    void display()
    {
        cout << age << endl
             << height << endl;
    }
};
int main()
{
    Myclass<> p(10,23.34);
    p.display();
    Myclass<int,string> P(10,"6meter");
    P.display();
    return 0;
}