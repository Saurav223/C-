#include <iostream>
#include <string.h>
using namespace std;
class student
{
    int roll, marks[3];
    char name[20];

public:
    friend void total(student);
    void setdetails(int, int[3], char[]);
    void printdata();
};
void student ::setdetails(int r, int m[3], char n[])
{
    strncpy(name, n, 20);
    roll = r;
    for (int i = 0; i < 3; i++)
    {
        marks[i] = m[i];
    }
}
void student ::printdata()
{
    cout << "NAME=" << name << endl;
    cout << "ROLL=" << roll << endl;
    for (int i = 0; i < 3; i++)
    {

        cout << "Marks=" << marks[i] << endl;
    }
}
void total(student stu)
{
    int total = 0;

    for (int i = 0; i < 3; i++)
    {
        total = total + stu.marks[i];
    }
    cout << "Total Marks is=" << total << endl;
}

int main()
{
    student stu;
    int mark[3] = {67, 78, 45};
    stu.setdetails(40, mark, "saurav");
    stu.printdata();
    total(stu); // friend function
    // stud.total(); is incorrect
    return 0;
}
