#include <iostream>

// Base class
class Base {
public:
     void show() {
        std::cout << "Base::show()" << std::endl;
    }
};

// Derived class with virtual inheritance
class Derived : virtual public Base {
public:
    // Override the show() function
    void show() {
        std::cout << "Derived::show()" << std::endl;
    }
};

// Another derived class with virtual inheritance

int main() {
   Derived obj;
    obj.show();
    obj.Base::show();

    return 0;
}
