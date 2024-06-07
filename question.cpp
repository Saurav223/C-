#include<iostream>
using namespace std;

class Polygon {
protected:
    int height, length;
public:
    Polygon(int a, int b) : height(a), length(b) {}
   virtual void area()=0;
};

class Rectangle : public Polygon {
public:
    Rectangle(int a, int b) : Polygon(a, b) {}
    void area(){
        int area = length * height;
        cout << "The area of the rectangle is: " << area << endl;
    }
};

class Triangle : public Polygon {
public:
    Triangle(int a, int b) : Polygon(a, b) {}
    void area(){
        float area = (length * height) / 2;
        cout << "The area of the triangle is: " << area << endl;
    }
};

int main() {
    Rectangle Rec(23, 45);
    Rec.area();
    Triangle Tri(56, 78);
    Tri.area();
    return 0;
}
