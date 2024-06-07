#include <iostream>
using namespace std;
class employee
{
    int salary;
    float insalary;

public:
    void getsalary(int s);
    void outsalary();

private:
    void increment();
};
void employee ::getsalary(int s)
{
    salary = s;
}
void employee :: increment(){
    insalary = 0.1*salary;
    cout<<"The increment salary after 1 year is:"<<insalary<<endl;
}
void employee::outsalary(){
    increment();        //nesting of member function (private member)
    cout<<"The salary of the employee is"<<salary<<endl;
}
int main()
{
    employee emp;
    emp.getsalary(50000);
    emp.outsalary();
    //emp.increment(); it is an private
    return 0;
}