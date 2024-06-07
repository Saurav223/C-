#include <iostream>
using namespace std;
class time
{
    int hour, minutes;
    friend int add(time, time); // This the example of friend function
    friend class calculate;     // This the examplen of friend of class where all function
                            //  are friend of the another  class

public:
    void input(int a, int b)
    {
        hour = a;
        minutes = b;
    }
    void out()
    {
        cout << "Hours" << hour << endl;
        cout << "Minutes=" << minutes << endl;
    }
};
class calculate
{
public:
    time add(time, time); // time is written in rreturn type to return time
    time sub(time, time);
};
time calculate ::add(time t1, time t2)
{
    time t3;
    t3.hour = t1.hour + t2.hour;
    t3.minutes = t1.minutes + t2.minutes;
    if (t3.minutes > 60)
    {
        t3.hour++;
        t3.minutes = 60 - t3.minutes;
    }
    t3.out();
}
time calculate ::sub(time t4, time t5)
{
    time t6;
    if (t4.hour > t5.hour)
    {
        t6.hour = t4.hour - t5.hour;
        t6.minutes = t4.minutes - t5.minutes;
        if (t6.minutes < 0)
        {
            t6.hour--;
            t6.hour = 60 + t6.minutes;
        }
    }
    t6.out();
}
int main()
{
    time ti1, ti2, ti3, ti4;
    calculate cal;
    ti1.input(2, 30);
    ti2.input(1, 54);
    ti1.out();
    ti2.out();
    cal.add(ti1, ti2);
    cal.sub(ti1, ti2);

    return 0;
}