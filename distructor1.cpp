#include<iostream>
using namespace std;
int count = 0;
class num
{
public:
    num()
    {
        count++;
        std::cout << "Constuctor is called for object" << count << endl;
    }
    ~num()
    {
        std::cout << "Distructor is called for object " << count << endl; //distructor
        count--;             //it is used for distroy the object in dymanic memory allocation
    }
};
int main()
{
    num n1;
    {
        num n2, n3;
        std::cout << "Exit" << endl;
    }                               //num2 and 3 are distruct after the closed curly bracket
    std::cout << "Return to main function" << endl;
    return 0;                                          //object 1 is distruc after the return 0
}