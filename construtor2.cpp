//CONSTRUCOT TYPES
#include <iostream>
#include <math.h>
using namespace std;
class point
{
    int a, b;
    friend void distance(point, point);

public:
    point(int, int);   //parameterized contructor ( which accept the parameter or arguments)
    void print()       // which doesnot take any argument is knowns as default  constructor
    {
        cout << "(" << a << "," << b << ")" << endl;
    }
};
point::point(int x, int y)
{
    a = x;
    b = y;
}
void distance(point x, point y)
{
    float dis, tmp;
    tmp = pow(x.a - y.a, 2) + pow(x.b - y.b, 2);
    dis = pow(tmp, 0.5);
    cout << "The distance between the two points is" << dis << endl;
}
int main()
{
    point a(4, 5);   //implict call of constructor
    a.print();
    point b = point(6, 7);          //explict constructor
    b.print();
    distance(a, b);
    return 0;
}