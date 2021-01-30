//Finding Difference Between Two Times C++//

#include <iostream>

using namespace std;

class time
{
    int h, m, s;

public:
    time()
    {
    }
    time(char a[])
    {
        h = (a[0] - 48) * 10 + (a[1] - 48);
        m = (a[3] - 48) * 10 + (a[4] - 48);
        s = (a[6] - 48) * 10 + (a[7] - 48);
    }
    time(time &x)
    {
        h = x.h;
        m = x.m;
        s = x.s;
    }
    time operator-(time t)
    {
        time p;
        if (t.s > s)
        {
            s = s + 60;
            m = m - 1;
        }
        if (t.m > m)
        {
            m = m + 60;
            h = h - 1;
        }
        if (t.h > h)
        {
            h = h + 24;
        }
        p.h = h - t.h;
        p.m = m - t.m;
        p.s = s - t.s;
        return (p);
    }
    void display()
    {
        cout << "\nCalculated Time Is: ";
        if (h < 10)
            cout << "0";
        cout << h << ":";
        if (m < 10)
            cout << "0";
        cout << m << ":";
        if (s < 10)
            cout << "0";
        cout << s;
    }
    ~time()
    {
    }
};
void main()
{
    time t1("19:00:00"), t2("03:30:00"), t3;
    t3 = t1 - t2;
    t3.display();
}
