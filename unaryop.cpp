#include <iostream>
using namespace std;
class box
{
    int l, w, h;

public:
    void setdata(int a, int b, int c)
    {
        l = a, w = b, h = c;
    }
    int getvolume()
    {
        return l * w * h;
    }
    box operator-(box &n)
    {
        box t;
        t.l = l - n.l;
        t.w = w - n.w;
        t.h = h - n.h;
        return t;
    }
    box operator--()
    {
        box t;
        t.l = -- l;
        t.w = --w;
        t.h = h--;
        return t; 
    }
};
int main()
{
    box a, b, c, d;
    a.setdata(4, 4, 4);
    b.setdata(2, 2, 2);
    cout << "volume of a is:" << a.getvolume() << endl;
    cout << "volume of b is:" << b.getvolume() << endl;
    c = a - b;
    cout << "volume of c is:" << c.getvolume() << endl;
    d = --c;
    cout << "volume of d is:" << d.getvolume() << endl;
}
